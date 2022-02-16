#include "window.h"

// TODO: rename to main() after things have been moved around a bit
int main(int argc, char *argv[])
{
  bool isRunning = true;
  bool fmvPlayed = true;
  //InitSystems();
  MainWindow window;
  window.Init();
  window.Update();

  while (isRunning)
  {
    // I wOnDer hOw lOnG itS bEeN. Since my brother and i... Began to see things. Other people can't see. *Fatal Frame noises*
    //fmvPlayed = playFmv(0); // This says it's of type long?
    while (fmvPlayed)
    {
      // TODO: call all main and init functions in here
      // GameMain();
      // DrawGS(); // Would be called sceGsSyncPath();
      // DrawAll2DMes_P2();
      // FlushModels(1);
      // ClearTextureCache();
      // SeCtrlMain();
      //if (SoftReset())
      //{
      // We back in bios?
      //}
    }
  }

  return 0;
}