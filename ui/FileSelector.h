#pragma once
#include <filesystem>
#include <string>
#include <vector>

namespace fs = std::filesystem;

struct SelectFile {
  std::string fileExtension;
  std::string fileName;
};

struct File {
  fs::path path;
  fs::path fileName;
};

class FileSelector
{
 private:
  std::vector<SelectFile> filesToSelect;
  bool isRenderingSelectorWindow = false;
  void RenderFileSelector(SelectFile fileToSelect);
  void CloseFileSelector();

 public:
  std::vector<File> files;
  FileSelector(std::vector<SelectFile> selectFile);
  void Update();
};
