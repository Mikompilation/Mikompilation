#pragma once

class TopMenuBar
{
 public:
  bool shouldDisplay = true;
  bool shouldDisplayFileSelector = false;
  bool shouldDisplayMemoryViewer = false;
  void Update();
};
