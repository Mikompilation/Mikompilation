#include "FilePicker.h"
#include "ImGuiFileDialog.h"

FilePicker::FilePicker(std::vector<SelectFile> selectFile)
{
  this->filesToSelect = selectFile;
}

void FilePicker::Update()
{
  ImGui::Begin("File Picker");

  for (auto fileToSelect : this->filesToSelect)
  {
    std::string buttonText = "Choose " + fileToSelect.fileName + " File";

    if (ImGui::Button(buttonText.c_str()))
    {
      this->isRenderingSelectorWindow = true;
    }

    if (this->isRenderingSelectorWindow)
    {
      this->RenderFileSelector(fileToSelect);
    }
  }

  ImGui::End();
}

void FilePicker::RenderFileSelector(SelectFile fileToSelect)
{
  std::string windowKey = "Choose" + fileToSelect.fileName;
  ImGuiFileDialog::Instance()->OpenDialog(windowKey, "Choose File " + fileToSelect.fileName, fileToSelect.fileExtension.c_str(), ".");

  if (!ImGuiFileDialog::Instance()->Display(windowKey))
  {
    return;
  }

  this->CloseFileSelector();
}

void FilePicker::CloseFileSelector()
{
  if (ImGuiFileDialog::Instance()->IsOk())
  {
    this->files.push_back(File{ImGuiFileDialog::Instance()->GetCurrentPath(), ImGuiFileDialog::Instance()->GetCurrentFileName()});
  }

  ImGuiFileDialog::Instance()->Close();
  this->isRenderingSelectorWindow = false;
}
