#include "extractor.h"
#include "deless.h"
#include <fstream>

int NUM_FILES;
int FILE_TABLE_ADDRESS;
std::string REGION;
bool EXTRACT_FILE_NAME;

char *ReadFullFile(const char *filename)
{
  char *buffer;
  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(0, std::ios::end);
  size_t length = infile.tellg();
  infile.seekg(0, std::ios::beg);

  buffer = new char[length];

  infile.read(buffer, length);

  infile.close();

  return buffer;
}

char *ReadRangeFile(const char *filename, int startAddress, int readLength)
{
  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(startAddress, std::ios::beg);

  char *buffer = new char[readLength];

  infile.read(buffer, readLength);

  infile.close();

  return buffer;
}

void DecompressFile(std::string file)
{
  std::string initialFile = file;
  std::string targetFile = file + ".LED";

  Decompress(initialFile.c_str(), targetFile.c_str());

  std::filesystem::remove(initialFile);

  std::filesystem::rename(targetFile, initialFile);
}

void ExtractZero2GameFiles(const char *imgBdFile, const char *elf,
                           const std::filesystem::path outputFolder)
{
  if (!std::filesystem::exists(outputFolder))
  {
    std::filesystem::create_directory(outputFolder);
  }

  std::ifstream fileDataBank(imgBdFile, std::ios::binary);

  Zero2File *fileHd = (Zero2File *) ReadRangeFile(
      elf, FILE_TABLE_ADDRESS, NUM_FILES * sizeof(Zero2File));

  char fileBuffer[PS2_SECTOR_SIZE];

  for (int i = 0; i < NUM_FILES; i++)
  {
    std::string outputFile = GetFilenameWithPath(i, outputFolder);

    printf("Extracting %d/%d %s\n", i, NUM_FILES - 1, outputFile.c_str());

    FileType fileStatus = (FileType) (fileHd[i].info & 0b00000011);

    // Some files index are bugged and have a type File but with a size of 0 bytes
    if (fileStatus == NoFile
        || (fileStatus == FileNotCompressed && fileHd[i].size == 0)
        || (fileStatus == FileCompressed && fileHd[i].sizeCompressed == 0))
    {
      printf("Ignored\n");
      continue;
    }

    unsigned long startAddress = (fileHd[i].info >> 2) * PS2_SECTOR_SIZE;

    fileDataBank.seekg(startAddress, std::ios::beg);

    int size = fileStatus == FileNotCompressed ? fileHd[i].size
                                               : fileHd[i].sizeCompressed;

    FILE *pFile = fopen(outputFile.c_str(), "wb+");

    for (int k = 0; k <= size / PS2_SECTOR_SIZE; k++)
    {
      fileDataBank.read(fileBuffer, PS2_SECTOR_SIZE);
      fwrite(&fileBuffer, sizeof(char), PS2_SECTOR_SIZE, pFile);
    }

    fclose(pFile);

    if (fileStatus == FileCompressed)
    {
      DecompressFile(outputFile);
    }
  }

  fileDataBank.close();
  delete[] fileHd;
}

std::string GetFilenameWithPath(int fileId, std::filesystem::path outputFolder)
{
  if (!EXTRACT_FILE_NAME)
  {
    return outputFolder.string() + std::to_string(fileId) + ".bin";
  }

  auto fileInfo =
      REGION == REGION_EU ? filename_dat[fileId] : filename_dat_us[fileId];

  auto filename = fileInfo.name;

  auto directory = filename_path[fileInfo.directory];

  auto fullDirectory = outputFolder.string() + "/" + directory;

  if (!std::filesystem::exists(fullDirectory))
  {
    std::filesystem::create_directories(fullDirectory);
  }

  return fullDirectory + filename;
}

void ExtractGameFilesFromBank(const char *imgHdFile, const char *imgBdFile,
                              std::filesystem::path outputFolder)
{
  ZeroFile *fileHd = (ZeroFile *) ReadFullFile(imgHdFile);

  std::ifstream fileDataBank(imgBdFile, std::ios::binary);

  char fileBuffer[PS2_SECTOR_SIZE];

  for (int i = 0; i < NUM_FILES; i++)
  {
    unsigned long startAddress = fileHd[i].address * PS2_SECTOR_SIZE;

    fileDataBank.seekg(startAddress, std::ios::beg);

    if (fileHd[i].size == 0)
    {
      continue;
    }

    std::string outputFile = GetFilenameWithPath(i, outputFolder);

    FILE *pFile = fopen(outputFile.c_str(), "wb+");

    for (int k = 0; k <= fileHd[i].size / PS2_SECTOR_SIZE; k++)
    {
      fileDataBank.read(fileBuffer, PS2_SECTOR_SIZE);
      fwrite(&fileBuffer, sizeof(char), PS2_SECTOR_SIZE, pFile);
    }

    fclose(pFile);
  }

  fileDataBank.close();
  delete[] fileHd;
}

void Extractor(argparse::ArgumentParser args)
{
  REGION = args.get("region");
  EXTRACT_FILE_NAME = args["--name"] == true;

  if (REGION == REGION_US)
  {
    NUM_FILES = NUM_FILES_US_JP_ZERO2;
    FILE_TABLE_ADDRESS = FILE_TABLE_ADDRESS_US_ZERO2;
  }
  else if (REGION == REGION_JP)
  {
    NUM_FILES = NUM_FILES_US_JP_ZERO2;
    FILE_TABLE_ADDRESS = FILE_TABLE_ADDRESS_JP_ZERO2;
  }
  else
  {
    NUM_FILES = NUM_FILES_EU_ZERO2;
    FILE_TABLE_ADDRESS = FILE_TABLE_ADDRESS_EU_ZERO2;
  }

  ExtractZero2GameFiles(args.get("bin").c_str(), args.get("elf").c_str(),
                        args.get("output").c_str());
}

int main(int argc, char *argv[])
{
  argparse::ArgumentParser program("Mikompilation Extractor");

  program.add_argument("bin")
      .help("Absolute path with file to the game's IMG_BD.BIN")
      .required();

  program.add_argument("elf")
      .help("Absolute path with file to the game's elf (US: SLUS_207.66)")
      .required();

  program.add_argument("-o", "--output")
      .help("Output folder where all files will be extracted")
      .default_value(std::filesystem::current_path().string());

  program.add_argument("-n", "--name")
      .help("Will extract the files' name and directory")
      .default_value(false)
      .implicit_value(true);

  program.add_argument("-r", "--region")
      .default_value("us")
      .action([](const std::string &value) {
        static const std::vector<std::string> choices = {
            REGION_US, REGION_EU, REGION_JP
        };

        if (std::find(choices.begin(), choices.end(), value) != choices.end())
        {
          return value;
        }

        return std::string {REGION_US};
      });

  try
  {
    program.parse_args(argc, argv);
  }
  catch (const std::runtime_error &err)
  {
    std::cerr << err.what() << std::endl;
    std::cerr << program;
    std::exit(1);
  }

  Extractor(program);

  return 0;
}