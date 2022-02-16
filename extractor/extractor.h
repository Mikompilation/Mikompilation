#include <string>
#include <filesystem>

const int PS2_SECTOR_SIZE = 0x800;
const int NUM_FILES_US = 0x769;

struct ZeroFile {
  unsigned int address;
  unsigned int size;
};

char *ReadFullFile(const char *filename);
void ExtractGameFilesFromBank(const char *imgHdFile, const char *imgBdFile, std::filesystem::path outputFolder);