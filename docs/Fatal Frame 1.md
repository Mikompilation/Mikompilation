### Pointers:

- Fatal Frame is programmed in C
- When a variable ends with _num, it is most likely a size for an array 
- All chXXX_Y_ are an array of 15, 31 
- When a variable contains _WRK, it is most likely a struct 
- When a variable contains _CTRL, it is most likely an enum for control 
- When a variable contains cmp, it is most likely indicating a function for compressed da 
- sce is Sony computer entertainment. All of those functions are referring to the ps2 sdk
- All Rooms have global ids or file numbers but local instructions
- Zero Hour in Fatal Frame 1 is a special mode the game’s in that has it’s own collision detection and battle functions.
- 0x3420bc is the active camera in memory in Fatal Frame 2

### Information about enemies
- Enemies have several listed types that can be seen using the debug menu ene type display
- Most fightable enemies will appear as `JIBAKU ENE` but there is so far discovered another special type `FYYU ENE`
- Ghosts that randomly appear in the scene as "Capturable ghost events" apper as `JIDOU ENE`
- These types appear to have an int index to indicate the amount of that type you've encountered in the current game. This does get saved to the card.
- `JIBAKU` in english could stand for, ghost bount to a specific physical location (usu. where death occured)
- Toshu stands for house master and is referring to the Himuro house master.

### Information about GameMode and Ingame_Wrk
- Field 0: Apears to be a bit mask that has at least 16 bytes. It seems to be one of the main mechanisims for setting game modes and has several interesting effects depending on what's written to it
- Field 0 does not have an effect on the title screen aside from value 1536 playing the first cutscene
- 1536: inGame mode. Writing it from the title screen seems to play the opening cutscene then just, goes back to the title screen as if it was trying to start a game then failed
- 1537: Debug menu Battle mode. If in game. Whatever room you're in will activate in battle mode but by itself will not spawn a ghost. This means all doors are sealed and you're effectively softlocked until you exit with the menu which takes you back to battle mode's main screen
- 0: will start night 1 if ingame first. From the title screen it appears to do nothing
- 1: Will start battle mode fist mission and spwan you in the room with koji
- Field 1: Appears to also be a bitmask? Or some kind of uint / int value. Writing 1 will set the game to first cutscene / zero hour but only if you're already in a game. It has no effect on the Title screen
- Field 7 is not active during zero hour. It seems to denote that this is a loaded save file? `010000000000` will be set if a game is loaded

### Structs:

- plyer_wrk
- stage_wrk
- ingame_wrk
- outgame_wrk
- cam_custom_wrk
- ani_mdl
- ani_mdl_wrk
- bgst_wrk
- hole_wrk
- room_wrk
- fall_wrk
- btl_wrk
- gus_wrk
- ene_wrk
- ene_display
- ene_child_ctrl
- map_wrk
- ap_wrk
- fly_wrk
- dbg_wrk
- sys_wrk

### Appear Functions:

- DeadGhostAppearMain
- FloatGhostAppearMain
- GuardGhostAppearMain
- RareGhostMain
- PuzzleGhost

### Zero Hour: 

/// Mafuyu game logic

ZeroHourAppearMain

/// Function called in Battle after finding Mr. Takamine’s note book

ZeroGhostBattleJudge

### Finder:

/// The function that activates finder mode

FinderInSet

/// The function that ends finder mode

FinderOutSet

 /// What appears to be the actual viewfinder mode. It seems to loop and handles all logic in viewfinder mode.

FinderModeCameraControl

/// Could be the actual controls as well

PlyrFinderCtrl

/// Could refer to active camera position 

GetCamI2DPos

### Player data

/// Appears to refer to a cartesian vector “Undefined8” in ghidra terms could be referring to that. Plyr_wrk appears in many functions and appears to be some kind of byte array storing data about Miku in the game world.

PlyrPosSet

 /// Refers to rotate limit check function. Refers to GetDoorMtnDat which im assuming is supposed to check if theres a door and adjust Mikus position accordingly

PlyrPosAdj

/// Could be a corrective function?

PlyrPosReSet

/// Im assuming is checking if battle.

PlyrBattleChk

/// Related to player control?

PlyrChargeCtrl

/// Should be self descriptive. Set's player door related positioning

SetDoorOpenPlyrPos

SetPlyrPosAfterDOpen

/// Position of flashlight beam?

GetPlyrAcsLightPos

/// Posotion of feet model

GetPlyrFootPos

 /// Checks player position relative to the floor?

 PlyrHeightCtrl

 /// Active room file.

GetPlayerRoom

/// Runs and processes mode checks. Has what Ghidras identified as a switch case for each mode“PlyrNormalCtrl, FinderCtrl, DmgCtrl”And other logic 

PlyrCtrlMain

/// Appears to copy values into an array and preform vector equations on that to gauge Mikus distance from an object. I could use it to detect her distance from the enemy. Note that this function is not active during Zero Hour. It seems to be a constantly looping function to detect if Miku specifically will collide with objects. Why Mafuyu doesnt get this is a mystery

GetDistPlyr

### Generic position

/// To check if the passed rotation isnt out of bounds. Ghidra is strangely saying this just takes a float parameter but Id assume we would have a vector for Quaternion equations.

RotLimitChk

/// Potentially an equation that takes a last position and factors that into the current one. Can I set any value or will this break? Most of the code appears to be Ghidra funk though.

sceVu0AddVector

### Enemy functions

/// Takes an array of Fly_Wrk struct and Ene_wrk structs. Extracts one from Fly_wrk

EneCtrlMain

/// refers to the Himuro Family Master. More specifically his sword he attacks with. Im assuming its to calculate Sword Hit Box if (uVar2 == 0x25) checks if he's active

GetToushuKatanaPos

/// “InWall or Object”?

FloatGhostPosType

/// "X, Y, Z”

FloatGhostSetPos

/// Set’s if in wall or object though I’m assuming.

FloatGhostAppearPosSet

/// Updates register a0 with the ghost’s rotation. This is never referred to in Miku’s functions

SetRot360
