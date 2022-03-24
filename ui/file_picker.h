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

class FilePicker
{
 private:
  std::vector<SelectFile> filesToSelect;
  bool isRenderingSelectorWindow = false;
  void RenderFileSelector(SelectFile fileToSelect);
  void CloseFileSelector();

 public:
  FilePicker(std::vector<SelectFile> selectFile);
  void Render();
  std::vector<File> files;
};
