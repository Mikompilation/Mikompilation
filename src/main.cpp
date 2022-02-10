#include "window.h"

int main(int argc, char *argv[])
{
  MainWindow window;
  window.Init();
  window.Update();
  return 0;
}

// ToDo rename to main() after things have been moved around abit
int Gmain()
{
  bool isRunning;
  bool fmvPlayed;
	//InitSystems();

  while (!isRunning)
  {
	  // I wOnDer hOw lOnG itS bEeN. Since my brother and i... Began to see things. Other people can't see. *Fatal Frame noises*
    //fmvPlayed = playFmv(0);
      while (fmvPlayed)
      {
        // ToDo call all main and init functions in here
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