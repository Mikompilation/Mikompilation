// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/CBuff.c
// *****************************************************************************

/* sdata 3eeac0 */ int CBuffNum;
/* sdata 3eeac4 */ int CBuffMaxLen;
/* sdata 3eeac8 */ int CBuffMaxNum;
/* sbss 3f4a80 */ char *CBuffStr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/CDebugEdit.cpp
// *****************************************************************************

/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 369d88 */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data 369da8 */ __vtbl_ptr_type CEditRoot virtual table[12];
/* data 369e08 */ __vtbl_ptr_type ctl::custom_allocator<IEditObject *> virtual table[4];
/* data 369e28 */ __vtbl_ptr_type IEditObject virtual table[12];
/* sbss 3f5108 */ unsigned char IEditObject type_info node[8];
/* sbss 3f5100 */ unsigned char ctl::custom_allocator<IEditObject *> type_info node[8];
/* bss 4cda80 */ unsigned char CEditRoot type_info node[12];
/* sbss 3f5110 */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
/* data 3f4a00 */ bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *> >::_S_instanceless;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/ChrSort.c
// *****************************************************************************

/* sdata 3eeb18 */ int ChrSortFlg;
/* sbss 3f4a88 */ void *ChrSortHdl[2];
/* bss 3f5648 */ CHR_SORT_WORK ChrSortEnemList[32];
/* bss 3f57c8 */ CHR_SORT_FLY_WORK ChrSortFlyList[32];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/DbFurnPre.c
// *****************************************************************************

/* sdata 3eeb60 */ int DbFurnPreNameID;
/* sdata 3eeb64 */ int DbFurnPreMdoelMax;
/* sdata 3eeb68 */ int DbFurnPreBuffID;
/* sdata 3eeb6c */ int DbFurnPreObjID;
/* sdata 3eeb70 */ int DbFurnPreObjMax;
/* sdata 3eeb74 */ float *DbFurnPrePos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/FileSt.c
// *****************************************************************************

/* data 2c3d00 */ int FileStLabelList[2][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/FurnCtl.c
// *****************************************************************************

/* sdata 3eebe0 */ int FurnCtlFindBuffID;
/* sdata 3eebe4 */ int FurnCtlFindListID;
/* bss 3f5948 */ fixed_array<FURN_CTL,48> FurnCtlList;
/* sbss 3f5118 */ unsigned char FURN_CTL type_info node[8];
/* bss 3f6488 */ char *FurnCtlWorkList[2][2];
/* bss 3f6498 */ FURN_WORK_HEAD FurnWorkList[32];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/FurnLoad.c
// *****************************************************************************

/* data 2c3d10 */ FURN_LOAD_TBL FurnTbl[16];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/IngameScene.c
// *****************************************************************************

/* data 2c3e10 */ INGAME_SCENE_CTRL ingame_scene;
/* sdata 3eec40 */ u_int *pSceneMovieEffect;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapAnim.c
// *****************************************************************************

/* bss 3f65a0 */ fixed_array<MAP_ANIM_CTL,32> MapAnimCtl;
/* bss 3f75a0 */ fixed_array<ANI_CTRL,2> MapAnimMotCtl;
/* bss 3f7a20 */ fixed_array<MAPMANIM_MATRIX,255> MapManimMatrxList;
/* bss 3fc9d0 */ fixed_array<MAPMANIM_HEAD,64> MapManimList;
/* sbss 3f5128 */ unsigned char MAP_ANIM_CTL type_info node[8];
/* sbss 3f5130 */ unsigned char ANI_CTRL type_info node[8];
/* sbss 3f5138 */ unsigned char MAPMANIM_MATRIX type_info node[8];
/* sbss 3f5120 */ unsigned char MAPMANIM_HEAD type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapDoor.c
// *****************************************************************************

/* data 2c3e20 */ MLOAD_DOOR_DAT MapLoadDoorDatList[208];
/* sdata 3eecc8 */ int MapDoorCtlID;
/* sdata 3eeccc */ u_int *MapDoorAnimPtr;
/* sdata 3eecd0 */ int MapDoorAnimID;
/* sdata 3eecd4 */ int MapDoorAnimType;
/* sdata 3eecd8 */ int MapDoorRoomNo;
/* sdata 3eecdc */ int door_bank_id;
/* sdata 3eece0 */ int MapDoorSp;
/* sdata 3eece4 */ int MapDoorReqID;
/* sdata 3eece8 */ int MapDoorAnimEnd;
/* sdata 3eecec */ int iBuffSw;
/* bss 3fced0 */ fixed_array<MAPDOOR_HEAD,16> MapDoorList;
/* bss 3fd010 */ GRA3DLIGHTDATA MapDoorLight;
/* sbss 3f5148 */ unsigned char MAPDOOR_HEAD type_info node[8];
/* bss 4cda90 */ unsigned char MDAT_DOOR * type_info node[12];
/* sbss 3f5140 */ unsigned char MDAT_DOOR type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapDraw.c
// *****************************************************************************

/* sdata 3eed50 */ GRA3DLIGHTDATA *MapDrawRoomLihgtSp[2];
/* sdata 3eed58 */ int s_bEnableLightFlashlightOnly;
/* bss 3fe3b0 */ GRA3DLIGHTDATA MapDrawPS2CoordLight[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapFog.c
// *****************************************************************************

/* data 2c8c88 */ MAP_FOG_HEAD MapFogDat[3];
/* sdata 3eeda0 */ int MapFogFrame;
/* sdata 3eeda4 */ int MapFogNowFrame;
/* sdata 3eeda8 */ int MapFogFlg;
/* sdata 3eedac */ float *MapFogRect[4];
/* sdata 3eedb0 */ int MapFogLastRoom;
/* bss 400af0 */ float MapFogBfoCam[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapHit.c
// *****************************************************************************

/* sdata 3eedf8 */ float MapHitDoorZ;
/* sdata 3eedfc */ float MapHitColLen;
/* data 2c8ce0 */ float MapHitPoint[4][4];
/* bss 400b00 */ fixed_array<MAPHIT_HEAD,32> MapHitRecList;
/* sbss 3f5150 */ unsigned char MAPHIT_HEAD type_info node[8];
/* bss 400d80 */ int (*MapHitCallBack[3])(/* parameters unknown */);
/* bss 400d90 */ float MapHitDoorVec[2][4][4];
/* sbss 3f4a90 */ int MapHitDoorID;
/* bss 400e10 */ float MapHitColPoint[2][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapLBuff.c
// *****************************************************************************

/* bss 400e30 */ MAP_LBUFF_ST MapLBuffList[66][16];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapLight.c
// *****************************************************************************

/* data 2c8d20 */ MAPMEI_FRAME MapMeiList[25];
/* sdata 3eee40 */ float MapLightPower;
/* sdata 3eee48 */ float MapLightIntens[2];
/* sdata 3eee50 */ float MapLightDiff[2];
/* sdata 3eee5c */ MAPMEI_HEAD *MapMeiNowHeadPtr;
/* bss 403fb0 */ GRA3DLIGHTDATA MapMeiWork[2];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* bss 4066f0 */ MAPMEI_HEAD MapMeiHead[4];
/* bss 406730 */ MAPMEI_LIGHTONE MapMeiLightOneWork[39];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapLoad.c
// *****************************************************************************

/* sdata 3eeeb0 */ int MapLoadDrawID;
/* sdata 3eeeb4 */ int MapLoadMyPosLabel;
/* sdata 3eeeb8 */ int MapLoadStat;
/* sdata 3eeebc */ void *MapLoadDoorBuff;
/* sdata 3eeec0 */ char *MapLoadFreeArea[2];
/* bss 407ab0 */ fixed_array<MLOAD_HEAD,2> MapLoadBuff;
/* sbss 3f5168 */ unsigned char MLOAD_HEAD type_info node[8];
/* bss 40a290 */ int MapLoadFileIDList[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapObj.c
// *****************************************************************************

/* sdata 3eef20 */ int MapObjSimiEnd;
/* sdata 3eef24 */ int MapObjSimiTime;
/* data 2c8f18 */ MAPOBJ_EFF MapObjEffLabel[21];
/* sdata 3eef28 */ int MapObjFlg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapObjReg.c
// *****************************************************************************

/* sdata 3eef78 */ int MapObjSceneLoadFlg;
/* bss 40b6a8 */ fixed_array<MAPOBJ_HEAD,2> MapObjList;
/* sbss 3f5170 */ unsigned char MAPOBJ_HEAD type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapPut.c
// *****************************************************************************

/* bss 40f860 */ fixed_array<MAPPUT_OBJ,320> MapPutList;
/* sbss 3f5178 */ unsigned char MAPPUT_OBJ type_info node[8];
/* sbss 3f4a94 */ MAPPUT_OBJ *MapPutSt;
/* sbss 3f4a98 */ MAPPUT_OBJ *MapPutNowDraw;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapSave.c
// *****************************************************************************

/* data 2c9078 */ MAPSAVE_HEAD MapSaveList[673];
/* bss 41ac60 */ MAPSAVE_JMP_TBL MapSaveJmp[673];
/* sbss 3f4a9c */ int MapSaveJmpNum;
/* bss 41c168 */ MAPSAVE_HEAD MapSaveFirstWork[673];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapSky.c
// *****************************************************************************

/* data 2cba90 */ MAP_SKY_DB MapSkyDatList[18];
/* sdata 3ef048 */ MAP_SKY_DB *MapSkyDp;
/* sdata 3ef04c */ u_int MapSkyTopAddr;
/* sdata 3ef050 */ u_long MapSkyTex0;
/* sdata 3ef058 */ float MapSkyX;
/* sdata 3ef05c */ float MapSkyRotY;
/* sdata 3ef060 */ int MapSkyFlg;
/* sdata 3ef064 */ int MapSkyAlpha;
/* sdata 3ef068 */ int MapSkyFrame;
/* bss 420c90 */ fixed_array<unsigned int,12> MapSkyDatAddr;
/* bss 420cc0 */ float MapSkyPers[4][4];
/* rdata 39f4b0 */ int s_iv1111[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapSp.c
// *****************************************************************************

/* data 2cc610 */ MAPSP_KAZ_DB MapSpDbDat;
/* data 2cc628 */ DEBUG_MENU dbg_kaza_main;
/* sdata 3ef0d0 */ int MapSpMoviFlg;
/* sdata 3ef0d4 */ void *MapSpMoviHdl;
/* sdata 3ef0d8 */ float MapSpMoviRot;
/* sdata 3ef0dc */ int MapSpMoveFlg;
/* sdata 3ef0e0 */ MDAT_OBJ *MapSpKageObjPtr;
/* sdata 3ef0e4 */ int MapSpKageBuffID;
/* sdata 3ef0e8 */ MAPOBJ_DAT *MapSpFusumaPtr;
/* sdata 3ef0ec */ int MapSpFusumaBuffID;
/* bss 420d00 */ fixed_array<MAPSP_KAZ_HEAD,64> MapSpKazList;
/* bss 421900 */ fixed_array<MAPSP_KAZ_SPEED,5> MapSpKazSpeed;
/* sbss 3f5180 */ unsigned char MAPSP_KAZ_HEAD type_info node[8];
/* sbss 3f5188 */ unsigned char MAPSP_KAZ_SPEED type_info node[8];
/* bss 421968 */ int (*MapSpFuncList[3])(/* parameters unknown */);
/* bss 421980 */ float MapSpMoviPos[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MhCtl.c
// *****************************************************************************

/* data 2cc828 */ MH_CTL_DB_FLG mhdb;
/* data 2cc838 */ DEBUG_MENU dbg_room_main;
/* sdata 3ef150 */ int MhCtlLoadFlg;
/* sdata 3ef154 */ int MhCtlRegBuffID;
/* sdata 3ef158 */ int s_bDrewShadow;
/* sbss 3f4aa0 */ int mh_ctl_disp_lock_cnt;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/RegDat.c
// *****************************************************************************

/* sdata 3ef188 */ int RegDatNoRegNum;
/* sdata 3ef18c */ int RegDatHitNum;
/* bss 421990 */ fixed_array<RD_REG_HEAD,8> RegDatBuff;
/* bss 421df0 */ fixed_array<int,8> RegDatHitList;
/* bss 421e10 */ fixed_array<int,8> RegDatNoRegList;
/* sbss 3f5198 */ unsigned char RD_REG_HEAD type_info node[8];
/* sbss 3f5190 */ unsigned char RD_REG_ST_DAT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/SpriteCmn.c
// *****************************************************************************

/* sdata 3ef1d8 */ SPRT_DAT *SpCmnCtlList;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/accessory.c
// *****************************************************************************

/* data 2cca40 */ fixed_array<fixed_array<SPRING, 20>,9> rope_spring;
/* data 2ccfe0 */ fixed_array<fixed_array<C_PARTICLE, 20>,10> rope_particle;
/* bss 421e30 */ fixed_array<fixed_array<C_ACS_CTRL, 15>,2> c_acs_ctrl;
/* bss 422010 */ fixed_array<ENE_COLLISION,13> ene_c;
/* sbss 3f51b8 */ unsigned char C_PARTICLE type_info node[8];
/* bss 4cdab0 */ unsigned char fixed_array<C_PARTICLE, 20> type_info node[12];
/* sbss 3f51c0 */ unsigned char SPRING type_info node[8];
/* bss 4cdaa0 */ unsigned char fixed_array<SPRING, 20> type_info node[12];
/* sbss 3f51a8 */ unsigned char float [3][3] type_info node[8];
/* sbss 3f51d0 */ unsigned char ENE_COLLISION type_info node[8];
/* sbss 3f51b0 */ unsigned char C_ACS_CTRL type_info node[8];
/* bss 4cdac0 */ unsigned char fixed_array<C_ACS_CTRL, 15> type_info node[12];
/* sbss 3f51a0 */ unsigned char COLLISION_DAT type_info node[8];
/* sbss 3f51e0 */ unsigned char TUBE type_info node[8];
/* sbss 3f51d8 */ unsigned char fixed_array_base<C_PARTICLE, 20, C_PARTICLE [19]> type_info node[8];
/* sbss 3f51c8 */ unsigned char fixed_array_base<SPRING, 20, SPRING [19]> type_info node[8];
/* sbss 3f51e8 */ unsigned char fixed_array_base<C_ACS_CTRL, 15, C_ACS_CTRL [14]> type_info node[8];
/* bss 422078 */ ENE_COLLISION rope_c[13];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/acs_dat.c
// *****************************************************************************

/* data 2d1ae0 */ SPHERE sphere_R35;
/* data 2d1b00 */ SPHERE sphere_R50;
/* data 2d1b20 */ SPHERE sphere_R70;
/* data 2d1b40 */ SPHERE sphere_R100;
/* data 2d1b60 */ SPHERE sphere_R150;
/* data 2d1b80 */ SPHERE sphere_R200;
/* data 2d1ba0 */ TUBE tube_R150_H200;
/* data 2d1bd0 */ TUBE tube_R90_H200;
/* data 2d1c00 */ SPHERE sphere_mio;
/* data 2d1c20 */ SPHERE sphere_hako;
/* data 2d1c40 */ TUBE tube_momol_mio;
/* data 2d1c70 */ TUBE tube_momor_mio;
/* data 2d1ca0 */ SPHERE sphere_face;
/* data 2d1cc0 */ SPHERE sphere_rakka;
/* data 2d1ce0 */ SPHERE sphere_kubiore;
/* data 2d1d00 */ TUBE tube_waningyou_head;
/* data 2d1d30 */ TUBE tube_waningyou;
/* data 2d1d60 */ TUBE tube_up_leg_l;
/* data 2d1d90 */ TUBE tube_low_leg_l;
/* data 2d1dc0 */ TUBE tube_up_leg_r;
/* data 2d1df0 */ TUBE tube_low_leg_r;
/* data 2d1e20 */ TUBE tube_momol;
/* data 2d1e50 */ TUBE tube_momor;
/* data 2d1e80 */ TUBE tube_momo_sae;
/* data 2d1eb0 */ CPLANE plane_floor;
/* data 2d1ed0 */ CPLANE plane_ituki;
/* data 2d1ef0 */ WMIM mimacs_hair_dat0;
/* data 2d1f20 */ WMIM_DAT ch000_wmim_tbl[2];
/* data 2d1f30 */ WMIM mimacs_hair_dat1;
/* data 2d1f60 */ WMIM_DAT ch001_wmim_tbl[2];
/* data 2d1f70 */ WMIM mimacs_hair_dat3;
/* data 2d1fa0 */ WMIM_DAT ch003_wmim_tbl[2];
/* data 2d1fb0 */ WMIM mimacs_hair_dat17;
/* data 2d1fe0 */ WMIM_DAT ch017_wmim_tbl[2];
/* data 2d1ff0 */ WMIM mimacs_hair_dat30;
/* data 2d2020 */ WMIM_DAT ch030_wmim_tbl[2];
/* data 2d2030 */ WMIM mimacs_hair_dat39;
/* data 2d2060 */ WMIM_DAT ch039_wmim_tbl[2];
/* data 2d2070 */ float rope_vtx0[4];
/* data 2d2080 */ ROPE_DAT rope_dat0;
/* data 2d2098 */ float sudare_vtx0[4];
/* data 2d20a8 */ ROPE_DAT sudare_dat0;
/* data 2d20c0 */ float genkan_vtx000[4];
/* data 2d20d0 */ ROPE_DAT fr_genkan000;
/* data 2d20e8 */ float genkan_vtx001[4];
/* data 2d20f8 */ ROPE_DAT fr_genkan001;
/* data 2d2110 */ float irori_vtx000[4];
/* data 2d2120 */ ROPE_DAT fr_irori_dentou000;
/* data 2d2138 */ float irori_vtx001[4];
/* data 2d2148 */ ROPE_DAT fr_irori_dentou001;
/* data 2d2160 */ float oozasiki_vtx000[4];
/* data 2d2170 */ ROPE_DAT fr_oozasiki_dentou000;
/* data 2d2188 */ float butuma_vtx000[4];
/* data 2d2198 */ ROPE_DAT fr_butuma_dentou000;
/* data 2d21b0 */ float okunoma_vtx000[4];
/* data 2d21c0 */ ROPE_DAT fr_okunoma_dentou000;
/* data 2d21d8 */ float okunoma_vtx001[4];
/* data 2d21e8 */ ROPE_DAT fr_okunoma_dentou001;
/* data 2d2200 */ float okunoma_vtx002[4];
/* data 2d2210 */ ROPE_DAT fr_okunoma_sudare000;
/* data 2d2228 */ ROPE_DAT fr_okunoma_sudare001;
/* data 2d2240 */ ROPE_DAT fr_okunoma_sudare002;
/* data 2d2258 */ float kyakuma_vtx000[4];
/* data 2d2268 */ ROPE_DAT fr_kyakuma_dentou000;
/* data 2d2280 */ float shouzi_vtx000[4];
/* data 2d2290 */ ROPE_DAT fr_shouzi000;
/* data 2d22a8 */ float rry01_genkan_vtx[3][5];
/* data 2d22e8 */ ROPE_DAT fr_rry01_genkan_turi000;
/* data 2d2300 */ ROPE_DAT fr_rry01_genkan_turi001;
/* data 2d2318 */ ROPE_DAT fr_rry01_genkan_turi002;
/* data 2d2330 */ float toumyou_vtx000[4];
/* data 2d2340 */ ROPE_DAT fr_rry00_toumyou000;
/* data 2d2358 */ ROPE_DAT fr_rry00_toumyou001;
/* data 2d2370 */ float rkh00_vtx000[4];
/* data 2d2380 */ float rkh00_vtx001[4];
/* data 2d2390 */ float rkh00_vtx002[4];
/* data 2d23a0 */ ROPE_DAT fr_rkh00_rope001;
/* data 2d23b8 */ ROPE_DAT fr_rkh00_rope002;
/* data 2d23d0 */ ROPE_DAT fr_rkh00_rope003;
/* data 2d23e8 */ ROPE_DAT fr_rkh00_rope004;
/* data 2d2400 */ float rtb08_vtx000[4];
/* data 2d2410 */ ROPE_DAT fr_rtb08_dentou000;
/* data 2d2428 */ float ry04_vtx000[4];
/* data 2d2438 */ ROPE_DAT fr_ry04_tourou000;
/* data 2d2450 */ ROPE_DAT fr_ry04_tourou001;
/* data 2d2468 */ float ry02_vtx000[2][4];
/* data 2d2488 */ ROPE_DAT fr_ry02_tourou000;
/* data 2d24a0 */ ROPE_DAT fr_ry02_tourou001;
/* data 2d24b8 */ ROPE_DAT fr_ry02_tourou002;
/* data 2d24d0 */ ROPE_DAT *rope_tbl[32];
/* data 2d2550 */ CLOTH cloth_furisode3;
/* data 2d2560 */ CLOTH furisode_mio;
/* data 2d2570 */ CLOTH cloth_skirt;
/* data 2d2580 */ CLOTH cloth_skirt_mio;
/* data 2d2590 */ CLOTH cloth_skirt_mayu;
/* data 2d25a0 */ CLOTH cloth_skirt_miya;
/* data 2d25b0 */ CLOTH cloth_skirt_hako;
/* data 2d25c0 */ CLOTH cloth_skirt_manto_hako;
/* data 2d25d0 */ CLOTH cloth_manto_hako;
/* data 2d25e0 */ CLOTH cloth_manto_kusa1;
/* data 2d25f0 */ CLOTH cloth_manto_kusa2;
/* data 2d2600 */ CLOTH cloth_skirt_kusa1;
/* data 2d2610 */ CLOTH cloth_skirt_kusa2;
/* data 2d2620 */ CLOTH cloth_manto_rakka1;
/* data 2d2630 */ CLOTH cloth_manto_rakka2;
/* data 2d2640 */ CLOTH cloth_skirt_rakka1;
/* data 2d2650 */ CLOTH cloth_skirt_kubiore;
/* data 2d2660 */ CLOTH cloth_manto_waninngyou;
/* data 2d2670 */ CLOTH cloth_skirt_rakka2;
/* data 2d2680 */ CLOTH cloth_skirt_kusakoro2;
/* data 2d2690 */ CLOTH cloth_manto_noren;
/* data 2d26a0 */ CLOTH cloth_irori_noren;
/* data 2d26b0 */ CLOTH cloth_nuno_noren;
/* data 2d26c0 */ CLOTH cloth_nuno_nuno;
/* data 2d26d0 */ CLOTH cloth_genkan_noren;
/* data 2d26e0 */ CLOTH cloth_genkan_noren2;
/* data 2d26f0 */ CLOTH cloth_meian_noren;
/* data 2d2700 */ CLOTH cloth_okunoma_sudare;
/* data 2d2710 */ CLOTH cloth_meian_curtain;
/* data 2d2720 */ CLOTH cloth_skirt_suisi;
/* data 2d2730 */ CLOTH cloth_skirt_tama;
/* data 2d2740 */ CLOTH cloth_skirt_yami2;
/* data 2d2750 */ CLOTH cloth_skirt_sae;
/* data 2d2760 */ CLOTH cloth_skirt_imi1;
/* data 2d2770 */ CLOTH_DAT ch000_cloth[2];
/* data 2d2790 */ COLLISION_DAT ch000_collision[4];
/* data 2d27b0 */ CLOTH_DAT ch001_cloth[2];
/* data 2d27d0 */ COLLISION_DAT ch001_collision[4];
/* data 2d27f0 */ CLOTH_DAT ch003_cloth[3];
/* data 2d2820 */ float ch004_rist_vtx0[4][4];
/* data 2d2860 */ float ch004_rist_vtx1[4][4];
/* data 2d28a0 */ CLOTH_DAT ch004_cloth[3];
/* data 2d28d0 */ float ch006_rist_vtx0[4][4];
/* data 2d2910 */ float ch006_rist_vtx1[4][4];
/* data 2d2950 */ CLOTH_DAT ch006_cloth[3];
/* data 2d2980 */ COLLISION_DAT ch006_collision[2];
/* data 2d2990 */ CLOTH_DAT ch011_cloth[3];
/* data 2d29c0 */ float ch013_rist_vtx0[4][4];
/* data 2d2a00 */ float ch013_rist_vtx1[4][4];
/* data 2d2a40 */ CLOTH_DAT ch013_cloth[4];
/* data 2d2a80 */ COLLISION_DAT ch013_collision[2];
/* data 2d2a90 */ CLOTH_DAT ch014_cloth[2];
/* data 2d2ab0 */ CLOTH_DAT ch017_cloth[2];
/* data 2d2ad0 */ COLLISION_DAT ch017_collision[4];
/* data 2d2af0 */ CLOTH_DAT ch018_cloth[6];
/* data 2d2b50 */ float ch019_rist_vtx0[4][4];
/* data 2d2b90 */ float ch019_rist_vtx1[4][4];
/* data 2d2bd0 */ CLOTH_DAT ch019_cloth[3];
/* data 2d2c00 */ COLLISION_DAT ch019_collision[2];
/* data 2d2c10 */ float ch020_rist_vtx0[4][4];
/* data 2d2c50 */ float ch020_rist_vtx1[4][4];
/* data 2d2c90 */ CLOTH_DAT ch020_cloth[8];
/* data 2d2d10 */ COLLISION_DAT ch020_collision[3];
/* data 2d2d30 */ float ch021_rist_vtx0[4][4];
/* data 2d2d70 */ float ch021_rist_vtx1[4][4];
/* data 2d2db0 */ CLOTH_DAT ch021_cloth[4];
/* data 2d2df0 */ COLLISION_DAT ch021_collision[4];
/* data 2d2e10 */ float ch022_rist_vtx0[4][4];
/* data 2d2e50 */ float ch022_rist_vtx1[4][4];
/* data 2d2e90 */ CLOTH_DAT ch022_cloth[4];
/* data 2d2ed0 */ COLLISION_DAT ch022_collision[4];
/* data 2d2ef0 */ float ch024_rist_vtx0[4][4];
/* data 2d2f30 */ float ch024_rist_vtx1[4][4];
/* data 2d2f70 */ CLOTH_DAT ch024_cloth[5];
/* data 2d2fc0 */ COLLISION_DAT ch024_collision[3];
/* data 2d2fe0 */ float ch025_rist_vtx0[4][4];
/* data 2d3020 */ float ch025_rist_vtx1[4][4];
/* data 2d3060 */ CLOTH_DAT ch025_cloth[4];
/* data 2d30a0 */ COLLISION_DAT ch025_collision[2];
/* data 2d30b0 */ float ch026_rist_vtx0[4][4];
/* data 2d30f0 */ float ch026_rist_vtx1[4][4];
/* data 2d3130 */ CLOTH_DAT ch026_cloth[3];
/* data 2d3160 */ float ch027_rist_vtx0[4][4];
/* data 2d31a0 */ float ch027_rist_vtx1[4][4];
/* data 2d31e0 */ CLOTH_DAT ch027_cloth[3];
/* data 2d3210 */ COLLISION_DAT ch027_collision[2];
/* data 2d3220 */ float ch028_rist_vtx0[4][4];
/* data 2d3260 */ float ch028_rist_vtx1[4][4];
/* data 2d32a0 */ CLOTH_DAT ch028_cloth[3];
/* data 2d32d0 */ COLLISION_DAT ch028_collision[2];
/* data 2d32e0 */ float ch029_rist_vtx0[4][4];
/* data 2d3320 */ float ch029_rist_vtx1[4][4];
/* data 2d3360 */ CLOTH_DAT ch029_cloth[3];
/* data 2d3390 */ COLLISION_DAT ch029_collision[2];
/* data 2d33a0 */ CLOTH_DAT ch030_cloth[2];
/* data 2d33c0 */ COLLISION_DAT ch030_collision[6];
/* data 2d33f0 */ float ch031_rist_vtx0[4][4];
/* data 2d3430 */ float ch031_rist_vtx1[4][4];
/* data 2d3470 */ CLOTH_DAT ch031_cloth[3];
/* data 2d34a0 */ COLLISION_DAT ch031_collision[2];
/* data 2d34b0 */ CLOTH_DAT ch032_cloth[2];
/* data 2d34d0 */ float ch033_rist_vtx0[4][4];
/* data 2d3510 */ float ch033_rist_vtx1[4][4];
/* data 2d3550 */ CLOTH_DAT ch033_cloth[3];
/* data 2d3580 */ COLLISION_DAT ch033_collision[2];
/* data 2d3590 */ float ch038_rist_vtx0[4][4];
/* data 2d35d0 */ float ch038_rist_vtx1[4][4];
/* data 2d3610 */ CLOTH_DAT ch038_cloth[3];
/* data 2d3640 */ CLOTH_DAT ch039_cloth[3];
/* data 2d3670 */ float ch041_rist_vtx0[4][4];
/* data 2d36b0 */ float ch041_rist_vtx1[4][4];
/* data 2d36f0 */ CLOTH_DAT ch041_cloth[3];
/* data 2d3720 */ float ch043_rist_vtx0[4][4];
/* data 2d3760 */ float ch043_rist_vtx1[4][4];
/* data 2d37a0 */ CLOTH_DAT ch043_cloth[3];
/* data 2d37d0 */ float ch044_rist_vtx0[4][4];
/* data 2d3810 */ float ch044_rist_vtx1[4][4];
/* data 2d3850 */ CLOTH_DAT ch044_cloth[3];
/* data 2d3880 */ float ch047_rist_vtx0[4][4];
/* data 2d38c0 */ float ch047_rist_vtx1[4][4];
/* data 2d3900 */ CLOTH_DAT ch047_cloth[3];
/* data 2d3930 */ float ch048_rist_vtx0[4][4];
/* data 2d3970 */ float ch048_rist_vtx1[4][4];
/* data 2d39b0 */ CLOTH_DAT ch048_cloth[3];
/* data 2d39e0 */ CLOTH_DAT ch049_cloth[3];
/* data 2d3a10 */ CLOTH_DAT ch053_cloth[2];
/* data 2d3a30 */ CLOTH_DAT ch055_cloth[2];
/* data 2d3a50 */ COLLISION_DAT ch055_collision[4];
/* data 2d3a70 */ float ch058_rist_vtx0[4][4];
/* data 2d3ab0 */ float ch058_rist_vtx1[4][4];
/* data 2d3af0 */ CLOTH_DAT ch058_cloth[3];
/* data 2d3b20 */ float ch064_rist_vtx0[4][4];
/* data 2d3b60 */ float ch064_rist_vtx1[4][4];
/* data 2d3ba0 */ CLOTH_DAT ch064_cloth[3];
/* data 2d3bd0 */ float ch065_rist_vtx0[4][4];
/* data 2d3c10 */ float ch065_rist_vtx1[4][4];
/* data 2d3c50 */ CLOTH_DAT ch065_cloth[3];
/* data 2d3c80 */ float ch066_rist_vtx0[4][4];
/* data 2d3cc0 */ float ch066_rist_vtx1[4][4];
/* data 2d3d00 */ CLOTH_DAT ch066_cloth[3];
/* data 2d3d30 */ float ch067_rist_vtx0[4][4];
/* data 2d3d70 */ float ch067_rist_vtx1[4][4];
/* data 2d3db0 */ CLOTH_DAT ch067_cloth[3];
/* data 2d3de0 */ float ch068_rist_vtx0[4][4];
/* data 2d3e20 */ float ch068_rist_vtx1[4][4];
/* data 2d3e60 */ CLOTH_DAT ch068_cloth[3];
/* data 2d3e90 */ float ch069_rist_vtx0[4][4];
/* data 2d3ed0 */ float ch069_rist_vtx1[4][4];
/* data 2d3f10 */ CLOTH_DAT ch069_cloth[3];
/* data 2d3f40 */ float ch070_rist_vtx0[4][4];
/* data 2d3f80 */ float ch070_rist_vtx1[4][4];
/* data 2d3fc0 */ CLOTH_DAT ch070_cloth[3];
/* data 2d3ff0 */ float ch071_rist_vtx0[4][4];
/* data 2d4030 */ float ch071_rist_vtx1[4][4];
/* data 2d4070 */ CLOTH_DAT ch071_cloth[3];
/* data 2d40a0 */ float m999_rist_vtx0[4][4];
/* data 2d40e0 */ CLOTH_DAT m999_cloth[3];
/* data 2d4110 */ COLLISION_DAT m999_collision[4];
/* data 2d4130 */ CLOTH_DAT f000_cloth[2];
/* data 2d4150 */ CLOTH_DAT fc_irori000[2];
/* data 2d4170 */ CLOTH_DAT fc_irori001[2];
/* data 2d4190 */ CLOTH_DAT fc_nuno000[2];
/* data 2d41b0 */ CLOTH_DAT fc_nuno001[2];
/* data 2d41d0 */ CLOTH_DAT fc_nuno002[2];
/* data 2d41f0 */ CLOTH_DAT fc_genkan000[2];
/* data 2d4210 */ CLOTH_DAT fc_genkan001[2];
/* data 2d4230 */ CLOTH_DAT fc_genkan002[2];
/* data 2d4250 */ CLOTH_DAT fc_genkan003[2];
/* data 2d4270 */ CLOTH_DAT fc_genkan004[2];
/* data 2d4290 */ CLOTH_DAT fc_meian000[2];
/* data 2d42b0 */ CLOTH_DAT fc_meian001[2];
/* data 2d42d0 */ CLOTH_DAT fc_meian002[2];
/* data 2d42f0 */ CLOTH_DAT fc_meian003[2];
/* data 2d4310 */ CLOTH_DAT fc_okunoma000[2];
/* data 2d4330 */ CLOTH_DAT fc_meian004[2];
/* data 2d4350 */ CLOTH_DAT fc_meian005[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album.c
// *****************************************************************************

/* data 2d4370 */ fixed_array<ALBUM_INFO,2> album_info;
/* sdata 3ef2a8 */ void* (*AlbumMemGet)(/* parameters unknown */);
/* sdata 3ef2ac */ void (*AlbumMemFree)(/* parameters unknown */);
/* sdata 3ef2b0 */ void *outgame_tex_addr;
/* sdata 3ef2b4 */ void *album_cmn_tex_addr;
/* sdata 3ef2b8 */ void *album_hensyu_tex_addr;
/* sdata 3ef2bc */ void *album_sl_addr;
/* sdata 3ef2c0 */ void *album_slot_sl_addr;
/* sdata 3ef2c4 */ void *album_buff_addr;
/* sdata 3ef2c8 */ void *album_save_data_addr;
/* sdata 3ef2cc */ char album_title_disp_flg;
/* sdata 3ef2d0 */ void (*album_mode_init_func[2])(/* parameters unknown */);
/* sdata 3ef2d8 */ int (*album_mode_main_func[2])(/* parameters unknown */);
/* sdata 3ef2e0 */ void (*album_mode_disp_func[2])(/* parameters unknown */);
/* sbss 3f4aa8 */ reference_fixed_array<int,7> album_view_tex_tbl;
/* sbss 3f51f8 */ unsigned char ALBUM_INFO type_info node[8];
/* sbss 3f51f0 */ unsigned char PICTURE_WRK type_info node[8];
/* bss 4220e0 */ ALBUM_CTRL album_ctrl;
/* sbss 3f4ab0 */ ALBUM_DISP_CTRL album_disp_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/dat/album_dat.c
// *****************************************************************************

/* rdata 3a0230 */ int album_name_x_tbl[7][5];
/* rdata 3a02c0 */ int album_left_csr_x[7][5];
/* rdata 3a0350 */ int album_right_csr_x[7][5];
/* data 2d4788 */ SPRT_DAT album_tex[434];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_disp.c
// *****************************************************************************

/* sbss 3f51f8 */ unsigned char ALBUM_INFO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_edit.c
// *****************************************************************************

/* data 2d7dc8 */ void (*album_edit_mode_init_func[10])(/* parameters unknown */);
/* data 2d7df0 */ void (*album_edit_mode_func[10])(/* parameters unknown */);
/* data 2d7e18 */ void (*album_edit_mode_end_func[10])(/* parameters unknown */);
/* data 2d7e40 */ void (*album_edit_mode_disp[10])(/* parameters unknown */);
/* sbss 3f51f8 */ unsigned char ALBUM_INFO type_info node[8];
/* sbss 3f51f0 */ unsigned char PICTURE_WRK type_info node[8];
/* sbss 3f5200 */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* bss 4220f0 */ ALBUM_EDIT_CTRL album_edit_ctrl;
/* bss 422100 */ ALBUM_EDIT_DISP album_edit_disp;
/* sbss 3f4ab8 */ ALBUM_COPY_CTRL album_copy_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_load.c
// *****************************************************************************

/* sdata 3ef418 */ void *album_load_buff_addr;
/* bss 422110 */ ALBUM_LOAD_CTRL album_load_ctrl;
/* sbss 3f4ac0 */ ALBUM_LOAD_DISP album_load_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_mem.c
// *****************************************************************************

/* bss 422120 */ ALBUM_MEM_CTRL album_mem_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_save.c
// *****************************************************************************

/* sdata 3ef460 */ void *album_save_buff_addr;
/* sbss 3f51f8 */ unsigned char ALBUM_INFO type_info node[8];
/* bss 422130 */ ALBUM_SAVE_CTRL album_save_ctrl;
/* sbss 3f4ac8 */ ALBUM_SAVE_DISP album_save_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_view.c
// *****************************************************************************

/* sdata 3ef4a8 */ void *album_view_tex_addr;
/* bss 422140 */ fixed_array<char,16> disp_photo_no;
/* sbss 3f4ad0 */ reference_fixed_array<int,7> album_view_tex_tbl;
/* sbss 3f51f8 */ unsigned char ALBUM_INFO type_info node[8];
/* sbss 3f51f0 */ unsigned char PICTURE_WRK type_info node[8];
/* sbss 3f5200 */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* sbss 3f4ad8 */ ALBUM_VIEW_CTRL album_view_ctrl;
/* sbss 3f4ae0 */ ALBUM_VIEW_DISP album_view_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/autoload.c
// *****************************************************************************

/* sdata 3ef520 */ void *auto_load_data_buff;
/* sbss 3f4ae8 */ AUTO_LOAD_CTRL auto_load_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/bonus_shot.c
// *****************************************************************************

/* sdata 3ef570 */ MyPoint aComboNumPoint[2];
/* sdata 3ef578 */ MyPoint aComboCharPoint[2];
/* sbss 3f5208 */ unsigned char CBonusShotOne type_info node[8];
/* rdata 3a1a88 */ SHOT_NAME_TEX aShotTexTbl[5][9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/btn_sprt_dat.c
// *****************************************************************************

/* data 2d7e68 */ SPRT_DAT btn_tex[15];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/cam_level_up_point.c
// *****************************************************************************

/* rdata 3a1b40 */ int cam_base_status_point[3][4];
/* rdata 3a1b70 */ int cam_sp_shot_point_tbl[10][4];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/camera_film.c
// *****************************************************************************

/* sdata 3ef598 */ unsigned char CCameraFilm::aFilmDamageTbl[5];
/* sdata 3ef5a0 */ unsigned char CCameraFilm::aFilmMinPercentTbl[5];
/* sdata 3ef5a8 */ unsigned char CCameraFilm::aFilmChargeSpdTbl[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/camera_menu.c
// *****************************************************************************

/* data 2d8048 */ DEBUG_CAMERA_MENU DebugCameraMenu;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/camera_power_up.c
// *****************************************************************************

/* rdata 3a1c68 */ float CCameraPowerUp::aDistanceTbl[4];
/* rdata 3a1c78 */ float CCameraPowerUp::aDmgTbl[4];
/* rdata 3a1c88 */ float CCameraPowerUp::aRadiusTbl[4];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/cap_group_dat.c
// *****************************************************************************

/* data 2d8058 */ CAP_GROUP cap_group_A[3];
/* data 2d80a0 */ BTN_GROUP btn_group_A[3];
/* data 2d80e8 */ CAP_GROUP cap_group_B1[4];
/* data 2d8148 */ BTN_GROUP btn_group_B1[4];
/* data 2d81a8 */ CAP_GROUP cap_group_B2[4];
/* data 2d8208 */ BTN_GROUP btn_group_B2[4];
/* data 2d8268 */ CAP_GROUP cap_group_C[4];
/* data 2d82c8 */ BTN_GROUP btn_group_C[4];
/* data 2d8328 */ CAP_GROUP cap_group_D[4];
/* data 2d8388 */ BTN_GROUP btn_group_D[5];
/* data 2d8400 */ CAP_GROUP cap_group_E1[3];
/* data 2d8448 */ BTN_GROUP btn_group_E1[4];
/* data 2d84a8 */ CAP_GROUP cap_group_E2[3];
/* data 2d84f0 */ BTN_GROUP btn_group_E2[3];
/* data 2d8538 */ CAP_GROUP cap_group_F[2];
/* data 2d8568 */ BTN_GROUP btn_group_F[2];
/* data 2d8598 */ CAP_GROUP cap_group_H[5];
/* data 2d8610 */ BTN_GROUP btn_group_H[5];
/* data 2d8688 */ CAP_GROUP cap_group_I[4];
/* data 2d86e8 */ BTN_GROUP btn_group_I[5];
/* data 2d8760 */ CAP_GROUP cap_group_J[5];
/* data 2d87d8 */ BTN_GROUP btn_group_J[5];
/* data 2d8850 */ CAP_GROUP cap_group_K[3];
/* data 2d8898 */ BTN_GROUP btn_group_K[4];
/* data 2d88f8 */ CAP_GROUP cap_group_L[2];
/* data 2d8928 */ BTN_GROUP btn_group_L[2];
/* data 2d8958 */ CAP_GROUP cap_group_M[4];
/* data 2d89b8 */ BTN_GROUP btn_group_M[4];
/* data 2d8a18 */ CAP_GROUP cap_group_N[2];
/* data 2d8a48 */ BTN_GROUP btn_group_N[2];
/* rdata 3a1d10 */ int cap_world_pos_x[15][5];
/* rdata 3a1e40 */ int cap_world_pos_y[15][5];
/* data 2d8a78 */ CAP_BTN_GROUP_CTRL cap_btn_group_ctrl[15];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/caption_dat.c
// *****************************************************************************

/* data 2d8af0 */ SPRT_DAT caption_tex[17];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/center_circle.c
// *****************************************************************************

/* data 2d8d10 */ unsigned char CCenterCircle::aRgb[4][3];
/* sdata 3ef638 */ char CCenterCircle::aMainAlpha[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/center_cross.c
// *****************************************************************************

/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/chapter_sel.c
// *****************************************************************************

/* sbss 3f4af0 */ CHAPTER_SEL_CTRL chapter_sel_ctrl;
/* rdata 3a2350 */ short int costume_tbl[9][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/charBB.c
// *****************************************************************************

/* rdata 3a2430 */ CHARBBDATA s_aCharBBData[78];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/clear_flg.c
// *****************************************************************************

/* data 2d8d20 */ CLEAR_FLG_CTRL clear_flg_ctrl;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/clearmenu.c
// *****************************************************************************

/* sdata 3ef850 */ void *clear_bg_tex_addr;
/* sbss 3f4af8 */ CLEAR_MENU_CTRL clear_menu_ctrl;
/* bss 422150 */ CLEAR_MENU_DISP clear_menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/clearmenu_top.c
// *****************************************************************************

/* sdata 3ef898 */ void *clear_menu_tex_addr;
/* sdata 3ef89c */ char clear_menu_top_init_flg;
/* sbss 3f4b00 */ CLEAR_MENU_TOP_CTRL clear_menu_top_ctrl;
/* sbss 3f4b08 */ CLEAR_MENU_TOP_DISP clear_menu_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/compress/compress.c
// *****************************************************************************

/* data 2d8d38 */ DCT_ROOT ZigZag[64];
/* sdata 3ef8a0 */ PHOTO_EXPAND photo_expand;
/* bss 422170 */ unsigned char pixelstrip[8][384];
/* bss 422d70 */ float C[8][8];
/* bss 422e70 */ float Ct[8][8];
/* sbss 3f4b1c */ int InputRunLength;
/* sbss 3f4b20 */ int OutputRunLength;
/* bss 422f70 */ int quantum[8][8];
/* sbss 3f4b24 */ char repair_flg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/crystal.c
// *****************************************************************************

/* data 2d8db8 */ int crystal_stream[41];
/* bss 423070 */ fixed_array<char,40> plyr_crystal;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/dat/crystal_dat.c
// *****************************************************************************

/* data 2d8e60 */ MOVIE_TITLE_DAT crystal_title_dummy[1];
/* data 2d8e70 */ MOVIE_TITLE_DAT crystal_title_000[5];
/* data 2d8eb0 */ MOVIE_TITLE_DAT crystal_title_001[9];
/* data 2d8f20 */ MOVIE_TITLE_DAT crystal_title_002[7];
/* data 2d8f78 */ MOVIE_TITLE_DAT crystal_title_003[7];
/* data 2d8fd0 */ MOVIE_TITLE_DAT crystal_title_004[7];
/* data 2d9028 */ MOVIE_TITLE_DAT crystal_title_005[5];
/* data 2d9068 */ MOVIE_TITLE_DAT crystal_title_006[8];
/* data 2d90c8 */ MOVIE_TITLE_DAT crystal_title_007[9];
/* data 2d9138 */ MOVIE_TITLE_DAT crystal_title_008[4];
/* data 2d9168 */ MOVIE_TITLE_DAT crystal_title_009[10];
/* data 2d91e0 */ MOVIE_TITLE_DAT crystal_title_010[5];
/* data 2d9220 */ MOVIE_TITLE_DAT crystal_title_011[6];
/* data 2d9268 */ MOVIE_TITLE_DAT crystal_title_012[8];
/* data 2d92c8 */ MOVIE_TITLE_DAT crystal_title_013[7];
/* data 2d9320 */ MOVIE_TITLE_DAT crystal_title_014[7];
/* data 2d9378 */ MOVIE_TITLE_DAT crystal_title_015[5];
/* data 2d93b8 */ MOVIE_TITLE_DAT crystal_title_016[6];
/* data 2d9400 */ MOVIE_TITLE_DAT crystal_title_017[8];
/* data 2d9460 */ MOVIE_TITLE_DAT crystal_title_018[7];
/* data 2d94b8 */ MOVIE_TITLE_DAT crystal_title_019[6];
/* data 2d9500 */ MOVIE_TITLE_DAT crystal_title_020[10];
/* data 2d9578 */ MOVIE_TITLE_DAT crystal_title_021[10];
/* data 2d95f0 */ MOVIE_TITLE_DAT crystal_title_022[7];
/* data 2d9648 */ MOVIE_TITLE_DAT crystal_title_023[5];
/* data 2d9688 */ MOVIE_TITLE_DAT crystal_title_024[5];
/* data 2d96c8 */ MOVIE_TITLE_DAT crystal_title_025[4];
/* data 2d96f8 */ MOVIE_TITLE_DAT crystal_title_026[5];
/* data 2d9738 */ MOVIE_TITLE_DAT crystal_title_027[6];
/* data 2d9780 */ MOVIE_TITLE_DAT crystal_title_028[8];
/* data 2d97e0 */ MOVIE_TITLE_DAT crystal_title_029[7];
/* data 2d9838 */ MOVIE_TITLE_DAT crystal_title_030[7];
/* data 2d9890 */ MOVIE_TITLE_DAT crystal_title_031[8];
/* data 2d98f0 */ MOVIE_TITLE_DAT crystal_title_032[9];
/* data 2d9960 */ MOVIE_TITLE_DAT crystal_title_033[6];
/* data 2d99a8 */ MOVIE_TITLE_DAT crystal_title_034[6];
/* data 2d99f0 */ MOVIE_TITLE_DAT crystal_title_035[8];
/* data 2d9a50 */ MOVIE_TITLE_DAT crystal_title_036[9];
/* data 2d9ac0 */ MOVIE_TITLE_DAT crystal_title_037[8];
/* data 2d9b20 */ MOVIE_TITLE_DAT crystal_title_038[6];
/* data 2d9b68 */ MOVIE_TITLE_DAT crystal_title_039[8];
/* data 2d9bc8 */ MOVIE_TITLE_DAT *crystal_title_dat[41];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/debug.c
// *****************************************************************************

/* sdata 3ef970 */ int dbg_spu_mem_disp;
/* sdata 3ef974 */ int dbg_system_mem_disp;
/* sdata 3ef978 */ int dbg_mdl_mem_disp;
/* sdata 3ef97c */ int dbg_cmn_mem_disp;
/* sdata 3ef980 */ int dbg_iop_mem_disp;
/* sdata 3ef984 */ int dbg_ene_no;
/* sdata 3ef988 */ int dbg_enemy_button_pre;
/* sdata 3ef98c */ int dbg_enemy_button;
/* data 2d9c70 */ DEBUG_MENU_DATA dbg_menu_data[3];
/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* data 3f4a04 */ bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_S_instanceless;
/* data 3f4a08 */ bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent> >::_S_instanceless;
/* data 3f4a00 */ bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *> >::_S_instanceless;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/debug_menu.c
// *****************************************************************************

/* data 2d9ca0 */ sceVu0IVECTOR s_ivBGColor;
/* data 2d9cb0 */ DEBUG_MENU dbg_menu_main;
/* data 2d9eb0 */ DEBUG_MENU dbg_disp_main;
/* data 2da0b0 */ DEBUG_MENU dbg_item_main;
/* data 2da2b0 */ DEBUG_MENU dbg_film_item;
/* data 2da4b0 */ DEBUG_MENU dbg_recovery_item;
/* data 2da6b0 */ DEBUG_MENU dbg_event_item;
/* data 2da8b0 */ DEBUG_MENU dbg_event_item2;
/* data 2daab0 */ DEBUG_MENU dbg_event_item3;
/* data 2dacb0 */ DEBUG_MENU dbg_event_item4;
/* data 2daeb0 */ DEBUG_MENU dbg_mem_main;
/* data 2db0b0 */ DEBUG_MENU dbg_ene_main;
/* sdata 3efa50 */ DEBUG_MENU *now_tree;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5228 */ unsigned char PLYR_ITEM type_info node[8];
/* data 2db2b0 */ DEBUG_VAR debug_var;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/dmaVif1.c
// *****************************************************************************

/* sbss 3f4b28 */ int vu1tag_num;
/* sbss 3f4b2c */ float *objwork[4];
/* sbss 3f4b30 */ float *objworkdbuf[2][4];
/* sbss 3f4b38 */ sceDmaTag *cachetag;
/* sbss 3f4b40 */ sceDmaTag *cachetagdbuf[2];
/* sbss 3f4b48 */ int tagswap;
/* sbss 3f4b4c */ int bVifBufResizeCnt;
/* sbss 3f4b50 */ int iSaveNewTagMax;
/* sbss 3f4b54 */ int numtag_save;
/* sbss 3f4b58 */ sceDmaChan *s_pDmaChan_VIF1;
/* rdata 3a42a0 */ int DummyFlushData[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/door/prg/door.c
// *****************************************************************************

/* bss 423098 */ fixed_array<DOOR_CTRL,208> door_ctrl;
/* sbss 3f5230 */ unsigned char DOOR_CTRL type_info node[8];
/* sbss 3f4b5c */ u_char lock_exe_step;
/* sdata 3efb60 */ DOOR_LOCK_STATE_CTRL lock_state_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/door/dat/door_lock_dat.c
// *****************************************************************************

/* data 2db360 */ DOOR_LOCK_INFO door_lock_info[7];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/door_point_dat.c
// *****************************************************************************

/* data 2db398 */ MAP_DOOR_POINT *menu_map_door_data[18];
/* rdata 3a4518 */ MAP_DOOR_POINT map_soto_door_point[13];
/* rdata 3a4650 */ MAP_DOOR_POINT map_os1_door_point[7];
/* rdata 3a46f8 */ MAP_DOOR_POINT map_os2_door_point[2];
/* rdata 3a4728 */ MAP_DOOR_POINT map_os0_door_point[1];
/* rdata 3a4740 */ MAP_DOOR_POINT map_ks1_door_point[20];
/* rdata 3a4920 */ MAP_DOOR_POINT map_ks2_door_point[8];
/* rdata 3a49e0 */ MAP_DOOR_POINT map_ks0_door_point[5];
/* rdata 3a4a58 */ MAP_DOOR_POINT map_ry1_door_point[16];
/* rdata 3a4bd8 */ MAP_DOOR_POINT map_ry2_door_point[6];
/* rdata 3a4c68 */ MAP_DOOR_POINT map_ry0_door_point[1];
/* rdata 3a4c80 */ MAP_DOOR_POINT map_tb1_door_point[16];
/* rdata 3a4e00 */ MAP_DOOR_POINT map_tb2_door_point[14];
/* rdata 3a4f50 */ MAP_DOOR_POINT map_tb0_door_point[1];
/* rdata 3a4f68 */ MAP_DOOR_POINT map_chika_door_point[2];
/* rdata 3a4f98 */ MAP_DOOR_POINT map_kur_door_point[3];
/* rdata 3a4fe0 */ MAP_DOOR_POINT map_kuh_door_point[3];
/* rdata 3a5028 */ MAP_DOOR_POINT map_kuc_door_point[3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/draw_env.c
// *****************************************************************************

/* sdata 3efba8 */ qword* (*context_packet_start[2])(/* parameters unknown */);
/* sdata 3efbb0 */ void (*context_packet_end[2])(/* parameters unknown */);
/* bss 423168 */ long int draw_env_alpha[2];
/* bss 423178 */ long int draw_env_test[2];
/* bss 423188 */ long int draw_env_zbuf[2];
/* bss 423198 */ long int draw_env_tex1[2];
/* bss 4231a8 */ long int draw_env_clamp[2];
/* bss 4231b8 */ long int draw_env_scissor[2];
/* sbss 3f4b60 */ long int draw_env_texa;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeException.c
// *****************************************************************************

/* data 2db3e0 */ int s_abEnableExcCode[14];
/* data 2db418 */ char *s_astrException[14];
/* data 2db450 */ int s_aiDmaCatchChannel[3];
/* bss 4231d0 */ void s_iopExceptionData;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeFile.cpp
// *****************************************************************************

/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 369d88 */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data 369e88 */ __vtbl_ptr_type CFileName virtual table[3];
/* data 369ea0 */ __vtbl_ptr_type CStdioFile virtual table[8];
/* data 369ee0 */ __vtbl_ptr_type CFile virtual table[6];
/* sbss 3f5240 */ unsigned char CFile type_info node[8];
/* bss 4cdae0 */ unsigned char CStdioFile type_info node[12];
/* bss 4cdad0 */ unsigned char CFileName type_info node[12];
/* sbss 3f5110 */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* sbss 3f5238 */ unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info node[8];
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeFindFile.cpp
// *****************************************************************************

/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 369d88 */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data 369f10 */ __vtbl_ptr_type CFindFile virtual table[3];
/* data 369f28 */ __vtbl_ptr_type ctl::custom_allocator<sce_dirent> virtual table[4];
/* data 369f48 */ __vtbl_ptr_type ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > virtual table[4];
/* sbss 3f5250 */ unsigned char ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > type_info node[8];
/* sbss 3f5258 */ unsigned char ctl::custom_allocator<sce_dirent> type_info node[8];
/* sbss 3f5248 */ unsigned char CFindFile type_info node[8];
/* sbss 3f5110 */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
/* data 3f4a04 */ bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_S_instanceless;
/* data 3f4a08 */ bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent> >::_S_instanceless;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeProfile.c
// *****************************************************************************

/* sdata 3efc20 */ int g_iCallStackCount;
/* data 2db460 */ PROFILEFUNCTION g_aProfileFunction[256];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect.c
// *****************************************************************************

/* data 2dbc60 */ SCREEN_EFFECT_PARAMETER ScreenEffectParam00;
/* data 2dbcc0 */ SCREEN_EFFECT_PARAMETER ScreenEffectParam01;
/* data 2dbd20 */ SCREEN_EFFECT_PARAMETER ScreenEffectParam02;
/* data 2dbd80 */ SCREEN_EFFECT_PARAMETER ScreenEffectParam03;
/* data 2dbde0 */ SCREEN_EFFECT_PARAMETER ScreenEffectParam04;
/* data 2dbe40 */ SCREEN_EFFECT_PARAMETER ScreenEffectParam05;
/* data 2dbea0 */ fixed_array<EFFECT_CONT,64> efcnt;
/* data 2ddaa0 */ fixed_array<EFFECT_CONT,48> efcntm;
/* data 2defa0 */ fixed_array<EFFECT_CONT,64> efcnt_cnt;
/* data 2e0ba0 */ fixed_array<EFFECT_CONT,48> efcntm_cnt;
/* sdata 3efca8 */ reference_fixed_array<SCREEN_EFFECT_PARAMETER *,6> pScreenEffectParamPtr;
/* sdata 3efcac */ void *pEffectHeapAdrs;
/* sbss 3f5268 */ unsigned char EFFECT_CONT type_info node[8];
/* bss 4cdaf0 */ unsigned char SCREEN_EFFECT_PARAMETER * type_info node[12];
/* sbss 3f5260 */ unsigned char SCREEN_EFFECT_PARAMETER type_info node[8];
/* data 2e20a0 */ SBTSET msbtset;
/* sdata 3efcc8 */ u_char g_bInterlace;
/* bss 423430 */ EFF_WRK eff_wrk;
/* sdata 3efccc */ int look_debugmenu;
/* sbss 3f4b68 */ int ScreenEffectStatus;
/* sbss 3f4b6c */ int ScreenEffectNo;
/* bss 423450 */ MY_MALLOC EffectMallocWrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_butterfly.c
// *****************************************************************************

/* data 2e20e0 */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType00;
/* data 2e2110 */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType01;
/* data 2e2140 */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType02;
/* data 2e2170 */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType03;
/* data 2e21a0 */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType04;
/* data 2e21d0 */ GRA3DLIGHTDATA ButterflyLight;
/* sdata 3efd10 */ reference_fixed_array<BUTTERFLY_TARGET_PARAMETER *,5> pButterflyTargetParamPtr;
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* bss 4cdb00 */ unsigned char BUTTERFLY_TARGET_PARAMETER * type_info node[12];
/* sbss 3f5270 */ unsigned char BUTTERFLY_TARGET_PARAMETER type_info node[8];
/* data 2e3570 */ BUTTERFLY_DISP_CTRL ButterFlyDispCtrl;
/* data 2e3580 */ BUTTERFLY_PARTICLE_CTRL ButterFlyParticleCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_ene.c
// *****************************************************************************

/* data 2e3590 */ ENE_DMG_LARGE_HIT_PARAMETER SmallHit;
/* data 2e35f0 */ ENE_DMG_LARGE_HIT_PARAMETER LargeHitType00;
/* data 2e3650 */ ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPAType00;
/* data 2e36b0 */ ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPBType00;
/* data 2e3710 */ ENE_DMG_LARGE_HIT_PARAMETER SlowHitAType00;
/* data 2e3770 */ ENE_DMG_LARGE_HIT_PARAMETER SlowHitBType00;
/* data 2e37d0 */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitA;
/* data 2e3830 */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitB;
/* data 2e3890 */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCA;
/* data 2e38f0 */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCB;
/* data 2e3950 */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPA;
/* data 2e39b0 */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPB;
/* data 2e3a10 */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitA;
/* data 2e3a70 */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitB;
/* data 2e3ad0 */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCA;
/* data 2e3b30 */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCB;
/* data 2e3b90 */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPA;
/* data 2e3bf0 */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPB;
/* data 2e3c50 */ ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitA;
/* data 2e3cb0 */ ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitB;
/* data 2e3d10 */ ENE_DMG_LARGE_HIT_PARAMETER ViewHitA;
/* data 2e3d70 */ ENE_DMG_LARGE_HIT_PARAMETER ViewHitB;
/* data 2e3dd0 */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitA;
/* data 2e3e30 */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitB;
/* data 2e3e90 */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCA;
/* data 2e3ef0 */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCB;
/* data 2e3f50 */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPA;
/* data 2e3fb0 */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPB;
/* data 2e4010 */ ENE_DMG_LARGE_HIT_PARAMETER RenHitA;
/* data 2e4070 */ ENE_DMG_LARGE_HIT_PARAMETER RenHitB;
/* data 2e40d0 */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSCA;
/* data 2e4130 */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSCB;
/* data 2e4190 */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSPA;
/* data 2e41f0 */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSPB;
/* data 2e4250 */ ENE_DMG_LARGE_HIT_PARAMETER TsuiHitA;
/* data 2e42b0 */ ENE_DMG_LARGE_HIT_PARAMETER TsuiHitB;
/* data 2e4310 */ ENE_DMG_LARGE_HIT_PARAMETER FuuHitA;
/* data 2e4370 */ ENE_DMG_LARGE_HIT_PARAMETER FuuHitB;
/* data 2e43d0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER SmallHit_Blur;
/* data 2e4420 */ ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHit_Blur;
/* data 2e4470 */ ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHitSP_Blur;
/* data 2e44c0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER SlowHit_Blur;
/* data 2e4510 */ ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHit_Blur;
/* data 2e4560 */ ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSC_Blur;
/* data 2e45b0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSP_Blur;
/* data 2e4600 */ ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHit_Blur;
/* data 2e4650 */ ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSC_Blur;
/* data 2e46a0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSP_Blur;
/* data 2e46f0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER ParalyzeHit_Blur;
/* data 2e4740 */ ENE_DMG_BLUR_CONTRAST_PARAMETER ViewHit_Blur;
/* data 2e4790 */ ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHit_Blur;
/* data 2e47e0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSC_Blur;
/* data 2e4830 */ ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSP_Blur;
/* data 2e4880 */ ENE_DMG_BLUR_CONTRAST_PARAMETER RenHit_Blur;
/* data 2e48d0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSC_Blur;
/* data 2e4920 */ ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSP_Blur;
/* data 2e4970 */ ENE_DMG_BLUR_CONTRAST_PARAMETER TsuiHit_Blur;
/* data 2e49c0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER FuuHit_Blur;
/* data 2e4a10 */ fixed_array<ENDMG1,10> enedmg1;
/* data 2e4fb0 */ ENE_DMG_LARGE_HIT_CTRL EneDmgLargeHitCtrl;
/* sdata 3efd5c */ float enedmg2_sp;
/* sdata 3efd60 */ int SEC0;
/* sdata 3efd64 */ int SEC1;
/* sdata 3efd68 */ int SEC2;
/* sdata 3efd6c */ int SEC3;
/* sdata 3efd70 */ int SEC4;
/* sdata 3efd74 */ int SEC5;
/* sbss 3f4b78 */ reference_fixed_array<ENE_DMG_LARGE_HIT_PARAMETER *,38> pLargeHitParameter;
/* sbss 3f4b80 */ reference_fixed_array<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20> pLargeHitBlurParameter;
/* bss 423480 */ fixed_array<TAIL_DMG2_DAT,48> enedmg2_tail;
/* bss 42e880 */ fixed_array<NEW_PERTICLE,48> new_perticle;
/* sbss 3f4b88 */ reference_fixed_array<int,3> alp;
/* sbss 3f4b90 */ reference_fixed_array<int,3> scl;
/* sbss 3f4b98 */ reference_fixed_array<int,3> rot;
/* sbss 3f4ba0 */ reference_fixed_array<int,3> ccol;
/* sbss 3f4ba8 */ reference_fixed_array<int,3> calp;
/* sbss 3f52b0 */ unsigned char ENDMG1 type_info node[8];
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f52a8 */ unsigned char SPRT_DAT type_info node[8];
/* sbss 3f52b8 */ unsigned char NEW_PERTICLE type_info node[8];
/* sbss 3f51a8 */ unsigned char float [3][3] type_info node[8];
/* sbss 3f5298 */ unsigned char TAIL_DMG2_DAT type_info node[8];
/* sbss 3f52a0 */ unsigned char ENEDMG_PARTICLE_ONE type_info node[8];
/* sbss 3f5280 */ unsigned char int [3] type_info node[8];
/* sbss 3f5278 */ unsigned char ENE_DMG_LARGE_HIT type_info node[8];
/* bss 4cdb20 */ unsigned char ENE_DMG_LARGE_HIT_PARAMETER * type_info node[12];
/* bss 4cdb10 */ unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER * type_info node[12];
/* sbss 3f5288 */ unsigned char ENE_DMG_LARGE_HIT_PARAMETER type_info node[8];
/* sbss 3f52c0 */ unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER type_info node[8];
/* data 2e5120 */ ENDMG2 enedmg2;
/* data 2e5130 */ ENE_HIT_EFFECT_CTRL EneHitEffectCtrl;
/* sdata 3efd98 */ int eneseal_status;
/* sdata 3efd9c */ int enedmg_status;
/* sbss 3f4bac */ int EneDmgParticleSuctionNum;
/* data 2e5170 */ SWORD_LINE sw_line;
/* data 2e5180 */ ENE_DMG_EFF ene_dmg_eff;
/* data 2e51d0 */ SINGLE_LINK_LIST EneParticleList;
/* data 2e51e0 */ SINGLE_LINK_LIST EffectEndParticleList;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_obj.c
// *****************************************************************************

/* data 2e51f0 */ fixed_array<EFFINFO2,8> efi;
/* bss 43d6e0 */ EFF_PARTSBLUR eff_partsblur;
/* sbss 3f52c8 */ unsigned char EFFINFO2 type_info node[8];
/* sbss 3f5280 */ unsigned char int [3] type_info node[8];
/* sbss 3f52d0 */ unsigned char EFFPOS type_info node[8];
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f4bb4 */ int init_pdef2;
/* rdata 3a68d8 */ u_char pdeform_alpha1[289];
/* rdata 3a6a00 */ u_char pdeform_alpha2[289];
/* data 2fbbd0 */ LIGHT_COME_IN_CTRL LightComeInCtrl;
/* data 2fbbe0 */ SINGLE_LINK_LIST WaterFlowList;
/* data 2fbbf0 */ SINGLE_LINK_LIST ModelAlphaChangeList;
/* data 2fbc00 */ SINGLE_LINK_LIST TourouFreaList;
/* data 2fbc10 */ SINGLE_LINK_LIST TourouBaseList;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_oth.c
// *****************************************************************************

/* data 2fbc20 */ HAZE_PARAMETER HazeParameter;
/* data 2fbcc8 */ HAZE_PARAMETER KusabiHazeParameter;
/* data 2fbd70 */ HAZE_PARAMETER SaeHazeParameter;
/* sdata 3efe68 */ int stop_lf;
/* sdata 3efe6c */ int haze_stop;
/* data 2fbe20 */ DOOR_SEAL_DISAPPEAR_CTRL DoorSealDisappearCtrl;
/* data 2fbf30 */ float CandlePolyDat[4][4];
/* data 2fbf70 */ float CandleFlameScaleData[150][2];
/* data 2fc420 */ float CandleFlameScaleData2[75][2];
/* bss 43d750 */ fixed_array<EFF_LEAF,6> eff_leaf;
/* bss 43f610 */ fixed_array<HEAT_HAZE,4> ene_particle;
/* bss 44f050 */ fixed_array<HEAT_HAZE,1> amu_particle;
/* bss 452ee0 */ fixed_array<HEAT_HAZE,5> torch_particle;
/* sbss 3f52f0 */ unsigned char HEAT_HAZE type_info node[8];
/* sbss 3f52f8 */ unsigned char MANY_CANDLE_PARTICLE type_info node[8];
/* sbss 3f5280 */ unsigned char int [3] type_info node[8];
/* sbss 3f52e8 */ unsigned char PARTICLE type_info node[8];
/* sbss 3f5300 */ unsigned char EFF_LEAF type_info node[8];
/* sbss 3f52e0 */ unsigned char EFF_LEAF_ONE type_info node[8];
/* sbss 3f52d8 */ unsigned char HAZE_PARTICLE type_info node[8];
/* sbss 3f4bc0 */ int init_pond;
/* sbss 3f4bc4 */ int init_hhaze;
/* sbss 3f4bc8 */ int init_newitem;
/* sbss 3f4bcc */ int init_torch;
/* sbss 3f4bd0 */ int init_smoke;
/* sbss 3f4bd4 */ void *amulet_fire_ret;
/* sbss 3f4bd8 */ int amulet_fire_flow;
/* sbss 3f4bdc */ int amulet_fire_cnt;
/* data 2fc6b0 */ MANY_CANDLE_LOAD_CTRL ManyCandleLoadCtrl;
/* data 2fc6f0 */ SINGLE_LINK_LIST ItemEffectList;
/* data 2fc700 */ THUNDER_LIGHT_CTRL ThunderLightCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_pak.c
// *****************************************************************************

/* sdata 3efeb8 */ int ndpkt;
/* sdata 3efebc */ int ndpri;
/* bss 4667b0 */ u_int draw_pri[4096][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_rain.c
// *****************************************************************************

/* bss 46e7b0 */ EFFECT_RAIN_CTRL RainCtrl;
/* bss 46e7f0 */ EFFECT_SPRAY_CTRL SprayCtrl;
/* bss 46e850 */ EFFECT_SPRAY_CTRL SprayCtrl2;
/* bss 46e8b0 */ EFFECT_DROP_CTRL DropCtrl;
/* rdata 3a72b0 */ SPRAY_APPEAR_DATA SprayRect[5];
/* rdata 3a7440 */ SPRAY_APPEAR_DATA SprayRect2[23];
/* rdata 3a7b70 */ RAIN_HIT_BOX OutsideBox;
/* rdata 3a7b90 */ RAIN_HIT_BOX InsideBox;
/* rdata 3a7bb0 */ float DropOfWaterPos[35][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_rdr.c
// *****************************************************************************

/* data 2fc740 */ fixed_array<BURN_FIRE,30> burn_fire;
/* data 2fd280 */ fixed_array<EFFRDR_RSV,10> pfire_rsv;
/* sbss 3f5310 */ unsigned char EFFRDR_RSV type_info node[8];
/* sbss 3f5308 */ unsigned char BURN_FIRE type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_scr.c
// *****************************************************************************

/* data 2fd500 */ EFF_BLUR eff_blur;
/* data 2fd528 */ EFF_FOCUS eff_focus;
/* sdata 3eff80 */ EFF_DEFORM eff_deform;
/* sdata 3eff88 */ short int overlap_passflg[2];
/* sdata 3eff8c */ int SSC_BankNo;
/* bss 473720 */ SCREEN_SAVER_CTRL ScreenSaverCtrl;
/* sbss 3f5318 */ unsigned char SCREEN_SAVER_TEX type_info node[8];
/* sbss 3f4be0 */ MAKE_DITHER_PATTERN_CTRL MakeDitherPatternCtrl;
/* bss 473778 */ DEFWORK dw[25][33];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_sub.c
// *****************************************************************************

/* data 2fd560 */ SCRCTRL sc_col;
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* data 2fd570 */ SINGLE_LINK_LIST LeavesList;
/* sbss 3f4be4 */ u_long128 *buf;
/* sbss 3f4be8 */ u_long128 *buf2;
/* sbss 3f4bec */ u_long128 *bufz;
/* data 2fd580 */ EFFECT_SOUND_CTRL EffectSoundCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_torch.c
// *****************************************************************************

/* data 2fd5b0 */ TORCH2_PARAMETER TorchType00;
/* data 2fd628 */ TORCH2_PARAMETER TorchType01;
/* data 2fd6a0 */ TORCH2_PARAMETER TorchType02;
/* data 2fd718 */ TORCH2_PARAMETER TorchType03;
/* data 2fd790 */ TORCH2_PARAMETER TorchType04;
/* data 2fd808 */ TORCH2_PARAMETER TorchType05;
/* data 2fd880 */ TORCH2_PARAMETER TorchType06;
/* data 2fd8f8 */ TORCH2_PARAMETER TorchType07;
/* data 2fd970 */ TORCH2_PARAMETER TorchType08;
/* data 2fd9e8 */ TORCH2_BURST_PARAMETER TorchBurstType00;
/* data 2fda10 */ TORCH2_BURST_PARAMETER TorchBurstType01;
/* data 2fda38 */ TORCH2_BURST_PARAMETER TorchBurstType02;
/* data 2fda60 */ TORCH2_BURST_PARAMETER TorchBurstType03;
/* data 2fda88 */ TORCH2_BURST_PARAMETER TorchBurstType04;
/* data 2fdab0 */ TORCH2_BURST_PARAMETER TorchBurstType05;
/* data 2fdad8 */ TORCH2_BURST_PARAMETER TorchBurstType06;
/* data 2fdb00 */ TORCH2_BURST_PARAMETER TorchBurstType07;
/* data 2fdb28 */ TORCH2_BURST_PARAMETER TorchBurstType08;
/* data 2fdb50 */ TORCH2_SPARK_PARAMETER TorchSparkType00;
/* data 2fdba0 */ TORCH2_SPARK_PARAMETER TorchSparkType01;
/* data 2fdbf0 */ TORCH2_SPARK_PARAMETER TorchSparkType02;
/* data 2fdc40 */ TORCH2_SPARK_PARAMETER TorchSparkType03;
/* data 2fdc90 */ TORCH2_SPARK_PARAMETER TorchSparkType04;
/* data 2fdce0 */ TORCH2_SPARK_PARAMETER TorchSparkType05;
/* data 2fdd30 */ TORCH2_SPARK_PARAMETER TorchSparkType06;
/* data 2fdd80 */ TORCH2_SPARK_PARAMETER TorchSparkType07;
/* data 2fddd0 */ TORCH2_SPARK_PARAMETER TorchSparkType08;
/* sdata 3f00c0 */ reference_fixed_array<TORCH2_PARAMETER *,9> pTorchParamPtr;
/* sdata 3f00c8 */ reference_fixed_array<TORCH2_BURST_PARAMETER *,9> pTorchBurstParamPtr;
/* sdata 3f00d0 */ reference_fixed_array<TORCH2_SPARK_PARAMETER *,9> pTorchSparkParamPtr;
/* bss 4cdb30 */ unsigned char TORCH2_PARAMETER * type_info node[12];
/* bss 4cdb40 */ unsigned char TORCH2_BURST_PARAMETER * type_info node[12];
/* bss 4cdb50 */ unsigned char TORCH2_SPARK_PARAMETER * type_info node[12];
/* sbss 3f52e8 */ unsigned char PARTICLE type_info node[8];
/* sbss 3f5328 */ unsigned char TORCH2_PARAMETER type_info node[8];
/* sbss 3f5320 */ unsigned char TORCH2_BURST_PARAMETER type_info node[8];
/* sbss 3f5330 */ unsigned char TORCH2_SPARK_PARAMETER type_info node[8];
/* data 2fde20 */ TORCH2_BIGFREA_CTRL Torch2BigFreaCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/ene_mot_ctrl.c
// *****************************************************************************

/* data 2fde40 */ ENE_MOT_WRK enemot_ch019anm002[2];
/* data 2fde50 */ ENE_MOT_WRK *enemot_ch019[17];
/* data 2fde98 */ ENE_MOT_WRK enemot_ch021anm010[3];
/* data 2fdeb0 */ ENE_MOT_WRK enemot_ch021anm011[3];
/* data 2fdec8 */ ENE_MOT_WRK enemot_ch021anm012[3];
/* data 2fdee0 */ ENE_MOT_WRK *enemot_ch021[13];
/* data 2fdf18 */ ENE_MOT_WRK enemot_ch025anm016[3];
/* data 2fdf30 */ ENE_MOT_WRK *enemot_ch025[13];
/* data 2fdf68 */ ENE_MOT_WRK enemot_ch031anm000[2];
/* data 2fdf78 */ ENE_MOT_WRK enemot_ch031anm002[2];
/* data 2fdf88 */ ENE_MOT_WRK enemot_ch031anm014[2];
/* data 2fdf98 */ ENE_MOT_WRK enemot_ch031anm015[2];
/* data 2fdfa8 */ ENE_MOT_WRK enemot_ch031anm016[2];
/* data 2fdfb8 */ ENE_MOT_WRK enemot_ch031anm017[2];
/* data 2fdfc8 */ ENE_MOT_WRK enemot_ch031anm018[2];
/* data 2fdfd8 */ ENE_MOT_WRK enemot_ch031anm019[2];
/* data 2fdfe8 */ ENE_MOT_WRK *enemot_ch031[15];
/* sbss 3f4bf0 */ reference_fixed_array<ENE_MOT_WRK **,63> ene_mot_char_tbl;
/* bss 478720 */ fixed_array<ENE_MOT_CTRL,10> ene_mot_ctrl;
/* sbss 3f5340 */ unsigned char ENE_MOT_CTRL type_info node[8];
/* bss 4cdb60 */ unsigned char ENE_MOT_WRK ** type_info node[12];
/* bss 4cdb70 */ unsigned char ENE_MOT_WRK * type_info node[12];
/* sbss 3f5338 */ unsigned char ENE_MOT_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/enemy.c
// *****************************************************************************

/* data 2fe030 */ fixed_array<ENE_WRK,10> ene_wrk;
/* data 300dd0 */ DITHER_TYPE dit_type[9];
/* data 300e60 */ DEFORM_TYPE def_type1[10];
/* data 300ed8 */ DEFORM_TYPE def_type2[10];
/* sdata 3f01e8 */ reference_fixed_array<int,3> ew_combo_tbl;
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f5268 */ unsigned char EFFECT_CONT type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4bf8 */ int earth_quake_cnt;
/* sbss 3f4bfc */ int enemy_act_lock_cnt;
/* sbss 3f4c00 */ int enemy_draw_lock_cnt;
/* sbss 3f4c04 */ int enemy_anim_lock_cnt;
/* sbss 3f4c08 */ int iPreNearestNoHP;
/* sbss 3f4c0c */ int iPreNearestNo;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/enemy_act.c
// *****************************************************************************

/* sdata 3f0200 */ int debug_alg;
/* data 300f50 */ void (*CommJmpContTbl[74])(/* parameters unknown */);
/* data 301078 */ void (*CommJmpMoveTbl[22])(/* parameters unknown */);
/* data 3010d0 */ void (*CommJmpBrnchTbl[43])(/* parameters unknown */);
/* data 301180 */ void (*CommJmpEffTbl[6])(/* parameters unknown */);
/* data 301198 */ void (*BCommJmpTbl[8])(/* parameters unknown */);
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/enemy_dat.c
// *****************************************************************************

/* data 3011b8 */ ENE_DAT jene_dat[312];
/* sdata 3f0278 */ int g_iNumJeneDat;
/* data 309f18 */ AENE_DAT aene_dat[205];
/* bss 478c38 */ ENE_DAT_SAVE jene_dat_save[312];
/* bss 478d70 */ ENE_DAT_SAVE aene_dat_save[205];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_change.c
// *****************************************************************************

/* bss 478e40 */ fixed_array<EV_CHANGE_CTRL,30> ev_change_ctrl;
/* sbss 3f5350 */ unsigned char EV_CHANGE_CTRL type_info node[8];
/* sbss 3f5348 */ unsigned char EVENT_STATE type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_disp.c
// *****************************************************************************

/* bss 478fa8 */ EV_DISP2D_CTRL ev_disp2d_ctrl;
/* sbss 3f4c20 */ EV_CHAPTER_DISP ev_chapter_disp;
/* bss 478fd8 */ EV_ITEM_NAME_DISP ev_item_name_disp;
/* sbss 3f4c28 */ void *ev_disp2d_addr;
/* sbss 3f4c2c */ void *chapter_load_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/dat/ev_disp_dat.c
// *****************************************************************************

/* data 30dbf8 */ SPRT_DAT ev_disp2d_dat[2];
/* data 30dc38 */ SPRT_DAT ev_chapter_dat[2];
/* sdata 3f0330 */ reference_fixed_array<int,11> chapter_tim_file;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_ene.c
// *****************************************************************************

/* bss 478ff0 */ ENE_LOAD_DATS ev_ene_dats[66][4];
/* bss 479830 */ ENE_DATS ene_dats[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_exe.c
// *****************************************************************************

/* bss 479850 */ fixed_array<EV_EXE_CTRL,150> ev_exe_ctrl;
/* sbss 3f5358 */ unsigned char EV_EXE_CTRL type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_get.c
// *****************************************************************************

/* sbss 3f5348 */ unsigned char EVENT_STATE type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_macro.c
// *****************************************************************************

/* data 30dc78 */ EV_EXE_WRK ev_exe_wrk[173];
/* data 30fa38 */ IF_COND_WRK if_cond_wrk[8];
/* sdata 3f042e */ char synchro_mode_flg;
/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 369d88 */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data 369e88 */ __vtbl_ptr_type CFileName virtual table[3];
/* bss 47a1b0 */ fixed_array<EV_SOUND_CTRL,30> ev_sound_ctrl;
/* bss 47a318 */ fixed_array<EV_STREAM_CTRL,2> ev_stream_ctrl;
/* bss 47a328 */ fixed_array<EV_GHOST_CTRL,10> ev_ghost_ctrl;
/* bss 47a3a0 */ fixed_array<EV_SAVE_STREAM,2> ev_save_stream;
/* bss 47a3c0 */ fixed_array<EV_SAVE_OBJ_STREAM,2> ev_save_obj_stream;
/* bss 47a3f0 */ fixed_array<EV_SAVE_POS_STREAM,2> ev_save_pos_stream;
/* bss 4cdad0 */ unsigned char CFileName type_info node[12];
/* sbss 3f5110 */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* sbss 3f5388 */ unsigned char EV_SAVE_STREAM type_info node[8];
/* sbss 3f5370 */ unsigned char EV_SAVE_OBJ_STREAM type_info node[8];
/* sbss 3f5360 */ unsigned char EV_SAVE_POS_STREAM type_info node[8];
/* sbss 3f5368 */ unsigned char EV_SOUND_CTRL type_info node[8];
/* sbss 3f5378 */ unsigned char EV_STREAM_CTRL type_info node[8];
/* sbss 3f5380 */ unsigned char EV_GHOST_CTRL type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5238 */ unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info node[8];
/* sbss 3f4c30 */ EV_CHOICE_CTRL ev_choice_ctrl;
/* sbss 3f4c38 */ EV_EFF_CTRL ev_eff_ctrl;
/* sbss 3f4c40 */ EV_SAVE_EFF_DITHER ev_save_eff_dither;
/* sbss 3f4c48 */ EV_SAVE_SCREEN_EFFECT ev_save_screen_effect;
/* sbss 3f4c4c */ int evPlyrLockCnt;
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_main.c
// *****************************************************************************

/* data 30fb80 */ EV_WRK ev_wrk;
/* sbss 3f5348 */ unsigned char EVENT_STATE type_info node[8];
/* data 3119c0 */ CEventSisterGazeWrk ev_sister_gaze;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_open.c
// *****************************************************************************

/* data 3119e0 */ EV_COND_WRK ev_cond_wrk[48];
/* bss 47a430 */ fixed_array<EV_CTRL_CENTER,250> ev_ctrl_center;
/* bss 47ac00 */ fixed_array<EV_PRI_CTRL,250> ev_pri_ctrl;
/* sbss 3f5390 */ unsigned char EV_CTRL_CENTER type_info node[8];
/* sbss 3f5398 */ unsigned char EV_PRI_CTRL type_info node[8];
/* sdata 3f0520 */ EV_PHOTO_OBJ ev_photo_obj;
/* sbss 3f4c50 */ EV_COND_CTRL ev_cond_ctrl;
/* sbss 3f4c52 */ short int ev_pri_num;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_phase.c
// *****************************************************************************

/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_se.c
// *****************************************************************************

/* bss 47b3d0 */ int ev_se_reg_files[66][5];
/* bss 47b8f8 */ int sb_ids[2][5];
/* sbss 3f4c54 */ int ev_se_toggle;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_sis.c
// *****************************************************************************

/* bss 47b920 */ BIT_FLAGS<66> area_sis_flg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_talk.c
// *****************************************************************************

/* bss 47b930 */ fixed_array<TALK_TBL,8> talk_tbl;
/* sbss 3f53a8 */ unsigned char TALK_TBL type_info node[8];
/* sbss 3f53a0 */ unsigned char TALK_DATA type_info node[8];
/* bss 47bd70 */ TALK_EXE_CTRL talk_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/dat/ev_talk_dat.c
// *****************************************************************************

/* sdata 3f0628 */ reference_fixed_array<int,8> talk_info;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_timer.c
// *****************************************************************************

/* bss 47bd80 */ EV_TIMER_CTRL ev_timer_ctrl;
/* sbss 3f53b0 */ unsigned char REGIST_TIMER type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/camera/event_camera.c
// *****************************************************************************

/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f4c58 */ VCI_CAMERA_CTRL vci_cam_ctrl;
/* bss 47bf70 */ EVENT_CAMERA_CTRL event_camera_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/fade.c
// *****************************************************************************

/* data 312220 */ FADE_MODE_CTRL fade_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/fene_entry.c
// *****************************************************************************

/* sdata 3f06d8 */ int dbg_random_ghost;
/* rdata 3aca98 */ short int CFEneEntry::aResionAreaTbl[6];
/* rdata 3acaa8 */ FUYU_GHOST_DATA CFEneEntry::aFuyuGhostTbl[6][11];
/* rdata 3accc0 */ float CFEneEntry::aFuyuAppearTbl[66][3][4];
/* sdata 3f0700 */ FUYU_GHOST_ONE_DATA fene_dat0[1];
/* rdata 3adaf0 */ FUYU_GHOST_ONE_DATA fene_dat02_osaka[4];
/* rdata 3adb08 */ FUYU_GHOST_ONE_DATA fene_dat02_outdoor[6];
/* sdata 3f0708 */ FUYU_GHOST_ONE_DATA fene_dat02_kiryu[1];
/* sdata 3f0710 */ FUYU_GHOST_ONE_DATA fene_dat02_kureha[1];
/* rdata 3adb30 */ FUYU_GHOST_ONE_DATA fene_dat05_kurosawa[6];
/* rdata 3adb58 */ FUYU_GHOST_ONE_DATA fene_dat05_outdoor[5];
/* rdata 3adb78 */ FUYU_GHOST_ONE_DATA fene_dat05_osaka[4];
/* rdata 3adb90 */ FUYU_GHOST_ONE_DATA fene_dat05_kureha[3];
/* rdata 3adba8 */ FUYU_GHOST_ONE_DATA fene_dat07_kiryu[3];
/* rdata 3adbc0 */ FUYU_GHOST_ONE_DATA fene_dat08_outdoor[5];
/* rdata 3adbe0 */ FUYU_GHOST_ONE_DATA fene_dat08_kiryu[3];
/* rdata 3adbf8 */ FUYU_GHOST_ONE_DATA fene_dat08_tachibana[3];
/* rdata 3adc10 */ FUYU_GHOST_ONE_DATA fene_dat08_osaka[5];
/* rdata 3adc30 */ FUYU_GHOST_ONE_DATA fene_dat08_kureha[3];
/* rdata 3adc48 */ FUYU_GHOST_ONE_DATA fene_dat09_outdoor[5];
/* rdata 3adc68 */ FUYU_GHOST_ONE_DATA fene_dat09_kurosawa[5];
/* sbss 3f53b8 */ int FUYU_GHOST_ONE_DATA::mAppearNum;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/filament.c
// *****************************************************************************

/* sdata 3f0758 */ CBlinkSwitchVariable<char,90,118,6,90> mBlinkAlphaCore1;
/* sdata 3f0760 */ CBlinkSwitchVariable<char,90,112,11,90> mBlinkAlphaCore2;
/* sdata 3f0768 */ CBlinkSwitchVariable<char,90,116,13,90> mBlinkAlphaWhole1;
/* sdata 3f0770 */ CBlinkSwitchVariable<char,75,112,17,75> mBlinkAlphaWhole2;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/file.c
// *****************************************************************************

/* data 312230 */ FILE_DAT *file_dat_tbl[5];
/* bss 47bfe0 */ PLYR_FILE plyr_file;
/* bss 47c080 */ char *plyr_file_tbl[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/dat/file_dat.c
// *****************************************************************************

/* data 312248 */ FILE_DAT file_pocketbook[42];
/* data 3122f0 */ FILE_DAT file_scrap[42];
/* data 312398 */ FILE_DAT file_oldbook[40];
/* data 312438 */ FILE_DAT file_photograph[26];
/* data 3124a0 */ FILE_DAT file_map[10];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/file_tex_dat.c
// *****************************************************************************

/* sdata 3f07b8 */ int file_tex_pack[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/film_no.c
// *****************************************************************************

/* sdata 3f0800 */ MyPoint aTypeNumPoint[2];
/* sdata 3f0808 */ MyPoint aTypeCharPoint[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/finder.c
// *****************************************************************************

/* sdata 3f0850 */ int sp_chance_mode;
/* sdata 3f0854 */ int sp_chance_alpha;
/* sdata 3f0858 */ float sp_rot1;
/* sdata 3f085c */ float sp_rot2;
/* sdata 3f0860 */ int finder_sound_bank_id;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4c60 */ int finder_draw_lock;
/* data 3124c8 */ ENEDMGLINE_WRK enedmgline_wrk;
/* data 312898 */ INFO_WRK info_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/camera/finder_camera.c
// *****************************************************************************

/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/fly_ctrl.c
// *****************************************************************************

/* data 312948 */ FLY_DATA fly_dat[6];
/* bss 47c0a0 */ fixed_array<FLY_WRK,40> fly_wrk;
/* sbss 3f53c0 */ unsigned char FLY_WRK type_info node[8];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/fod.c
// *****************************************************************************

/* data 312a80 */ GRA3DLIGHTDATA FodLight;
/* sbss 3f53c8 */ unsigned char FOD_LIT_SERIAL type_info node[8];
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* data 313e20 */ float fod_cmn_mtx[4][4];
/* data 313e60 */ FOD_EFF_PARAM eff_param;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/foot_se.c
// *****************************************************************************

/* data 313ee0 */ int se_footDatList[280][2];
/* data 3147a0 */ int foot_se_label_tbl[18];
/* bss 4af390 */ FOOT_SE_MANAGE foot_se_manage[12];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/freq_camera.c
// *****************************************************************************

/* data 3147e8 */ float freqcam[14];
/* data 314820 */ float fovcam[3];
/* bss 4af3c0 */ FREQ_CAM freq_cam_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/g2d_debug.c
// *****************************************************************************

/* sdata 3f09e0 */ int dither_alp;
/* sdata 3f09e4 */ int dither_col;
/* sdata 3f09e8 */ int sbtset_old;
/* sdata 3f09f8 */ int hint_test_sw;
/* sdata 3f09fc */ int hint_test_posx;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/g2d_draw.c
// *****************************************************************************

/* sdata 3f0a3e */ u_char gInterlace;
/* data 314920 */ PK2D_WRK pk2d_wrk;
/* sdata 3f0a40 */ VIF1_GS_PACKET_CTRL vif1gs;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/g2d_main.c
// *****************************************************************************

/* data 314930 */ SPRT_DAT effdat[98];
/* data 315570 */ SPRT_DAT fntdat[6];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sdata 3f0a88 */ G2D_WRK g2d_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dCore.c
// *****************************************************************************

/* sdata 3f0b08 */ G3DCOREOBJECT *s_pObject;
/* sdata 3f0b20 */ LPFUNC_SETGSREGISTER IG3DCompatible::s_pFuncSetGsRegister;
/* sdata 3f0b24 */ LPFUNC_SETGSREGISTERS IG3DCompatible::s_pFuncSetGsRegisters;
/* sdata 3f0b28 */ LPFUNC_GETGSREGISTERREF IG3DCompatible::s_pFuncGetGsRegisterRef;
/* sdata 3f0b2c */ LPFUNC_SETTRANSFORM IG3DCompatible::s_pFuncSetTransform;
/* sdata 3f0b30 */ LPFUNC_GETTRANSFORMREF IG3DCompatible::s_pFuncGetTransformRef;
/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
/* rdata 3af118 */ LPFUNC_CALCCOLORDATA s_apfCalcColorData[3];
/* rdata 3af128 */ LPFUNC_LOADMATERIAL s_apfLoadMaterial[3];
/* rdata 3af138 */ LPFUNC_LOADCOLOR s_apfLoadColor[3];
/* rdata 3af148 */ LPFUNC_LOADCOLORCOEFF s_apfLoadColorCoeff[3];
/* rdata 3af158 */ LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorDirectionalLight[3];
/* rdata 3af168 */ LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorPointLight[3];
/* rdata 3af178 */ LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorSpotLight[3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dDebug.c
// *****************************************************************************

/* sdata 3f0b60 */ int s_bPrintConsoleInfinitely;
/* bss 4af3e0 */ _G3DLINEINFO s_LineInfo;
/* bss 4af3f0 */ sceGsDBuff db;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dDma.c
// *****************************************************************************

/* sdata 3f0be8 */ int s_bOpened;
/* data 315630 */ _PACKET_SETGSREGISTER s_packetSetRegister;
/* sbss 3f4c64 */ sceDmaChan *s_pDMAChan_VIF1;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dGsWrapper.c
// *****************************************************************************

/* sdata 3f0c48 */ LPFUNC_ONDETECTPACKETDOESNOTTERMINATED s_pFuncOnDetectedPacketDoesNotTerminated;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dRenderTarget.cpp
// *****************************************************************************

/* data 369f68 */ __vtbl_ptr_type CSprite virtual table[3];
/* data 369f80 */ __vtbl_ptr_type CRenderTarget virtual table[3];
/* data 369f98 */ __vtbl_ptr_type CAutoTransform<0> virtual table[4];
/* data 369fb8 */ __vtbl_ptr_type CAutoGsRegisters<3> virtual table[4];
/* data 369fd8 */ __vtbl_ptr_type IAutoState virtual table[3];
/* bss 4cdbb0 */ unsigned char IAutoState type_info node[12];
/* bss 4cdba0 */ unsigned char CAutoGsRegisters<3> type_info node[12];
/* bss 4cdb90 */ unsigned char CAutoTransform<0> type_info node[12];
/* bss 4cdb80 */ unsigned char CRenderTarget type_info node[12];
/* sbss 3f53d8 */ unsigned char CSprite type_info node[8];
/* sbss 3f53d0 */ unsigned char IG3DCompatible type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dSprite.cpp
// *****************************************************************************

/* data 369f68 */ __vtbl_ptr_type CSprite virtual table[3];
/* sbss 3f53d8 */ unsigned char CSprite type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dTexture.cpp
// *****************************************************************************

/* data 369ff0 */ __vtbl_ptr_type CTexture virtual table[4];
/* data 36a010 */ __vtbl_ptr_type IG3DResource virtual table[4];
/* sbss 3f53e0 */ unsigned char IG3DResource type_info node[8];
/* bss 4cdbc0 */ unsigned char CTexture type_info node[12];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dVif1.c
// *****************************************************************************

/* bss 4af620 */ G3DVIF1REGISTERLAYOUT s_Vif1RegisterLayout;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dVu0Instance.cpp
// *****************************************************************************

/* sdata 3f0d88 */ LPFUNC_VU0LOADMATRIX CVu0Matrix::s_pFuncLoadMatrix;
/* sdata 3f0d8c */ LPFUNC_VU0APPLYMATRIXWITHOUTTRANS CVu0Matrix::s_pFuncApplyMatrixWithoutTrans;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/gallery.c
// *****************************************************************************

/* data 315670 */ void (*GalleryCtrlModule[3])(/* parameters unknown */);
/* data 315680 */ void (*GalleryDispModule[3])(/* parameters unknown */);
/* sdata 3f0dd0 */ void *gal_og_tex_addr;
/* sdata 3f0dd4 */ void *gal_cmn_tex_addr;
/* sdata 3f0dd8 */ void *gal_top_tex_addr;
/* sdata 3f0ddc */ void *gal_view_tex_addr;
/* sdata 3f0de0 */ void *gal_pic_tex_addr;
/* data 315690 */ GAL_CTRL gal_ctrl;
/* sdata 3f0df0 */ GAL_CTRL *gc;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/gallery_dat.c
// *****************************************************************************

/* data 315708 */ SPRT_DAT gallery_tex[118];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/save_load/prg/game_data_save.c
// *****************************************************************************

/* sdata 3f0e78 */ void* (*GameDataSaveMemGet)(/* parameters unknown */);
/* sdata 3f0e7c */ void (*GameDataSaveMemFree)(/* parameters unknown */);
/* sdata 3f0e80 */ void *save_load_tex_addr;
/* sdata 3f0e84 */ void *outgame_cmn_tex_addr;
/* sdata 3f0e88 */ void *game_data_buff_addr;
/* data 3165c8 */ void *game_data_save_snap_addr[5];
/* sbss 3f4c78 */ reference_fixed_array<int,5> game_data_save_snap_tex;
/* bss 4af678 */ GAME_DATA_SAVE_CTRL game_data_save_ctrl;
/* sbss 3f4c80 */ GAME_DATA_SAVE_DISP game_data_save_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/game_result.c
// *****************************************************************************

/* sdata 3f0ed8 */ void *clear_bg_tex_addr;
/* sdata 3f0edc */ void *clear_char_tex_addr;
/* sbss 3f4c88 */ GAME_RESULT_CTRL game_result_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/game_result_top.c
// *****************************************************************************

/* bss 4af688 */ GAME_RESULT_TOP_CTRL game_result_top_ctrl;
/* bss 4af6a8 */ GAME_RESULT_TOP_DISP game_result_top_disp;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/dat/gameclear_dat.c
// *****************************************************************************

/* data 3165e0 */ SPRT_DAT gameclear_tex[50];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover.c
// *****************************************************************************

/* sbss 3f4c90 */ GAMEOVER_FADE_CTRL gameover_fade_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_dat.c
// *****************************************************************************

/* data 316c20 */ SPRT_DAT gameover_tex[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_menu.c
// *****************************************************************************

/* sdata 3f0f88 */ void *gameover_bg_tex_addr;
/* sbss 3f4c98 */ GAMEOVER_MENU_CTRL gameover_menu_ctrl;
/* bss 4af6c0 */ GAMEOVER_MENU_DISP gameover_menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_menu_load.c
// *****************************************************************************

/* sdata 3f0fd0 */ void *gameover_load_tex_addr;
/* sdata 3f0fd4 */ void *gameover_load_cmn_tex_addr;
/* sdata 3f0fd8 */ void *load_data_buff;
/* data 316c60 */ void *gameover_load_snap_addr[5];
/* sbss 3f4ca0 */ reference_fixed_array<int,5> gameover_load_snap_tex;
/* sbss 3f4ca8 */ GAMEOVER_LOAD_CTRL gameover_load_ctrl;
/* sbss 3f4cb0 */ GAMEOVER_LOAD_DISP gameover_load_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_menu_top.c
// *****************************************************************************

/* sdata 3f1020 */ void *gameover_menu_tex_addr;
/* sdata 3f1024 */ char gameover_menu_top_init_flg;
/* sbss 3f4cb8 */ GAMEOVER_MENU_TOP_CTRL gameover_menu_top_ctrl;
/* sbss 3f4cc0 */ GAMEOVER_MENU_TOP_DISP gameover_menu_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/ghost_seal_door.c
// *****************************************************************************

/* bss 4af6d0 */ fixed_array<unsigned char,9> ghost_seal_door_state;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/ghost_seal_door_dat.c
// *****************************************************************************

/* rdata 3b4288 */ GHOST_SEAL_DOOR_DATA ghost_seal_door_data[9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/main/glob.c
// *****************************************************************************

/* data 316c80 */ PAD_STRUCT pad[2];
/* data 317000 */ short unsigned int *key_now[32];
/* data 317080 */ short unsigned int *key_bak[32];
/* data 317100 */ SYS_WRK sys_wrk;
/* data 317120 */ OPTION_WRK opt_wrk;
/* data 317130 */ CAM_CUSTOM_WRK cam_custom_wrk;
/* data 317140 */ DEBUG_WRK debug_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/main/gphase.c
// *****************************************************************************

/* data 317178 */ void (*ini_func[94])(/* parameters unknown */);
/* data 3172f0 */ void (*end_func[94])(/* parameters unknown */);
/* data 317468 */ GPHASE_ENUM (*pre_func[94])(/* parameters unknown */);
/* data 3175e0 */ GPHASE_ENUM (*after_func[94])(/* parameters unknown */);
/* data 317758 */ GPHASE_DAT gphase_tbl[94];
/* bss 4af6e0 */ GPHASE_SYS gphase_sys;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3d.c
// *****************************************************************************

/* sdata 3f1080 */ CVu0Matrix g_Vu0Matrix;
/* sdata 3f1084 */ int s_bEnableMonotoneDraw;
/* sdata 3f1088 */ int s_bUseScratchpad;
/* data 317d40 */ GRA3DSCRATCHPADLAYOUT s_gra3dScratchpadLayoutDefault;
/* sdata 3f108c */ GRA3DSCRATCHPADLAYOUT *s_pScratchpadLayout;
/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
/* bss 4b0e80 */ G3DLIGHTMANAGE s_LightManage;
/* bss 4b10f0 */ G3DLIGHTMANAGE s_WorkLightManage;
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* bss 4b1360 */ GRA3DCAMERA s_Camera;
/* bss 4b1540 */ G3DFOG s_Fog;
/* bss 4b1550 */ sceVu0IVECTOR s_ivFogColor;
/* bss 4b1560 */ float clip_value[4];
/* bss 4b1570 */ G3DLIGHT s_aLight[39];
/* bss 4b2680 */ G3DLIGHT s_WorkaLight[39];
/* bss 4b3790 */ float s_lmDiffuseLight[3][4];
/* bss 4b37c0 */ float s_lmSpecularLight[3][4];
/* bss 4b37f0 */ float s_lmDiffuseColor[3][4];
/* bss 4b3820 */ float s_lmSpecularColor[3][4];
/* sbss 3f4cd0 */ unsigned int s_uiMaterialPrimType;
/* bss 4b3850 */ SGDMATERIALCACHE s_aMaterialCache[3];
/* bss 4b3880 */ GRA3DVU1MATERIALCACHE_POINT s_aVu1MaterialCache_Point[1];
/* bss 4b3900 */ GRA3DVU1MATERIALCACHE_SPOT s_aVu1MaterialCache_Spot[1];
/* bss 4b3980 */ GRA3DVU1MATERIALPACKET_DIRECTIONAL s_MaterialPacketDirectional;
/* bss 4b3a00 */ GRA3DVU1MATERIALPACKET_POINT s_MaterialPacketPoint;
/* bss 4b3a80 */ GRA3DVU1MATERIALPACKET_SPOT s_MaterialPacketSpot;
/* sbss 3f4cd4 */ int s_bFogEnable;
/* rdata 3b4c50 */ float clip_volume[4];
/* rdata 3b4c60 */ float clip_volumev[4];
/* rdata 3b4c70 */ G3DVIF1CMDDATA s_aVif1CmdData[6];
/* bss 4b3b00 */ int s_bLightEnableList[39];
/* sdata 3f10c8 */ LPFUNC_VIEWSCREENMATRIX s_apViewScreenMatrixFunc[2];
/* sdata 3f10d0 */ LPFUNC_VIEWCLIPMATRIX s_apViewClipMatrixFunc[2];
/* sdata 3f10d8 */ G3DINTFLOAT s_if_1_255;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dConst.c
// *****************************************************************************

/* sdata 3f1170 */ unsigned int g_uiMustBeSetValue;
/* sdata 3f1174 */ G3DCOLOR g_colWhite;
/* sdata 3f1178 */ G3DCOLOR g_colBlack;
/* sdata 3f117c */ G3DCOLOR g_colGray;
/* sdata 3f1180 */ G3DCOLOR g_colRed;
/* sdata 3f1184 */ G3DCOLOR g_colGreen;
/* sdata 3f1188 */ G3DCOLOR g_colBlue;
/* sdata 3f118c */ G3DCOLOR g_colSkyblue;
/* sdata 3f1190 */ G3DCOLOR g_colPurple;
/* sdata 3f1194 */ G3DCOLOR g_colYellow;
/* rdata 3b4e20 */ float g_v1000[4];
/* rdata 3b4e30 */ float g_v0100[4];
/* rdata 3b4e40 */ float g_v0010[4];
/* rdata 3b4e50 */ float g_v1001[4];
/* rdata 3b4e60 */ float g_v0101[4];
/* rdata 3b4e70 */ float g_v0011[4];
/* rdata 3b4e80 */ float g_v0111[4];
/* rdata 3b4e90 */ float g_v1011[4];
/* rdata 3b4ea0 */ float g_v1101[4];
/* rdata 3b4eb0 */ float g_v0110[4];
/* rdata 3b4ec0 */ float g_v1010[4];
/* rdata 3b4ed0 */ float g_v1100[4];
/* rdata 3b4ee0 */ float g_v0001[4];
/* rdata 3b4ef0 */ float g_v1110[4];
/* rdata 3b4f00 */ float g_v1111[4];
/* rdata 3b4f10 */ float g_v0000[4];
/* rdata 3b4f20 */ float g_v111_1[4];
/* data 318180 */ XVECTOR g_xv0000;
/* rdata 3b4f30 */ float g_matUnit[4][4];
/* rdata 3b4f70 */ float g_VUmatUnit[4][4];
/* rdata 3b4fb0 */ G3DMATERIAL g_NullMaterial;
/* rdata 3b5000 */ G3DLIGHT g_NullLight;
/* rdata 3b5070 */ float g_matUnitScaled[4][4];
/* rdata 3b50b0 */ float g_vConvertSI2PS[4];
/* rdata 3b50c0 */ float g_vConvertPS2SI[4];
/* rdata 3b50d0 */ float g_matConvertSI2PS[4][4];
/* rdata 3b5110 */ float g_matConvertPS2SI[4][4];
/* data 318190 */ XMATRIX g_xmatConvertSI2PS;
/* data 3181d0 */ XMATRIX g_xmatConvertPS2SI;
/* rdata 3b5150 */ GRA3DCAMERA g_CameraDefault;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dDebug.c
// *****************************************************************************

/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dMisc.c
// *****************************************************************************

/* sdata 3f1230 */ int s_iObjdctIdDrawNoShadow;
/* sdata 3f1250 */ int s_bSpecialLightActive;
/* bss 4b3ba0 */ G3DLIGHT s_ProjectorSpot;
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dSGD.c
// *****************************************************************************

/* sdata 3f12a8 */ float *s_pGlobalVertexBuffer[4];
/* sdata 3f12ac */ float *s_pGlobalNormalBuffer[4];
/* sdata 3f12b0 */ int s_iGlobalBufferSize;
/* sbss 3f53e8 */ unsigned char _LIGHTCOMPAREDATA type_info node[8];
/* sbss 3f4cd8 */ SGDPROCUNITHEADER *save_tri2_pointer;
/* sbss 3f4cdc */ SGDPROCUNITHEADER *save_bw_pointer;
/* sbss 3f4ce0 */ SGDPROCUNITHEADER *s_ppuhVUVN;
/* sbss 3f4ce4 */ SGDCOORDINATE *s_pCoordBase;
/* sbss 3f4ce8 */ SGDFILEHEADER *s_pSGDTop;
/* bss 4b3c10 */ CoordCache ccahe;
/* sbss 3f4cec */ int edge_check;
/* sdata 3f1308 */ _LIGHTCOMPAREDATA s_NullLightCompareData;
/* sbss 3f4cf0 */ SGDPROCUNITHEADER *previous_tri2_prim;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dSGDData.c
// *****************************************************************************

/* sdata 3f1350 */ int s_bEnableOptimizeTexture;
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dShadow.c
// *****************************************************************************

/* data 318210 */ GRA3DSHADOWDEBUG g_gra3dShadowDebug;
/* sdata 3f13c0 */ int shadow_apgnum;
/* data 318230 */ GRA3DSCRATCHPADLAYOUT_MAPSHADOW s_gra3dScratchpadLayoutDefault;
/* sdata 3f13c4 */ GRA3DSCRATCHPADLAYOUT_MAPSHADOW *s_pScratchpadLayout;
/* data 3183d0 */ GRA3DCAMERA s_Camera;
/* bss 4b3c40 */ CRenderTarget s_RenderTarget;
/* bss 4b3cf0 */ fixed_stack<SGDFILEHEADER *,40> s_stackpProjectModel;
/* bss 4cdbd0 */ unsigned char SGDFILEHEADER * type_info node[12];
/* sbss 3f53f0 */ unsigned char SGDFILEHEADER type_info node[8];
/* bss 4b3da0 */ float s_vDirection[4];
/* bss 4b3db0 */ float s_matIP[4][4];
/* bss 4b3df0 */ float s_matCull[4][4];
/* bss 4b3e30 */ float s_avBB[9][4];
/* sbss 3f4cf4 */ SGDFILEHEADER *s_pSourceModel;
/* bss 4b3ec0 */ G3DLIGHT s_Light;
/* sbss 3f4cf8 */ float s_fFundamentScale;
/* sbss 3f4cfc */ float s_fTextureScale;
/* sbss 3f4d00 */ int s_iMaxTextureWidth;
/* sbss 3f4d04 */ int s_iMaxTextureHeight;
/* rdata 3b8450 */ float s_matTransTexture[4][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dTRI2.c
// *****************************************************************************

/* rdata 3b86b0 */ SGDTRI2FILEHEADER s_TRI2FileHeaderDefault;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graphics.c
// *****************************************************************************

/* sdata 3f14a8 */ int save_cross_line_cnt;
/* bss 4b3f30 */ float save_cross_line_pos[10][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/hina/hina_pzl.c
// *****************************************************************************

/* data 318690 */ void (*hina_pad_func[4])(/* parameters unknown */);
/* data 3186a0 */ void (*hina_disp_func[4])(/* parameters unknown */);
/* bss 4b3fd0 */ HINA_PZL_CTRL hina_pzl_ctrl;
/* bss 4b4028 */ HINA_PZL_DISP hina_pzl_disp;
/* sbss 3f4d08 */ HINA_PZL_CROSS_DISP hina_pzl_cross_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/hp_bar.c
// *****************************************************************************

/* sdata 3f1508 */ float disp_hp_per;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/ingame.c
// *****************************************************************************

/* data 3186b0 */ INGAME_WRK ingame_wrk;
/* data 3186c0 */ CMovieRoom movie_room;
/* data 318710 */ CFEneEntry fene_entry;
/* sdata 3f1550 */ int iPauseLockTimer;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4d10 */ int before_game_load_wait;
/* sbss 3f4d14 */ int load_game_step;
/* sbss 3f4d18 */ PHASE_CHANGE_REQS phase_change_reqs;
/* sbss 3f4d20 */ PHASE_CANGE_REQ_OUTGAME OutPhaseChangeFlg;
/* sbss 3f4d24 */ int story_effect_time;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/ingame_effect.c
// *****************************************************************************

/* bss 4b4040 */ fixed_array<SUBFUNC_PDEFORM_CTRL,10> SubFuncPDeformCtrl;
/* sbss 3f53f8 */ unsigned char SUBFUNC_PDEFORM_CTRL type_info node[8];
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* bss 4b4130 */ float ParticleEndPosFiner[4];
/* bss 4b4140 */ float ParticleEndPosNoFiner[4];
/* sbss 3f4d28 */ ZERO_PARTICLE_CTRL ZeroParticleCtrl;
/* sbss 3f4d30 */ int RenzFlareDispFlg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/item.c
// *****************************************************************************

/* data 318760 */ fixed_array<PLYR_ITEM,58> plyr_item;
/* sbss 3f5228 */ unsigned char PLYR_ITEM type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/dat/item_dat.c
// *****************************************************************************

/* data 318930 */ ITEM_DAT item_dat[58];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kai/kai_pzl.c
// *****************************************************************************

/* sdata 3f16c0 */ int KaiPzlGameMode;
/* sdata 3f16c4 */ int KaiPzlKaiCsl;
/* sdata 3f16c8 */ int KaiPzlKaiYesNo;
/* sdata 3f16cc */ int KaiPzlAnimTime;
/* sdata 3f16d0 */ int KaiPzlCnt;
/* sdata 3f16d4 */ int KaiPzlMsgNo;
/* sdata 3f16d8 */ int KaiPzlState;
/* sdata 3f16dc */ int KaiPzlEneType;
/* sdata 3f16e0 */ KAIPZL_MODE *KapPzlModeNowPtr;
/* data 319328 */ KAIPZL_MODE KaiPzlModeList[9];
/* data 319370 */ KAIPZL_ROT KaiPzlRotDat[2][2];
/* sdata 3f16e4 */ int KapPzlFadeNext;
/* sbss 3f4d38 */ int KaiPzlEnemID[2];
/* sbss 3f4d40 */ int KaiPzlRotY[2];
/* bss 4b4150 */ int KaiPzlFadeSt[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kaza2/kaza2_pzl.c
// *****************************************************************************

/* data 3193b0 */ void (*kaza_pzl_pad_func[6])(/* parameters unknown */);
/* data 3193c8 */ void (*kaza_pzl_disp_func[6])(/* parameters unknown */);
/* bss 4b4168 */ KAZA_PZL_CTRL kaza_pzl_ctrl;
/* bss 4b4190 */ KAZA_PZL_DISP kaza_pzl_disp;
/* bss 4b41b0 */ int *kaza2_panel_color[5];
/* rdata 3b9d50 */ int kaza2_panel_label_tbl[2][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kaza/kaza_pzl.c
// *****************************************************************************

/* data 3193e0 */ void (*kaza_pzl_pad_func[5])(/* parameters unknown */);
/* data 3193f8 */ void (*kaza_pzl_disp_func[5])(/* parameters unknown */);
/* bss 4b41c8 */ KAZA_PZL_CTRL kaza_pzl_ctrl;
/* bss 4b41f0 */ KAZA_PZL_DISP kaza_pzl_disp;
/* bss 4b4210 */ int *kaza_panel_color[5];
/* rdata 3ba128 */ int kaza_panel_label_tbl[2][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/pad/key_cnf.c
// *****************************************************************************

/* data 319410 */ u_short *default_key[32];
/* data 319490 */ u_short *default_key_bak[32];
/* data 319510 */ u_char key_type[32];
/* data 319530 */ short unsigned int *paddat_m[3][26];
/* data 319668 */ unsigned char *pushdat_m[3][26];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/lang_check.c
// *****************************************************************************

/* sdata 3f17b8 */ void *lang_check_data_buff;
/* sbss 3f4d48 */ LANG_CHECK_CTRL lang_check_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/lang_sel.c
// *****************************************************************************

/* sdata 3f1800 */ void *lang_sel_bg_addr;
/* sdata 3f1804 */ void *lang_sel_tex_addr;
/* sdata 3f1808 */ u_char set_language;
/* sbss 3f4d50 */ LANG_SEL_CTRL lang_sel_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/lang_sl_dat.c
// *****************************************************************************

/* data 3197a0 */ SPRT_DAT lang_sl_tex[17];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/level_gem.c
// *****************************************************************************

/* sbss 3f4d58 */ char plyr_level_gem;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/loadgame.c
// *****************************************************************************

/* sdata 3f1890 */ void *load_game_tex_addr;
/* sdata 3f1894 */ void *load_data_buff;
/* data 3199c0 */ void *load_game_snap_addr[5];
/* sbss 3f4d60 */ reference_fixed_array<int,5> load_game_snap_tex;
/* bss 4b4228 */ LOAD_GAME_CTRL load_game_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/loading/loading.c
// *****************************************************************************

/* sdata 3f18d8 */ void *loading_tex_addr;
/* sbss 3f4d68 */ LOADING_CTRL loading_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/loading/loading_dat.c
// *****************************************************************************

/* data 3199d8 */ SPRT_DAT loading_tex[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/logo.c
// *****************************************************************************

/* data 319a78 */ SPRT_DAT logodat[3];
/* bss 4b4238 */ LOGO_WRK logo_wrk;
/* sbss 3f4d70 */ void *tecmo_tex_addr;
/* sbss 3f4d74 */ void *project_tex_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/m_plyr_camera.c
// *****************************************************************************

/* data 319ad8 */ CNPlyrCamera m_plyr_camera;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/main/main.c
// *****************************************************************************

/* sdata 3f1988 */ int softreset_step_timer;
/* sbss 3f4d78 */ int *SubTitleAddr;
/* sbss 3f4d7c */ int soft_reset_disable;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/man_data.c
// *****************************************************************************

/* data 319de8 */ int aBoneLabelTbl[16];
/* data 36a030 */ __vtbl_ptr_type MAN_DATA virtual table[4];
/* sbss 3f5400 */ unsigned char MAN_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/map_area_dat.c
// *****************************************************************************

/* data 319e28 */ MAP_AREA_DAT map_area_dat[260];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_bgm.c
// *****************************************************************************

/* data 31c2b8 */ MAP_BGM_DAT map_bgm_tbl[240];
/* sdata 3f1a00 */ int bgm_act_flg;
/* bss 4b4248 */ MAP_BGM_SAVE map_bgmSave;
/* sbss 3f4d80 */ int bgm_room_id_save;
/* sbss 3f4d84 */ int bgm_play_id;
/* sbss 3f4d88 */ int now_str_file;
/* sbss 3f4d8c */ int bgm_now_sector;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/camera/map_camera.c
// *****************************************************************************

/* sdata 3f1a60 */ u_short fior_tm;
/* sdata 3f1a62 */ u_short ori_fior_tm;
/* bss 4b4610 */ MAP_CAMERA_CTRL map_camera_ctrl;
/* bss 4b4640 */ APPROACH_CAMERA app_camera;
/* bss 4b46f0 */ QUAKE_CAMERA_CTRL QuakeCameraCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_height.c
// *****************************************************************************

/* data 31c680 */ float mh_l_scale_vec[4];
/* data 31c690 */ float mh_b_scale_vec[4];
/* sbss 3f4d90 */ fixed_array<MhCtrl *,2> map_height_ctrl;
/* bss 4cdbe0 */ unsigned char MhCtrl * type_info node[12];
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f5408 */ unsigned char MhCtrl type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_rectangle.c
// *****************************************************************************

/* sdata 3f1ab8 */ MDAT_CAM *cam_info;
/* sdata 3f1abc */ int cam_change_flg;
/* sdata 3f1ac0 */ int cam_hit_flg;
/* sdata 3f1ac4 */ MDAT_SE *se_info;
/* data 31c6a0 */ MapRecBufCtrl map_buf_ctrl[2];
/* data 31c6f0 */ MapRecInfo map_rec_info;
/* data 31c758 */ MapRecInfo map_door_rec_info;
/* data 31c7c0 */ float sta_rot_tbl[6];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_reverb.c
// *****************************************************************************

/* data 31c7d8 */ MAP_REVERB_DAT map_reverb_tbl[66];
/* sbss 3f4d98 */ int rev_room_id_save;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/map_room_dat.c
// *****************************************************************************

/* data 31c860 */ MAP_INFO_DAT map_info_dat[17];
/* data 31c8e8 */ ROOM_INFO_DAT room_info_dat[265];
/* data 31dda0 */ HOUSE_INFO_DAT house_info_dat[11];
/* data 31de50 */ AREA_MAP_TBL area_map_tbl[80];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/map_size_dat.c
// *****************************************************************************

/* data 31e210 */ MAP_WORLD_POINT map_world_point[17];
/* data 31e298 */ MAP_SIZE_DAT map_size_dat[17];
/* data 31e320 */ MAP_SCALL_DAT map_scall_dat[17];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_check.c
// *****************************************************************************

/* bss 4b4708 */ MC_CHECK_CTRL mc_check_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_check_card.c
// *****************************************************************************

/* bss 4b4750 */ MC_INFO mc_info;
/* bss 4b4768 */ MC_CHECK_CARD_CTRL mc_check_card_ctrl;
/* sbss 3f4da0 */ MC_CHECK_CARD_EVERY_FRAME mc_check_card_every_frame;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_check_dir.c
// *****************************************************************************

/* bss 4b4780 */ MC_CHECK_DIR_CTRL mc_check_dir_ctrl;
/* bss 4b4800 */ MC_DIR_INFO mc_dir_info;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_close.c
// *****************************************************************************

/* sbss 3f4da8 */ MC_FILE_CLOSE_CTRL mc_file_close_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_del_all_file.c
// *****************************************************************************

/* bss 4b4cc0 */ MC_DEL_ALL_FILE_CTRL mc_del_all_file_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_del_dir.c
// *****************************************************************************

/* bss 4b4cd8 */ MC_DIR_DEL_CTRL mc_dir_del_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_del_file.c
// *****************************************************************************

/* bss 4b4ce8 */ MC_FILE_DEL_CTRL mc_file_del_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_format.c
// *****************************************************************************

/* bss 4b4d30 */ MC_FORMAT_CTRL mc_format_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_icon.c
// *****************************************************************************

/* sdata 3f1ae0 */ void *icon_data_addr;
/* bss 4b4d40 */ MC_ICON_CTRL mc_icon_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_icon_sys.c
// *****************************************************************************

/* bss 4b4d58 */ MC_ICON_SYS_CTRL mc_icon_sys_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/dat/mc_iconsys_dat.c
// *****************************************************************************

/* rdata 3bb570 */ int mc_bgcolor[4][4];
/* rdata 3bb5b0 */ float mc_lightdir[3][4];
/* rdata 3bb5e0 */ float mc_lightcol[3][4];
/* rdata 3bb610 */ float mc_ambient[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_load.c
// *****************************************************************************

/* bss 4b5130 */ MC_LOAD_CTRL mc_load_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make.c
// *****************************************************************************

/* bss 4b5180 */ MC_NEW_MAKE_CTRL mc_new_make_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make_all_file.c
// *****************************************************************************

/* bss 4b5198 */ MC_MAKE_ALL_FILE_CTRL mc_make_all_file_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make_dir.c
// *****************************************************************************

/* bss 4b51b8 */ MC_MAKE_DIR_CTRL mc_make_dir_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make_file.c
// *****************************************************************************

/* bss 4b51e0 */ MC_MAKE_FILE_CTRL mc_make_file_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_open.c
// *****************************************************************************

/* bss 4b5230 */ MC_FILE_OPEN_CTRL mc_file_open_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_read.c
// *****************************************************************************

/* bss 4b5248 */ MC_FILE_READ_CTRL mc_file_read_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_save.c
// *****************************************************************************

/* bss 4b5260 */ MC_SAVE_CTRL mc_save_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_set_data.c
// *****************************************************************************

/* data 31e3a8 */ void (**game_save_data[8])(/* parameters unknown */);
/* sdata 3f1b28 */ void (**album_save_data[2])(/* parameters unknown */);
/* bss 4b52b0 */ MC_PLAY_DATA_HEAD mc_play_data_head;
/* sbss 3f5410 */ unsigned char TIME_INFO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/dat/mc_title_dat.c
// *****************************************************************************

/* data 31e3c8 */ char *game_dir_name[6];
/* data 31e3e0 */ char *game_file_name[7];
/* sdata 3f1b40 */ char *album1_file_name[1];
/* sdata 3f1b48 */ char *album2_file_name[1];
/* sdata 3f1b50 */ char *album3_file_name[1];
/* sdata 3f1b58 */ char *album4_file_name[1];
/* sdata 3f1b60 */ char *album5_file_name[1];
/* rdata 3bbd60 */ char mc_icon_name[6][3][31];
/* rdata 3bbf90 */ char mc_icon_title[29];
/* rdata 3bbfb0 */ char mc_icon_sub_title[6][64];
/* rdata 3bc130 */ int icon_data_label[6][3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_write.c
// *****************************************************************************

/* bss 4b5338 */ MC_FILE_WRITE_CTRL mc_file_write_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/mdldat.c
// *****************************************************************************

/* sdata 3f1bc8 */ ANI_CODE ch000anm000[4];
/* data 31e400 */ ANI_CODE ch000anm001[5];
/* data 31e410 */ ANI_CODE ch000anm002[9];
/* data 31e428 */ ANI_CODE ch000anm003[9];
/* data 31e440 */ ANI_CODE ch000anm004[9];
/* data 31e458 */ ANI_CODE ch000anm005[9];
/* data 31e470 */ ANI_CODE ch000anm006[11];
/* data 31e488 */ ANI_CODE ch000anm007[11];
/* data 31e4a0 */ ANI_CODE ch000anm008[11];
/* data 31e4b8 */ ANI_CODE ch000anm009[11];
/* data 31e4d0 */ ANI_CODE ch000anm010[8];
/* data 31e4e0 */ ANI_CODE ch000anm011[8];
/* data 31e4f0 */ ANI_CODE ch000anm012[11];
/* data 31e508 */ ANI_CODE ch000anm013[11];
/* data 31e520 */ ANI_CODE ch000anm014[11];
/* data 31e538 */ ANI_CODE ch000anm015[11];
/* data 31e550 */ ANI_CODE ch000anm016[7];
/* data 31e560 */ ANI_CODE ch000anm017[7];
/* data 31e570 */ ANI_CODE ch000anm018[7];
/* data 31e580 */ ANI_CODE ch000anm019[7];
/* data 31e590 */ ANI_CODE ch000anm020[7];
/* data 31e5a0 */ ANI_CODE ch000anm021[7];
/* data 31e5b0 */ ANI_CODE ch000anm022[7];
/* data 31e5c0 */ ANI_CODE ch000anm023[7];
/* sdata 3f1bd0 */ ANI_CODE ch000anm024[2];
/* sdata 3f1bd8 */ ANI_CODE ch000anm025[2];
/* sdata 3f1be0 */ ANI_CODE ch000anm026[2];
/* sdata 3f1be8 */ ANI_CODE ch000anm027[2];
/* sdata 3f1bf0 */ ANI_CODE ch000anm028[2];
/* sdata 3f1bf8 */ ANI_CODE ch000anm029[2];
/* sdata 3f1c00 */ ANI_CODE ch000anm030[2];
/* sdata 3f1c08 */ ANI_CODE ch000anm031[2];
/* sdata 3f1c10 */ ANI_CODE ch000anm032[4];
/* sdata 3f1c18 */ ANI_CODE ch000anm033[4];
/* sdata 3f1c20 */ ANI_CODE ch000anm034[4];
/* sdata 3f1c28 */ ANI_CODE ch000anm035[4];
/* sdata 3f1c30 */ ANI_CODE ch000anm036[2];
/* sdata 3f1c38 */ ANI_CODE ch000anm037[2];
/* sdata 3f1c40 */ ANI_CODE ch000anm038[2];
/* sdata 3f1c48 */ ANI_CODE ch000anm039[2];
/* sdata 3f1c50 */ ANI_CODE ch000anm040[2];
/* sdata 3f1c58 */ ANI_CODE ch000anm041[2];
/* sdata 3f1c60 */ ANI_CODE ch000anm042[2];
/* sdata 3f1c68 */ ANI_CODE ch000anm043[2];
/* sdata 3f1c70 */ ANI_CODE ch000anm044[2];
/* sdata 3f1c78 */ ANI_CODE ch000anm045[2];
/* sdata 3f1c80 */ ANI_CODE ch000anm046[2];
/* sdata 3f1c88 */ ANI_CODE ch000anm047[2];
/* sdata 3f1c90 */ ANI_CODE ch000anm048[2];
/* sdata 3f1c98 */ ANI_CODE ch000anm049[2];
/* sdata 3f1ca0 */ ANI_CODE ch000anm050[3];
/* data 31e5d0 */ ANI_CODE ch000anm051[5];
/* sdata 3f1ca8 */ ANI_CODE ch000anm052[3];
/* sdata 3f1cb0 */ ANI_CODE ch000anm053[3];
/* data 31e5e0 */ ANI_CODE ch000anm054[5];
/* sdata 3f1cb8 */ ANI_CODE ch000anm055[3];
/* sdata 3f1cc0 */ ANI_CODE ch000anm056[3];
/* sdata 3f1cc8 */ ANI_CODE ch000anm057[3];
/* sdata 3f1cd0 */ ANI_CODE ch000anm058[3];
/* sdata 3f1cd8 */ ANI_CODE ch000anm059[3];
/* sdata 3f1ce0 */ ANI_CODE ch000anm060[2];
/* sdata 3f1ce8 */ ANI_CODE ch000anm061[2];
/* sdata 3f1cf0 */ ANI_CODE ch000anm062[2];
/* sdata 3f1cf8 */ ANI_CODE ch000anm063[2];
/* sdata 3f1d00 */ ANI_CODE ch000anm064[2];
/* data 31e5f0 */ ANI_CODE ch000anm065[5];
/* data 31e600 */ ANI_CODE ch000anm066[5];
/* sdata 3f1d08 */ ANI_CODE ch000anm067[2];
/* sdata 3f1d10 */ ANI_CODE ch000anm068[4];
/* sdata 3f1d18 */ ANI_CODE ch000anm069[2];
/* sdata 3f1d20 */ ANI_CODE ch000anm070[2];
/* sdata 3f1d28 */ ANI_CODE ch000anm071[2];
/* sdata 3f1d30 */ ANI_CODE ch001anm000[4];
/* data 31e610 */ ANI_CODE ch001anm001[9];
/* sdata 3f1d38 */ ANI_CODE ch001anm002[4];
/* data 31e628 */ ANI_CODE ch001anm003[7];
/* sdata 3f1d40 */ ANI_CODE ch001anm004[3];
/* data 31e638 */ ANI_CODE ch001anm005[6];
/* data 31e648 */ ANI_CODE ch001anm006[11];
/* data 31e660 */ ANI_CODE ch001anm007[5];
/* data 31e670 */ ANI_CODE ch001anm008[7];
/* data 31e680 */ ANI_CODE ch001anm009[7];
/* data 31e690 */ ANI_CODE ch001anm010[9];
/* data 31e6a8 */ ANI_CODE ch001anm011[9];
/* data 31e6c0 */ ANI_CODE ch001anm012[9];
/* data 31e6d8 */ ANI_CODE ch001anm013[9];
/* data 31e6f0 */ ANI_CODE ch001anm014[7];
/* data 31e700 */ ANI_CODE ch001anm015[7];
/* data 31e710 */ ANI_CODE ch001anm016[9];
/* data 31e728 */ ANI_CODE ch001anm017[9];
/* data 31e740 */ ANI_CODE ch001anm018[7];
/* data 31e750 */ ANI_CODE ch001anm019[7];
/* data 31e760 */ ANI_CODE ch001anm020[7];
/* data 31e770 */ ANI_CODE ch001anm021[7];
/* data 31e780 */ ANI_CODE ch001anm022[7];
/* data 31e790 */ ANI_CODE ch001anm023[7];
/* data 31e7a0 */ ANI_CODE ch001anm024[7];
/* data 31e7b0 */ ANI_CODE ch001anm025[7];
/* sdata 3f1d48 */ ANI_CODE ch001anm026[2];
/* sdata 3f1d50 */ ANI_CODE ch001anm027[2];
/* sdata 3f1d58 */ ANI_CODE ch001anm028[3];
/* data 31e7c0 */ ANI_CODE ch001anm029[5];
/* sdata 3f1d60 */ ANI_CODE ch001anm030[3];
/* sdata 3f1d68 */ ANI_CODE ch001anm031[3];
/* data 31e7d0 */ ANI_CODE ch001anm032[5];
/* sdata 3f1d70 */ ANI_CODE ch001anm033[3];
/* sdata 3f1d78 */ ANI_CODE ch001anm034[3];
/* sdata 3f1d80 */ ANI_CODE ch001anm035[3];
/* sdata 3f1d88 */ ANI_CODE ch001anm036[2];
/* sdata 3f1d90 */ ANI_CODE ch001anm037[2];
/* sdata 3f1d98 */ ANI_CODE ch001anm038[2];
/* sdata 3f1da0 */ ANI_CODE ch001anm039[2];
/* sdata 3f1da8 */ ANI_CODE ch001anm040[2];
/* data 31e7e0 */ ANI_CODE ch001anm041[6];
/* sdata 3f1db0 */ ANI_CODE ch001anm042[2];
/* data 31e7f0 */ ANI_CODE ch001anm043[11];
/* data 31e808 */ ANI_CODE ch001anm044[5];
/* sdata 3f1db8 */ ANI_CODE ch001anm045[3];
/* data 31e818 */ ANI_CODE ch003anm000[6];
/* sdata 3f1dc0 */ ANI_CODE ch003anm002[4];
/* sdata 3f1dc8 */ ANI_CODE ch003anm006[4];
/* sdata 3f1dd0 */ ANI_CODE ch003anm010[2];
/* sdata 3f1dd8 */ ANI_CODE ch003anm011[2];
/* sdata 3f1de0 */ ANI_CODE ch003anm012[2];
/* sdata 3f1de8 */ ANI_CODE ch003anm013[2];
/* sdata 3f1df0 */ ANI_CODE ch003anm015[2];
/* sdata 3f1df8 */ ANI_CODE ch005anm000[4];
/* sdata 3f1e00 */ ANI_CODE ch005anm001[4];
/* sdata 3f1e08 */ ANI_CODE ch005anm002[4];
/* sdata 3f1e10 */ ANI_CODE ch005anm003[4];
/* sdata 3f1e18 */ ANI_CODE ch010anm000[4];
/* sdata 3f1e20 */ ANI_CODE ch010anm002[4];
/* sdata 3f1e28 */ ANI_CODE ch010anm006[3];
/* sdata 3f1e30 */ ANI_CODE ch010anm007[2];
/* data 31e828 */ ANI_CODE ch010anm008[5];
/* sdata 3f1e38 */ ANI_CODE ch010anm009[2];
/* sdata 3f1e40 */ ANI_CODE ch010anm010[3];
/* sdata 3f1e48 */ ANI_CODE ch010anm011[3];
/* sdata 3f1e50 */ ANI_CODE ch010anm012[3];
/* sdata 3f1e58 */ ANI_CODE ch010anm013[3];
/* sdata 3f1e60 */ ANI_CODE ch010anm015[2];
/* sdata 3f1e68 */ ANI_CODE ch011anm000[4];
/* sdata 3f1e70 */ ANI_CODE ch011anm002[4];
/* sdata 3f1e78 */ ANI_CODE ch011anm006[3];
/* sdata 3f1e80 */ ANI_CODE ch011anm007[2];
/* data 31e838 */ ANI_CODE ch011anm008[5];
/* sdata 3f1e88 */ ANI_CODE ch011anm009[2];
/* sdata 3f1e90 */ ANI_CODE ch011anm010[3];
/* sdata 3f1e98 */ ANI_CODE ch011anm011[3];
/* sdata 3f1ea0 */ ANI_CODE ch011anm013[3];
/* sdata 3f1ea8 */ ANI_CODE ch012anm000[4];
/* sdata 3f1eb0 */ ANI_CODE ch012anm002[4];
/* sdata 3f1eb8 */ ANI_CODE ch012anm010[2];
/* sdata 3f1ec0 */ ANI_CODE ch013anm000[4];
/* sdata 3f1ec8 */ ANI_CODE ch013anm002[4];
/* sdata 3f1ed0 */ ANI_CODE ch013anm006[3];
/* sdata 3f1ed8 */ ANI_CODE ch013anm007[2];
/* data 31e848 */ ANI_CODE ch013anm008[5];
/* sdata 3f1ee0 */ ANI_CODE ch013anm009[2];
/* sdata 3f1ee8 */ ANI_CODE ch013anm010[2];
/* sdata 3f1ef0 */ ANI_CODE ch013anm011[2];
/* sdata 3f1ef8 */ ANI_CODE ch013anm012[2];
/* sdata 3f1f00 */ ANI_CODE ch013anm013[2];
/* sdata 3f1f08 */ ANI_CODE ch013anm014[4];
/* data 31e858 */ ANI_CODE ch013anm015[6];
/* data 31e868 */ ANI_CODE ch013anm016[5];
/* sdata 3f1f10 */ ANI_CODE ch013anm017[2];
/* sdata 3f1f18 */ ANI_CODE ch013anm018[4];
/* data 31e878 */ ANI_CODE ch014anm000[5];
/* sdata 3f1f20 */ ANI_CODE ch015anm000[4];
/* sdata 3f1f28 */ ANI_CODE ch015anm002[4];
/* sdata 3f1f30 */ ANI_CODE ch015anm004[4];
/* sdata 3f1f38 */ ANI_CODE ch015anm005[4];
/* sdata 3f1f40 */ ANI_CODE ch015anm006[3];
/* sdata 3f1f48 */ ANI_CODE ch015anm007[2];
/* data 31e888 */ ANI_CODE ch015anm008[5];
/* sdata 3f1f50 */ ANI_CODE ch015anm009[2];
/* sdata 3f1f58 */ ANI_CODE ch015anm010[3];
/* sdata 3f1f60 */ ANI_CODE ch015anm011[3];
/* sdata 3f1f68 */ ANI_CODE ch015anm012[3];
/* sdata 3f1f70 */ ANI_CODE ch015anm013[3];
/* sdata 3f1f78 */ ANI_CODE ch015anm014[4];
/* sdata 3f1f80 */ ANI_CODE ch015anm015[2];
/* data 31e898 */ ANI_CODE ch015anm016[7];
/* sdata 3f1f88 */ ANI_CODE ch015anm017[3];
/* sdata 3f1f90 */ ANI_CODE ch015anm018[2];
/* sdata 3f1f98 */ ANI_CODE ch015anm019[2];
/* sdata 3f1fa0 */ ANI_CODE ch015anm020[2];
/* sdata 3f1fa8 */ ANI_CODE ch017anm000[4];
/* sdata 3f1fb0 */ ANI_CODE ch017anm002[4];
/* sdata 3f1fb8 */ ANI_CODE ch017anm004[4];
/* sdata 3f1fc0 */ ANI_CODE ch017anm005[4];
/* sdata 3f1fc8 */ ANI_CODE ch017anm006[2];
/* sdata 3f1fd0 */ ANI_CODE ch017anm007[2];
/* sdata 3f1fd8 */ ANI_CODE ch017anm008[4];
/* sdata 3f1fe0 */ ANI_CODE ch017anm009[2];
/* sdata 3f1fe8 */ ANI_CODE ch017anm010[2];
/* sdata 3f1ff0 */ ANI_CODE ch017anm011[2];
/* sdata 3f1ff8 */ ANI_CODE ch017anm012[2];
/* sdata 3f2000 */ ANI_CODE ch017anm013[2];
/* sdata 3f2008 */ ANI_CODE ch017anm014[4];
/* sdata 3f2010 */ ANI_CODE ch017anm015[2];
/* data 31e8a8 */ ANI_CODE ch017anm016[6];
/* sdata 3f2018 */ ANI_CODE ch017anm017[2];
/* sdata 3f2020 */ ANI_CODE ch017anm018[2];
/* sdata 3f2028 */ ANI_CODE ch017anm019[2];
/* sdata 3f2030 */ ANI_CODE ch017anm020[2];
/* sdata 3f2038 */ ANI_CODE ch018anm000[4];
/* sdata 3f2040 */ ANI_CODE ch018anm002[4];
/* sdata 3f2048 */ ANI_CODE ch018anm006[2];
/* sdata 3f2050 */ ANI_CODE ch018anm007[2];
/* sdata 3f2058 */ ANI_CODE ch018anm008[4];
/* sdata 3f2060 */ ANI_CODE ch018anm014[4];
/* sdata 3f2068 */ ANI_CODE ch019anm000[4];
/* sdata 3f2070 */ ANI_CODE ch019anm002[4];
/* sdata 3f2078 */ ANI_CODE ch019anm006[3];
/* sdata 3f2080 */ ANI_CODE ch019anm007[2];
/* data 31e8b8 */ ANI_CODE ch019anm008[5];
/* sdata 3f2088 */ ANI_CODE ch019anm009[2];
/* sdata 3f2090 */ ANI_CODE ch019anm010[2];
/* sdata 3f2098 */ ANI_CODE ch019anm011[2];
/* sdata 3f20a0 */ ANI_CODE ch019anm012[2];
/* sdata 3f20a8 */ ANI_CODE ch019anm013[2];
/* sdata 3f20b0 */ ANI_CODE ch019anm014[4];
/* sdata 3f20b8 */ ANI_CODE ch019anm015[2];
/* sdata 3f20c0 */ ANI_CODE ch019anm016[2];
/* sdata 3f20c8 */ ANI_CODE ch019anm017[2];
/* sdata 3f20d0 */ ANI_CODE ch019anm018[3];
/* sdata 3f20d8 */ ANI_CODE ch019anm019[3];
/* sdata 3f20e0 */ ANI_CODE ch019anm020[2];
/* sdata 3f20e8 */ ANI_CODE ch019anm021[4];
/* sdata 3f20f0 */ ANI_CODE ch020anm000[4];
/* sdata 3f20f8 */ ANI_CODE ch020anm002[4];
/* sdata 3f2100 */ ANI_CODE ch020anm006[2];
/* sdata 3f2108 */ ANI_CODE ch020anm007[2];
/* sdata 3f2110 */ ANI_CODE ch020anm008[4];
/* sdata 3f2118 */ ANI_CODE ch020anm009[2];
/* sdata 3f2120 */ ANI_CODE ch020anm010[2];
/* sdata 3f2128 */ ANI_CODE ch020anm011[2];
/* sdata 3f2130 */ ANI_CODE ch020anm012[2];
/* sdata 3f2138 */ ANI_CODE ch020anm013[2];
/* sdata 3f2140 */ ANI_CODE ch020anm014[2];
/* sdata 3f2148 */ ANI_CODE ch020anm015[2];
/* sdata 3f2150 */ ANI_CODE ch020anm016[2];
/* sdata 3f2158 */ ANI_CODE ch020anm017[2];
/* sdata 3f2160 */ ANI_CODE ch021anm000[4];
/* sdata 3f2168 */ ANI_CODE ch021anm002[4];
/* sdata 3f2170 */ ANI_CODE ch021anm006[2];
/* sdata 3f2178 */ ANI_CODE ch021anm007[2];
/* sdata 3f2180 */ ANI_CODE ch021anm008[4];
/* sdata 3f2188 */ ANI_CODE ch021anm009[2];
/* sdata 3f2190 */ ANI_CODE ch021anm010[2];
/* sdata 3f2198 */ ANI_CODE ch021anm011[2];
/* sdata 3f21a0 */ ANI_CODE ch021anm012[2];
/* sdata 3f21a8 */ ANI_CODE ch021anm013[2];
/* data 31e8c8 */ ANI_CODE ch021anm014[5];
/* sdata 3f21b0 */ ANI_CODE ch021anm015[2];
/* sdata 3f21b8 */ ANI_CODE ch021anm016[4];
/* sdata 3f21c0 */ ANI_CODE ch022anm000[4];
/* sdata 3f21c8 */ ANI_CODE ch022anm002[4];
/* sdata 3f21d0 */ ANI_CODE ch022anm006[3];
/* sdata 3f21d8 */ ANI_CODE ch022anm007[2];
/* data 31e8d8 */ ANI_CODE ch022anm008[5];
/* sdata 3f21e0 */ ANI_CODE ch022anm009[2];
/* sdata 3f21e8 */ ANI_CODE ch022anm010[3];
/* sdata 3f21f0 */ ANI_CODE ch022anm011[3];
/* sdata 3f21f8 */ ANI_CODE ch022anm012[3];
/* sdata 3f2200 */ ANI_CODE ch022anm013[3];
/* data 31e8e8 */ ANI_CODE ch022anm014[5];
/* sdata 3f2208 */ ANI_CODE ch022anm015[3];
/* sdata 3f2210 */ ANI_CODE ch022anm016[4];
/* sdata 3f2218 */ ANI_CODE ch024anm000[4];
/* sdata 3f2220 */ ANI_CODE ch024anm002[4];
/* sdata 3f2228 */ ANI_CODE ch024anm006[2];
/* sdata 3f2230 */ ANI_CODE ch024anm007[2];
/* sdata 3f2238 */ ANI_CODE ch024anm008[4];
/* sdata 3f2240 */ ANI_CODE ch024anm009[2];
/* sdata 3f2248 */ ANI_CODE ch024anm010[2];
/* sdata 3f2250 */ ANI_CODE ch024anm011[2];
/* sdata 3f2258 */ ANI_CODE ch024anm012[2];
/* sdata 3f2260 */ ANI_CODE ch024anm013[2];
/* sdata 3f2268 */ ANI_CODE ch024anm014[2];
/* sdata 3f2270 */ ANI_CODE ch024anm015[2];
/* sdata 3f2278 */ ANI_CODE ch024anm016[2];
/* sdata 3f2280 */ ANI_CODE ch024anm017[2];
/* sdata 3f2288 */ ANI_CODE ch024anm018[2];
/* sdata 3f2290 */ ANI_CODE ch024anm019[4];
/* sdata 3f2298 */ ANI_CODE ch024anm020[2];
/* sdata 3f22a0 */ ANI_CODE ch025anm000[4];
/* sdata 3f22a8 */ ANI_CODE ch025anm002[4];
/* sdata 3f22b0 */ ANI_CODE ch025anm006[3];
/* sdata 3f22b8 */ ANI_CODE ch025anm007[2];
/* data 31e8f8 */ ANI_CODE ch025anm008[5];
/* sdata 3f22c0 */ ANI_CODE ch025anm009[2];
/* sdata 3f22c8 */ ANI_CODE ch025anm010[3];
/* sdata 3f22d0 */ ANI_CODE ch025anm011[3];
/* sdata 3f22d8 */ ANI_CODE ch025anm012[3];
/* sdata 3f22e0 */ ANI_CODE ch025anm013[3];
/* sdata 3f22e8 */ ANI_CODE ch025anm014[2];
/* sdata 3f22f0 */ ANI_CODE ch025anm015[2];
/* sdata 3f22f8 */ ANI_CODE ch025anm016[4];
/* sdata 3f2300 */ ANI_CODE ch026anm000[4];
/* sdata 3f2308 */ ANI_CODE ch026anm002[4];
/* sdata 3f2310 */ ANI_CODE ch026anm003[4];
/* sdata 3f2318 */ ANI_CODE ch026anm004[4];
/* sdata 3f2320 */ ANI_CODE ch026anm005[4];
/* sdata 3f2328 */ ANI_CODE ch026anm006[2];
/* sdata 3f2330 */ ANI_CODE ch026anm007[2];
/* sdata 3f2338 */ ANI_CODE ch026anm008[4];
/* sdata 3f2340 */ ANI_CODE ch026anm009[2];
/* sdata 3f2348 */ ANI_CODE ch026anm010[2];
/* sdata 3f2350 */ ANI_CODE ch026anm011[2];
/* sdata 3f2358 */ ANI_CODE ch026anm012[2];
/* sdata 3f2360 */ ANI_CODE ch026anm013[2];
/* sdata 3f2368 */ ANI_CODE ch026anm014[2];
/* sdata 3f2370 */ ANI_CODE ch026anm015[4];
/* sdata 3f2378 */ ANI_CODE ch026anm016[4];
/* sdata 3f2380 */ ANI_CODE ch026anm017[2];
/* sdata 3f2388 */ ANI_CODE ch026anm018[2];
/* sdata 3f2390 */ ANI_CODE ch026anm019[2];
/* sdata 3f2398 */ ANI_CODE ch026anm020[2];
/* sdata 3f23a0 */ ANI_CODE ch026anm021[2];
/* sdata 3f23a8 */ ANI_CODE ch027anm000[4];
/* sdata 3f23b0 */ ANI_CODE ch027anm002[4];
/* sdata 3f23b8 */ ANI_CODE ch027anm004[4];
/* sdata 3f23c0 */ ANI_CODE ch027anm005[4];
/* sdata 3f23c8 */ ANI_CODE ch027anm006[3];
/* sdata 3f23d0 */ ANI_CODE ch027anm007[2];
/* sdata 3f23d8 */ ANI_CODE ch027anm008[4];
/* sdata 3f23e0 */ ANI_CODE ch027anm009[2];
/* sdata 3f23e8 */ ANI_CODE ch027anm010[2];
/* sdata 3f23f0 */ ANI_CODE ch027anm011[2];
/* sdata 3f23f8 */ ANI_CODE ch027anm012[2];
/* sdata 3f2400 */ ANI_CODE ch027anm013[2];
/* sdata 3f2408 */ ANI_CODE ch027anm014[2];
/* sdata 3f2410 */ ANI_CODE ch027anm015[2];
/* sdata 3f2418 */ ANI_CODE ch027anm016[2];
/* sdata 3f2420 */ ANI_CODE ch027anm017[4];
/* data 31e908 */ ANI_CODE ch027anm018[5];
/* sdata 3f2428 */ ANI_CODE ch027anm019[4];
/* sdata 3f2430 */ ANI_CODE ch027anm020[2];
/* sdata 3f2438 */ ANI_CODE ch028anm000[4];
/* sdata 3f2440 */ ANI_CODE ch028anm002[4];
/* sdata 3f2448 */ ANI_CODE ch028anm004[4];
/* sdata 3f2450 */ ANI_CODE ch028anm005[4];
/* sdata 3f2458 */ ANI_CODE ch028anm006[3];
/* sdata 3f2460 */ ANI_CODE ch028anm007[2];
/* sdata 3f2468 */ ANI_CODE ch028anm008[4];
/* sdata 3f2470 */ ANI_CODE ch028anm009[2];
/* sdata 3f2478 */ ANI_CODE ch028anm010[2];
/* sdata 3f2480 */ ANI_CODE ch028anm011[2];
/* sdata 3f2488 */ ANI_CODE ch028anm012[2];
/* sdata 3f2490 */ ANI_CODE ch028anm013[2];
/* sdata 3f2498 */ ANI_CODE ch028anm014[2];
/* sdata 3f24a0 */ ANI_CODE ch028anm015[2];
/* sdata 3f24a8 */ ANI_CODE ch028anm016[2];
/* sdata 3f24b0 */ ANI_CODE ch028anm017[4];
/* data 31e918 */ ANI_CODE ch028anm018[5];
/* sdata 3f24b8 */ ANI_CODE ch028anm019[4];
/* sdata 3f24c0 */ ANI_CODE ch028anm020[2];
/* sdata 3f24c8 */ ANI_CODE ch029anm000[4];
/* sdata 3f24d0 */ ANI_CODE ch029anm002[4];
/* sdata 3f24d8 */ ANI_CODE ch029anm004[4];
/* sdata 3f24e0 */ ANI_CODE ch029anm005[4];
/* sdata 3f24e8 */ ANI_CODE ch029anm006[3];
/* sdata 3f24f0 */ ANI_CODE ch029anm007[2];
/* sdata 3f24f8 */ ANI_CODE ch029anm008[4];
/* sdata 3f2500 */ ANI_CODE ch029anm009[2];
/* sdata 3f2508 */ ANI_CODE ch029anm010[2];
/* sdata 3f2510 */ ANI_CODE ch029anm011[2];
/* sdata 3f2518 */ ANI_CODE ch029anm012[2];
/* sdata 3f2520 */ ANI_CODE ch029anm013[2];
/* sdata 3f2528 */ ANI_CODE ch029anm014[2];
/* sdata 3f2530 */ ANI_CODE ch029anm015[2];
/* sdata 3f2538 */ ANI_CODE ch029anm016[2];
/* sdata 3f2540 */ ANI_CODE ch029anm017[4];
/* data 31e928 */ ANI_CODE ch029anm018[5];
/* sdata 3f2548 */ ANI_CODE ch029anm019[4];
/* sdata 3f2550 */ ANI_CODE ch029anm020[2];
/* sdata 3f2558 */ ANI_CODE ch030anm000[4];
/* sdata 3f2560 */ ANI_CODE ch030anm002[4];
/* sdata 3f2568 */ ANI_CODE ch030anm004[4];
/* sdata 3f2570 */ ANI_CODE ch030anm005[4];
/* sdata 3f2578 */ ANI_CODE ch030anm006[2];
/* sdata 3f2580 */ ANI_CODE ch030anm007[2];
/* sdata 3f2588 */ ANI_CODE ch030anm008[4];
/* sdata 3f2590 */ ANI_CODE ch030anm009[2];
/* sdata 3f2598 */ ANI_CODE ch030anm010[2];
/* sdata 3f25a0 */ ANI_CODE ch030anm011[2];
/* sdata 3f25a8 */ ANI_CODE ch030anm012[2];
/* sdata 3f25b0 */ ANI_CODE ch030anm013[2];
/* sdata 3f25b8 */ ANI_CODE ch030anm014[2];
/* sdata 3f25c0 */ ANI_CODE ch030anm015[4];
/* sdata 3f25c8 */ ANI_CODE ch030anm016[2];
/* sdata 3f25d0 */ ANI_CODE ch030anm017[2];
/* sdata 3f25d8 */ ANI_CODE ch030anm018[2];
/* sdata 3f25e0 */ ANI_CODE ch030anm019[2];
/* sdata 3f25e8 */ ANI_CODE ch030anm020[4];
/* sdata 3f25f0 */ ANI_CODE ch030anm021[2];
/* sdata 3f25f8 */ ANI_CODE ch031anm000[4];
/* sdata 3f2600 */ ANI_CODE ch031anm002[4];
/* sdata 3f2608 */ ANI_CODE ch031anm003[4];
/* sdata 3f2610 */ ANI_CODE ch031anm004[4];
/* sdata 3f2618 */ ANI_CODE ch031anm005[4];
/* sdata 3f2620 */ ANI_CODE ch031anm010[2];
/* sdata 3f2628 */ ANI_CODE ch031anm011[2];
/* sdata 3f2630 */ ANI_CODE ch031anm012[2];
/* sdata 3f2638 */ ANI_CODE ch031anm013[2];
/* sdata 3f2640 */ ANI_CODE ch031anm014[2];
/* sdata 3f2648 */ ANI_CODE ch031anm015[2];
/* sdata 3f2650 */ ANI_CODE ch031anm016[2];
/* sdata 3f2658 */ ANI_CODE ch031anm017[3];
/* sdata 3f2660 */ ANI_CODE ch031anm018[2];
/* sdata 3f2668 */ ANI_CODE ch031anm019[2];
/* sdata 3f2670 */ ANI_CODE ch031anm020[2];
/* sdata 3f2678 */ ANI_CODE ch032anm000[4];
/* sdata 3f2680 */ ANI_CODE ch032anm002[4];
/* sdata 3f2688 */ ANI_CODE ch032anm006[3];
/* sdata 3f2690 */ ANI_CODE ch032anm007[2];
/* data 31e938 */ ANI_CODE ch032anm008[5];
/* sdata 3f2698 */ ANI_CODE ch032anm009[2];
/* sdata 3f26a0 */ ANI_CODE ch032anm010[3];
/* sdata 3f26a8 */ ANI_CODE ch032anm011[3];
/* sdata 3f26b0 */ ANI_CODE ch032anm012[3];
/* sdata 3f26b8 */ ANI_CODE ch032anm013[3];
/* sdata 3f26c0 */ ANI_CODE ch032anm014[2];
/* sdata 3f26c8 */ ANI_CODE ch032anm015[2];
/* sdata 3f26d0 */ ANI_CODE ch032anm016[2];
/* sdata 3f26d8 */ ANI_CODE ch032anm017[2];
/* sdata 3f26e0 */ ANI_CODE ch032anm018[2];
/* sdata 3f26e8 */ ANI_CODE ch033anm000[4];
/* sdata 3f26f0 */ ANI_CODE ch033anm002[4];
/* sdata 3f26f8 */ ANI_CODE ch033anm003[4];
/* sdata 3f2700 */ ANI_CODE ch033anm004[4];
/* sdata 3f2708 */ ANI_CODE ch033anm005[4];
/* sdata 3f2710 */ ANI_CODE ch033anm006[2];
/* sdata 3f2718 */ ANI_CODE ch033anm007[2];
/* sdata 3f2720 */ ANI_CODE ch033anm008[4];
/* sdata 3f2728 */ ANI_CODE ch033anm009[2];
/* sdata 3f2730 */ ANI_CODE ch033anm014[2];
/* sdata 3f2738 */ ANI_CODE ch033anm015[4];
/* sdata 3f2740 */ ANI_CODE ch033anm016[2];
/* sdata 3f2748 */ ANI_CODE ch035anm000[4];
/* sdata 3f2750 */ ANI_CODE ch035anm002[4];
/* sdata 3f2758 */ ANI_CODE ch035anm003[4];
/* sdata 3f2760 */ ANI_CODE ch035anm004[4];
/* sdata 3f2768 */ ANI_CODE ch035anm005[4];
/* sdata 3f2770 */ ANI_CODE ch035anm010[3];
/* sdata 3f2778 */ ANI_CODE ch035anm011[3];
/* sdata 3f2780 */ ANI_CODE ch035anm012[3];
/* sdata 3f2788 */ ANI_CODE ch035anm013[3];
/* sdata 3f2790 */ ANI_CODE ch035anm014[3];
/* sdata 3f2798 */ ANI_CODE ch035anm015[3];
/* sdata 3f27a0 */ ANI_CODE ch036anm000[4];
/* sdata 3f27a8 */ ANI_CODE ch036anm002[4];
/* sdata 3f27b0 */ ANI_CODE ch036anm003[4];
/* sdata 3f27b8 */ ANI_CODE ch036anm004[4];
/* sdata 3f27c0 */ ANI_CODE ch036anm005[4];
/* sdata 3f27c8 */ ANI_CODE ch036anm010[3];
/* sdata 3f27d0 */ ANI_CODE ch036anm011[3];
/* sdata 3f27d8 */ ANI_CODE ch036anm012[3];
/* sdata 3f27e0 */ ANI_CODE ch036anm013[3];
/* sdata 3f27e8 */ ANI_CODE ch036anm014[3];
/* sdata 3f27f0 */ ANI_CODE ch036anm015[3];
/* sdata 3f27f8 */ ANI_CODE ch037anm000[4];
/* sdata 3f2800 */ ANI_CODE ch037anm002[4];
/* sdata 3f2808 */ ANI_CODE ch037anm003[4];
/* sdata 3f2810 */ ANI_CODE ch037anm004[4];
/* sdata 3f2818 */ ANI_CODE ch037anm005[4];
/* sdata 3f2820 */ ANI_CODE ch037anm010[3];
/* sdata 3f2828 */ ANI_CODE ch037anm011[3];
/* sdata 3f2830 */ ANI_CODE ch037anm012[3];
/* sdata 3f2838 */ ANI_CODE ch037anm013[3];
/* sdata 3f2840 */ ANI_CODE ch037anm014[2];
/* sdata 3f2848 */ ANI_CODE ch037anm015[2];
/* sdata 3f2850 */ ANI_CODE ch037anm016[3];
/* sdata 3f2858 */ ANI_CODE ch037anm017[3];
/* sdata 3f2860 */ ANI_CODE ch038anm000[4];
/* sdata 3f2868 */ ANI_CODE ch038anm002[4];
/* sdata 3f2870 */ ANI_CODE ch038anm006[3];
/* sdata 3f2878 */ ANI_CODE ch038anm007[2];
/* data 31e948 */ ANI_CODE ch038anm008[5];
/* sdata 3f2880 */ ANI_CODE ch038anm009[2];
/* sdata 3f2888 */ ANI_CODE ch038anm010[3];
/* sdata 3f2890 */ ANI_CODE ch038anm011[3];
/* sdata 3f2898 */ ANI_CODE ch038anm012[3];
/* sdata 3f28a0 */ ANI_CODE ch038anm013[3];
/* sdata 3f28a8 */ ANI_CODE ch038anm014[2];
/* sdata 3f28b0 */ ANI_CODE ch039anm000[4];
/* sdata 3f28b8 */ ANI_CODE ch039anm002[4];
/* sdata 3f28c0 */ ANI_CODE ch039anm006[3];
/* sdata 3f28c8 */ ANI_CODE ch039anm010[3];
/* sdata 3f28d0 */ ANI_CODE ch039anm011[3];
/* sdata 3f28d8 */ ANI_CODE ch039anm012[3];
/* sdata 3f28e0 */ ANI_CODE ch039anm013[3];
/* sdata 3f28e8 */ ANI_CODE ch039anm014[3];
/* data 31e958 */ ANI_CODE ch039anm015[5];
/* sdata 3f28f0 */ ANI_CODE ch039anm016[2];
/* sdata 3f28f8 */ ANI_CODE ch039anm017[2];
/* sdata 3f2900 */ ANI_CODE ch041anm000[4];
/* sdata 3f2908 */ ANI_CODE ch041anm002[4];
/* sdata 3f2910 */ ANI_CODE ch041anm004[4];
/* sdata 3f2918 */ ANI_CODE ch041anm005[4];
/* sdata 3f2920 */ ANI_CODE ch041anm006[2];
/* sdata 3f2928 */ ANI_CODE ch041anm007[2];
/* sdata 3f2930 */ ANI_CODE ch041anm008[4];
/* sdata 3f2938 */ ANI_CODE ch041anm009[2];
/* sdata 3f2940 */ ANI_CODE ch041anm010[2];
/* sdata 3f2948 */ ANI_CODE ch041anm011[2];
/* sdata 3f2950 */ ANI_CODE ch041anm012[2];
/* sdata 3f2958 */ ANI_CODE ch041anm013[2];
/* sdata 3f2960 */ ANI_CODE ch041anm014[2];
/* sdata 3f2968 */ ANI_CODE ch041anm016[2];
/* data 31e968 */ ANI_CODE ch041anm017[5];
/* sdata 3f2970 */ ANI_CODE ch041anm018[2];
/* sdata 3f2978 */ ANI_CODE arei_anm[2];
/* sdata 3f2980 */ ANI_CODE arei_anm1[2];
/* sdata 3f2988 */ ANI_CODE arei_anm2[2];
/* sdata 3f2990 */ ANI_CODE arei_loop_anm[4];
/* sdata 3f2998 */ ANI_CODE arei_loop_anm1[4];
/* sdata 3f29a0 */ ANI_CODE arei_loop_anm2[4];
/* data 31e978 */ ANI_CODE a031_anm000[5];
/* data 31e988 */ ANI_CODE a031_anm001[5];
/* sdata 3f29a8 */ ANI_CODE test_anm00[2];
/* sdata 3f29b0 */ ANI_CODE test_anm01[2];
/* sdata 3f29b8 */ ANI_CODE test_anm02[2];
/* sdata 3f29c0 */ ANI_CODE test_anm03[2];
/* sdata 3f29c8 */ ANI_CODE test_anm04[2];
/* sdata 3f29d0 */ ANI_CODE test_anm05[2];
/* sdata 3f29d8 */ ANI_CODE test_anm06[2];
/* sdata 3f29e0 */ ANI_CODE test_anm07[2];
/* sdata 3f29e8 */ ANI_CODE test_anm08[2];
/* sdata 3f29f0 */ ANI_CODE test_anm09[2];
/* sdata 3f29f8 */ ANI_CODE test_anm10[2];
/* sdata 3f2a00 */ ANI_CODE test_anm11[2];
/* sdata 3f2a08 */ ANI_CODE test_anm12[2];
/* sdata 3f2a10 */ ANI_CODE test_anm13[2];
/* sdata 3f2a18 */ ANI_CODE test_anm14[2];
/* sdata 3f2a20 */ ANI_CODE test_anm15[2];
/* sdata 3f2a28 */ ANI_CODE test_anm16[2];
/* sdata 3f2a30 */ ANI_CODE test_anm17[2];
/* sdata 3f2a38 */ ANI_CODE test_anm18[2];
/* sdata 3f2a40 */ ANI_CODE test_anm19[2];
/* data 31e998 */ ANI_CODE *ch000anm_tbl[73];
/* data 31eac0 */ ANI_CODE *ch001anm_tbl[47];
/* data 31eb80 */ ANI_CODE *ch003anm_tbl[23];
/* data 31ebe0 */ NECK_SPD ch003_neck_spd_tbl[22];
/* data 31ec38 */ ANI_CODE *ch005anm_tbl[5];
/* data 31ec50 */ ANI_CODE *ch010anm_tbl[23];
/* data 31ecb0 */ NECK_SPD ch010_neck_spd_tbl[22];
/* data 31ed08 */ ANI_CODE *ch011anm_tbl[23];
/* data 31ed68 */ NECK_SPD ch011_neck_spd_tbl[22];
/* data 31edc0 */ ANI_CODE *ch012anm_tbl[23];
/* data 31ee20 */ ANI_CODE *ch013anm_tbl[23];
/* data 31ee80 */ ANI_CODE *ch031_a195anm_tbl[23];
/* data 31eee0 */ NECK_SPD ch013_neck_spd_tbl[22];
/* data 31ef38 */ ANI_CODE *ch014anm_tbl[23];
/* data 31ef98 */ ANI_CODE *ch015anm_tbl[23];
/* data 31eff8 */ NECK_SPD ch015_neck_spd_tbl[22];
/* data 31f050 */ ANI_CODE *ch017anm_tbl[23];
/* data 31f0b0 */ NECK_SPD ch017_neck_spd_tbl[22];
/* data 31f108 */ ANI_CODE *ch018anm_tbl[23];
/* data 31f168 */ NECK_SPD ch018_neck_spd_tbl[22];
/* data 31f1c0 */ ANI_CODE *ch019anm_tbl[23];
/* data 31f220 */ ANI_CODE *ch019_a202anm_tbl[23];
/* data 31f280 */ NECK_SPD ch019_neck_spd_tbl[22];
/* data 31f2d8 */ ANI_CODE *ch020anm_tbl[23];
/* data 31f338 */ NECK_SPD ch020_neck_spd_tbl[22];
/* data 31f390 */ ANI_CODE *ch021anm_tbl[23];
/* data 31f3f0 */ NECK_SPD ch021_neck_spd_tbl[22];
/* data 31f448 */ ANI_CODE *ch022anm_tbl[23];
/* data 31f4a8 */ NECK_SPD ch022_neck_spd_tbl[22];
/* data 31f500 */ ANI_CODE *ch024anm_tbl[23];
/* data 31f560 */ ANI_CODE *ch024_a048anm_tbl[23];
/* data 31f5c0 */ ANI_CODE *ch024_a003anm_tbl[23];
/* data 31f620 */ ANI_CODE *ch024_a204anm_tbl[23];
/* data 31f680 */ NECK_SPD ch024_neck_spd_tbl[22];
/* data 31f6d8 */ ANI_CODE *ch025anm_tbl[23];
/* data 31f738 */ NECK_SPD ch025_neck_spd_tbl[22];
/* data 31f790 */ ANI_CODE *ch026anm_tbl[23];
/* data 31f7f0 */ NECK_SPD ch026_neck_spd_tbl[22];
/* data 31f848 */ ANI_CODE *ch027anm_tbl[23];
/* data 31f8a8 */ NECK_SPD ch027_neck_spd_tbl[22];
/* data 31f900 */ ANI_CODE *ch028anm_tbl[23];
/* data 31f960 */ NECK_SPD ch028_neck_spd_tbl[22];
/* data 31f9b8 */ ANI_CODE *ch029anm_tbl[23];
/* data 31fa18 */ NECK_SPD ch029_neck_spd_tbl[22];
/* data 31fa70 */ ANI_CODE *ch030anm_tbl[23];
/* data 31fad0 */ NECK_SPD ch030_neck_spd_tbl[22];
/* data 31fb28 */ ANI_CODE *ch031anm_tbl[23];
/* data 31fb88 */ ANI_CODE *ch031_a060anm_tbl[23];
/* data 31fbe8 */ NECK_SPD ch031_neck_spd_tbl[22];
/* data 31fc40 */ ANI_CODE *ch032anm_tbl[23];
/* data 31fca0 */ NECK_SPD ch032_neck_spd_tbl[22];
/* data 31fcf8 */ ANI_CODE *ch033anm_tbl[23];
/* data 31fd58 */ NECK_SPD ch033_neck_spd_tbl[22];
/* data 31fdb0 */ ANI_CODE *ch035anm_tbl[23];
/* data 31fe10 */ NECK_SPD ch035_neck_spd_tbl[22];
/* data 31fe68 */ ANI_CODE *ch036anm_tbl[23];
/* data 31fec8 */ NECK_SPD ch036_neck_spd_tbl[22];
/* data 31ff20 */ ANI_CODE *ch037anm_tbl[23];
/* data 31ff80 */ NECK_SPD ch037_neck_spd_tbl[22];
/* data 31ffd8 */ ANI_CODE *ch038anm_tbl[23];
/* data 320038 */ ANI_CODE *ch038_a050anm_tbl[23];
/* data 320098 */ NECK_SPD ch038_neck_spd_tbl[22];
/* data 3200f0 */ ANI_CODE *ch039anm_tbl[23];
/* data 320150 */ NECK_SPD ch039_neck_spd_tbl[22];
/* data 3201a8 */ ANI_CODE *ch041anm_tbl[23];
/* data 320208 */ NECK_SPD ch041_neck_spd_tbl[22];
/* sdata 3f2a48 */ ANI_CODE *arei_anm_tbl[2];
/* sdata 3f2a50 */ ANI_CODE *arei_loopanm_tbl[2];
/* data 320260 */ ANI_CODE *a017_arei_anm_tbl[3];
/* data 320270 */ ANI_CODE *ch046_arei_anm_tbl[4];
/* data 320280 */ ANI_CODE *a061_arei_anm_tbl[3];
/* data 320290 */ ANI_CODE *a031_arei_anm_tbl[3];
/* sdata 3f2a58 */ NECK_SPD a031_neck_spd_tbl[2];
/* sdata 3f2a60 */ ANI_CODE *a049_arei_anm_tbl[2];
/* sdata 3f2a68 */ NECK_SPD a049_neck_spd_tbl[1];
/* data 3202a0 */ ANI_CODE *a068_arei_anm_tbl[3];
/* data 3202b0 */ ANI_CODE *a095_arei_anm_tbl[3];
/* data 3202c0 */ ANI_CODE *a129_arei_anm_tbl[3];
/* data 3202d0 */ ANI_CODE *a130_arei_anm_tbl[3];
/* data 3202e0 */ ANI_CODE *a140_arei_anm_tbl[3];
/* data 3202f0 */ ANI_CODE *a141_arei_anm_tbl[3];
/* data 320300 */ ANI_CODE *a111_arei_anm_tbl[3];
/* data 320310 */ ANI_CODE *a145_arei_anm_tbl[3];
/* data 320320 */ ANI_CODE *a191_arei_anm_tbl[3];
/* data 320330 */ ANI_CODE *test_anm_tbl[21];
/* data 320388 */ MANMDL_DAT manmdl_dat[78];
/* data 320ad8 */ FURNMDL_DAT furn_mdl_dat[18];
/* data 320b68 */ ANI_TBL anm_tbl[171];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/mdlwork.c
// *****************************************************************************

/* sdata 3f2ab4 */ u_int *plyr_clut_addr;
/* sdata 3f2ab8 */ u_int *plyr_bwc_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/mem_dbg.c
// *****************************************************************************

/* bss 4b5350 */ HEAP_WRK mem_dbg_heap_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/mem_util.c
// *****************************************************************************

/* bss 4b5370 */ HEAP_WRK mem_util_heap_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/memo.c
// *****************************************************************************

/* bss 4b5390 */ fixed_array<PLYR_MEMO,20> plyr_memo;
/* sbss 3f5418 */ unsigned char PLYR_MEMO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu.c
// *****************************************************************************

/* data 321618 */ MENU_CTRL menu_ctrl[9];
/* sdata 3f2ae0 */ void *menu_caption_adrs;
/* data 321660 */ MENU_WRK menu_wrk;
/* sdata 3f2b00 */ char map_view_flg;
/* bss 4b5430 */ MENU_DISP_CTRL menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cam_edit.c
// *****************************************************************************

/* data 321670 */ void (*menu_cam_edit_pad[12])(/* parameters unknown */);
/* data 3216a0 */ void (*menu_cam_edit_disp_func[12])(/* parameters unknown */);
/* bss 4b5448 */ fixed_array<DISP_LENS_DATA,10> disp_lens_data;
/* sbss 3f4dc0 */ reference_fixed_array<int,3> base_msg_tbl;
/* sbss 3f4dc8 */ reference_fixed_array<int,10> lens_msg_tbl;
/* sbss 3f5420 */ unsigned char DISP_LENS_DATA type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* bss 4b5470 */ MENU_CAM_EDIT_CTRL menu_cam_edit_ctrl;
/* sbss 3f4dd0 */ MENU_CAM_EDIT_DISP menu_cam_edit_disp;
/* sbss 3f4dd8 */ GEM_ANIM_CTRL base_gem_anim_ctrl;
/* sbss 3f4de0 */ GEM_ANIM_CTRL lens_gem_anim_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cam_main.c
// *****************************************************************************

/* sdata 3f2ba0 */ void* (*MenuCamMemGetFunc)(/* parameters unknown */);
/* sdata 3f2ba4 */ void (*MenuCamMemFreeFunc)(/* parameters unknown */);
/* sdata 3f2ba8 */ void *menu_cam_tex_addr;
/* sdata 3f2bac */ void *menu_cam_edit_tex_addr;
/* sdata 3f2bb0 */ void (*menu_cam_init_func[2])(/* parameters unknown */);
/* sdata 3f2bb8 */ int (*menu_cam_main_func[2])(/* parameters unknown */);
/* sdata 3f2bc0 */ void (*menu_cam_disp_func[2])(/* parameters unknown */);
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4e08 */ MENU_CAM_MAIN_CTRL menu_cam_main_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cam_top.c
// *****************************************************************************

/* data 3216d0 */ void (*menu_cam_top_pad[4])(/* parameters unknown */);
/* data 3216e0 */ void (*menu_cam_top_disp_func[4])(/* parameters unknown */);
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f4e10 */ MENU_CAM_TOP_CTRL menu_cam_top_ctrl;
/* sbss 3f4e18 */ MENU_CAM_TOP_DISP menu_cam_top_disp;
/* rdata 3bd2e0 */ int film_name_tbl[6][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_camera_dat.c
// *****************************************************************************

/* data 3216f0 */ SPRT_DAT menu_camera_tex[299];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cmn.c
// *****************************************************************************

/* data 323c50 */ MENU_CROSS_FADE menu_cross_fade[2];
/* sdata 3f2c80 */ MENU_YES_NO_CTRL menu_yes_no_ctrl;
/* bss 4b5488 */ MENU_DBUFF_CTRL menu_dbuff_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_cmn_dat.c
// *****************************************************************************

/* data 323c68 */ SPRT_DAT menu_cmn_dat[46];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cmn_disp.c
// *****************************************************************************

/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/menu_dat.c
// *****************************************************************************

/* sdata 3f2cd0 */ int DbmFileD;
/* sdata 3f2cd4 */ int DbmLiCnt;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_file.c
// *****************************************************************************

/* sdata 3f2d48 */ void *file_cmn_tex_addr;
/* sdata 3f2d4c */ void *file_top_tex_addr;
/* sdata 3f2d50 */ void *file_doc_tex_addr;
/* sdata 3f2d54 */ void *file_photo_tex_addr;
/* sdata 3f2d58 */ void *file_map_tex_addr;
/* sdata 3f2d5c */ void *photo_small_tex_addr;
/* sdata 3f2d60 */ void *map_small_tex_addr;
/* data 324228 */ void (*menu_file_pad[7])(/* parameters unknown */);
/* data 324248 */ void (*file_mode_disp[7])(/* parameters unknown */);
/* bss 4b5498 */ MENU_FILE_CTRL menu_file_ctrl;
/* bss 4b54f0 */ DISP_FILE_DATA disp_file_data;
/* sbss 3f5430 */ unsigned char MENU_REF_CTRL type_info node[8];
/* sbss 3f5428 */ unsigned char MENU_FILE_DATA type_info node[8];
/* sbss 3f4e20 */ MENU_FILE_DISP menu_file_disp;
/* rdata 3bdb00 */ int msg_type_tbl[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_file_dat.c
// *****************************************************************************

/* data 324268 */ SPRT_DAT menu_file_tex[75];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_glist_dat.c
// *****************************************************************************

/* data 324bc8 */ SPRT_DAT menu_glist_tex[36];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_item.c
// *****************************************************************************

/* sdata 3f2dd8 */ void *menu_item_tex_addr;
/* data 325048 */ void (*menu_item_pad_func[3])(/* parameters unknown */);
/* bss 4b59f0 */ fixed_array<DISP_ITEM_DATA,58> disp_item;
/* sbss 3f5438 */ unsigned char DISP_ITEM_DATA type_info node[8];
/* bss 4b5bc0 */ MENU_ITEM_CTRL menu_item_ctrl;
/* sbss 3f4e28 */ MENU_ITEM_DISP menu_item_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_item_dat.c
// *****************************************************************************

/* data 325058 */ SPRT_DAT menu_item[106];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_map.c
// *****************************************************************************

/* sdata 3f2e20 */ void *menu_map_bg_addr;
/* sdata 3f2e24 */ void *map_data_addr;
/* sdata 3f2e28 */ void *snap_data_addr;
/* bss 4b5bd0 */ MENU_MAP_DISP menu_map_disp;
/* bss 4b5be8 */ MENU_MAP_CTRL menu_map_ctrl;
/* rdata 3be168 */ int map_label_tbl[8][3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_map_dat.c
// *****************************************************************************

/* data 325d98 */ SPRT_DAT menu_map_tex[57];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_map_mapdata_dat.c
// *****************************************************************************

/* data 3264b8 */ SPRT_DAT menu_map_mapdata_tex[265];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_memo.c
// *****************************************************************************

/* sdata 3f2e78 */ void *menu_memo_tex_addr;
/* data 3285d8 */ void (*menu_memo_pad_func[3])(/* parameters unknown */);
/* data 3285e8 */ void (*menu_memo_disp_func[3])(/* parameters unknown */);
/* bss 4b5c00 */ fixed_array<DISP_MEMO_DATA,20> disp_memo_data;
/* sbss 3f5440 */ unsigned char DISP_MEMO_DATA type_info node[8];
/* bss 4b5ca0 */ MENU_MEMO_CTRL menu_memo_ctrl;
/* sbss 3f4e30 */ MENU_MEMO_DISP menu_memo_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_memo_dat.c
// *****************************************************************************

/* data 3285f8 */ SPRT_DAT menu_memo_tex[64];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_photo.c
// *****************************************************************************

/* sdata 3f2ec0 */ void *menu_photo_tex_addr;
/* sbss 3f5200 */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* bss 4b5cb0 */ MENU_PHOTO_CTRL menu_photo_ctrl;
/* sbss 3f4e38 */ MENU_PHOTO_DISP menu_photo_disp;
/* rdata 3be8f8 */ int csr_num[8][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_photo_dat.c
// *****************************************************************************

/* data 328df8 */ SPRT_DAT menu_photo[221];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_radio.c
// *****************************************************************************

/* sdata 3f2f08 */ void *menu_radio_tex_addr;
/* sdata 3f2f0c */ int menu_radio_stream_id;
/* sdata 3f2f10 */ u_char crystal_title_debug_flg;
/* bss 4b5cc0 */ fixed_array<DISP_CRYSTAL_DATA,40> disp_crystal_data;
/* sbss 3f5448 */ unsigned char DISP_CRYSTAL_DATA type_info node[8];
/* bss 4b5e00 */ MENU_RADIO_CTRL menu_radio_ctrl;
/* bss 4b5e18 */ MENU_RADIO_DISP menu_radio_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_radio_dat.c
// *****************************************************************************

/* rdata 3beb40 */ int play_cap_tbl[5];
/* rdata 3beb58 */ int stop_cap_tbl_1[5];
/* rdata 3beb70 */ int stop_cap_tbl_2[5];
/* data 32a998 */ SPRT_DAT menu_radio_tex[37];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_soul.c
// *****************************************************************************

/* sdata 3f2f70 */ void *menu_soul_tex_addr;
/* sdata 3f2f74 */ char list_comp_disp_flg;
/* bss 4b5e28 */ MENU_SOUL_CTRL menu_soul_ctrl;
/* bss 4b5e48 */ MENU_SOUL_DISP menu_soul_disp;
/* bss 4b5e58 */ fixed_array<DISP_SOUL_LIST_DATA,176> disp_soul_list_data;
/* sbss 3f5450 */ unsigned char DISP_SOUL_LIST_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_top.c
// *****************************************************************************

/* sdata 3f2fb8 */ void *chapter_title_tex_addr;
/* bss 4b63d8 */ MENU_TOP_DISP menu_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_top_dat.c
// *****************************************************************************

/* data 32ae38 */ SPRT_DAT menu_top[83];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/message.c
// *****************************************************************************

/* data 32b898 */ u_short ascii_font_tbl[223];
/* data 32ba58 */ u_short ascii_font_tbl2[223];
/* data 32bc18 */ int wbyte_font_tbl0[8];
/* data 32bc38 */ int wbyte_font_tbl1[10];
/* data 32bc60 */ int wbyte_font_tbl2[26];
/* data 32bcc8 */ int wbyte_font_tbl3[26];
/* data 32bd30 */ int wbyte_font_tbl4[83];
/* data 32be80 */ int wbyte_font_tbl5[85];
/* data 32bfd8 */ int font_w_b0[210];
/* data 32c320 */ int font_w_b1[210];
/* data 32c668 */ int font_w_b2[210];
/* data 32c9b0 */ int font_w_b3[210];
/* data 32ccf8 */ int font_w_b4[210];
/* data 32d040 */ SPRT_DAT mesbox[8];
/* sdata 3f2fe0 */ int *mes_ex_nums[1];
/* sdata 3f2fe8 */ int (*mes_ex_num_tbl[1])(/* parameters unknown */);
/* sbss 3f4e40 */ DRAW_ENV_5 *change_msg_env;
/* rdata 3bfbd0 */ int msg_type_max_tbl[83];
/* bss 4b63f8 */ MES_DAT msdat;
/* sdata 3f3038 */ u_char *save_mes_addr;
/* sbss 3f4e48 */ MES_WRK mes_wrk;
/* sbss 3f4e50 */ MSG_DISP_CTRL msg_disp_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/mim_dat.c
// *****************************************************************************

/* data 32d140 */ int ch000_mim_no_tbl[41];
/* data 32d1e8 */ int ch001_mim_no_tbl[41];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mis_sel_disp.c
// *****************************************************************************

/* sdata 3f30b4 */ int MisFadeNew;
/* sdata 3f30b8 */ int MisFadeOld;
/* sdata 3f30bc */ int MisFadeCnt;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_ctl.c
// *****************************************************************************

/* sdata 3f3108 */ int (*MisFunc)(/* parameters unknown */);
/* sdata 3f310c */ int MisClearTime;
/* sdata 3f3110 */ int MisTotalScore;
/* sdata 3f3114 */ int MisBestShot;
/* sdata 3f3118 */ int MisClearType;
/* sdata 3f311c */ int MisAnimTime;
/* sdata 3f3128 */ void *MisStTexPtr;
/* sdata 3f312c */ void *MisEnTexPtr;
/* sdata 3f3130 */ void *MisEnClearChrTexPtr;
/* sdata 3f3134 */ void *MisEnScreenPtr;
/* sbss 3f4e58 */ int MisDispID[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/mission_dat.c
// *****************************************************************************

/* data 32d3a8 */ SPRT_DAT mission_tex[174];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_disp.c
// *****************************************************************************

/* sdata 3f3178 */ int MisDispTimer;
/* sdata 3f317c */ int MisDispTimerCnt;
/* sdata 3f3180 */ int MisDispTimerSw;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_pause.c
// *****************************************************************************

/* bss 4b6448 */ PAUSE_CTRL pause_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_sel.c
// *****************************************************************************

/* sdata 3f3208 */ void *mission_sel_tex_addr;
/* sdata 3f320c */ void *out_game_cmn_tex;
/* sdata 3f3210 */ int MissionYesNo;
/* sdata 3f3214 */ int MissionListTop;
/* sdata 3f3218 */ int MissionCsrY;
/* sdata 3f321c */ int MissionMode;
/* sdata 3f3220 */ int MissionMiniYCnt;
/* sdata 3f3224 */ int MissionMiniCsr;
/* sdata 3f3228 */ int MissionBlackOutCnt;
/* sdata 3f322c */ void *MissionSaveDatPtr;
/* bss 4b6458 */ MISSION_TBL MissionTblList[25];
/* sbss 3f5228 */ unsigned char PLYR_ITEM type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4e60 */ MISSION_SEL_CTRL mission_sel_ctrl;
/* sbss 3f4e68 */ MISSION_SEL_DISP mission_sel_disp;
/* bss 4b67e0 */ int MissionList[25][4];
/* bss 4b6970 */ int MissionMdlWork[4];
/* bss 4b6980 */ int MissionGage[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/morph.c
// *****************************************************************************

/* data 32e9a8 */ MORPH_DAT ch017_morph[2];
/* data 32e9b8 */ MORPH_DAT ch020_morph[2];
/* data 32e9c8 */ MORPH_DAT ch030_morph[2];
/* data 32e9d8 */ MORPH_DAT ch041_morph[14];
/* data 32ea48 */ MORPH_DAT *morph_dat[78];
/* bss 4b6990 */ fixed_array<MORPH_CTRL,15> morph_ctrl;
/* sbss 3f5458 */ unsigned char MORPH_CTRL type_info node[8];
/* sbss 3f4e6c */ ANI_CTRL *now_work;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/morph_dat.c
// *****************************************************************************

/* data 32eb80 */ MORPH_CODE morph_down[2];
/* data 32eb90 */ MORPH_CODE ch017morph006[3];
/* data 32eba8 */ MORPH_CODE ch017morph008[2];
/* data 32ebb8 */ MORPH_CODE ch017morph016[3];
/* data 32ebd0 */ MORPH_CODE ch020morph006[3];
/* data 32ebe8 */ MORPH_CODE ch020morph008[6];
/* data 32ec18 */ MORPH_CODE ch030morph006[3];
/* data 32ec30 */ MORPH_CODE ch030morph008[3];
/* data 32ec48 */ MORPH_CODE ch041morph000[2];
/* data 32ec58 */ MORPH_CODE ch041morph002[2];
/* data 32ec68 */ MORPH_CODE ch041morph004[2];
/* data 32ec78 */ MORPH_CODE ch041morph005[2];
/* data 32ec88 */ MORPH_CODE ch041morph006[3];
/* data 32eca0 */ MORPH_CODE ch041morph007[2];
/* data 32ecb0 */ MORPH_CODE ch041morph008[2];
/* data 32ecc0 */ MORPH_CODE ch041morph009[2];
/* data 32ecd0 */ MORPH_CODE ch041morph010[2];
/* data 32ece0 */ MORPH_CODE ch041morph011[2];
/* data 32ecf0 */ MORPH_CODE ch041morph012[2];
/* data 32ed00 */ MORPH_CODE ch041morph013[3];
/* data 32ed18 */ MORPH_CODE ch041morph014[3];
/* data 32ed30 */ MORPH_CODE ch041morph016[3];
/* data 32ed48 */ MORPH_CODE ch041morph017[3];
/* data 32ed60 */ MORPH_CODE ch041morph018[2];
/* data 32ed70 */ MORPH_CODE *ch017morph_tbl[23];
/* data 32edd0 */ MORPH_CODE *ch020morph_tbl[23];
/* data 32ee30 */ MORPH_CODE *ch030morph_tbl[23];
/* data 32ee90 */ MORPH_CODE *ch041morph_tbl[23];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/motion.c
// *****************************************************************************

/* bss 4b9480 */ fixed_array<float[4][4],60> m_start;
/* bss 4ba380 */ fixed_array<float[4][4],60> m_end;
/* sbss 3f51a8 */ unsigned char float [3][3] type_info node[8];
/* sbss 3f5460 */ unsigned char RST_DATA type_info node[8];
/* data 32ef20 */ MIME_CTRL mim_chodo[20];
/* data 32f150 */ u_char mim_chodo_se[20];
/* data 32f168 */ MIME_DAT mim_cdat[2][20];
/* data 32f490 */ ANI_CTRL ani_mdl[50];
/* data 336510 */ ANI_MDL_CTRL ani_mdl_ctrl[50];
/* sdata 3f32f0 */ ACS_ALPHA plyracs_ctrl[2];
/* data 336770 */ ROPE_CTRL rope_ctrl[20];
/* data 336c70 */ CMOVE_CTRL cmove_ctrl[10];
/* data 336d38 */ ENE_VRAM_CTRL ene_vram_ctrl[4];
/* data 336d78 */ ENE_VRAM_CTRL ene_vram_bak[4];
/* sdata 3f32f8 */ MSN_PLYR_INIT plyr_init_ctrl;
/* sdata 3f32fa */ char plyr_mdl_no;
/* sdata 3f32fb */ u_char mim_mepati_id;
/* sdata 3f32fc */ u_char mim_nigiri_l_id;
/* sdata 3f32fd */ u_char mim_nigiri_r_id;
/* sdata 3f3300 */ float now_frot_x;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/movie/movie.c
// *****************************************************************************

/* sdata 3f3348 */ int iMovieCnt;
/* bss 4bb280 */ playPssRsrcs rsrcs;
/* bss 4bb2c0 */ unsigned char temp_zero_bffer[2048];
/* sbss 3f4e70 */ int movie_audio_flg;
/* sbss 3f4e74 */ int bPause;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/movie_room_menu/prg/movie_projecter.c
// *****************************************************************************

/* data 336dc0 */ float ScreenPosition[2][4][4];
/* sbss 3f4e78 */ fixed_array<int,2> SetFilmNo;
/* sdata 3f3398 */ int InitFilmNo[2];
/* sbss 3f4e80 */ MOVIE_PROJECTER_STATE now_state;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/movie_room.c
// *****************************************************************************

/* rdata 3c1790 */ DRAW_ENV_5 MovieDrawEnv;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/movie_room_menu/prg/movie_room_menu.c
// *****************************************************************************

/* data 336e40 */ DISP_FILM_REEL disp_film_reel[7];
/* data 336e98 */ void (*movie_room_menu_pad_func[6])(/* parameters unknown */);
/* data 336eb0 */ void (*movie_room_menu_disp_func[6])(/* parameters unknown */);
/* sbss 3f4e88 */ MOVIE_ROOM_MENU_CTRL movie_room_menu_ctrl;
/* sbss 3f4e90 */ MOVIE_ROOM_MENU_DISP movie_room_menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/movie/movie_title.c
// *****************************************************************************

/* sbss 3f4e98 */ MOVIE_TITLE_CTRL movie_title_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/movie/movie_title_dat.c
// *****************************************************************************

/* data 336ec8 */ MOVIE_TITLE_DAT movie_001[1];
/* data 336ed8 */ MOVIE_TITLE_DAT movie_0010[24];
/* data 336ff8 */ MOVIE_TITLE_DAT movie_0020[5];
/* data 337038 */ MOVIE_TITLE_DAT movie_0110[4];
/* data 337068 */ MOVIE_TITLE_DAT movie_0120[6];
/* data 3370b0 */ MOVIE_TITLE_DAT movie_0121[5];
/* data 3370f0 */ MOVIE_TITLE_DAT movie_0122[4];
/* data 337120 */ MOVIE_TITLE_DAT movie_0130[2];
/* data 337138 */ MOVIE_TITLE_DAT movie_0131[8];
/* data 337198 */ MOVIE_TITLE_DAT movie_0132[5];
/* data 3371d8 */ MOVIE_TITLE_DAT movie_0133[1];
/* data 3371e8 */ MOVIE_TITLE_DAT movie_0140[10];
/* data 337260 */ MOVIE_TITLE_DAT movie_0141[4];
/* data 337290 */ MOVIE_TITLE_DAT movie_0150[4];
/* data 3372c0 */ MOVIE_TITLE_DAT movie_0160[1];
/* data 3372d0 */ MOVIE_TITLE_DAT movie_0170[3];
/* data 3372f8 */ MOVIE_TITLE_DAT movie_0180[7];
/* data 337350 */ MOVIE_TITLE_DAT movie_0190[3];
/* data 337378 */ MOVIE_TITLE_DAT movie_0200[1];
/* data 337388 */ MOVIE_TITLE_DAT movie_0201[1];
/* data 337398 */ MOVIE_TITLE_DAT movie_0210[6];
/* data 3373e0 */ MOVIE_TITLE_DAT movie_0220[5];
/* data 337420 */ MOVIE_TITLE_DAT movie_0230[1];
/* data 337430 */ MOVIE_TITLE_DAT movie_0231[2];
/* data 337448 */ MOVIE_TITLE_DAT movie_0240[2];
/* data 337460 */ MOVIE_TITLE_DAT movie_0310[1];
/* data 337470 */ MOVIE_TITLE_DAT movie_0330[16];
/* data 337530 */ MOVIE_TITLE_DAT movie_0340[4];
/* data 337560 */ MOVIE_TITLE_DAT movie_0350[14];
/* data 337608 */ MOVIE_TITLE_DAT movie_0351[11];
/* data 337690 */ MOVIE_TITLE_DAT movie_0352[9];
/* data 337700 */ MOVIE_TITLE_DAT movie_0410[2];
/* data 337718 */ MOVIE_TITLE_DAT movie_0510[1];
/* data 337728 */ MOVIE_TITLE_DAT movie_0520[3];
/* data 337750 */ MOVIE_TITLE_DAT movie_0610[2];
/* data 337768 */ MOVIE_TITLE_DAT movie_0611[9];
/* data 3377d8 */ MOVIE_TITLE_DAT movie_0620[4];
/* data 337808 */ MOVIE_TITLE_DAT movie_0720[5];
/* data 337848 */ MOVIE_TITLE_DAT movie_0721[9];
/* data 3378b8 */ MOVIE_TITLE_DAT movie_0730[5];
/* data 3378f8 */ MOVIE_TITLE_DAT movie_0731[2];
/* data 337910 */ MOVIE_TITLE_DAT movie_0810[2];
/* data 337928 */ MOVIE_TITLE_DAT movie_0820[6];
/* data 337970 */ MOVIE_TITLE_DAT movie_0910[4];
/* data 3379a0 */ MOVIE_TITLE_DAT movie_0920[12];
/* data 337a30 */ MOVIE_TITLE_DAT movie_0960[4];
/* data 337a60 */ MOVIE_TITLE_DAT movie_1010[4];
/* data 337a90 */ MOVIE_TITLE_DAT movie_1020[46];
/* data 337cb8 */ MOVIE_TITLE_DAT movie_1030[32];
/* data 337e38 */ MOVIE_TITLE_DAT movie_1040[3];
/* data 337e60 */ MOVIE_TITLE_DAT movie_1041[3];
/* data 337e88 */ MOVIE_TITLE_DAT movie_9205[4];
/* data 337eb8 */ MOVIE_TITLE_DAT movie_9206[2];
/* data 337ed0 */ MOVIE_TITLE_DAT movie_0930[5];
/* data 337f10 */ MOVIE_TITLE_DAT movie_promo02[41];
/* data 338100 */ MOVIE_TITLE_DAT movie_promo03[32];
/* data 338280 */ MOVIE_TITLE_DAT *movie_title_dat[72];
/* data 3383a0 */ SPRT_DAT movie_title_base_tex[3];
/* rdata 3c1a38 */ int every_disp_subtitles[33];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/msg_box.c
// *****************************************************************************

/* data 338400 */ SPRT_DAT msg_box_tex[12];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_col_tbl.c
// *****************************************************************************

/* rdata 3c1ac0 */ MSG_COLOR msg_col[45];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_def_dat.c
// *****************************************************************************

/* data 338580 */ MSG_DEF_DATA msg_def_data[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_disp_dat.c
// *****************************************************************************

/* data 3385a0 */ MSG_DISP_DATA msg_disp_data[83];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_win_dat.c
// *****************************************************************************

/* data 338838 */ MSG_WIN_DAT msg_win_data[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/n_equip_tray.c
// *****************************************************************************

/* sdata 3f34b0 */ SUB_FUNC_SI_PARAM CNEquipTraySave::sub_func_si_param[4];
/* data 338878 */ SUB_FUNC_MAHI_PARAM CNEquipTraySave::sub_func_mahi_param[4];
/* sdata 3f34b8 */ SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_oso_param[4];
/* sdata 3f34c0 */ SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_seal_param[4];
/* sdata 3f34c8 */ SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_trace_param[4];
/* data 338888 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_rei_param[4];
/* data 3388c8 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_koku_param[4];
/* data 338908 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_metsu_param[4];
/* data 338948 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_ren_param[4];
/* rdata 3c1c68 */ NEQUIP_FUNC_DAT CNEquipTrayWrk::equip_func_tbl[10];
/* sdata 3f34d0 */ char CNEquipTraySave::aStockMaxTbl[4];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sdata 3f3508 */ int dbg_stock_num;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/n_finder_dat.c
// *****************************************************************************

/* data 338988 */ SPRT_DAT n_finder_dat[168];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/n_plyr_camera.c
// *****************************************************************************

/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4e9c */ int mIsSetup;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/newgame.c
// *****************************************************************************

/* sbss 3f4ea0 */ NEW_GAME_CTRL new_game_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/obj_draw_ctrl.c
// *****************************************************************************

/* data 339e88 */ OBJ_DRAW_FLG obj_draw_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/ol_load.c
// *****************************************************************************

/* data 339eb0 */ OL_LOAD ol_load;
/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
/* data 369d88 */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data 369e88 */ __vtbl_ptr_type CFileName virtual table[3];
/* bss 4cdad0 */ unsigned char CFileName type_info node[12];
/* sbss 3f5110 */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* sbss 3f5468 */ unsigned char OL_LOAD_ONE type_info node[8];
/* sbss 3f5238 */ unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info node[8];
/* bss 4bbac0 */ HEAP_WRK ol_load_heap_wrk;
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/option.c
// *****************************************************************************

/* data 33a090 */ void (*OptionCtrlModule[4])(/* parameters unknown */);
/* data 33a0a0 */ void (*OptionDispModule[4])(/* parameters unknown */);
/* sdata 3f3638 */ OPT_CTRL *oc;
/* sdata 3f363c */ void *opt_og_tex_addr;
/* sdata 3f3640 */ void *opt_top_tex_addr;
/* sdata 3f3644 */ void *opt_brn_tex_addr;
/* sdata 3f3648 */ void *opt_key_tex_addr;
/* data 33a0b0 */ OPT_CTRL opt_ctrl;
/* data 33a0f0 */ OPTION_WRK optm;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/option_dat.c
// *****************************************************************************

/* data 33a100 */ SPRT_DAT option_tex[231];
/* data 33bde0 */ SQAR_DAT option_sqr[21];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/outgame.c
// *****************************************************************************

/* sdata 3f36d0 */ int mFlgOnce;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/outgame_dat.c
// *****************************************************************************

/* data 33bfd8 */ SPRT_DAT out_game_tex[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/pad/pad.c
// *****************************************************************************

/* data 33c0d8 */ u_short sce_pad[16];
/* sdata 3f36d4 */ short unsigned int **paddat;
/* sdata 3f36d8 */ unsigned char **pushdat;
/* bss 4bbae0 */ ANALOG_PAD_CTRL analog_pad_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/pad_check.c
// *****************************************************************************

/* sbss 3f4eae */ char pad_check_step;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/pause/prg/pause.c
// *****************************************************************************

/* bss 4bbaf8 */ PAUSE_CTRL pause_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/pause/prg/pause_dat.c
// *****************************************************************************

/* data 33c0f8 */ SPRT_DAT pause_tex[9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/photo.c
// *****************************************************************************

/* data 33c218 */ PFILE_WRK pfile_wrk;
/* bss 4bbb10 */ fixed_array<_HINT_PHOTO_REQ,5> hint_photo_req;
/* sbss 3f5470 */ unsigned char _HINT_PHOTO_REQ type_info node[8];
/* sbss 3f51f0 */ unsigned char PICTURE_WRK type_info node[8];
/* sbss 3f5200 */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* rdata 3c2eb0 */ SPRT_DAT mayu_pk2_dat;
/* rdata 3c2ed0 */ SPRT_DAT kusabi_pk2_dat;
/* rdata 3c2ef0 */ SPRT_DAT hint_dat_one;
/* data 33c420 */ PHOTO_WRK photo_wrk;
/* sbss 3f4eb0 */ int name_msg_type;
/* sbss 3f4eb4 */ int name_msg_name;
/* sbss 3f4eb8 */ int hint_reqs_cnt;
/* sbss 3f4ebc */ int hint_req_no;
/* sbss 3f4ec0 */ void *photo_tmp_adrs;
/* sbss 3f4ec4 */ int photo_special_tex_file_no;
/* sbss 3f4ec8 */ int hint_mes_type;
/* sbss 3f4ecc */ int hint_mes_no;
/* sbss 3f4ed0 */ SPRT_DAT *p_hint_dat;
/* bss 4bbb30 */ float rare_ene_pos[4];
/* sbss 3f4ed4 */ int unlock_ghost;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/photo_dat.c
// *****************************************************************************

/* sdata 3f3848 */ float photo_rng_tbl[1];
/* sdata 3f3850 */ short unsigned int photo_frame_tbl[1][2];
/* data 33c430 */ float photo_dist_ratio[10];
/* data 33c458 */ float photo_center_ratio[10];
/* data 33c480 */ float photo_charge_ratio[4];
/* data 33c490 */ PhotoData photo_dat[72];
/* sdata 3f3870 */ float pd_default_spd;
/* sdata 3f3874 */ float pd_default_rate;
/* sdata 3f3878 */ float pdb_default_spd;
/* sdata 3f387c */ float pdb_default_rate;
/* sdata 3f3880 */ CSYSTEM_SND_BUF_PLAY furn_sound_player[2];
/* data 33cb50 */ SPRT_DAT hint_dat[4];
/* bss 4bbb40 */ BIT_FLAGS<72> photo_dat_save;
/* bss 4bbb50 */ PHOTO_DAT_OBJ_WRK pd_obj_wrk[4];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4ed8 */ MDAT_OBJ *p_centerest_obj;
/* sbss 3f4edc */ int seal_ghost_draw_lock;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/photo_make.c
// *****************************************************************************

/* data 33cbd0 */ SPRT_DAT photo_frame[14];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/play_data.c
// *****************************************************************************

/* bss 4bbbd0 */ PLAY_DATA_CTRL play_data;
/* sbss 3f4ee0 */ u_char play_timer;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/player.c
// *****************************************************************************

/* data 33cd90 */ PLYR_WRK plyr_wrk;
/* sdata 3f3960 */ PLCMN_WRK *pl_sta[2];
/* sdata 3f3968 */ u_short cam_cng_tm;
/* sdata 3f3970 */ CPLYR_SND_BUF_PLAY mio_deadly_player;
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4ef0 */ int gbLenzShot;
/* rdata 3c3df8 */ float aDmgRateByDifficulty[4];
/* sbss 3f4ef4 */ char look_at_pre_kaidan_flg;
/* sbss 3f4ef8 */ PLAYERFLASHLIGHTTYPE s_FlashlightType;
/* sbss 3f4efc */ int finder_off_lock_timer_cnt;
/* sbss 3f4f00 */ int iBusterCountThisTime;
/* rdata 3c3e08 */ float combo_point_mag[3];
/* rdata 3c3e18 */ float combo_sb_point_mag[3];
/* sbss 3f4f04 */ int door_anime_no;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/plyr_mdl.c
// *****************************************************************************

/* sdata 3f3a50 */ int g_iMaxPlayerAlpha;
/* sdata 3f3a54 */ int g_iMinPlayerAlpha;
/* sdata 3f3a58 */ int s_bUseDoorLight;
/* bss 4bbc70 */ PLYR_PLYR_DATA plyr_data;
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* bss 4bbcb0 */ MDL_REQ_SAVE plyr_mdl_req_save;
/* sbss 3f4f08 */ int ltd_mode;
/* sbss 3f4f0c */ int same_priority_count;
/* sbss 3f4f10 */ LOOK_TARGET_PRIORITY_MIO plyr_neck_now_priority;
/* sbss 3f4f14 */ LOOK_TARGET_PRIORITY_MIO pre_priority;
/* bss 4bbcc0 */ LOOK_AT_PARAM plyr_neck_now_param;
/* sbss 3f4f18 */ int plyr_neck_flg;
/* sbss 3f4f1c */ int plyr_neck_no_registered_cnt;
/* bss 4bbce0 */ GAME_COSTUME GameCostume;
/* data 36a050 */ __vtbl_ptr_type PLYR_PLYR_DATA virtual table[4];
/* bss 4cdbf0 */ unsigned char PLYR_PLYR_DATA type_info node[12];
/* sbss 3f5400 */ unsigned char MAN_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/plyr_room_info.c
// *****************************************************************************

/* bss 4bbcf0 */ fixed_array<ROOM_IN_INFO,240> room_in_info;
/* sbss 3f5478 */ unsigned char ROOM_IN_INFO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/puzzle.c
// *****************************************************************************

/* sbss 3f4f20 */ fixed_array<unsigned char,6> clear_puzzle;
/* bss 4bbde0 */ PZL_EXE_CTRL pzl_exe_ctrl;
/* sbss 3f4f28 */ void *pzl_tex_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/puzzle_dat.c
// *****************************************************************************

/* rdata 3c4528 */ int pzl_conf_msg[6][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/hina/puzzle_hina_dat.c
// *****************************************************************************

/* data 33d110 */ int hina_first_pos[4][4];
/* sdata 3f3b00 */ int no_move_hina[2];
/* data 33d150 */ float hina_pos_x[4][4];
/* data 33d190 */ float hina_pos_y[4][4];
/* data 33d1d0 */ float hina_flea_pos_x[4][4];
/* data 33d210 */ float hina_flea_pos_y[4][4];
/* data 33d250 */ SPRT_DAT puzzle_hina_tex[45];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kaza/puzzle_kaza_dat.c
// *****************************************************************************

/* sdata 3f3b20 */ reference_fixed_array<int,4> kaza_panel_center;
/* sdata 3f3b28 */ reference_fixed_array<int,4> kaza_panel_left_up;
/* sdata 3f3b30 */ reference_fixed_array<int,4> kaza_panel_right_up;
/* sdata 3f3b38 */ reference_fixed_array<int,4> kaza_panel_right_down;
/* sdata 3f3b40 */ reference_fixed_array<int,4> kaza_panel_left_down;
/* sdata 3f3b48 */ reference_fixed_array<int,4> kaza2_panel_center;
/* sdata 3f3b50 */ reference_fixed_array<int,4> kaza2_panel_left_up;
/* sdata 3f3b58 */ reference_fixed_array<int,4> kaza2_panel_right_up;
/* sdata 3f3b60 */ reference_fixed_array<int,4> kaza2_panel_right_down;
/* sdata 3f3b68 */ reference_fixed_array<int,4> kaza2_panel_left_down;
/* data 33d7f0 */ SPRT_DAT puzzle_kaza_tex[58];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/roku/puzzle_roku_dat.c
// *****************************************************************************

/* sdata 3f3b88 */ reference_fixed_array<int,5> six_puzzle_answer;
/* data 33df30 */ int six_pzl_book_label[5][2];
/* data 33df58 */ float shelf_book_x[5];
/* data 33df70 */ SPRT_DAT puzzle_roku_tex[33];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/dat/rank_time_dat.c
// *****************************************************************************

/* rdata 3c46c0 */ int rank_time_tbl[7][3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/roku/roku_pzl.c
// *****************************************************************************

/* data 33e390 */ void (*six_pzl_pad_func[7])(/* parameters unknown */);
/* bss 4bbdf8 */ SIX_PZL_CTRL six_pzl_ctrl;
/* bss 4bbe40 */ SIX_PZL_DISP six_pzl_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/dat/save_data.c
// *****************************************************************************

/* data 33e3b0 */ void (*save_system_data[3])(/* parameters unknown */);
/* data 33e3c0 */ void (*save_game_data[50])(/* parameters unknown */);
/* sdata 3f3c10 */ void (*save_play_data_head[2])(/* parameters unknown */);
/* data 33e488 */ void (*save_album_data[3])(/* parameters unknown */);
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/save_load/dat/save_load_dat.c
// *****************************************************************************

/* data 33e498 */ SPRT_DAT save_load_tex[60];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/save_point_dat.c
// *****************************************************************************

/* data 33ec18 */ MAP_SAVE_POINT map_save_point[13];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/tim_dat/savepoint_dat.c
// *****************************************************************************

/* data 33ece8 */ SPRT_DAT savepoint_tex[16];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_fade_in.c
// *****************************************************************************

/* sbss 3f4f30 */ SAVE_POINT_FADE_IN_CTRL save_point_fade_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_fade_out.c
// *****************************************************************************

/* sdata 3f3c98 */ int save_point_fade_timer;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_main.c
// *****************************************************************************

/* sdata 3f3ce0 */ void *savepoint_bg_tex_addr;
/* sbss 3f4f38 */ SAVEPOINT_MAIN_CTRL savepoint_main_ctrl;
/* bss 4bbe50 */ SAVEPOINT_MAIN_DISP savepoint_main_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_top.c
// *****************************************************************************

/* sdata 3f3d28 */ void *savepoint_tex_addr;
/* sdata 3f3d2c */ char savepoint_top_init_flg;
/* sbss 3f4f40 */ SAVEPOINT_TOP_CTRL savepoint_top_ctrl;
/* sbss 3f4f48 */ SAVEPOINT_TOP_DISP savepoint_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/scene.c
// *****************************************************************************

/* data 33eef0 */ fixed_array<SCENE_CTRL,2> scene_ctrl;
/* data 343150 */ SCENE_LOAD_CTRL scene_load;
/* sdata 3f3d70 */ int scn_vib_time0;
/* sdata 3f3d74 */ int scn_vib_time1;
/* sbss 3f4f60 */ reference_fixed_array<AREA_PREFIX_TO_NO,10> area_prefix_to_no;
/* sbss 3f5480 */ unsigned char SCENE_CTRL type_info node[8];
/* sbss 3f5488 */ unsigned char SCN_ANM_MDL type_info node[8];
/* sbss 3f53c8 */ unsigned char FOD_LIT_SERIAL type_info node[8];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f5490 */ unsigned char AREA_PREFIX_TO_NO type_info node[8];
/* data 343170 */ SCENE_FILE scene_file;
/* sbss 3f4f64 */ int scn_now_play_id;
/* data 3431a0 */ G3DLIGHT PlayerLightBackup;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/scene_dat.c
// *****************************************************************************

/* data 343210 */ SCENE_DATA_CMN scene_data_cmn[72];
/* data 343258 */ int *scene_cut_timing[71];
/* sdata 3f3e60 */ int sceneDummy_cut_timing[1];
/* rdata 3c57c0 */ int scene0110_cut_timing[7];
/* rdata 3c57e0 */ int scene0120_cut_timing[16];
/* rdata 3c5820 */ int scene0122_cut_timing[9];
/* rdata 3c5848 */ int scene0130_cut_timing[8];
/* rdata 3c5868 */ int scene0132_cut_timing[8];
/* rdata 3c5888 */ int scene0133_cut_timing[5];
/* rdata 3c58a0 */ int scene0140_cut_timing[19];
/* rdata 3c58f0 */ int scene0150_cut_timing[10];
/* rdata 3c5918 */ int scene0160_cut_timing[5];
/* sdata 3f3e68 */ int scene0170_cut_timing[2];
/* rdata 3c5930 */ int scene0190_cut_timing[4];
/* rdata 3c5940 */ int scene0210_cut_timing[5];
/* rdata 3c5958 */ int scene0231_cut_timing[10];
/* rdata 3c5980 */ int scene0240_cut_timing[7];
/* rdata 3c59a0 */ int scene0340_cut_timing[23];
/* rdata 3c5a00 */ int scene0350_cut_timing[24];
/* rdata 3c5a60 */ int scene0352_cut_timing[12];
/* rdata 3c5a90 */ int scene0410_cut_timing[5];
/* sdata 3f3e70 */ int scene0510_cut_timing[2];
/* rdata 3c5aa8 */ int scene0520_cut_timing[18];
/* rdata 3c5af0 */ int scene0610_cut_timing[11];
/* rdata 3c5b20 */ int scene0620_cut_timing[7];
/* rdata 3c5b40 */ int scene0720_cut_timing[14];
/* rdata 3c5b78 */ int scene0721_cut_timing[5];
/* rdata 3c5b90 */ int scene0730_cut_timing[14];
/* rdata 3c5bc8 */ int scene0820_cut_timing[7];
/* rdata 3c5be8 */ int scene1010_cut_timing[11];
/* rdata 3c5c18 */ int scene9001_cut_timing[4];
/* rdata 3c5c28 */ int scene9002_cut_timing[10];
/* rdata 3c5c50 */ int scene9101_cut_timing[8];
/* rdata 3c5c70 */ int scene9203_cut_timing[4];
/* rdata 3c5c80 */ int scene9204_cut_timing[4];
/* rdata 3c5c90 */ int scene9205_cut_timing[6];
/* rdata 3c5ca8 */ int scene9206_cut_timing[16];
/* rdata 3c5ce8 */ int scene9302_cut_timing[9];
/* rdata 3c5d10 */ int scene9303_cut_timing[10];
/* rdata 3c5d38 */ int scene9501_cut_timing[20];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/scene_effect.c
// *****************************************************************************

/* sbss 3f5488 */ unsigned char SCN_ANM_MDL type_info node[8];
/* bss 4bbf70 */ SCENE_EFFECT_CTRL SceneEffectCtrl;
/* sbss 3f4f68 */ SCENE_FADE_MODEL_CTRL SceneFadeModelCtrl;
/* bss 4bbfb0 */ SINGLE_LINK_LIST ScenePDeformCtrl;
/* sbss 3f4f70 */ SCENE_ENE_AURA_CTRL SceneEneAuraCtrl;
/* sbss 3f4f78 */ SCENE_VIBRATION_CTRL SceneVibrationCtrl;
/* bss 4bbfc0 */ SINGLE_LINK_LIST SceneTorchCtrl;
/* bss 4bbfd0 */ SINGLE_LINK_LIST SceneHazeCtrl;
/* rdata 3c5e68 */ short int* (*SceneEffectFunc[27])(/* parameters unknown */);
/* rdata 3c5ee0 */ float SaeHazeOffset[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/scn_test.c
// *****************************************************************************

/* sdata 3f3f00 */ int mono_flg;
/* data 343380 */ char *scene_name[72];
/* data 3434a0 */ void (*SceneTestDebugMenu[16])(/* parameters unknown */);
/* data 3434e0 */ SCN_EFF_CTRL scn_eff_ctrl[17];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f53c8 */ unsigned char FOD_LIT_SERIAL type_info node[8];
/* sbss 3f5488 */ unsigned char SCN_ANM_MDL type_info node[8];
/* data 3437d0 */ SCN_TEST_WRK scn_test_wrk;
/* data 3448f0 */ SCN_TEST_PDEFORM ScnTestPdeform[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/setup.c
// *****************************************************************************

/* sdata 3f4280 */ void *setup_bg_tex_addr;
/* sdata 3f4284 */ void *setup_font_tex_addr;
/* sdata 3f4288 */ void *mission_sel_tex_addr;
/* sbss 3f4f80 */ SETUP_CTRL setup_ctrl;
/* sbss 3f4f88 */ SETUP_DISP_CTRL setup_disp_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/setup_dat.c
// *****************************************************************************

/* data 344970 */ SPRT_DAT setup_tex[55];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/setup_menu.c
// *****************************************************************************

/* data 345050 */ void (*setup_menu_pad_func[3])(/* parameters unknown */);
/* data 345060 */ void (*setup_menu_disp_func[3])(/* parameters unknown */);
/* sdata 3f42d0 */ void (*setup_on_off_disp_func[2])(/* parameters unknown */);
/* bss 4bbfe0 */ SETUP_MENU_CTRL setup_menu_ctrl;
/* bss 4bbff0 */ SETUP_MENU_DISP setup_menu_disp;
/* rdata 3c6e48 */ COSTUME_TWIN_TBL costume_tbl[9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sis_algo.c
// *****************************************************************************

/* data 345070 */ void (*SisCtrlTbl[20])(/* parameters unknown */);
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* data 3450c0 */ SIS_LOCAL_ALG sis_lalg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sis_mdl.c
// *****************************************************************************

/* bss 4bc040 */ SIS_DATA sis_data;
/* sbss 3f4f8c */ int ltd_mode;
/* sbss 3f4f90 */ int same_priority_count;
/* sbss 3f4f94 */ LOOK_TARGET_PRIORITY_MAYU sis_neck_now_priority;
/* sbss 3f4f98 */ LOOK_TARGET_PRIORITY_MAYU pre_priority;
/* bss 4bc080 */ LOOK_AT_PARAM sis_neck_now_param;
/* sbss 3f4f9c */ float sis_neck_now_dist;
/* sbss 3f4fa0 */ int sis_neck_flg;
/* sbss 3f4fa4 */ int sis_neck_no_registered_cnt;
/* data 36a070 */ __vtbl_ptr_type SIS_DATA virtual table[4];
/* bss 4cdc00 */ unsigned char SIS_DATA type_info node[12];
/* sbss 3f5400 */ unsigned char MAN_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sis_trpoint.c
// *****************************************************************************

/* data 3450d0 */ int room_point_num[63];
/* data 3451d0 */ sceVu0FVECTOR room_point_00[21];
/* data 345320 */ sceVu0FVECTOR room_point_02[18];
/* data 345440 */ sceVu0FVECTOR room_point_04[24];
/* data 3455c0 */ sceVu0FVECTOR room_point_06[14];
/* data 3456a0 */ sceVu0FVECTOR room_point_08[5];
/* data 3456f0 */ sceVu0FVECTOR room_point_09[6];
/* data 345750 */ sceVu0FVECTOR room_point_11[8];
/* data 3457d0 */ sceVu0FVECTOR room_point_12[5];
/* data 345820 */ sceVu0FVECTOR room_point_13[13];
/* data 3458f0 */ sceVu0FVECTOR room_point_14[27];
/* data 345aa0 */ sceVu0FVECTOR room_point_15[6];
/* data 345b00 */ sceVu0FVECTOR room_point_16[13];
/* data 345bd0 */ sceVu0FVECTOR room_point_17[11];
/* data 345c80 */ sceVu0FVECTOR room_point_18[22];
/* data 345de0 */ sceVu0FVECTOR room_point_40[5];
/* data 345e30 */ sceVu0FVECTOR room_point_41[15];
/* data 345f20 */ sceVu0FVECTOR room_point_42[15];
/* data 346010 */ sceVu0FVECTOR room_point_43[15];
/* data 346100 */ sceVu0FVECTOR room_point_44[10];
/* data 3461a0 */ sceVu0FVECTOR room_point_45[23];
/* data 346310 */ sceVu0FVECTOR room_point_46[21];
/* data 346460 */ sceVu0FVECTOR room_point_47[21];
/* data 3465b0 */ sceVu0FVECTOR room_point_48[21];
/* data 346700 */ sceVu0FVECTOR room_point_49[24];
/* data 346880 */ sceVu0FVECTOR room_point_50[6];
/* data 3468e0 */ sceVu0FVECTOR room_point_51[17];
/* data 3469f0 */ sceVu0FVECTOR room_point_52[6];
/* data 346a50 */ sceVu0FVECTOR room_point_53[11];
/* data 346b00 */ sceVu0FVECTOR room_point_54[14];
/* data 346be0 */ sceVu0FVECTOR room_point_55[17];
/* data 346cf0 */ sceVu0FVECTOR *room_point_pos[63];
/* data 346df0 */ int room_connect_00[22][22];
/* data 347580 */ int room_connect_02[19][19];
/* data 347b28 */ int room_connect_04[25][25];
/* data 3484f0 */ int room_connect_06[15][15];
/* data 348878 */ int room_connect_08[6][6];
/* data 348908 */ int room_connect_09[7][7];
/* data 3489d0 */ int room_connect_11[9][9];
/* data 348b18 */ int room_connect_12[6][6];
/* data 348ba8 */ int room_connect_13[14][14];
/* data 348eb8 */ int room_connect_14[28][28];
/* data 349af8 */ int room_connect_15[7][7];
/* data 349bc0 */ int room_connect_16[14][14];
/* data 349ed0 */ int room_connect_17[12][12];
/* data 34a110 */ int room_connect_18[23][23];
/* data 34a958 */ int room_connect_40[6][6];
/* data 34a9e8 */ int room_connect_41[16][16];
/* data 34ade8 */ int room_connect_42[16][16];
/* data 34b1e8 */ int room_connect_43[16][16];
/* data 34b5e8 */ int room_connect_44[11][11];
/* data 34b7d0 */ int room_connect_45[24][24];
/* data 34c0d0 */ int room_connect_46[22][22];
/* data 34c860 */ int room_connect_47[22][22];
/* data 34cff0 */ int room_connect_48[22][22];
/* data 34d780 */ int room_connect_49[25][25];
/* data 34e148 */ int room_connect_50[7][7];
/* data 34e210 */ int room_connect_51[18][18];
/* data 34e720 */ int room_connect_52[7][7];
/* data 34e7e8 */ int room_connect_53[12][12];
/* data 34ea28 */ int room_connect_54[15][15];
/* data 34edb0 */ int room_connect_55[18][18];
/* data 34f2c0 */ int *room_connect[63];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sister.c
// *****************************************************************************

/* data 34f3c0 */ SIS_TRACE sis_trace;
/* data 34f980 */ SIS_ANI_TBL sis_ani001_tbl[3];
/* data 34f990 */ SIS_ANI_TBL sis_ani002_tbl[3];
/* sdata 3f43e0 */ SIS_ANI_TBL sis_ani003_tbl[2];
/* sdata 3f43e8 */ SIS_ANI_TBL sis_ani004_tbl[2];
/* data 34f9a0 */ SIS_ANI_TBL sis_ani005_tbl[4];
/* sdata 3f43f0 */ SIS_ANI_TBL sis_ani006_tbl[2];
/* sdata 3f43f8 */ SIS_ANI_TBL sis_ani007_tbl[2];
/* sdata 3f4400 */ SIS_ANI_TBL sis_ani008_tbl[2];
/* sdata 3f4408 */ SIS_ANI_TBL sis_ani998_tbl[2];
/* sdata 3f4410 */ SIS_ANI_TBL sis_ani999_tbl[2];
/* data 34f9c0 */ SIS_AREA_CHG_SUB sis_area_chg_ry00[3];
/* data 34fa20 */ SIS_AREA_CHG_SUB sis_area_chg_ry02[3];
/* data 34fa80 */ SIS_AREA_CHG_SUB sis_area_chg_ry04[3];
/* data 34fae0 */ SIS_AREA_CHG_SUB sis_area_chg_ry06[3];
/* data 34fb40 */ SIS_AREA_CHG_SUB sis_area_chg_ry08[2];
/* data 34fb80 */ SIS_AREA_CHG_SUB sis_area_chg_ry09[2];
/* data 34fbc0 */ SIS_AREA_CHG sis_area_chg[7];
/* sbss 3f4fb0 */ reference_fixed_array<SIS_ANI_TBL *,10> sis_ani_tbl;
/* sbss 3f5290 */ unsigned char float [3] type_info node[8];
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* bss 4cdc10 */ unsigned char SIS_ANI_TBL * type_info node[12];
/* sbss 3f5498 */ unsigned char SIS_ANI_TBL type_info node[8];
/* data 34fc00 */ SIS_WRK sis_wrk;
/* sdata 3f4468 */ SIS_ALG_WORK sis_algo;
/* sdata 3f4470 */ SIS_SEARCH sis_search;
/* sdata 3f4478 */ SIS_MOTION sis_motion;
/* data 34fe50 */ float sistv[4];
/* sbss 3f4fb4 */ char look_at_pre_kaidan_flg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/soul_list.c
// *****************************************************************************

/* bss 4bc0a0 */ fixed_array<PLYR_SOUL_LIST,176> plyr_soul_list;
/* sbss 3f54a0 */ unsigned char PLYR_SOUL_LIST type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/spirit_gage.c
// *****************************************************************************

/* rdata 3c7ce0 */ CMIN_MAX<float> CSpiritGage::aDmgMultipleTbl[3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/spr_stack.c
// *****************************************************************************

/* sdata 3f4590 */ CStackMem zero2_spr_stack;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/subtitle/subtitle.c
// *****************************************************************************

/* data 34fe80 */ SUBTITLE_CTRL SubTitleCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/os/system.c
// *****************************************************************************

/* data 34fea0 */ SND_3D_ENV s3d_env;
/* sdata 3f4618 */ int SYSTEM_VBLANK_WAIT_NUM;
/* data 34feb8 */ CD_DAT_TBL cd_dat_tbl[4491];
/* data 35d140 */ char *filename_path[54];
/* data 35d218 */ char file_ext_tbl[4491];
/* sdata 3f4628 */ void *pdrawenv;
/* data 35e3b0 */ sceGsDBuff gdb;
/* sdata 3f462c */ int system_sound_bank_id;
/* bss 4bc620 */ HEAP_WRK system_heap_wrk;
/* sbss 3f4fb8 */ int vblank_sema;
/* rdata 3dd3d0 */ FNAME_DAT filename_dat[4491];
/* sbss 3f4fbc */ int draw_perf_count;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/save_load/prg/system_data_save.c
// *****************************************************************************

/* sdata 3f4700 */ void* (*SystemDataSaveMemGet)(/* parameters unknown */);
/* sdata 3f4704 */ void (*SystemDataSaveMemFree)(/* parameters unknown */);
/* sdata 3f4708 */ void *system_data_buff_addr;
/* sbss 3f4fc0 */ SYSTEM_DATA_SAVE_CTRL system_data_save_ctrl;
/* sbss 3f4fc8 */ SYSTEM_DATA_SAVE_DISP system_data_save_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/title.c
// *****************************************************************************

/* sdata 3f4770 */ void *title_bg_addr;
/* sdata 3f4774 */ void *title_logo_addr;
/* sdata 3f4778 */ void *outgame_cmn_tex_addr;
/* sdata 3f477c */ u_char title_bg_send_lock;
/* sdata 3f477d */ u_char title_move_movie_timer;
/* bss 4bc640 */ TITLE_WRK title_wrk;
/* sbss 3f4fd0 */ TITLE_DISP_CTRL title_disp_ctrl;
/* sbss 3f4fd8 */ char title_load_end;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/title_dat.c
// *****************************************************************************

/* rdata 3e6790 */ int title_left_x_tbl[8][5];
/* rdata 3e6830 */ int title_right_x_tbl[8][5];
/* rdata 3e68d0 */ int newgame_left_x_tbl[2][5];
/* rdata 3e68f8 */ int newgame_right_x_tbl[2][5];
/* data 35e5e0 */ SPRT_DAT title_top[29];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/title_menu.c
// *****************************************************************************

/* sbss 3f4fe0 */ TITLE_MENU_CTRL title_menu_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/title_movie.c
// *****************************************************************************

/* sbss 3f4fe8 */ TITLE_MOVIE_WRK title_movie_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/unit_ctl.c
// *****************************************************************************

/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/utility2.c
// *****************************************************************************

/* sdata 3f48d0 */ void (*print_warning_func)(/* parameters unknown */);
/* sdata 3f48d4 */ void (*print_assert_func)(/* parameters unknown */);
/* bss 4bc658 */ char g_cComment[300];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/pad/vib_manage.c
// *****************************************************************************

/* sbss 3f4ff0 */ int vib1_time;
/* sbss 3f4ff4 */ int vib2_time;
/* sbss 3f4ff8 */ int vib2_pow;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/zero2_perf.c
// *****************************************************************************

/* sdata 3f4908 */ C_ZERO2_PERF_CNT c_zero2_perf_cnt;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/fileload.c
// *****************************************************************************

/* sbss 3f5000 */ short unsigned int file_load_wrk_id;
/* sbss 3f5004 */ FILE_LOAD_WRK *file_load_wrk;
/* bss 4bd7c0 */ FILE_LOAD_SYS file_load_sys;
/* bss 4bd800 */ char iop_fileload_ret[64];
/* bss 4bd840 */ char iop_fileload_cmd[320];
/* bss 4bd980 */ sceSifClientData sif_cli_data_f;
/* sbss 3f5008 */ int load_th_idx;
/* sbss 3f500c */ int load_req_sema_id;
/* sbss 3f5010 */ int rpc_sema_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/spu_mem.c
// *****************************************************************************

/* bss 4bd9a8 */ SPU_BUF spu_buf[50];
/* sbss 3f5014 */ int spu_mem_sema;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_buffer.c
// *****************************************************************************

/* bss 4bde58 */ SND_BUF_PLAYER snd_buf_player[48];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/ee_iop.c
// *****************************************************************************

/* sbss 3f5018 */ void* (*ee_iop_malloc)(/* parameters unknown */);
/* sbss 3f501c */ void (*ee_iop_free)(/* parameters unknown */);
/* bss 4be840 */ char iop_com_buffer[4096];
/* bss 4bf840 */ IOP_RET_STATUS iop_ret;
/* bss 4bfa00 */ char iop_ret_buffer[448];
/* sbss 3f5020 */ int iop_com_offset;
/* bss 4bfbc0 */ sceSifClientData sif_cli_data;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/ee_iop_q.c
// *****************************************************************************

/* bss 4bfc00 */ char iop_query_buffer[512];
/* bss 4bfe00 */ char iop_query_arg[512];
/* bss 4c0000 */ sceSifClientData sif_cli_data_q;
/* sbss 3f5024 */ int query_sema_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/stream_auto.c
// *****************************************************************************

/* sdata 3f4978 */ int dbg_stream_enable_flg;
/* sbss 3f5028 */ int stream_queue_max;
/* sbss 3f502c */ STREAM_QUEUE *stream_wait_queue;
/* bss 4c0030 */ STREAM_QUEUE stream_play_queue[2];
/* sbss 3f5030 */ char stream_play_disable[2];
/* sbss 3f5032 */ char stream_play_disable_num;
/* sbss 3f5034 */ int stream_queue_id;
/* sbss 3f5038 */ int stream_wait_num;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_bank.c
// *****************************************************************************

/* sbss 3f503c */ int snd_bank_max;
/* sbss 3f5040 */ SND_BANK *snd_bank;
/* sbss 3f5044 */ SND_BANK_FILE *snd_bd_file;
/* sbss 3f5048 */ SND_BANK_FILE *snd_hxd_file;
/* sbss 3f504c */ int snd_bank_load_priority;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_3d.c
// *****************************************************************************

/* data 35e980 */ SND_3D_ENV snd_3d_env;
/* sdata 3f4992 */ char listner_set;
/* sbss 3f5050 */ float farthest_dist_calc;
/* sbss 3f5054 */ float nearest_dist_calc;
/* sbss 3f5058 */ float sound_speed;
/* sbss 3f505c */ float dist_unit;
/* bss 4c00f0 */ SND_3D_WRK snd_3d_wrk[30];
/* bss 4c0690 */ SND_3D_LISTENER snd_3d_listner;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/cddat.c
// *****************************************************************************

/* bss 4c07e0 */ char title_root_path[200];
/* sbss 3f5060 */ FNAME_DAT *p_fname_dat;
/* sbss 3f5064 */ char **p_filename_path;
/* sbss 3f5068 */ char *p_ext_lbl;
/* sbss 3f506c */ int project_file_num;
/* sbss 3f5070 */ CD_DAT_TBL *p_cd_dat;
/* bss 4c08a8 */ SET_CD_DAT set_cd_dat;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd.c
// *****************************************************************************

/* data 35e998 */ int eff_use_size_tbl[0];
/* bss 4c08b8 */ SOUND_SYS snd_sys;
/* sbss 3f5078 */ int effect_mode[2];
/* sbss 3f5080 */ int effect_adrs[2];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_pcmstream.c
// *****************************************************************************

/* data 35e9c0 */ SND_PCM_STREAM_WRK snd_pcm_stream_wrk[2];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/cmp_eeiop.c
// *****************************************************************************

/* sdata 3f49a8 */ void *tmp_buf_adrs;
/* sdata 3f49ac */ int cmp_th_idx;
/* sbss 3f5088 */ void *cmp_eeiop_stack;
/* bss 4c08d0 */ sceSifCmdData cmdbuffer[16];
/* bss 4c0990 */ LOAD_REQ_NEW decode_load_ee;
/* sbss 3f508c */ int cmp_eeiop_init_priority;
/* sbss 3f5090 */ int decode_sema_id;
/* sbss 3f5094 */ int decode_dat_sema_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_util.c
// *****************************************************************************

/* sbss 3f5098 */ AUTO_BD_WRK *auto_bd_wrk;
/* sbss 3f509c */ int auto_bd_wrk_max;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/file_stream.c
// *****************************************************************************

/* bss 4c0ac0 */ char iop_file_stm_ret[64];
/* bss 4c0b00 */ char iop_file_stm_arg[320];
/* bss 4c0c40 */ sceSifClientData sif_cli_data_s;
/* sbss 3f50a0 */ int file_stream_lock;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/hxd.c
// *****************************************************************************

/* data 35ec10 */ char *voice_type_name_tbl[0];
/* sdata 3f49b0 */ int hxd_file_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/spu_voice.c
// *****************************************************************************

/* sdata 3f49d0 */ int core_voices[2];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_stream.c
// *****************************************************************************

/* bss 4c0c80 */ SND_STREAM_WRK snd_stream_wrk[2];
/* bss 4c1000 */ char header_buf_64[2][2048];
/* sbss 3f50a8 */ int irq_core_source[2];
/* sbss 3f50b0 */ int snd_stream_load_priority;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/encodes/encodes.c
// *****************************************************************************

/* data 35ec28 */ short int dad[4097];
/* data 360c30 */ short int lson[4097];
/* data 362c38 */ short int rson[4353];
/* data 364e40 */ unsigned char text[4113];
/* sdata 3f49d8 */ short int matchpos;
/* sdata 3f49da */ short int matchlen;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/playpss/my_strfile.c
// *****************************************************************************

/* sbss 3f50b4 */ int pss_block_read;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/playpss/playpss.c
// *****************************************************************************

/* sdata 3f49e0 */ int iPalVBlankCounter;
/* sdata 3f49f0 */ int iVTCounter;
/* bss 4c2000 */ char videoDecStack[2048];
/* sbss 3f50b8 */ PLAY_PSS_FLAGS Flags;
/* sbss 3f50bc */ int videoDecTh;
/* bss 4c2800 */ AudioDec audioDec;
/* sbss 3f50c0 */ int (*fileRead)(/* parameters unknown */);
/* sbss 3f50c4 */ int bgDuration;
/* sdata 3f49f4 */ int iMovieDecSema;
/* sbss 3f50c8 */ char *muxBuff;
/* sbss 3f50cc */ int muxBuffFullness;
/* sbss 3f50d0 */ char *demuxBuff;
/* sbss 3f50d4 */ int demuxBuffSize;
/* sbss 3f50d8 */ char *demuxBuffPast;
/* sbss 3f50dc */ char *demuxBuffPresent;
/* sbss 3f50e0 */ char *demuxBuffFuture;
/* sbss 3f50e4 */ sceIpuRGB32 *rsrcs_rgb32;
/* sbss 3f50e8 */ u_int *rsrcs_path3tag;
/* sbss 3f50ec */ int rsrcs_vram_adrs;
/* bss 4c2860 */ sceMpeg playpss_mp;
/* sbss 3f50f0 */ int audio_play_flg;
/* sdata 3f49f8 */ int hid_vblank;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/playpss/audiodec.c
// *****************************************************************************

/* sbss 3f50f4 */ int AUTODMA_CH;
/* sbss 3f50f8 */ int audio_vol_percent;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/thread.c
// *****************************************************************************

/* data 367a80 */ int topId;
/* bss 4c33f0 */ int topSema;
/* bss 4c33f8 */ rqueue topArg;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/kprintf.c
// *****************************************************************************

/* data 367a84 */ int count;
/* data 367a88 */ void (*_putchar)(/* parameters unknown */);
/* bss 4c3800 */ char linebuf[128];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/sifcmd.c
// *****************************************************************************

/* data 367a8c */ int _cmd_init_check;
/* bss 4c3880 */ u_long128 _pckt_buffer[8];
/* bss 4c3900 */ u_long128 _send_buffer[4];
/* bss 4c3940 */ sceSifCmdCSData _csdata;
/* bss 4c3954 */ int sif0_handleid;
/* bss 4c3958 */ sceSifCmdDataTable _data_table;
/* bss 4c3980 */ sceSifCmdData _sys_buffer[32];
/* bss 4c3b00 */ unsigned int soft_reg[32];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/sifrpc.c
// *****************************************************************************

/* data 367a90 */ int _sceSifInitCheck;
/* bss 4c3b80 */ _sceRpcPacket _packet_buffer[32];
/* bss 4c4380 */ _sceRpcPacket _free_buffer[32];
/* bss 4c4b80 */ _sceRpcPacket _free_buffer2[32];
/* bss 4c5380 */ _sceRpcDataTable _data_table;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/filestub.c
// *****************************************************************************

/* data 367a98 */ int _sceFs_q[32];
/* data 367b18 */ unsigned int ee_retbuf_sel;
/* data 367b1c */ int _fs_init;
/* data 367b20 */ int _fs_rcv_bufdbl;
/* data 367b24 */ int _fs_semid;
/* data 367b28 */ int _fs_iob_semid;
/* data 367b2c */ int _fs_fsq_semid;
/* data 367b30 */ char *_fswildcard;
/* bss 4c5400 */ unsigned char _send_data[3136];
/* bss 4c6040 */ unsigned char _rcv_data_rpc[64];
/* bss 4c6080 */ unsigned char _rcv_data_cmd[2][1088];
/* bss 4c6900 */ _sceFsIob _iob[32];
/* bss 4c6b00 */ sceSifClientData _cd;
/* bss 4c6b28 */ char _fsversion[4];
/* bss 4c6b40 */ int _sif_FsRcv_Data[16];
/* bss 4c6b80 */ int _sif_FsPoff_Data[16];
/* bss 4c6bc0 */ void *sceCbPoff_Gp;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/iopheap.c
// *****************************************************************************

/* data 367b34 */ int _bind;
/* bss 4c6c00 */ sceSifClientData cd;
/* bss 4c6c40 */ unsigned int rdata[16];
/* bss 4c6c80 */ unsigned int sdata[16];
/* bss 4c6cc0 */ _sceLoadIHData _lih_data;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/eeloadfile.c
// *****************************************************************************

/* data 367b38 */ int _bind_check;
/* data 367b3c */ char *_lfwildcard;
/* bss 4c6dc0 */ _sceLoadFileData _senddata;
/* bss 4c6fc0 */ sceSifClientData cd;
/* bss 4c6fe8 */ char _lfversion[4];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/iopreset.c
// *****************************************************************************

/* bss 4c7000 */ sceSifCmdResetData rdata;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/tlbfunc.c
// *****************************************************************************

/* data 367b40 */ u_int tlbsrc[0];
/* data 367e70 */ void (*_kTLBRefillHandler)(/* parameters unknown */);
/* data 367e78 */ void (*_kDebugHandler[16])(/* parameters unknown */);
/* data 367eb8 */ void *_kExecArg;
/* data 367ec0 */ struct SysEntry[0] { // 0x8
	/* 0x000 */ int num;
	/* 0x004 */ void *func;
};
/* data 367f00 */ TLBEntry kernelTLB[0];
/* data 367fd0 */ TLBEntry defaultTLB[0];
/* data 3680f0 */ TLBEntry extendTLB[0];
/* data 368170 */ TLB TLBInfo;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/initsys.c
// *****************************************************************************

/* data 368190 */ int *_SyscallEntry;
/* data 368198 */ struct SysEntry[0] { // 0x8
	/* 0x000 */ int num;
	/* 0x004 */ void *func;
};
/* data 3681a8 */ int __sce_sema_id;
/* data 3681ac */ int __sce_eh_sema_id;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/libosd.c
// *****************************************************************************

/* data 3681b0 */ u_int osdsrc[0];
/* data 368958 */ SysEntry SysExecPS2Entry[0];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/exit.c
// *****************************************************************************

/* data 368970 */ struct SysEntry[0] { // 0x8
	/* 0x000 */ int num;
	/* 0x004 */ void *func;
};

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/alarm.c
// *****************************************************************************

/* data 368978 */ u_int srcfile[0];
/* data 3690b8 */ u_int eenull[0];
/* data 3690e0 */ struct SysEntry[0] { // 0x8
	/* 0x000 */ int num;
	/* 0x004 */ void *func;
};

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/timer.c
// *****************************************************************************

/* data 369120 */ struct g_Timer { // 0x20
	/* 0x000 */ u_long ulHighCount;
	/* 0x008 */ int hid;
	/* 0x00c */ u_int uniqkey;
	/* 0x010 */ u_int uiUsedCounters;
	/* 0x014 */ COUNTER *pFree;
	/* 0x018 */ COUNTER *pAlarm;
	/* 0x01c */ int cbcounterid;
};
/* bss 4c82c0 */ COUNTER g_CounterBuf[128];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/timeralarm.c
// *****************************************************************************

/* bss 4ca2c0 */ ALARM g_AlarmBuf[64];
/* bss 4ca6c0 */ ALARM *g_pFreeAlarm;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/iopnotify.c
// *****************************************************************************

/* data 369140 */ sceSifRebootNotifyData *g_pUserRebootBuf;
/* data 369144 */ int g_iUserRebootSize;
/* bss 4ca6c8 */ sceSifRebootNotifyData g_SysRebootBuf[32];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/glue.c
// *****************************************************************************

/* data 369148 */ int ttyinit;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/deci2.c
// *****************************************************************************

/* bss 4ca8c8 */ char userarea[36];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/tty.c
// *****************************************************************************

/* bss 4caa10 */ TTYINFO tinfo;
/* bss 4caa40 */ char wbuf[320];
/* bss 4cab80 */ char rbuf[320];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_atan.c
// *****************************************************************************

/* rdata 3eb000 */ float atanhi[0];
/* rdata 3eb010 */ float atanlo[0];
/* rdata 3eb020 */ float aT[0];
/* rdata 3eb04c */ float one;
/* rdata 3eb050 */ float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_cos.c
// *****************************************************************************

/* rdata 3eb054 */ float one;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_acos.c
// *****************************************************************************

/* rdata 3eb058 */ float one;
/* rdata 3eb05c */ float pi;
/* rdata 3eb060 */ float pio2_hi;
/* rdata 3eb064 */ float pio2_lo;
/* rdata 3eb068 */ float pS0;
/* rdata 3eb06c */ float pS1;
/* rdata 3eb070 */ float pS2;
/* rdata 3eb074 */ float pS3;
/* rdata 3eb078 */ float pS4;
/* rdata 3eb07c */ float pS5;
/* rdata 3eb080 */ float qS1;
/* rdata 3eb084 */ float qS2;
/* rdata 3eb088 */ float qS3;
/* rdata 3eb08c */ float qS4;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_atan2.c
// *****************************************************************************

/* rdata 3eb090 */ float tiny;
/* rdata 3eb094 */ float zero;
/* rdata 3eb098 */ float pi_o_4;
/* rdata 3eb09c */ float pi_o_2;
/* rdata 3eb0a0 */ float pi;
/* rdata 3eb0a4 */ float pi_lo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_fmod.c
// *****************************************************************************

/* rdata 3eb0a8 */ float one;
/* rdata 3eb0b0 */ float Zero[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_log.c
// *****************************************************************************

/* rdata 3eb0b8 */ float ln2_hi;
/* rdata 3eb0bc */ float ln2_lo;
/* rdata 3eb0c0 */ float two25;
/* rdata 3eb0c4 */ float Lg1;
/* rdata 3eb0c8 */ float Lg2;
/* rdata 3eb0cc */ float Lg3;
/* rdata 3eb0d0 */ float Lg4;
/* rdata 3eb0d4 */ float Lg5;
/* rdata 3eb0d8 */ float Lg6;
/* rdata 3eb0dc */ float Lg7;
/* rdata 3eb0e0 */ float zero;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_pow.c
// *****************************************************************************

/* rdata 3eb0e8 */ float bp[0];
/* rdata 3eb0f0 */ float dp_h[0];
/* rdata 3eb0f8 */ float dp_l[0];
/* rdata 3eb100 */ float zero;
/* rdata 3eb104 */ float one;
/* rdata 3eb108 */ float two;
/* rdata 3eb10c */ float two24;
/* rdata 3eb110 */ float huge;
/* rdata 3eb114 */ float tiny;
/* rdata 3eb118 */ float L1;
/* rdata 3eb11c */ float L2;
/* rdata 3eb120 */ float L3;
/* rdata 3eb124 */ float L4;
/* rdata 3eb128 */ float L5;
/* rdata 3eb12c */ float L6;
/* rdata 3eb130 */ float P1;
/* rdata 3eb134 */ float P2;
/* rdata 3eb138 */ float P3;
/* rdata 3eb13c */ float P4;
/* rdata 3eb140 */ float P5;
/* rdata 3eb144 */ float lg2;
/* rdata 3eb148 */ float lg2_h;
/* rdata 3eb14c */ float lg2_l;
/* rdata 3eb150 */ float ovt;
/* rdata 3eb154 */ float cp;
/* rdata 3eb158 */ float cp_h;
/* rdata 3eb15c */ float cp_l;
/* rdata 3eb160 */ float ivln2;
/* rdata 3eb164 */ float ivln2_h;
/* rdata 3eb168 */ float ivln2_l;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_rem_pio2.c
// *****************************************************************************

/* rdata 3eb170 */ __int32_t two_over_pi[0];
/* rdata 3eb488 */ __int32_t npio2_hw[0];
/* rdata 3eb508 */ float zero;
/* rdata 3eb50c */ float half;
/* rdata 3eb510 */ float two8;
/* rdata 3eb514 */ float invpio2;
/* rdata 3eb518 */ float pio2_1;
/* rdata 3eb51c */ float pio2_1t;
/* rdata 3eb520 */ float pio2_2;
/* rdata 3eb524 */ float pio2_2t;
/* rdata 3eb528 */ float pio2_3;
/* rdata 3eb52c */ float pio2_3t;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sqrt.c
// *****************************************************************************

/* rdata 3eb530 */ float one;
/* rdata 3eb534 */ float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_cos.c
// *****************************************************************************

/* rdata 3eb538 */ float one;
/* rdata 3eb53c */ float C1;
/* rdata 3eb540 */ float C2;
/* rdata 3eb544 */ float C3;
/* rdata 3eb548 */ float C4;
/* rdata 3eb54c */ float C5;
/* rdata 3eb550 */ float C6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_rem_pio2.c
// *****************************************************************************

/* rdata 3eb558 */ int init_jk[0];
/* rdata 3eb568 */ float PIo2[0];
/* rdata 3eb594 */ float zero;
/* rdata 3eb598 */ float one;
/* rdata 3eb59c */ float two8;
/* rdata 3eb5a0 */ float twon8;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_sin.c
// *****************************************************************************

/* rdata 3eb5a4 */ float half;
/* rdata 3eb5a8 */ float S1;
/* rdata 3eb5ac */ float S2;
/* rdata 3eb5b0 */ float S3;
/* rdata 3eb5b4 */ float S4;
/* rdata 3eb5b8 */ float S5;
/* rdata 3eb5bc */ float S6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_tan.c
// *****************************************************************************

/* rdata 3eb5c0 */ float one;
/* rdata 3eb5c4 */ float pio4;
/* rdata 3eb5c8 */ float pio4lo;
/* rdata 3eb5d0 */ float T[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_floor.c
// *****************************************************************************

/* rdata 3eb604 */ float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_scalbn.c
// *****************************************************************************

/* rdata 3eb608 */ float two25;
/* rdata 3eb60c */ float twom25;
/* rdata 3eb610 */ float huge;
/* rdata 3eb614 */ float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb618 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb718 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb818 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb918 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* data 369560 */ void (*__terminate_func)(/* parameters unknown */);
/* data 369564 */ eh_context* (*get_eh_context)(/* parameters unknown */);
/* data 369568 */ int dwarf_reg_size_table_initialized;
/* bss 4cdc20 */ void *key_value[256];
/* bss 4cd9f0 */ __gthread_key_t eh_context_key;
/* bss 4cd9f8 */ char dwarf_reg_size_table[122];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* rdata 3eba18 */ fp_number_type __thenan_df;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/frame-dwarf2.c
// *****************************************************************************

/* data 369574 */ __gthread_mutex_t object_mutex;
/* bss 4cdc20 */ void *key_value[256];
/* bss 4cda78 */ object *objects;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/cp/tinfo.cc
// *****************************************************************************

/* data 36a090 */ __vtbl_ptr_type __class_type_info virtual table[6];
/* data 36a0c0 */ __vtbl_ptr_type __si_type_info virtual table[6];
/* data 36a0f0 */ __vtbl_ptr_type __user_type_info virtual table[6];
/* data 36a120 */ __vtbl_ptr_type bad_typeid virtual table[4];
/* data 36a140 */ __vtbl_ptr_type bad_cast virtual table[4];
/* data 36a160 */ __vtbl_ptr_type type_info virtual table[3];
/* bss 3f54a8 */ unsigned char type_info type_info node[8];
/* bss 4ce030 */ unsigned char bad_cast type_info node[12];
/* bss 4ce020 */ unsigned char bad_typeid type_info node[12];
/* bss 4ce040 */ unsigned char __user_type_info type_info node[12];
/* bss 4ce050 */ unsigned char __si_type_info type_info node[12];
/* bss 4ce060 */ unsigned char __class_type_info type_info node[12];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/cp/tinfo2.cc
// *****************************************************************************

/* data 36a178 */ __vtbl_ptr_type __array_type_info virtual table[3];
/* data 36a190 */ __vtbl_ptr_type __ptmd_type_info virtual table[3];
/* data 36a1a8 */ __vtbl_ptr_type __ptmf_type_info virtual table[3];
/* data 36a1c0 */ __vtbl_ptr_type __func_type_info virtual table[3];
/* data 36a1d8 */ __vtbl_ptr_type __builtin_type_info virtual table[3];
/* data 36a1f0 */ __vtbl_ptr_type __attr_type_info virtual table[3];
/* data 36a208 */ __vtbl_ptr_type __pointer_type_info virtual table[3];
/* bss 4ce0b0 */ unsigned char __pointer_type_info type_info node[12];
/* bss 4ce080 */ unsigned char __attr_type_info type_info node[12];
/* bss 4ce0d0 */ unsigned char __builtin_type_info type_info node[12];
/* bss 4ce070 */ unsigned char __func_type_info type_info node[12];
/* bss 4ce090 */ unsigned char __ptmf_type_info type_info node[12];
/* bss 4ce0c0 */ unsigned char __ptmd_type_info type_info node[12];
/* bss 4ce0a0 */ unsigned char __array_type_info type_info node[12];
/* data 369578 */ unsigned char void type_info node[8];
/* data 369580 */ unsigned char long long type_info node[8];
/* data 369588 */ unsigned char long type_info node[8];
/* data 369590 */ unsigned char int type_info node[8];
/* data 369598 */ unsigned char short type_info node[8];
/* data 3695a0 */ unsigned char bool type_info node[8];
/* data 3695a8 */ unsigned char char type_info node[8];
/* data 3695b0 */ unsigned char wchar_t type_info node[8];
/* data 3695b8 */ unsigned char long double type_info node[8];
/* data 3695c0 */ unsigned char double type_info node[8];
/* data 3695c8 */ unsigned char float type_info node[8];
/* data 3695d0 */ unsigned char unsigned int type_info node[8];
/* data 3695d8 */ unsigned char unsigned long type_info node[8];
/* data 3695e0 */ unsigned char unsigned long long type_info node[8];
/* data 3695e8 */ unsigned char unsigned short type_info node[8];
/* data 3695f0 */ unsigned char unsigned char type_info node[8];
/* data 3695f8 */ unsigned char signed char type_info node[8];
/* data 369600 */ unsigned char int128_t type_info node[8];
/* data 369608 */ unsigned char unsigned int128_t type_info node[8];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/cp/exception.cc
// *****************************************************************************

/* data 369610 */ void (*__unexpected_func)(/* parameters unknown */);
/* data 36a220 */ __vtbl_ptr_type bad_exception virtual table[4];
/* data 36a240 */ __vtbl_ptr_type exception virtual table[4];
/* bss 3f54b0 */ unsigned char exception type_info node[8];
/* bss 4ce0e0 */ unsigned char bad_exception type_info node[12];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/ctype/ctype_.c
// *****************************************************************************

/* rdata 3ebd08 */ char _ctype_[257];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/impure.c
// *****************************************************************************

/* data 369618 */ _reent impure_data;
/* data 369908 */ _reent *_impure_ptr;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* data 369910 */ mbinptr __malloc_av_[258];
/* data 369d18 */ long unsigned int __malloc_trim_threshold;
/* data 369d20 */ long unsigned int __malloc_top_pad;
/* data 369d28 */ char *__malloc_sbrk_base;
/* data 369d30 */ long unsigned int __malloc_max_sbrked_mem;
/* data 369d38 */ long unsigned int __malloc_max_total_mem;
/* data 369d40 */ mallinfo __malloc_current_mallinfo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mlock.c
// *****************************************************************************

/* data 369d68 */ int __malloc_lock_owner;
/* data 369d6c */ int call_count;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/sbrkr.c
// *****************************************************************************

/* bss 3f54b8 */ int errno;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/locale/locale.c
// *****************************************************************************

/* data 369d70 */ int __mb_cur_max;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mprec.c
// *****************************************************************************

/* rdata 3ed0a0 */ double __mprec_tens[0];
/* rdata 3ed168 */ double __mprec_bigtens[0];
/* rdata 3ed190 */ double __mprec_tinytens[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_infconst.c
// *****************************************************************************

/* rdata 3ed290 */ __dmath __infinity[1];

// *****************************************************************************
// FILE -- (unknown)
// *****************************************************************************

/* nil 2c3d00 */ force_to_data;
/* nil 3eea80 */ _$tmp_0.620;
/* nil 3eea84 */ _$tmp_1.628;
/* nil 3eea88 */ _$tmp_2.633;
/* nil 3eea8c */ _$tmp_3.641;
/* nil 3eea90 */ _$tmp_4.649;
/* nil 3eea94 */ _$tmp_5.657;
/* nil 3eea98 */ _$tmp_6.665;
/* nil 3eea9c */ _$tmp_7.691;
/* nil 3eeaa0 */ _$tmp_8.699;
/* nil 3eeaa4 */ _$tmp_9.704;
/* nil 3eeaa8 */ str.777;
/* nil 3eead8 */ _$tmp_0.599;
/* nil 3eeadc */ _$tmp_1.607;
/* nil 3eeae0 */ _$tmp_2.612;
/* nil 3eeae4 */ _$tmp_3.620;
/* nil 3eeae8 */ _$tmp_4.628;
/* nil 3eeaec */ _$tmp_5.636;
/* nil 3eeaf0 */ _$tmp_6.644;
/* nil 3eeaf4 */ _$tmp_7.670;
/* nil 3eeaf8 */ _$tmp_8.678;
/* nil 3eeafc */ _$tmp_9.683;
/* nil 3eeb00 */ str.735;
/* nil 3eeb20 */ str.646;
/* nil 3eeb38 */ _$tmp_0.726;
/* nil 3eeb3c */ _$tmp_1.734;
/* nil 3eeb40 */ _$tmp_2.739;
/* nil 3eeb44 */ _$tmp_3.747;
/* nil 3eeb48 */ _$tmp_4.755;
/* nil 3eeb4c */ _$tmp_5.763;
/* nil 3eeb50 */ _$tmp_6.771;
/* nil 3eeb54 */ _$tmp_7.797;
/* nil 3eeb58 */ _$tmp_8.805;
/* nil 3eeb5c */ _$tmp_9.810;
/* nil 3eeb80 */ str.646;
/* nil 3eeb98 */ _$tmp_0.747;
/* nil 3eeb9c */ _$tmp_1.755;
/* nil 3eeba0 */ _$tmp_2.760;
/* nil 3eeba4 */ _$tmp_3.768;
/* nil 3eeba8 */ _$tmp_4.776;
/* nil 3eebac */ _$tmp_5.784;
/* nil 3eebb0 */ _$tmp_6.792;
/* nil 3eebb4 */ _$tmp_7.818;
/* nil 3eebb8 */ _$tmp_8.826;
/* nil 3eebbc */ _$tmp_9.831;
/* nil 39dde0 */ __FUNCTION__.961;
/* nil 39de78 */ __FUNCTION__.1036;
/* nil 3eebe8 */ str.646;
/* nil 3eec00 */ _$tmp_0.599;
/* nil 3eec04 */ _$tmp_1.607;
/* nil 3eec08 */ _$tmp_2.612;
/* nil 3eec0c */ _$tmp_3.620;
/* nil 3eec10 */ _$tmp_4.628;
/* nil 3eec14 */ _$tmp_5.636;
/* nil 3eec18 */ _$tmp_6.644;
/* nil 3eec1c */ _$tmp_7.670;
/* nil 3eec20 */ _$tmp_8.678;
/* nil 3eec24 */ _$tmp_9.683;
/* nil 3eec28 */ str.735;
/* nil 3eec48 */ _$tmp_0.692;
/* nil 3eec4c */ _$tmp_1.700;
/* nil 3eec50 */ _$tmp_2.705;
/* nil 3eec54 */ _$tmp_3.713;
/* nil 3eec58 */ _$tmp_4.721;
/* nil 3eec5c */ _$tmp_5.729;
/* nil 3eec60 */ _$tmp_6.737;
/* nil 3eec64 */ _$tmp_7.763;
/* nil 3eec68 */ _$tmp_8.771;
/* nil 3eec6c */ _$tmp_9.776;
/* nil 3eec70 */ str.849;
/* nil 39e020 */ __FUNCTION__.967;
/* nil 3eec88 */ _$tmp_0.692;
/* nil 3eec8c */ _$tmp_1.700;
/* nil 3eec90 */ _$tmp_2.705;
/* nil 3eec94 */ _$tmp_3.713;
/* nil 3eec98 */ _$tmp_4.721;
/* nil 3eec9c */ _$tmp_5.729;
/* nil 3eeca0 */ _$tmp_6.737;
/* nil 3eeca4 */ _$tmp_7.763;
/* nil 3eeca8 */ _$tmp_8.771;
/* nil 3eecac */ _$tmp_9.776;
/* nil 3eecb0 */ str.849;
/* nil 2c8c20 */ MapDoorSelList.1129;
/* nil 39e338 */ __FUNCTION__.1172;
/* nil 3eed10 */ _$tmp_0.599;
/* nil 3eed14 */ _$tmp_1.607;
/* nil 3eed18 */ _$tmp_2.612;
/* nil 3eed1c */ _$tmp_3.620;
/* nil 3eed20 */ _$tmp_4.628;
/* nil 3eed24 */ _$tmp_5.636;
/* nil 3eed28 */ _$tmp_6.644;
/* nil 3eed2c */ _$tmp_7.670;
/* nil 3eed30 */ _$tmp_8.678;
/* nil 3eed34 */ _$tmp_9.683;
/* nil 3eed38 */ str.735;
/* nil 39e490 */ __FUNCTION__.1009;
/* nil 3eed60 */ _$tmp_0.671;
/* nil 3eed64 */ _$tmp_1.679;
/* nil 3eed68 */ _$tmp_2.684;
/* nil 3eed6c */ _$tmp_3.692;
/* nil 3eed70 */ _$tmp_4.700;
/* nil 3eed74 */ _$tmp_5.708;
/* nil 3eed78 */ _$tmp_6.716;
/* nil 3eed7c */ _$tmp_7.742;
/* nil 3eed80 */ _$tmp_8.750;
/* nil 3eed84 */ _$tmp_9.755;
/* nil 3eed88 */ str.807;
/* nil 3eedb8 */ str.646;
/* nil 3eedd0 */ _$tmp_0.759;
/* nil 3eedd4 */ _$tmp_1.767;
/* nil 3eedd8 */ _$tmp_2.772;
/* nil 3eeddc */ _$tmp_3.780;
/* nil 3eede0 */ _$tmp_4.788;
/* nil 3eede4 */ _$tmp_5.796;
/* nil 3eede8 */ _$tmp_6.804;
/* nil 3eedec */ _$tmp_7.830;
/* nil 3eedf0 */ _$tmp_8.838;
/* nil 3eedf4 */ _$tmp_9.843;
/* nil 3eee00 */ str.646;
/* nil 3eee18 */ _$tmp_0.726;
/* nil 3eee1c */ _$tmp_1.734;
/* nil 3eee20 */ _$tmp_2.739;
/* nil 3eee24 */ _$tmp_3.747;
/* nil 3eee28 */ _$tmp_4.755;
/* nil 3eee2c */ _$tmp_5.763;
/* nil 3eee30 */ _$tmp_6.771;
/* nil 3eee34 */ _$tmp_7.797;
/* nil 3eee38 */ _$tmp_8.805;
/* nil 3eee3c */ _$tmp_9.810;
/* nil 39e750 */ __FUNCTION__.886;
/* nil 39e7c8 */ __FUNCTION__.1126;
/* nil 39e8a8 */ __FUNCTION__.1180;
/* nil 3eee70 */ _$tmp_0.671;
/* nil 3eee74 */ _$tmp_1.679;
/* nil 3eee78 */ _$tmp_2.684;
/* nil 3eee7c */ _$tmp_3.692;
/* nil 3eee80 */ _$tmp_4.700;
/* nil 3eee84 */ _$tmp_5.708;
/* nil 3eee88 */ _$tmp_6.716;
/* nil 3eee8c */ _$tmp_7.742;
/* nil 3eee90 */ _$tmp_8.750;
/* nil 3eee94 */ _$tmp_9.755;
/* nil 3eee98 */ str.807;
/* nil 39e938 */ __FUNCTION__.916;
/* nil 39eb58 */ __FUNCTION__.1027;
/* nil 3eeee0 */ str.646;
/* nil 3eeef8 */ _$tmp_0.729;
/* nil 3eeefc */ _$tmp_1.737;
/* nil 3eef00 */ _$tmp_2.742;
/* nil 3eef04 */ _$tmp_3.750;
/* nil 3eef08 */ _$tmp_4.758;
/* nil 3eef0c */ _$tmp_5.766;
/* nil 3eef10 */ _$tmp_6.774;
/* nil 3eef14 */ _$tmp_7.800;
/* nil 3eef18 */ _$tmp_8.808;
/* nil 3eef1c */ _$tmp_9.813;
/* nil 3eef2c */ _$tmp_10.1094;
/* nil 2c8fc0 */ aWindPowerList.1164;
/* nil 3eef38 */ str.646;
/* nil 3eef50 */ _$tmp_0.810;
/* nil 3eef54 */ _$tmp_1.818;
/* nil 3eef58 */ _$tmp_2.823;
/* nil 3eef5c */ _$tmp_3.831;
/* nil 3eef60 */ _$tmp_4.839;
/* nil 3eef64 */ _$tmp_5.847;
/* nil 3eef68 */ _$tmp_6.855;
/* nil 3eef6c */ _$tmp_7.881;
/* nil 3eef70 */ _$tmp_8.889;
/* nil 3eef74 */ _$tmp_9.894;
/* nil 2c8fd0 */ anim_list.1147;
/* nil 3eef88 */ _$tmp_0.599;
/* nil 3eef8c */ _$tmp_1.607;
/* nil 3eef90 */ _$tmp_2.612;
/* nil 3eef94 */ _$tmp_3.620;
/* nil 3eef98 */ _$tmp_4.628;
/* nil 3eef9c */ _$tmp_5.636;
/* nil 3eefa0 */ _$tmp_6.644;
/* nil 3eefa4 */ _$tmp_7.670;
/* nil 3eefa8 */ _$tmp_8.678;
/* nil 3eefac */ _$tmp_9.683;
/* nil 3eefb0 */ str.735;
/* nil 3eefc8 */ _$tmp_0.620;
/* nil 3eefcc */ _$tmp_1.628;
/* nil 3eefd0 */ _$tmp_2.633;
/* nil 3eefd4 */ _$tmp_3.641;
/* nil 3eefd8 */ _$tmp_4.649;
/* nil 3eefdc */ _$tmp_5.657;
/* nil 3eefe0 */ _$tmp_6.665;
/* nil 3eefe4 */ _$tmp_7.691;
/* nil 3eefe8 */ _$tmp_8.699;
/* nil 3eefec */ _$tmp_9.704;
/* nil 3eeff0 */ str.777;
/* nil 3ef008 */ _$tmp_0.692;
/* nil 3ef00c */ _$tmp_1.700;
/* nil 3ef010 */ _$tmp_2.705;
/* nil 3ef014 */ _$tmp_3.713;
/* nil 3ef018 */ _$tmp_4.721;
/* nil 3ef01c */ _$tmp_5.729;
/* nil 3ef020 */ _$tmp_6.737;
/* nil 3ef024 */ _$tmp_7.763;
/* nil 3ef028 */ _$tmp_8.771;
/* nil 3ef02c */ _$tmp_9.776;
/* nil 3ef030 */ str.849;
/* nil 2cc5d0 */ tes.1037;
/* nil 3ef070 */ str.646;
/* nil 3ef088 */ _$tmp_0.741;
/* nil 3ef08c */ _$tmp_1.749;
/* nil 3ef090 */ _$tmp_2.754;
/* nil 3ef094 */ _$tmp_3.762;
/* nil 3ef098 */ _$tmp_4.770;
/* nil 3ef09c */ _$tmp_5.778;
/* nil 3ef0a0 */ _$tmp_6.786;
/* nil 3ef0a4 */ _$tmp_7.812;
/* nil 3ef0a8 */ _$tmp_8.820;
/* nil 3ef0ac */ _$tmp_9.825;
/* nil 3ef0f0 */ _$tmp_0.671;
/* nil 3ef0f4 */ _$tmp_1.679;
/* nil 3ef0f8 */ _$tmp_2.684;
/* nil 3ef0fc */ _$tmp_3.692;
/* nil 3ef100 */ _$tmp_4.700;
/* nil 3ef104 */ _$tmp_5.708;
/* nil 3ef108 */ _$tmp_6.716;
/* nil 3ef10c */ _$tmp_7.742;
/* nil 3ef110 */ _$tmp_8.750;
/* nil 3ef114 */ _$tmp_9.755;
/* nil 3ef118 */ str.807;
/* nil 3ef170 */ str.574;
/* nil 39f918 */ __FUNCTION__.629;
/* nil 3ef198 */ _$tmp_0.620;
/* nil 3ef19c */ _$tmp_1.628;
/* nil 3ef1a0 */ _$tmp_2.633;
/* nil 3ef1a4 */ _$tmp_3.641;
/* nil 3ef1a8 */ _$tmp_4.649;
/* nil 3ef1ac */ _$tmp_5.657;
/* nil 3ef1b0 */ _$tmp_6.665;
/* nil 3ef1b4 */ _$tmp_7.691;
/* nil 3ef1b8 */ _$tmp_8.699;
/* nil 3ef1bc */ _$tmp_9.704;
/* nil 3ef1c0 */ str.777;
/* nil 3ef1e0 */ str.646;
/* nil 3ef1f8 */ _$tmp_0.726;
/* nil 3ef1fc */ _$tmp_1.734;
/* nil 3ef200 */ _$tmp_2.739;
/* nil 3ef204 */ _$tmp_3.747;
/* nil 3ef208 */ _$tmp_4.755;
/* nil 3ef20c */ _$tmp_5.763;
/* nil 3ef210 */ _$tmp_6.771;
/* nil 3ef214 */ _$tmp_7.797;
/* nil 3ef218 */ _$tmp_8.805;
/* nil 3ef21c */ _$tmp_9.810;
/* nil 39fd18 */ __FUNCTION__.1090;
/* nil 3ef248 */ str.646;
/* nil 3ef268 */ str.646;
/* nil 3ef280 */ _$tmp_0.759;
/* nil 3ef284 */ _$tmp_1.767;
/* nil 3ef288 */ _$tmp_2.772;
/* nil 3ef28c */ _$tmp_3.780;
/* nil 3ef290 */ _$tmp_4.788;
/* nil 3ef294 */ _$tmp_5.796;
/* nil 3ef298 */ _$tmp_6.804;
/* nil 3ef29c */ _$tmp_7.830;
/* nil 3ef2a0 */ _$tmp_8.838;
/* nil 3ef2a4 */ _$tmp_9.843;
/* nil 3a0100 */ __FUNCTION__.964;
/* nil 3a0150 */ __FUNCTION__.967;
/* nil 3a0180 */ __FUNCTION__.979;
/* nil 3ef2f0 */ str.646;
/* nil 3ef308 */ str.646;
/* nil 3ef320 */ _$tmp_0.759;
/* nil 3ef324 */ _$tmp_1.767;
/* nil 3ef328 */ _$tmp_2.772;
/* nil 3ef32c */ _$tmp_3.780;
/* nil 3ef330 */ _$tmp_4.788;
/* nil 3ef334 */ _$tmp_5.796;
/* nil 3ef338 */ _$tmp_6.804;
/* nil 3ef33c */ _$tmp_7.830;
/* nil 3ef340 */ _$tmp_8.838;
/* nil 3ef344 */ _$tmp_9.843;
/* nil 3a0438 */ sel_scl_tbl.970;
/* nil 3a0450 */ non_sel_scl_tbl.971;
/* nil 3a0468 */ in_alpha_tbl.972;
/* nil 3a0478 */ out_alpha_tbl.973;
/* nil 3ef348 */ thumbnail_base_x.1019;
/* nil 3ef350 */ thumbnail_base_y.1020;
/* nil 3ef358 */ thumbnail_base_x_tbl.1024;
/* nil 3ef360 */ thumbnail_num_y_tbl.1025;
/* nil 3a04a0 */ album_x_tbl.1035;
/* nil 3a04b0 */ album_y_tbl.1036;
/* nil 3a04c0 */ album_disp_tbl.1037;
/* nil 3a04f8 */ __FUNCTION__.1038;
/* nil 3a0518 */ album_info_tex_tbl.1041;
/* nil 3a0550 */ album_info_name_tbl.1042;
/* nil 3a05c0 */ no_tex_tbl.1046;
/* nil 3a05e0 */ num_tex_tbl.1050;
/* nil 3a0600 */ item_tex_tbl.1054;
/* nil 3a0638 */ album_frame_tbl.1064;
/* nil 3a0648 */ album_frame_tbl.1068;
/* nil 3a0658 */ conf_tex_tbl.1072;
/* nil 3a0668 */ csr_x_tbl.1073;
/* nil 3a0678 */ flare_x_tbl.1074;
/* nil 3a0688 */ menu_item_tbl.1078;
/* nil 3ef368 */ msg_id_tbl.1085;
/* nil 3ef370 */ msg_y_tbl.1086;
/* nil 3a06a0 */ __FUNCTION__.1093;
/* nil 3a06b8 */ album_tex_tbl.1096;
/* nil 3a0718 */ __FUNCTION__.1097;
/* nil 3a0738 */ album_tex_tbl.1100;
/* nil 3a0770 */ __FUNCTION__.1101;
/* nil 3a0790 */ album_tex_tbl.1104;
/* nil 3a07c8 */ __FUNCTION__.1105;
/* nil 3a07e8 */ album_msg_tbl.1108;
/* nil 3a0808 */ msg_y_tbl.1109;
/* nil 3ef378 */ msg_id_tbl.1113;
/* nil 3a0828 */ __FUNCTION__.1114;
/* nil 3a0848 */ album_tex_tbl.1117;
/* nil 3a0868 */ __FUNCTION__.1118;
/* nil 3a0880 */ album_tex_tbl.1121;
/* nil 3ef380 */ str.646;
/* nil 3ef398 */ _$tmp_0.759;
/* nil 3ef39c */ _$tmp_1.767;
/* nil 3ef3a0 */ _$tmp_2.772;
/* nil 3ef3a4 */ _$tmp_3.780;
/* nil 3ef3a8 */ _$tmp_4.788;
/* nil 3ef3ac */ _$tmp_5.796;
/* nil 3ef3b0 */ _$tmp_6.804;
/* nil 3ef3b4 */ _$tmp_7.830;
/* nil 3ef3b8 */ _$tmp_8.838;
/* nil 3ef3bc */ _$tmp_9.843;
/* nil 3a0928 */ __FUNCTION__.982;
/* nil 3a0988 */ __FUNCTION__.1021;
/* nil 3a09c8 */ __FUNCTION__.1027;
/* nil 3a09e0 */ __FUNCTION__.1057;
/* nil 3a09f8 */ __FUNCTION__.1069;
/* nil 3ef3c0 */ thumbnail_x_tbl.1099;
/* nil 3ef3c8 */ thumbnail_y_tbl.1100;
/* nil 3a0a28 */ __FUNCTION__.1107;
/* nil 3a0a58 */ menu_item_x.1113;
/* nil 3ef3d0 */ sort_x_tbl.1126;
/* nil 3ef3d8 */ str.646;
/* nil 3ef3f0 */ _$tmp_0.759;
/* nil 3ef3f4 */ _$tmp_1.767;
/* nil 3ef3f8 */ _$tmp_2.772;
/* nil 3ef3fc */ _$tmp_3.780;
/* nil 3ef400 */ _$tmp_4.788;
/* nil 3ef404 */ _$tmp_5.796;
/* nil 3ef408 */ _$tmp_6.804;
/* nil 3ef40c */ _$tmp_7.830;
/* nil 3ef410 */ _$tmp_8.838;
/* nil 3ef414 */ _$tmp_9.843;
/* nil 3a0b08 */ __FUNCTION__.973;
/* nil 3a0b68 */ __FUNCTION__.976;
/* nil 3a0b80 */ __FUNCTION__.985;
/* nil 3a0cc0 */ __FUNCTION__.1024;
/* nil 3a0d60 */ __FUNCTION__.1051;
/* nil 3a0d78 */ __FUNCTION__.1057;
/* nil 3a0dd0 */ __FUNCTION__.81;
/* nil 3a0e58 */ __FUNCTION__.90;
/* nil 3ef420 */ str.646;
/* nil 3ef438 */ _$tmp_0.759;
/* nil 3ef43c */ _$tmp_1.767;
/* nil 3ef440 */ _$tmp_2.772;
/* nil 3ef444 */ _$tmp_3.780;
/* nil 3ef448 */ _$tmp_4.788;
/* nil 3ef44c */ _$tmp_5.796;
/* nil 3ef450 */ _$tmp_6.804;
/* nil 3ef454 */ _$tmp_7.830;
/* nil 3ef458 */ _$tmp_8.838;
/* nil 3ef45c */ _$tmp_9.843;
/* nil 3a0ec8 */ __FUNCTION__.970;
/* nil 3a0f28 */ __FUNCTION__.973;
/* nil 3a0f40 */ __FUNCTION__.982;
/* nil 3a1110 */ __FUNCTION__.1024;
/* nil 3a11d0 */ __FUNCTION__.1105;
/* nil 3a11e8 */ __FUNCTION__.1111;
/* nil 3ef468 */ str.646;
/* nil 3ef480 */ _$tmp_0.759;
/* nil 3ef484 */ _$tmp_1.767;
/* nil 3ef488 */ _$tmp_2.772;
/* nil 3ef48c */ _$tmp_3.780;
/* nil 3ef490 */ _$tmp_4.788;
/* nil 3ef494 */ _$tmp_5.796;
/* nil 3ef498 */ _$tmp_6.804;
/* nil 3ef49c */ _$tmp_7.830;
/* nil 3ef4a0 */ _$tmp_8.838;
/* nil 3ef4a4 */ _$tmp_9.843;
/* nil 3a12e0 */ __FUNCTION__.988;
/* nil 3a1340 */ num_tex_tbl.1009;
/* nil 3a1360 */ frame_tex_tbl.1013;
/* nil 3a1398 */ __FUNCTION__.1017;
/* nil 3a13a8 */ type_tex_tbl.1020;
/* nil 3a1400 */ __FUNCTION__.1021;
/* nil 3a1418 */ type_tex_tbl.1024;
/* nil 3a1470 */ protect_x_tbl.1034;
/* nil 3a1480 */ protect_y_tbl.1035;
/* nil 3a1490 */ protect_x_tbl.1039;
/* nil 3a14a0 */ protect_y_tbl.1040;
/* nil 3a14b0 */ __FUNCTION__.1041;
/* nil 3ef4b0 */ str.574;
/* nil 3ef4c8 */ str.646;
/* nil 3a1630 */ __FUNCTION__.9;
/* nil 3a16a0 */ __FUNCTION__.12;
/* nil 3a16d0 */ __FUNCTION__.15;
/* nil 3a1700 */ __FUNCTION__.18;
/* nil 3a1730 */ __FUNCTION__.21;
/* nil 3a1790 */ __FUNCTION__.24;
/* nil 3ef4e0 */ _$tmp_0.692;
/* nil 3ef4e4 */ _$tmp_1.700;
/* nil 3ef4e8 */ _$tmp_2.705;
/* nil 3ef4ec */ _$tmp_3.713;
/* nil 3ef4f0 */ _$tmp_4.721;
/* nil 3ef4f4 */ _$tmp_5.729;
/* nil 3ef4f8 */ _$tmp_6.737;
/* nil 3ef4fc */ _$tmp_7.763;
/* nil 3ef500 */ _$tmp_8.771;
/* nil 3ef504 */ _$tmp_9.776;
/* nil 3ef508 */ str.849;
/* nil 3a1818 */ __FUNCTION__.949;
/* nil 3a1950 */ __FUNCTION__.979;
/* nil 3ef528 */ str.688;
/* nil 3ef540 */ _$tmp_0.759;
/* nil 3ef544 */ _$tmp_1.767;
/* nil 3ef548 */ _$tmp_2.772;
/* nil 3ef54c */ _$tmp_3.780;
/* nil 3ef550 */ _$tmp_4.788;
/* nil 3ef554 */ _$tmp_5.796;
/* nil 3ef558 */ _$tmp_6.804;
/* nil 3ef55c */ _$tmp_7.830;
/* nil 3ef560 */ _$tmp_8.838;
/* nil 3ef564 */ _$tmp_9.843;
/* nil 3ef568 */ __FUNCTION__.1036;
/* nil 3ef580 */ str.688;
/* nil 3ef5b0 */ _$tmp_0.620;
/* nil 3ef5b4 */ _$tmp_1.628;
/* nil 3ef5b8 */ _$tmp_2.633;
/* nil 3ef5bc */ _$tmp_3.641;
/* nil 3ef5c0 */ _$tmp_4.649;
/* nil 3ef5c4 */ _$tmp_5.657;
/* nil 3ef5c8 */ _$tmp_6.665;
/* nil 3ef5cc */ _$tmp_7.691;
/* nil 3ef5d0 */ _$tmp_8.699;
/* nil 3ef5d4 */ _$tmp_9.704;
/* nil 3ef5d8 */ str.777;
/* nil 3ef5f0 */ __FUNCTION__.916;
/* nil 3ef5f8 */ str.688;
/* nil 3ef610 */ _$tmp_0.759;
/* nil 3ef614 */ _$tmp_1.767;
/* nil 3ef618 */ _$tmp_2.772;
/* nil 3ef61c */ _$tmp_3.780;
/* nil 3ef620 */ _$tmp_4.788;
/* nil 3ef624 */ _$tmp_5.796;
/* nil 3ef628 */ _$tmp_6.804;
/* nil 3ef62c */ _$tmp_7.830;
/* nil 3ef630 */ _$tmp_8.838;
/* nil 3ef634 */ _$tmp_9.843;
/* nil 3ef640 */ str.616;
/* nil 3ef658 */ _$tmp_0.762;
/* nil 3ef65c */ _$tmp_1.770;
/* nil 3ef660 */ _$tmp_2.775;
/* nil 3ef664 */ _$tmp_3.783;
/* nil 3ef668 */ _$tmp_4.791;
/* nil 3ef66c */ _$tmp_5.799;
/* nil 3ef670 */ _$tmp_6.807;
/* nil 3ef674 */ _$tmp_7.833;
/* nil 3ef678 */ _$tmp_8.841;
/* nil 3ef67c */ _$tmp_9.846;
/* nil 3ef680 */ _$tmp_0.692;
/* nil 3ef684 */ _$tmp_1.700;
/* nil 3ef688 */ _$tmp_2.705;
/* nil 3ef68c */ _$tmp_3.713;
/* nil 3ef690 */ _$tmp_4.721;
/* nil 3ef694 */ _$tmp_5.729;
/* nil 3ef698 */ _$tmp_6.737;
/* nil 3ef69c */ _$tmp_7.763;
/* nil 3ef6a0 */ _$tmp_8.771;
/* nil 3ef6a4 */ _$tmp_9.776;
/* nil 3ef6a8 */ str.849;
/* nil 3ef6c0 */ __FUNCTION__.976;
/* nil 3a2100 */ __FUNCTION__.979;
/* nil 3ef750 */ _$tmp_0.599;
/* nil 3ef754 */ _$tmp_1.607;
/* nil 3ef758 */ _$tmp_2.612;
/* nil 3ef75c */ _$tmp_3.620;
/* nil 3ef760 */ _$tmp_4.628;
/* nil 3ef764 */ _$tmp_5.636;
/* nil 3ef768 */ _$tmp_6.644;
/* nil 3ef76c */ _$tmp_7.670;
/* nil 3ef770 */ _$tmp_8.678;
/* nil 3ef774 */ _$tmp_9.683;
/* nil 3a2380 */ __FUNCTION__.693;
/* nil 3a23d8 */ __FUNCTION__.696;
/* nil 3ef788 */ str.688;
/* nil 3ef7a0 */ _$tmp_0.735;
/* nil 3ef7a4 */ _$tmp_1.743;
/* nil 3ef7a8 */ _$tmp_2.748;
/* nil 3ef7ac */ _$tmp_3.756;
/* nil 3ef7b0 */ _$tmp_4.764;
/* nil 3ef7b4 */ _$tmp_5.772;
/* nil 3ef7b8 */ _$tmp_6.780;
/* nil 3ef7bc */ _$tmp_7.806;
/* nil 3ef7c0 */ _$tmp_8.814;
/* nil 3ef7c4 */ _$tmp_9.819;
/* nil 3ef7c8 */ __FUNCTION__.1084;
/* nil 3ef7d0 */ __FUNCTION__.1087;
/* nil 3ef7d8 */ __FUNCTION__.1090;
/* nil 3ef7e0 */ __FUNCTION__.1117;
/* nil 3ef7e8 */ __FUNCTION__.1120;
/* nil 3ef7f0 */ __FUNCTION__.1123;
/* nil 3ef7f8 */ __FUNCTION__.1126;
/* nil 3ef800 */ __FUNCTION__.1129;
/* nil 3ef808 */ __FUNCTION__.1141;
/* nil 3ef810 */ _$tmp_0.692;
/* nil 3ef814 */ _$tmp_1.700;
/* nil 3ef818 */ _$tmp_2.705;
/* nil 3ef81c */ _$tmp_3.713;
/* nil 3ef820 */ _$tmp_4.721;
/* nil 3ef824 */ _$tmp_5.729;
/* nil 3ef828 */ _$tmp_6.737;
/* nil 3ef82c */ _$tmp_7.763;
/* nil 3ef830 */ _$tmp_8.771;
/* nil 3ef834 */ _$tmp_9.776;
/* nil 3ef838 */ str.849;
/* nil 3a3428 */ __FUNCTION__.982;
/* nil 3ef858 */ _$tmp_0.692;
/* nil 3ef85c */ _$tmp_1.700;
/* nil 3ef860 */ _$tmp_2.705;
/* nil 3ef864 */ _$tmp_3.713;
/* nil 3ef868 */ _$tmp_4.721;
/* nil 3ef86c */ _$tmp_5.729;
/* nil 3ef870 */ _$tmp_6.737;
/* nil 3ef874 */ _$tmp_7.763;
/* nil 3ef878 */ _$tmp_8.771;
/* nil 3ef87c */ _$tmp_9.776;
/* nil 3ef880 */ str.849;
/* nil 3a3518 */ __FUNCTION__.961;
/* nil 3a3580 */ __FUNCTION__.973;
/* nil 3a3598 */ msg_id_tbl.985;
/* nil 3a35a8 */ msg_y_tbl.992;
/* nil 3a35b8 */ msg_id_tbl.993;
/* nil 3ef8a8 */ _$tmp_0.692;
/* nil 3ef8ac */ _$tmp_1.700;
/* nil 3ef8b0 */ _$tmp_2.705;
/* nil 3ef8b4 */ _$tmp_3.713;
/* nil 3ef8b8 */ _$tmp_4.721;
/* nil 3ef8bc */ _$tmp_5.729;
/* nil 3ef8c0 */ _$tmp_6.737;
/* nil 3ef8c4 */ _$tmp_7.763;
/* nil 3ef8c8 */ _$tmp_8.771;
/* nil 3ef8cc */ _$tmp_9.776;
/* nil 3ef8d0 */ str.849;
/* nil 3a3690 */ __FUNCTION__.970;
/* nil 3a3708 */ __FUNCTION__.973;
/* nil 3a3740 */ __FUNCTION__.976;
/* nil 3a3778 */ __FUNCTION__.979;
/* nil 3a37c0 */ __FUNCTION__.982;
/* nil 3a3808 */ __FUNCTION__.985;
/* nil 3ef8e8 */ str.688;
/* nil 3ef900 */ _$tmp_0.759;
/* nil 3ef904 */ _$tmp_1.767;
/* nil 3ef908 */ _$tmp_2.772;
/* nil 3ef90c */ _$tmp_3.780;
/* nil 3ef910 */ _$tmp_4.788;
/* nil 3ef914 */ _$tmp_5.796;
/* nil 3ef918 */ _$tmp_6.804;
/* nil 3ef91c */ _$tmp_7.830;
/* nil 3ef920 */ _$tmp_8.838;
/* nil 3ef924 */ _$tmp_9.843;
/* nil 3ef928 */ __FUNCTION__.1054;
/* nil 3ef930 */ str.646;
/* nil 3ef948 */ _$tmp_0.747;
/* nil 3ef94c */ _$tmp_1.755;
/* nil 3ef950 */ _$tmp_2.760;
/* nil 3ef954 */ _$tmp_3.768;
/* nil 3ef958 */ _$tmp_4.776;
/* nil 3ef95c */ _$tmp_5.784;
/* nil 3ef960 */ _$tmp_6.792;
/* nil 3ef964 */ _$tmp_7.818;
/* nil 3ef968 */ _$tmp_8.826;
/* nil 3ef96c */ _$tmp_9.831;
/* nil 3a3980 */ env.1363;
/* nil 3ef990 */ iNoVoiceCnt.1472;
/* nil 3ef994 */ mFlgOpen.1473;
/* nil 3ef9b0 */ str.646;
/* nil 3ef9c8 */ _$tmp_0.771;
/* nil 3ef9cc */ _$tmp_1.779;
/* nil 3ef9d0 */ _$tmp_2.784;
/* nil 3ef9d4 */ _$tmp_3.792;
/* nil 3ef9d8 */ _$tmp_4.800;
/* nil 3ef9dc */ _$tmp_5.808;
/* nil 3ef9e0 */ _$tmp_6.816;
/* nil 3ef9e4 */ _$tmp_7.842;
/* nil 3ef9e8 */ _$tmp_8.850;
/* nil 3ef9ec */ _$tmp_9.855;
/* nil 3a3f68 */ __FUNCTION__.628;
/* nil 3a3fe0 */ __FUNCTION__.637;
/* nil 3a4098 */ __FUNCTION__.643;
/* nil 3a4100 */ __FUNCTION__.649;
/* nil 3a41a0 */ __FUNCTION__.655;
/* nil 3a4200 */ __FUNCTION__.658;
/* nil 3a4248 */ __FUNCTION__.661;
/* nil 3a4268 */ __FUNCTION__.673;
/* nil 3efb10 */ str.646;
/* nil 3efb28 */ _$tmp_0.780;
/* nil 3efb2c */ _$tmp_1.788;
/* nil 3efb30 */ _$tmp_2.793;
/* nil 3efb34 */ _$tmp_3.801;
/* nil 3efb38 */ _$tmp_4.809;
/* nil 3efb3c */ _$tmp_5.817;
/* nil 3efb40 */ _$tmp_6.825;
/* nil 3efb44 */ _$tmp_7.851;
/* nil 3efb48 */ _$tmp_8.859;
/* nil 3efb4c */ _$tmp_9.864;
/* nil 3a4338 */ __FUNCTION__.979;
/* nil 3a4398 */ __FUNCTION__.982;
/* nil 3a43c8 */ __FUNCTION__.985;
/* nil 3a4400 */ __FUNCTION__.988;
/* nil 3a4430 */ __FUNCTION__.991;
/* nil 3a4460 */ __FUNCTION__.994;
/* nil 3a4498 */ __FUNCTION__.997;
/* nil 3a44c8 */ __FUNCTION__.1000;
/* nil 3efb68 */ _$tmp_0.692;
/* nil 3efb6c */ _$tmp_1.700;
/* nil 3efb70 */ _$tmp_2.705;
/* nil 3efb74 */ _$tmp_3.713;
/* nil 3efb78 */ _$tmp_4.721;
/* nil 3efb7c */ _$tmp_5.729;
/* nil 3efb80 */ _$tmp_6.737;
/* nil 3efb84 */ _$tmp_7.763;
/* nil 3efb88 */ _$tmp_8.771;
/* nil 3efb8c */ _$tmp_9.776;
/* nil 3efb90 */ str.849;
/* nil 3a50c8 */ __FUNCTION__.949;
/* nil 3a5138 */ __FUNCTION__.952;
/* nil 3a5170 */ __FUNCTION__.84;
/* nil 3a56c0 */ __FUNCTION__.583;
/* nil 3a5720 */ __FUNCTION__.586;
/* nil 3a5758 */ __FUNCTION__.589;
/* nil 3efbc0 */ __FUNCTION__.898;
/* nil 3efbc8 */ __FUNCTION__.901;
/* nil 3efbd0 */ __FUNCTION__.907;
/* nil 3a57b0 */ __FUNCTION__.910;
/* nil 3efc28 */ _$tmp_0.620;
/* nil 3efc2c */ _$tmp_1.628;
/* nil 3efc30 */ _$tmp_2.633;
/* nil 3efc34 */ _$tmp_3.641;
/* nil 3efc38 */ _$tmp_4.649;
/* nil 3efc3c */ _$tmp_5.657;
/* nil 3efc40 */ _$tmp_6.665;
/* nil 3efc44 */ _$tmp_7.691;
/* nil 3efc48 */ _$tmp_8.699;
/* nil 3efc4c */ _$tmp_9.704;
/* nil 3efc50 */ str.777;
/* nil 3efc68 */ _$tmp_0.620;
/* nil 3efc6c */ _$tmp_1.628;
/* nil 3efc70 */ _$tmp_2.633;
/* nil 3efc74 */ _$tmp_3.641;
/* nil 3efc78 */ _$tmp_4.649;
/* nil 3efc7c */ _$tmp_5.657;
/* nil 3efc80 */ _$tmp_6.665;
/* nil 3efc84 */ _$tmp_7.691;
/* nil 3efc88 */ _$tmp_8.699;
/* nil 3efc8c */ _$tmp_9.704;
/* nil 3efc90 */ str.777;
/* nil 3efcb0 */ BlurAlpha.991;
/* nil 3efcb4 */ NegaAlpha2.992;
/* nil 3efcb8 */ BlurAlpha.996;
/* nil 3efcbc */ NegaAlpha2.997;
/* nil 3efcc0 */ _$tmp_10.1119;
/* nil 3efcc4 */ _$tmp_11.1133;
/* nil 3efcd0 */ _$tmp_0.620;
/* nil 3efcd4 */ _$tmp_1.628;
/* nil 3efcd8 */ _$tmp_2.633;
/* nil 3efcdc */ _$tmp_3.641;
/* nil 3efce0 */ _$tmp_4.649;
/* nil 3efce4 */ _$tmp_5.657;
/* nil 3efce8 */ _$tmp_6.665;
/* nil 3efcec */ _$tmp_7.691;
/* nil 3efcf0 */ _$tmp_8.699;
/* nil 3efcf4 */ _$tmp_9.704;
/* nil 3efcf8 */ str.777;
/* nil 3efd18 */ _$tmp_0.620;
/* nil 3efd1c */ _$tmp_1.628;
/* nil 3efd20 */ _$tmp_2.633;
/* nil 3efd24 */ _$tmp_3.641;
/* nil 3efd28 */ _$tmp_4.649;
/* nil 3efd2c */ _$tmp_5.657;
/* nil 3efd30 */ _$tmp_6.665;
/* nil 3efd34 */ _$tmp_7.691;
/* nil 3efd38 */ _$tmp_8.699;
/* nil 3efd3c */ _$tmp_9.704;
/* nil 3efd40 */ str.777;
/* nil 2e5080 */ work.997;
/* nil 3efd58 */ _$tmp_10.1008;
/* nil 2e5090 */ rgb.1009;
/* nil 2e50c0 */ HitDamegeCol.1197;
/* nil 2e50d0 */ EffectEndCol.1198;
/* nil 3efda0 */ str.646;
/* nil 3efdb8 */ _$tmp_0.837;
/* nil 3efdbc */ _$tmp_1.845;
/* nil 3efdc0 */ _$tmp_2.850;
/* nil 3efdc4 */ _$tmp_3.858;
/* nil 3efdc8 */ _$tmp_4.866;
/* nil 3efdcc */ _$tmp_5.874;
/* nil 3efdd0 */ _$tmp_6.882;
/* nil 3efdd4 */ _$tmp_7.908;
/* nil 3efdd8 */ _$tmp_8.916;
/* nil 3efddc */ _$tmp_9.921;
/* nil 3a65f8 */ env.1030;
/* nil 3a6620 */ DoorSealEnv.1031;
/* nil 3efde0 */ _$tmp_10.1071;
/* nil 3efde4 */ r2.1068;
/* nil 3efde8 */ renz.1069;
/* nil 2fbb70 */ passcnt.1072;
/* nil 3efdec */ _$tmp_11.1134;
/* nil 3efdf0 */ f1bk.1183;
/* nil 2fbba0 */ SePosition.1260;
/* nil 3efe28 */ str.646;
/* nil 3efe40 */ _$tmp_0.789;
/* nil 3efe44 */ _$tmp_1.797;
/* nil 3efe48 */ _$tmp_2.802;
/* nil 3efe4c */ _$tmp_3.810;
/* nil 3efe50 */ _$tmp_4.818;
/* nil 3efe54 */ _$tmp_5.826;
/* nil 3efe58 */ _$tmp_6.834;
/* nil 3efe5c */ _$tmp_7.860;
/* nil 3efe60 */ _$tmp_8.868;
/* nil 3efe64 */ _$tmp_9.873;
/* nil 3efe70 */ rate.994;
/* nil 3efe74 */ RandVal.1004;
/* nil 3efe78 */ rnbk.1098;
/* nil 3efe7c */ scw.1099;
/* nil 3efe80 */ sch.1100;
/* nil 3a7100 */ DoorSealCameraPos.1388;
/* nil 3a7110 */ DoorSealCameraTgt.1389;
/* nil 2fc678 */ DrawEnv.1399;
/* nil 3efea0 */ str.646;
/* nil 3efec0 */ _$tmp_0.620;
/* nil 3efec4 */ _$tmp_1.628;
/* nil 3efec8 */ _$tmp_2.633;
/* nil 3efecc */ _$tmp_3.641;
/* nil 3efed0 */ _$tmp_4.649;
/* nil 3efed4 */ _$tmp_5.657;
/* nil 3efed8 */ _$tmp_6.665;
/* nil 3efedc */ _$tmp_7.691;
/* nil 3efee0 */ _$tmp_8.699;
/* nil 3efee4 */ _$tmp_9.704;
/* nil 3efee8 */ str.777;
/* nil 3eff00 */ _$tmp_0.620;
/* nil 3eff04 */ _$tmp_1.628;
/* nil 3eff08 */ _$tmp_2.633;
/* nil 3eff0c */ _$tmp_3.641;
/* nil 3eff10 */ _$tmp_4.649;
/* nil 3eff14 */ _$tmp_5.657;
/* nil 3eff18 */ _$tmp_6.665;
/* nil 3eff1c */ _$tmp_7.691;
/* nil 3eff20 */ _$tmp_8.699;
/* nil 3eff24 */ _$tmp_9.704;
/* nil 3eff28 */ str.777;
/* nil 3eff40 */ str.646;
/* nil 3eff58 */ _$tmp_0.768;
/* nil 3eff5c */ _$tmp_1.776;
/* nil 3eff60 */ _$tmp_2.781;
/* nil 3eff64 */ _$tmp_3.789;
/* nil 3eff68 */ _$tmp_4.797;
/* nil 3eff6c */ _$tmp_5.805;
/* nil 3eff70 */ _$tmp_6.813;
/* nil 3eff74 */ _$tmp_7.839;
/* nil 3eff78 */ _$tmp_8.847;
/* nil 3eff7c */ _$tmp_9.852;
/* nil 3eff90 */ r.1066;
/* nil 3eff94 */ add.1067;
/* nil 3eff98 */ swch.1068;
/* nil 3eff9c */ r.1078;
/* nil 3effa0 */ add.1079;
/* nil 3effa4 */ swch.1080;
/* nil 3effa8 */ r.1084;
/* nil 3effac */ add.1085;
/* nil 3effb0 */ swch.1086;
/* nil 3effb4 */ r.1090;
/* nil 3effb8 */ add.1091;
/* nil 3effbc */ r.1095;
/* nil 3effc0 */ add.1096;
/* nil 3effc4 */ r.1100;
/* nil 3effc8 */ add.1101;
/* nil 3effcc */ cx.1129;
/* nil 3effd0 */ cy.1130;
/* nil 3effd4 */ cz.1131;
/* nil 3effd8 */ alp.1132;
/* nil 2fd540 */ old_cam_i.1147;
/* nil 3effe8 */ cnf.1148;
/* nil 3effec */ cx.1149;
/* nil 3efff0 */ cy.1150;
/* nil 3efff4 */ fl.1151;
/* nil 2fd550 */ old_cam_i.1161;
/* nil 3efff8 */ cnf.1162;
/* nil 3efffc */ cx.1163;
/* nil 3f0000 */ cy.1164;
/* nil 3f0004 */ fl.1165;
/* nil 3f0008 */ str.646;
/* nil 3f0020 */ _$tmp_0.747;
/* nil 3f0028 */ str.646;
/* nil 3f0040 */ _$tmp_0.768;
/* nil 3f0044 */ _$tmp_1.776;
/* nil 3f0048 */ _$tmp_2.781;
/* nil 3f004c */ _$tmp_3.789;
/* nil 3f0050 */ _$tmp_4.797;
/* nil 3f0054 */ _$tmp_5.805;
/* nil 3f0058 */ _$tmp_6.813;
/* nil 3f005c */ _$tmp_7.839;
/* nil 3f0060 */ _$tmp_8.847;
/* nil 3f0064 */ _$tmp_9.852;
/* nil 3a82a0 */ twoby.1000;
/* nil 3f0080 */ _$tmp_0.620;
/* nil 3f0084 */ _$tmp_1.628;
/* nil 3f0088 */ _$tmp_2.633;
/* nil 3f008c */ _$tmp_3.641;
/* nil 3f0090 */ _$tmp_4.649;
/* nil 3f0094 */ _$tmp_5.657;
/* nil 3f0098 */ _$tmp_6.665;
/* nil 3f009c */ _$tmp_7.691;
/* nil 3f00a0 */ _$tmp_8.699;
/* nil 3f00a4 */ _$tmp_9.704;
/* nil 3f00a8 */ str.777;
/* nil 3f00d8 */ str.688;
/* nil 3f00f0 */ _$tmp_0.726;
/* nil 3f00f4 */ _$tmp_1.734;
/* nil 3f00f8 */ _$tmp_2.739;
/* nil 3f00fc */ _$tmp_3.747;
/* nil 3f0100 */ _$tmp_4.755;
/* nil 3f0104 */ _$tmp_5.763;
/* nil 3f0108 */ _$tmp_6.771;
/* nil 3f010c */ _$tmp_7.797;
/* nil 3f0110 */ _$tmp_8.805;
/* nil 3f0114 */ _$tmp_9.810;
/* nil 3f0118 */ str.688;
/* nil 3f0130 */ _$tmp_0.759;
/* nil 3f0134 */ _$tmp_1.767;
/* nil 3f0138 */ _$tmp_2.772;
/* nil 3f013c */ _$tmp_3.780;
/* nil 3f0140 */ _$tmp_4.788;
/* nil 3f0144 */ _$tmp_5.796;
/* nil 3f0148 */ _$tmp_6.804;
/* nil 3f014c */ _$tmp_7.830;
/* nil 3f0150 */ _$tmp_8.838;
/* nil 3f0154 */ _$tmp_9.843;
/* nil 3f0158 */ str.574;
/* nil 3f0170 */ str.646;
/* nil 3f0188 */ _$tmp_0.759;
/* nil 3f018c */ _$tmp_1.767;
/* nil 3f0190 */ _$tmp_2.772;
/* nil 3f0194 */ _$tmp_3.780;
/* nil 3f0198 */ _$tmp_4.788;
/* nil 3f019c */ _$tmp_5.796;
/* nil 3f01a0 */ _$tmp_6.804;
/* nil 3f01a4 */ _$tmp_7.830;
/* nil 3f01a8 */ _$tmp_8.838;
/* nil 3f01ac */ _$tmp_9.843;
/* nil 3a8848 */ __FUNCTION__.1123;
/* nil 3a88c0 */ __FUNCTION__.1132;
/* nil 3a89a0 */ __FUNCTION__.1141;
/* nil 3a8a78 */ __FUNCTION__.1219;
/* nil 3a8b30 */ __FUNCTION__.1231;
/* nil 3a8bb0 */ __FUNCTION__.1252;
/* nil 3f01f4 */ _$tmp_10.1493;
/* nil 3f0204 */ str.646;
/* nil 3f0218 */ _$tmp_0.759;
/* nil 3f021c */ _$tmp_1.767;
/* nil 3f0220 */ _$tmp_2.772;
/* nil 3f0224 */ _$tmp_3.780;
/* nil 3f0228 */ _$tmp_4.788;
/* nil 3f022c */ _$tmp_5.796;
/* nil 3f0230 */ _$tmp_6.804;
/* nil 3f0234 */ _$tmp_7.830;
/* nil 3f0238 */ _$tmp_8.838;
/* nil 3f023c */ _$tmp_9.843;
/* nil 3f0250 */ __FUNCTION__.1115;
/* nil 3f0258 */ WaveSpeed.1486;
/* nil 3f025c */ WaveRate.1487;
/* nil 3f0260 */ str.646;
/* nil 3a9000 */ __FUNCTION__.731;
/* nil 3a9070 */ __FUNCTION__.734;
/* nil 3a9088 */ __FUNCTION__.749;
/* nil 3f0280 */ str.574;
/* nil 3a9138 */ __FUNCTION__.590;
/* nil 3a91b8 */ __FUNCTION__.596;
/* nil 3a91d8 */ __FUNCTION__.602;
/* nil 3a9260 */ __FUNCTION__.605;
/* nil 3a92f0 */ __FUNCTION__.617;
/* nil 3a9338 */ __FUNCTION__.620;
/* nil 3a9358 */ __FUNCTION__.623;
/* nil 3f0298 */ _$tmp_0.692;
/* nil 3f029c */ _$tmp_1.700;
/* nil 3f02a0 */ _$tmp_2.705;
/* nil 3f02a4 */ _$tmp_3.713;
/* nil 3f02a8 */ _$tmp_4.721;
/* nil 3f02ac */ _$tmp_5.729;
/* nil 3f02b0 */ _$tmp_6.737;
/* nil 3f02b4 */ _$tmp_7.763;
/* nil 3f02b8 */ _$tmp_8.771;
/* nil 3f02bc */ _$tmp_9.776;
/* nil 3f02c0 */ str.849;
/* nil 3f02d8 */ str.646;
/* nil 3f02f0 */ _$tmp_0.726;
/* nil 3f02f4 */ _$tmp_1.734;
/* nil 3f02f8 */ _$tmp_2.739;
/* nil 3f02fc */ _$tmp_3.747;
/* nil 3f0300 */ _$tmp_4.755;
/* nil 3f0304 */ _$tmp_5.763;
/* nil 3f0308 */ _$tmp_6.771;
/* nil 3f030c */ _$tmp_7.797;
/* nil 3f0310 */ _$tmp_8.805;
/* nil 3f0314 */ _$tmp_9.810;
/* nil 3a9770 */ __FUNCTION__.955;
/* nil 3a97e8 */ __FUNCTION__.967;
/* nil 3a9860 */ __FUNCTION__.976;
/* nil 3a9880 */ __FUNCTION__.982;
/* nil 3a98b8 */ __FUNCTION__.994;
/* nil 3a98d0 */ __FUNCTION__.1000;
/* nil 3a9910 */ __FUNCTION__.1006;
/* nil 3a9948 */ __FUNCTION__.1009;
/* nil 3f0318 */ str.646;
/* nil 3f0338 */ str.574;
/* nil 3a9a90 */ __FUNCTION__.668;
/* nil 3f0350 */ _$tmp_0.620;
/* nil 3f0354 */ _$tmp_1.628;
/* nil 3f0358 */ _$tmp_2.633;
/* nil 3f035c */ _$tmp_3.641;
/* nil 3f0360 */ _$tmp_4.649;
/* nil 3f0364 */ _$tmp_5.657;
/* nil 3f0368 */ _$tmp_6.665;
/* nil 3f036c */ _$tmp_7.691;
/* nil 3f0370 */ _$tmp_8.699;
/* nil 3f0374 */ _$tmp_9.704;
/* nil 3f0378 */ str.777;
/* nil 3a9c58 */ __FUNCTION__.880;
/* nil 3a9d10 */ __FUNCTION__.898;
/* nil 3a9d90 */ __FUNCTION__.901;
/* nil 3f0390 */ str.574;
/* nil 3f03a8 */ _$tmp_0.675;
/* nil 3f03ac */ _$tmp_1.683;
/* nil 3f03b0 */ _$tmp_2.688;
/* nil 3f03b4 */ _$tmp_3.696;
/* nil 3f03b8 */ _$tmp_4.704;
/* nil 3f03bc */ _$tmp_5.712;
/* nil 3f03c0 */ _$tmp_6.720;
/* nil 3f03c4 */ _$tmp_7.746;
/* nil 3f03c8 */ _$tmp_8.754;
/* nil 3f03cc */ _$tmp_9.759;
/* nil 3f03d8 */ str.574;
/* nil 3a9f48 */ __FUNCTION__.605;
/* nil 3f03f0 */ _$tmp_0.932;
/* nil 3f03f4 */ _$tmp_1.940;
/* nil 3f03f8 */ _$tmp_2.945;
/* nil 3f03fc */ _$tmp_3.953;
/* nil 3f0400 */ _$tmp_4.961;
/* nil 3f0404 */ _$tmp_5.969;
/* nil 3f0408 */ _$tmp_6.977;
/* nil 3f040c */ _$tmp_7.1003;
/* nil 3f0410 */ _$tmp_8.1011;
/* nil 3f0414 */ _$tmp_9.1016;
/* nil 3f0418 */ str.1047;
/* nil 3aa038 */ __FUNCTION__.1432;
/* nil 3aa1a0 */ __FUNCTION__.1435;
/* nil 3aa2d0 */ __FUNCTION__.1450;
/* nil 3aa3d0 */ __FUNCTION__.1453;
/* nil 3aa4b8 */ __FUNCTION__.1480;
/* nil 3aa4f0 */ __FUNCTION__.1492;
/* nil 3aa528 */ __FUNCTION__.1504;
/* nil 3aa5b8 */ __FUNCTION__.1552;
/* nil 3aa608 */ __FUNCTION__.1555;
/* nil 3f0438 */ __FUNCTION__.1558;
/* nil 3f0440 */ __FUNCTION__.1564;
/* nil 3aa708 */ __FUNCTION__.1579;
/* nil 3aa758 */ __FUNCTION__.1585;
/* nil 3aa7b0 */ __FUNCTION__.1588;
/* nil 3aa8f0 */ __FUNCTION__.1609;
/* nil 3f0448 */ __FUNCTION__.1612;
/* nil 3aa978 */ __FUNCTION__.1615;
/* nil 3aa9e8 */ __FUNCTION__.1618;
/* nil 3aaa58 */ __FUNCTION__.1621;
/* nil 3aaac8 */ __FUNCTION__.1624;
/* nil 3aab38 */ __FUNCTION__.1627;
/* nil 3aaba8 */ __FUNCTION__.1630;
/* nil 3aabe8 */ __FUNCTION__.1633;
/* nil 3f0450 */ __FUNCTION__.1648;
/* nil 3f0458 */ __FUNCTION__.1651;
/* nil 3f0460 */ __FUNCTION__.1657;
/* nil 3aac48 */ __FUNCTION__.1663;
/* nil 3aacb0 */ __FUNCTION__.1666;
/* nil 3f0468 */ __FUNCTION__.1669;
/* nil 3aad40 */ __FUNCTION__.1696;
/* nil 3aad90 */ __FUNCTION__.1720;
/* nil 3aade8 */ __FUNCTION__.1744;
/* nil 3aae00 */ __FUNCTION__.1753;
/* nil 3aae68 */ __FUNCTION__.1756;
/* nil 3aaea8 */ __FUNCTION__.1759;
/* nil 3aaf18 */ __FUNCTION__.1762;
/* nil 3aaf58 */ __FUNCTION__.1765;
/* nil 3aafc0 */ __FUNCTION__.1768;
/* nil 3ab030 */ __FUNCTION__.1771;
/* nil 3ab070 */ __FUNCTION__.1774;
/* nil 3ab0b8 */ __FUNCTION__.1780;
/* nil 3ab168 */ __FUNCTION__.1795;
/* nil 3ab190 */ __FUNCTION__.1801;
/* nil 3ab1a0 */ __FUNCTION__.1807;
/* nil 3ab1e8 */ __FUNCTION__.1813;
/* nil 3ab238 */ __FUNCTION__.1846;
/* nil 3ab2f8 */ __FUNCTION__.1852;
/* nil 3ab378 */ __FUNCTION__.1864;
/* nil 3f0470 */ __FUNCTION__.1867;
/* nil 3ab3b0 */ __FUNCTION__.1873;
/* nil 3ab3d0 */ __FUNCTION__.1909;
/* nil 3ab458 */ __FUNCTION__.1939;
/* nil 3ab4a0 */ __FUNCTION__.1942;
/* nil 3ab4e0 */ __FUNCTION__.1945;
/* nil 3f0478 */ __FUNCTION__.1969;
/* nil 3ab568 */ __FUNCTION__.1975;
/* nil 3ab5d8 */ __FUNCTION__.1981;
/* nil 3ab628 */ __FUNCTION__.1996;
/* nil 3ab660 */ __FUNCTION__.1999;
/* nil 3ab6b8 */ __FUNCTION__.2002;
/* nil 3ab6e8 */ __FUNCTION__.2011;
/* nil 3ab7b8 */ __FUNCTION__.2017;
/* nil 3f04a0 */ str.574;
/* nil 3f04b8 */ _$tmp_0.654;
/* nil 3f04bc */ _$tmp_1.662;
/* nil 3f04c0 */ _$tmp_2.667;
/* nil 3f04c4 */ _$tmp_3.675;
/* nil 3f04c8 */ _$tmp_4.683;
/* nil 3f04cc */ _$tmp_5.691;
/* nil 3f04d0 */ _$tmp_6.699;
/* nil 3f04d4 */ _$tmp_7.725;
/* nil 3f04d8 */ _$tmp_8.733;
/* nil 3f04dc */ _$tmp_9.738;
/* nil 3aba78 */ __FUNCTION__.895;
/* nil 3f04e0 */ _$tmp_0.692;
/* nil 3f04e4 */ _$tmp_1.700;
/* nil 3f04e8 */ _$tmp_2.705;
/* nil 3f04ec */ _$tmp_3.713;
/* nil 3f04f0 */ _$tmp_4.721;
/* nil 3f04f4 */ _$tmp_5.729;
/* nil 3f04f8 */ _$tmp_6.737;
/* nil 3f04fc */ _$tmp_7.763;
/* nil 3f0500 */ _$tmp_8.771;
/* nil 3f0504 */ _$tmp_9.776;
/* nil 3f0508 */ str.849;
/* nil 3abb98 */ __FUNCTION__.1003;
/* nil 3abc20 */ __FUNCTION__.1012;
/* nil 3abc88 */ __FUNCTION__.1033;
/* nil 3f0528 */ _$tmp_0.692;
/* nil 3f052c */ _$tmp_1.700;
/* nil 3f0530 */ _$tmp_2.705;
/* nil 3f0534 */ _$tmp_3.713;
/* nil 3f0538 */ _$tmp_4.721;
/* nil 3f053c */ _$tmp_5.729;
/* nil 3f0540 */ _$tmp_6.737;
/* nil 3f0544 */ _$tmp_7.763;
/* nil 3f0548 */ _$tmp_8.771;
/* nil 3f054c */ _$tmp_9.776;
/* nil 3f0550 */ str.849;
/* nil 3abea0 */ __FUNCTION__.9;
/* nil 3f0570 */ _$tmp_0.620;
/* nil 3f0574 */ _$tmp_1.628;
/* nil 3f0578 */ _$tmp_2.633;
/* nil 3f057c */ _$tmp_3.641;
/* nil 3f0580 */ _$tmp_4.649;
/* nil 3f0584 */ _$tmp_5.657;
/* nil 3f0588 */ _$tmp_6.665;
/* nil 3f058c */ _$tmp_7.691;
/* nil 3f0590 */ _$tmp_8.699;
/* nil 3f0594 */ _$tmp_9.704;
/* nil 3f0598 */ str.777;
/* nil 3f05b0 */ __FUNCTION__.886;
/* nil 3f05b8 */ __FUNCTION__.892;
/* nil 3f05c0 */ __FUNCTION__.898;
/* nil 3f05c8 */ str.646;
/* nil 3f05e0 */ _$tmp_0.759;
/* nil 3f05e4 */ _$tmp_1.767;
/* nil 3f05e8 */ _$tmp_2.772;
/* nil 3f05ec */ _$tmp_3.780;
/* nil 3f05f0 */ _$tmp_4.788;
/* nil 3f05f4 */ _$tmp_5.796;
/* nil 3f05f8 */ _$tmp_6.804;
/* nil 3f05fc */ _$tmp_7.830;
/* nil 3f0600 */ _$tmp_8.838;
/* nil 3f0604 */ _$tmp_9.843;
/* nil 3ac138 */ __FUNCTION__.970;
/* nil 3ac1a8 */ __FUNCTION__.976;
/* nil 3ac218 */ __FUNCTION__.982;
/* nil 3ac270 */ __FUNCTION__.985;
/* nil 3f0610 */ str.646;
/* nil 3f0630 */ str.646;
/* nil 3f0648 */ _$tmp_0.692;
/* nil 3f064c */ _$tmp_1.700;
/* nil 3f0650 */ _$tmp_2.705;
/* nil 3f0654 */ _$tmp_3.713;
/* nil 3f0658 */ _$tmp_4.721;
/* nil 3f065c */ _$tmp_5.729;
/* nil 3f0660 */ _$tmp_6.737;
/* nil 3f0664 */ _$tmp_7.763;
/* nil 3f0668 */ _$tmp_8.771;
/* nil 3f066c */ _$tmp_9.776;
/* nil 3f0670 */ str.849;
/* nil 3ac8d0 */ __FUNCTION__.1093;
/* nil 3ac960 */ __FUNCTION__.1096;
/* nil 3f0698 */ _$tmp_0.620;
/* nil 3f069c */ _$tmp_1.628;
/* nil 3f06a0 */ _$tmp_2.633;
/* nil 3f06a4 */ _$tmp_3.641;
/* nil 3f06a8 */ _$tmp_4.649;
/* nil 3f06ac */ _$tmp_5.657;
/* nil 3f06b0 */ _$tmp_6.665;
/* nil 3f06b4 */ _$tmp_7.691;
/* nil 3f06b8 */ _$tmp_8.699;
/* nil 3f06bc */ _$tmp_9.704;
/* nil 3f06c0 */ str.777;
/* nil 3ad920 */ __FUNCTION__.898;
/* nil 3f06f0 */ __FUNCTION__.925;
/* nil 3ada28 */ __FUNCTION__.955;
/* nil 3ada68 */ __FUNCTION__.970;
/* nil 3f0718 */ str.688;
/* nil 3f0730 */ _$tmp_0.759;
/* nil 3f0734 */ _$tmp_1.767;
/* nil 3f0738 */ _$tmp_2.772;
/* nil 3f073c */ _$tmp_3.780;
/* nil 3f0740 */ _$tmp_4.788;
/* nil 3f0744 */ _$tmp_5.796;
/* nil 3f0748 */ _$tmp_6.804;
/* nil 3f074c */ _$tmp_7.830;
/* nil 3f0750 */ _$tmp_8.838;
/* nil 3f0754 */ _$tmp_9.843;
/* nil 3f0778 */ str.646;
/* nil 3add38 */ __FUNCTION__.659;
/* nil 3f0798 */ __FUNCTION__.662;
/* nil 3ade78 */ __FUNCTION__.665;
/* nil 3adef8 */ __FUNCTION__.668;
/* nil 3adf88 */ __FUNCTION__.671;
/* nil 3adfd8 */ __FUNCTION__.674;
/* nil 3ae030 */ __FUNCTION__.677;
/* nil 3ae090 */ __FUNCTION__.680;
/* nil 3ae0f8 */ __FUNCTION__.683;
/* nil 3ae138 */ __FUNCTION__.686;
/* nil 3ae150 */ file_id_max.689;
/* nil 3ae190 */ __FUNCTION__.690;
/* nil 3f07a0 */ str.646;
/* nil 3f07c0 */ str.688;
/* nil 3f07d8 */ _$tmp_0.759;
/* nil 3f07dc */ _$tmp_1.767;
/* nil 3f07e0 */ _$tmp_2.772;
/* nil 3f07e4 */ _$tmp_3.780;
/* nil 3f07e8 */ _$tmp_4.788;
/* nil 3f07ec */ _$tmp_5.796;
/* nil 3f07f0 */ _$tmp_6.804;
/* nil 3f07f4 */ _$tmp_7.830;
/* nil 3f07f8 */ _$tmp_8.838;
/* nil 3f07fc */ _$tmp_9.843;
/* nil 3f0810 */ str.646;
/* nil 3f0828 */ _$tmp_0.759;
/* nil 3f082c */ _$tmp_1.767;
/* nil 3f0830 */ _$tmp_2.772;
/* nil 3f0834 */ _$tmp_3.780;
/* nil 3f0838 */ _$tmp_4.788;
/* nil 3f083c */ _$tmp_5.796;
/* nil 3f0840 */ _$tmp_6.804;
/* nil 3f0844 */ _$tmp_7.830;
/* nil 3f0848 */ _$tmp_8.838;
/* nil 3f084c */ _$tmp_9.843;
/* nil 3f0868 */ _$tmp_0.692;
/* nil 3f086c */ _$tmp_1.700;
/* nil 3f0870 */ _$tmp_2.705;
/* nil 3f0874 */ _$tmp_3.713;
/* nil 3f0878 */ _$tmp_4.721;
/* nil 3f087c */ _$tmp_5.729;
/* nil 3f0880 */ _$tmp_6.737;
/* nil 3f0884 */ _$tmp_7.763;
/* nil 3f0888 */ _$tmp_8.771;
/* nil 3f088c */ _$tmp_9.776;
/* nil 3f0890 */ str.849;
/* nil 3f08a6 */ time.1096;
/* nil 3f08a7 */ flag.1097;
/* nil 3f08a8 */ str.646;
/* nil 3f08c0 */ _$tmp_0.759;
/* nil 3f08c4 */ _$tmp_1.767;
/* nil 3f08c8 */ _$tmp_2.772;
/* nil 3f08cc */ _$tmp_3.780;
/* nil 3f08d0 */ _$tmp_4.788;
/* nil 3f08d4 */ _$tmp_5.796;
/* nil 3f08d8 */ _$tmp_6.804;
/* nil 3f08dc */ _$tmp_7.830;
/* nil 3f08e0 */ _$tmp_8.838;
/* nil 3f08e4 */ _$tmp_9.843;
/* nil 3f08e8 */ str.646;
/* nil 3f0900 */ _$tmp_0.705;
/* nil 3f0904 */ _$tmp_1.713;
/* nil 3f0908 */ _$tmp_2.718;
/* nil 3f090c */ _$tmp_3.726;
/* nil 3f0910 */ _$tmp_4.734;
/* nil 3f0914 */ _$tmp_5.742;
/* nil 3f0918 */ _$tmp_6.750;
/* nil 3f091c */ _$tmp_7.776;
/* nil 3f0920 */ _$tmp_8.784;
/* nil 3f0924 */ _$tmp_9.789;
/* nil 3f0928 */ _$tmp_10.1094;
/* nil 3f092c */ _$tmp_11.1096;
/* nil 3f0930 */ _$tmp_12.1098;
/* nil 3f0948 */ str.574;
/* nil 3ae7f0 */ __FUNCTION__.758;
/* nil 3f0960 */ _$tmp_0.692;
/* nil 3f0964 */ _$tmp_1.700;
/* nil 3f0968 */ _$tmp_2.705;
/* nil 3f096c */ _$tmp_3.713;
/* nil 3f0970 */ _$tmp_4.721;
/* nil 3f0974 */ _$tmp_5.729;
/* nil 3f0978 */ _$tmp_6.737;
/* nil 3f097c */ _$tmp_7.763;
/* nil 3f0980 */ _$tmp_8.771;
/* nil 3f0984 */ _$tmp_9.776;
/* nil 3f0988 */ str.849;
/* nil 3f09a0 */ _$tmp_0.599;
/* nil 3f09a4 */ _$tmp_1.607;
/* nil 3f09a8 */ _$tmp_2.612;
/* nil 3f09ac */ _$tmp_3.620;
/* nil 3f09b0 */ _$tmp_4.628;
/* nil 3f09b4 */ _$tmp_5.636;
/* nil 3f09b8 */ _$tmp_6.644;
/* nil 3f09bc */ _$tmp_7.670;
/* nil 3f09c0 */ _$tmp_8.678;
/* nil 3f09c4 */ _$tmp_9.683;
/* nil 3f09c8 */ str.735;
/* nil 3f09ec */ perf_max.105;
/* nil 3f0a00 */ _$tmp_0.692;
/* nil 3f0a04 */ _$tmp_1.700;
/* nil 3f0a08 */ _$tmp_2.705;
/* nil 3f0a0c */ _$tmp_3.713;
/* nil 3f0a10 */ _$tmp_4.721;
/* nil 3f0a14 */ _$tmp_5.729;
/* nil 3f0a18 */ _$tmp_6.737;
/* nil 3f0a1c */ _$tmp_7.763;
/* nil 3f0a20 */ _$tmp_8.771;
/* nil 3f0a24 */ _$tmp_9.776;
/* nil 3f0a28 */ str.849;
/* nil 3aea18 */ __FUNCTION__.979;
/* nil 314830 */ scpw.997;
/* nil 3f0a48 */ str.646;
/* nil 3f0a60 */ _$tmp_0.759;
/* nil 3f0a64 */ _$tmp_1.767;
/* nil 3f0a68 */ _$tmp_2.772;
/* nil 3f0a6c */ _$tmp_3.780;
/* nil 3f0a70 */ _$tmp_4.788;
/* nil 3f0a74 */ _$tmp_5.796;
/* nil 3f0a78 */ _$tmp_6.804;
/* nil 3f0a7c */ _$tmp_7.830;
/* nil 3f0a80 */ _$tmp_8.838;
/* nil 3f0a84 */ _$tmp_9.843;
/* nil 3f0a90 */ _$tmp_0.614;
/* nil 3f0a94 */ _$tmp_1.622;
/* nil 3f0a98 */ _$tmp_2.627;
/* nil 3f0a9c */ _$tmp_3.635;
/* nil 3f0aa0 */ _$tmp_4.643;
/* nil 3f0aa4 */ _$tmp_5.651;
/* nil 3f0aa8 */ _$tmp_6.659;
/* nil 3f0aac */ _$tmp_7.685;
/* nil 3f0ab0 */ _$tmp_8.693;
/* nil 3f0ab4 */ _$tmp_9.698;
/* nil 3f0ab8 */ _$tmp_0.593;
/* nil 3f0abc */ _$tmp_1.601;
/* nil 3f0ac0 */ _$tmp_2.606;
/* nil 3f0ac4 */ _$tmp_3.614;
/* nil 3f0ac8 */ _$tmp_4.622;
/* nil 3f0acc */ _$tmp_5.630;
/* nil 3f0ad0 */ _$tmp_6.638;
/* nil 3f0ad4 */ _$tmp_7.664;
/* nil 3f0ad8 */ _$tmp_8.672;
/* nil 3f0adc */ _$tmp_9.677;
/* nil 3f0ae0 */ _$tmp_0.704;
/* nil 3f0ae4 */ _$tmp_1.712;
/* nil 3f0ae8 */ _$tmp_2.717;
/* nil 3f0aec */ _$tmp_3.725;
/* nil 3f0af0 */ _$tmp_4.733;
/* nil 3f0af4 */ _$tmp_5.741;
/* nil 3f0af8 */ _$tmp_6.749;
/* nil 3f0afc */ _$tmp_7.775;
/* nil 3f0b00 */ _$tmp_8.783;
/* nil 3f0b04 */ _$tmp_9.788;
/* nil 3aeb00 */ __FUNCTION__.1083;
/* nil 3aeb88 */ __FUNCTION__.589;
/* nil 3aebd0 */ __FUNCTION__.1119;
/* nil 3aec38 */ __FUNCTION__.1122;
/* nil 3aec50 */ __FUNCTION__.1125;
/* nil 3aeca8 */ __FUNCTION__.1128;
/* nil 3aecc0 */ __FUNCTION__.1131;
/* nil 3aecd0 */ __FUNCTION__.1134;
/* nil 3aece8 */ __FUNCTION__.1137;
/* nil 3aed38 */ __FUNCTION__.1146;
/* nil 3aed50 */ __FUNCTION__.1149;
/* nil 3aed70 */ __FUNCTION__.1152;
/* nil 3aed88 */ __FUNCTION__.1155;
/* nil 3aedc8 */ __FUNCTION__.1158;
/* nil 3aedf0 */ __FUNCTION__.1161;
/* nil 3aef48 */ __FUNCTION__.586;
/* nil 3aef98 */ __FUNCTION__.1167;
/* nil 3aefa8 */ __FUNCTION__.1170;
/* nil 3aefb8 */ __FUNCTION__.1173;
/* nil 3aefe8 */ __FUNCTION__.1176;
/* nil 3af000 */ __FUNCTION__.1185;
/* nil 3af048 */ __FUNCTION__.1188;
/* nil 3af0d0 */ __FUNCTION__.1191;
/* nil 3af0e8 */ __FUNCTION__.1194;
/* nil 3af100 */ __FUNCTION__.1203;
/* nil 3f0b38 */ _$tmp_0.665;
/* nil 3f0b3c */ _$tmp_1.673;
/* nil 3f0b40 */ _$tmp_2.678;
/* nil 3f0b44 */ _$tmp_3.686;
/* nil 3f0b48 */ _$tmp_4.694;
/* nil 3f0b4c */ _$tmp_5.702;
/* nil 3f0b50 */ _$tmp_6.710;
/* nil 3f0b54 */ _$tmp_7.736;
/* nil 3f0b58 */ _$tmp_8.744;
/* nil 3f0b5c */ _$tmp_9.749;
/* nil 3af2f8 */ __FUNCTION__.786;
/* nil 3af458 */ __FUNCTION__.834;
/* nil 3b0cd0 */ __FUNCTION__.837;
/* nil 3b1bf0 */ __FUNCTION__.840;
/* nil 3b1c78 */ __FUNCTION__.843;
/* nil 3b1cc8 */ __FUNCTION__.846;
/* nil 3b1ff0 */ __FUNCTION__.646;
/* nil 3b2028 */ __FUNCTION__.652;
/* nil 3b2098 */ __FUNCTION__.655;
/* nil 3b20e0 */ __FUNCTION__.661;
/* nil 3f0c10 */ s_pMPGOld.676;
/* nil 3b2100 */ s_qwVif1Code_ContinueVu1MicroSubroutine.683;
/* nil 3f0c18 */ _$tmp_0.599;
/* nil 3f0c1c */ _$tmp_1.607;
/* nil 3f0c20 */ _$tmp_2.612;
/* nil 3f0c24 */ _$tmp_3.620;
/* nil 3f0c28 */ _$tmp_4.628;
/* nil 3f0c2c */ _$tmp_5.636;
/* nil 3f0c30 */ _$tmp_6.644;
/* nil 3f0c34 */ _$tmp_7.670;
/* nil 3f0c38 */ _$tmp_8.678;
/* nil 3f0c3c */ _$tmp_9.683;
/* nil 3b2120 */ __FUNCTION__.762;
/* nil 3b2168 */ __FUNCTION__.765;
/* nil 3b2190 */ __FUNCTION__.768;
/* nil 3b21a8 */ __FUNCTION__.780;
/* nil 3b2420 */ __FUNCTION__.583;
/* nil 315660 */ init_mp3.586;
/* nil 3f0c58 */ _$tmp_0.599;
/* nil 3f0c5c */ _$tmp_1.607;
/* nil 3f0c60 */ _$tmp_2.612;
/* nil 3f0c64 */ _$tmp_3.620;
/* nil 3f0c68 */ _$tmp_4.628;
/* nil 3f0c6c */ _$tmp_5.636;
/* nil 3f0c70 */ _$tmp_6.644;
/* nil 3f0c74 */ _$tmp_7.670;
/* nil 3f0c78 */ _$tmp_8.678;
/* nil 3f0c7c */ _$tmp_9.683;
/* nil 3b2850 */ __FUNCTION__.687;
/* nil 3b28b0 */ __FUNCTION__.798;
/* nil 3f0c80 */ bOnce.801;
/* nil 3b2908 */ __FUNCTION__.808;
/* nil 3b2950 */ __FUNCTION__.814;
/* nil 3f0c98 */ _$tmp_0.689;
/* nil 3f0c9c */ _$tmp_1.697;
/* nil 3f0ca0 */ _$tmp_2.702;
/* nil 3f0ca4 */ _$tmp_3.710;
/* nil 3f0ca8 */ _$tmp_4.718;
/* nil 3f0cac */ _$tmp_5.726;
/* nil 3f0cb0 */ _$tmp_6.734;
/* nil 3f0cb4 */ _$tmp_7.760;
/* nil 3f0cb8 */ _$tmp_8.768;
/* nil 3f0cbc */ _$tmp_9.773;
/* nil 3f0cc0 */ str.825;
/* nil 3b29c0 */ __FUNCTION__.904;
/* nil 3b2a68 */ __FUNCTION__.940;
/* nil 3b2aa8 */ __FUNCTION__.955;
/* nil 3b2b08 */ __FUNCTION__.964;
/* nil 3b2ba0 */ __FUNCTION__.985;
/* nil 3b2bf8 */ __FUNCTION__.991;
/* nil 3b2c80 */ __FUNCTION__.994;
/* nil 3b2ce0 */ __FUNCTION__.1012;
/* nil 3b2cf0 */ __FUNCTION__.571;
/* nil 3f0cf0 */ __FUNCTION__.1069;
/* nil 3f0cf8 */ __FUNCTION__.550;
/* nil 3f0d10 */ __FUNCTION__.553;
/* nil 3b2e08 */ __FUNCTION__.556;
/* nil 3b2e18 */ __FUNCTION__.559;
/* nil 3b2e28 */ __FUNCTION__.562;
/* nil 3b2e38 */ __FUNCTION__.568;
/* nil 3b2e68 */ __FUNCTION__.571;
/* nil 3f0d30 */ __FUNCTION__.685;
/* nil 3b2ec8 */ __FUNCTION__.643;
/* nil 3b2f50 */ __FUNCTION__.646;
/* nil 3f0d48 */ __FUNCTION__.649;
/* nil 3f0d58 */ __FUNCTION__.631;
/* nil 3b30a0 */ __FUNCTION__.577;
/* nil 3b30c0 */ __FUNCTION__.580;
/* nil 3b3198 */ __FUNCTION__.586;
/* nil 3f0d90 */ _$tmp_0.692;
/* nil 3f0d94 */ _$tmp_1.700;
/* nil 3f0d98 */ _$tmp_2.705;
/* nil 3f0d9c */ _$tmp_3.713;
/* nil 3f0da0 */ _$tmp_4.721;
/* nil 3f0da4 */ _$tmp_5.729;
/* nil 3f0da8 */ _$tmp_6.737;
/* nil 3f0dac */ _$tmp_7.763;
/* nil 3f0db0 */ _$tmp_8.771;
/* nil 3f0db4 */ _$tmp_9.776;
/* nil 3f0db8 */ str.849;
/* nil 3f0de8 */ __FUNCTION__.961;
/* nil 3f0df8 */ _$tmp_0.692;
/* nil 3f0dfc */ _$tmp_1.700;
/* nil 3f0e00 */ _$tmp_2.705;
/* nil 3f0e04 */ _$tmp_3.713;
/* nil 3f0e08 */ _$tmp_4.721;
/* nil 3f0e0c */ _$tmp_5.729;
/* nil 3f0e10 */ _$tmp_6.737;
/* nil 3f0e14 */ _$tmp_7.763;
/* nil 3f0e18 */ _$tmp_8.771;
/* nil 3f0e1c */ _$tmp_9.776;
/* nil 3f0e20 */ str.849;
/* nil 3f0e38 */ _$tmp_0.692;
/* nil 3f0e3c */ _$tmp_1.700;
/* nil 3f0e40 */ _$tmp_2.705;
/* nil 3f0e44 */ _$tmp_3.713;
/* nil 3f0e48 */ _$tmp_4.721;
/* nil 3f0e4c */ _$tmp_5.729;
/* nil 3f0e50 */ _$tmp_6.737;
/* nil 3f0e54 */ _$tmp_7.763;
/* nil 3f0e58 */ _$tmp_8.771;
/* nil 3f0e5c */ _$tmp_9.776;
/* nil 3f0e60 */ str.849;
/* nil 3b3548 */ __FUNCTION__.976;
/* nil 3b35c0 */ __FUNCTION__.985;
/* nil 3b35d8 */ __FUNCTION__.991;
/* nil 3f0e8c */ _$tmp_10.1067;
/* nil 3b3718 */ __FUNCTION__.1063;
/* nil 3f0e90 */ _$tmp_11.1126;
/* nil 3b3778 */ __FUNCTION__.1122;
/* nil 3f0e98 */ _$tmp_0.692;
/* nil 3f0e9c */ _$tmp_1.700;
/* nil 3f0ea0 */ _$tmp_2.705;
/* nil 3f0ea4 */ _$tmp_3.713;
/* nil 3f0ea8 */ _$tmp_4.721;
/* nil 3f0eac */ _$tmp_5.729;
/* nil 3f0eb0 */ _$tmp_6.737;
/* nil 3f0eb4 */ _$tmp_7.763;
/* nil 3f0eb8 */ _$tmp_8.771;
/* nil 3f0ebc */ _$tmp_9.776;
/* nil 3f0ec0 */ str.849;
/* nil 3b3918 */ __FUNCTION__.973;
/* nil 3b3988 */ __FUNCTION__.985;
/* nil 3b39a0 */ __FUNCTION__.988;
/* nil 3b39c8 */ __FUNCTION__.1006;
/* nil 3f0ee0 */ str.688;
/* nil 3f0ef8 */ _$tmp_0.726;
/* nil 3f0efc */ _$tmp_1.734;
/* nil 3f0f00 */ _$tmp_2.739;
/* nil 3f0f04 */ _$tmp_3.747;
/* nil 3f0f08 */ _$tmp_4.755;
/* nil 3f0f0c */ _$tmp_5.763;
/* nil 3f0f10 */ _$tmp_6.771;
/* nil 3f0f14 */ _$tmp_7.797;
/* nil 3f0f18 */ _$tmp_8.805;
/* nil 3f0f1c */ _$tmp_9.810;
/* nil 3b3a58 */ __FUNCTION__.1081;
/* nil 3f0f20 */ __FUNCTION__.1090;
/* nil 3f0f28 */ __FUNCTION__.1096;
/* nil 3b3b50 */ __FUNCTION__.1105;
/* nil 3b3b88 */ __FUNCTION__.1120;
/* nil 3b3be8 */ difficulty_tex_tbl.1129;
/* nil 3b3bf8 */ rank_tex_tbl.1139;
/* nil 3f0f30 */ _$tmp_0.692;
/* nil 3f0f34 */ _$tmp_1.700;
/* nil 3f0f38 */ _$tmp_2.705;
/* nil 3f0f3c */ _$tmp_3.713;
/* nil 3f0f40 */ _$tmp_4.721;
/* nil 3f0f44 */ _$tmp_5.729;
/* nil 3f0f48 */ _$tmp_6.737;
/* nil 3f0f4c */ _$tmp_7.763;
/* nil 3f0f50 */ _$tmp_8.771;
/* nil 3f0f54 */ _$tmp_9.776;
/* nil 3f0f58 */ str.849;
/* nil 3b3c70 */ fade_alpha_tbl.988;
/* nil 3f0f70 */ str.646;
/* nil 3b3cf8 */ __FUNCTION__.749;
/* nil 3f0f90 */ _$tmp_0.692;
/* nil 3f0f94 */ _$tmp_1.700;
/* nil 3f0f98 */ _$tmp_2.705;
/* nil 3f0f9c */ _$tmp_3.713;
/* nil 3f0fa0 */ _$tmp_4.721;
/* nil 3f0fa4 */ _$tmp_5.729;
/* nil 3f0fa8 */ _$tmp_6.737;
/* nil 3f0fac */ _$tmp_7.763;
/* nil 3f0fb0 */ _$tmp_8.771;
/* nil 3f0fb4 */ _$tmp_9.776;
/* nil 3f0fb8 */ str.849;
/* nil 3b3dd8 */ __FUNCTION__.976;
/* nil 3b3e58 */ __FUNCTION__.985;
/* nil 3b3e80 */ __FUNCTION__.991;
/* nil 3b4010 */ __FUNCTION__.1066;
/* nil 3f0fe0 */ _$tmp_0.692;
/* nil 3f0fe4 */ _$tmp_1.700;
/* nil 3f0fe8 */ _$tmp_2.705;
/* nil 3f0fec */ _$tmp_3.713;
/* nil 3f0ff0 */ _$tmp_4.721;
/* nil 3f0ff4 */ _$tmp_5.729;
/* nil 3f0ff8 */ _$tmp_6.737;
/* nil 3f0ffc */ _$tmp_7.763;
/* nil 3f1000 */ _$tmp_8.771;
/* nil 3f1004 */ _$tmp_9.776;
/* nil 3f1008 */ str.849;
/* nil 3b40e0 */ __FUNCTION__.961;
/* nil 3b4150 */ __FUNCTION__.973;
/* nil 3b4170 */ msg_id_tbl.985;
/* nil 3b4180 */ msg_id_tbl.992;
/* nil 3f1028 */ str.646;
/* nil 3b41e8 */ __FUNCTION__.665;
/* nil 3b4270 */ __FUNCTION__.668;
/* nil 3f1040 */ _$tmp_0.770;
/* nil 3f1044 */ _$tmp_1.778;
/* nil 3f1048 */ _$tmp_2.783;
/* nil 3f104c */ _$tmp_3.791;
/* nil 3f1050 */ _$tmp_4.799;
/* nil 3f1054 */ _$tmp_5.807;
/* nil 3f1058 */ _$tmp_6.815;
/* nil 3f105c */ _$tmp_7.841;
/* nil 3f1060 */ _$tmp_8.849;
/* nil 3f1064 */ _$tmp_9.854;
/* nil 3f1068 */ str.906;
/* nil 3b4368 */ __FUNCTION__.1300;
/* nil 3b43c0 */ __FUNCTION__.652;
/* nil 3b4420 */ __FUNCTION__.1324;
/* nil 3b4468 */ __FUNCTION__.1336;
/* nil 3b44b0 */ __FUNCTION__.1372;
/* nil 3b44e0 */ __FUNCTION__.1378;
/* nil 3b4538 */ __FUNCTION__.1384;
/* nil 3b4650 */ __FUNCTION__.1465;
/* nil 3b4698 */ __FUNCTION__.1468;
/* nil 3b46b0 */ __FUNCTION__.1492;
/* nil 3f10a8 */ __FUNCTION__.864;
/* nil 3b4720 */ __FUNCTION__.876;
/* nil 3b4758 */ __FUNCTION__.1582;
/* nil 3b47b8 */ __FUNCTION__.1606;
/* nil 3b4868 */ __FUNCTION__.1624;
/* nil 3b4a10 */ __FUNCTION__.1627;
/* nil 3b4aa0 */ __FUNCTION__.1630;
/* nil 3b4ad0 */ __FUNCTION__.1633;
/* nil 3b4ae8 */ __FUNCTION__.1636;
/* nil 3b4b00 */ __FUNCTION__.1639;
/* nil 3b4b18 */ __FUNCTION__.1648;
/* nil 3b4b30 */ s_aSRPair.1687;
/* nil 3b4ba0 */ s_aGRPair.1691;
/* nil 3f10e0 */ str.574;
/* nil 3f10f8 */ _$tmp_0.696;
/* nil 3f10fc */ _$tmp_1.704;
/* nil 3f1100 */ _$tmp_2.709;
/* nil 3f1104 */ _$tmp_3.717;
/* nil 3f1108 */ _$tmp_4.725;
/* nil 3f110c */ _$tmp_5.733;
/* nil 3f1110 */ _$tmp_6.741;
/* nil 3f1114 */ _$tmp_7.767;
/* nil 3f1118 */ _$tmp_8.775;
/* nil 3f111c */ _$tmp_9.780;
/* nil 3f1120 */ __FUNCTION__.790;
/* nil 3b4d70 */ __FUNCTION__.802;
/* nil 3b4da8 */ __FUNCTION__.805;
/* nil 3f1130 */ _$tmp_0.578;
/* nil 3f1134 */ _$tmp_1.586;
/* nil 3f1138 */ _$tmp_2.591;
/* nil 3f113c */ _$tmp_3.599;
/* nil 3f1140 */ _$tmp_4.607;
/* nil 3f1144 */ _$tmp_5.615;
/* nil 3f1148 */ _$tmp_6.623;
/* nil 3f114c */ _$tmp_7.649;
/* nil 3f1150 */ _$tmp_8.657;
/* nil 3f1154 */ _$tmp_9.662;
/* nil 3f1158 */ str.690;
/* nil 3f1198 */ _$tmp_0.578;
/* nil 3f119c */ _$tmp_1.586;
/* nil 3f11a0 */ _$tmp_2.591;
/* nil 3f11a4 */ _$tmp_3.599;
/* nil 3f11a8 */ _$tmp_4.607;
/* nil 3f11ac */ _$tmp_5.615;
/* nil 3f11b0 */ _$tmp_6.623;
/* nil 3f11b4 */ _$tmp_7.649;
/* nil 3f11b8 */ _$tmp_8.657;
/* nil 3f11bc */ _$tmp_9.662;
/* nil 3f11c0 */ str.735;
/* nil 3b53d0 */ __FUNCTION__.910;
/* nil 3b6d70 */ __FUNCTION__.958;
/* nil 3f11f0 */ _$tmp_0.599;
/* nil 3f11f4 */ _$tmp_1.607;
/* nil 3f11f8 */ _$tmp_2.612;
/* nil 3f11fc */ _$tmp_3.620;
/* nil 3f1200 */ _$tmp_4.628;
/* nil 3f1204 */ _$tmp_5.636;
/* nil 3f1208 */ _$tmp_6.644;
/* nil 3f120c */ _$tmp_7.670;
/* nil 3f1210 */ _$tmp_8.678;
/* nil 3f1214 */ _$tmp_9.683;
/* nil 3f1218 */ str.735;
/* nil 3b6e58 */ __FUNCTION__.997;
/* nil 3b6ee0 */ __FUNCTION__.1051;
/* nil 3b6f98 */ __FUNCTION__.1057;
/* nil 3b7008 */ __FUNCTION__.1060;
/* nil 3b7028 */ __FUNCTION__.907;
/* nil 3b70a8 */ __FUNCTION__.1114;
/* nil 3f1268 */ _$tmp_0.599;
/* nil 3f126c */ _$tmp_1.607;
/* nil 3f1270 */ _$tmp_2.612;
/* nil 3f1274 */ _$tmp_3.620;
/* nil 3f1278 */ _$tmp_4.628;
/* nil 3f127c */ _$tmp_5.636;
/* nil 3f1280 */ _$tmp_6.644;
/* nil 3f1284 */ _$tmp_7.670;
/* nil 3f1288 */ _$tmp_8.678;
/* nil 3f128c */ _$tmp_9.683;
/* nil 3f1290 */ str.735;
/* nil 3b71a8 */ __FUNCTION__.898;
/* nil 3b71f0 */ __FUNCTION__.904;
/* nil 3b7278 */ __FUNCTION__.913;
/* nil 3b72b8 */ __FUNCTION__.916;
/* nil 3f12c4 */ old_tag_buf.928;
/* nil 3f12c8 */ s_pMatOld.929;
/* nil 3b72d0 */ __FUNCTION__.933;
/* nil 3b7300 */ __FUNCTION__.945;
/* nil 3b7368 */ __FUNCTION__.966;
/* nil 3f12d8 */ s_iWriteSize.969;
/* nil 3b73c8 */ __FUNCTION__.976;
/* nil 3f12dc */ iCount_GRA3DDL.988;
/* nil 3f12e0 */ iCount_GRA3DPL.989;
/* nil 3f12e4 */ iCount_GRA3DSL.990;
/* nil 3b7558 */ __FUNCTION__.994;
/* nil 3b7590 */ __FUNCTION__.997;
/* nil 3b75a8 */ __FUNCTION__.1000;
/* nil 3b76e8 */ __FUNCTION__.1033;
/* nil 3b7768 */ __FUNCTION__.1036;
/* nil 3b7780 */ __FUNCTION__.1060;
/* nil 3b7828 */ __FUNCTION__.1075;
/* nil 3b7980 */ __FUNCTION__.1084;
/* nil 3b7998 */ __FUNCTION__.1093;
/* nil 3b79a8 */ __FUNCTION__.1096;
/* nil 3b79c8 */ __FUNCTION__.1102;
/* nil 3f1310 */ _$tmp_0.599;
/* nil 3f1314 */ _$tmp_1.607;
/* nil 3f1318 */ _$tmp_2.612;
/* nil 3f131c */ _$tmp_3.620;
/* nil 3f1320 */ _$tmp_4.628;
/* nil 3f1324 */ _$tmp_5.636;
/* nil 3f1328 */ _$tmp_6.644;
/* nil 3f132c */ _$tmp_7.670;
/* nil 3f1330 */ _$tmp_8.678;
/* nil 3f1334 */ _$tmp_9.683;
/* nil 3f1338 */ str.735;
/* nil 3b7a58 */ __FUNCTION__.823;
/* nil 3b7b70 */ __FUNCTION__.847;
/* nil 3b7ba8 */ __FUNCTION__.871;
/* nil 3b7e28 */ __FUNCTION__.901;
/* nil 3b7e50 */ __FUNCTION__.910;
/* nil 3b8098 */ __FUNCTION__.946;
/* nil 3f1370 */ __FUNCTION__.1030;
/* nil 3f1378 */ __FUNCTION__.1033;
/* nil 3f1380 */ str.595;
/* nil 3f1398 */ _$tmp_0.837;
/* nil 3f139c */ _$tmp_1.845;
/* nil 3f13a0 */ _$tmp_2.850;
/* nil 3f13a4 */ _$tmp_3.858;
/* nil 3f13a8 */ _$tmp_4.866;
/* nil 3f13ac */ _$tmp_5.874;
/* nil 3f13b0 */ _$tmp_6.882;
/* nil 3f13b4 */ _$tmp_7.908;
/* nil 3f13b8 */ _$tmp_8.916;
/* nil 3f13bc */ _$tmp_9.921;
/* nil 3185b0 */ shadowtex.1015;
/* nil 3185f0 */ clipmtx.1022;
/* nil 318630 */ boundline.1023;
/* nil 3b81e8 */ __FUNCTION__.1081;
/* nil 3b8250 */ __FUNCTION__.1111;
/* nil 3b82a0 */ __FUNCTION__.1138;
/* nil 3b8388 */ __FUNCTION__.1186;
/* nil 3b8398 */ __FUNCTION__.1195;
/* nil 3b83e0 */ __FUNCTION__.1204;
/* nil 3f13e0 */ _$tmp_0.599;
/* nil 3f13e4 */ _$tmp_1.607;
/* nil 3f13e8 */ _$tmp_2.612;
/* nil 3f13ec */ _$tmp_3.620;
/* nil 3f13f0 */ _$tmp_4.628;
/* nil 3f13f4 */ _$tmp_5.636;
/* nil 3f13f8 */ _$tmp_6.644;
/* nil 3f13fc */ _$tmp_7.670;
/* nil 3f1400 */ _$tmp_8.678;
/* nil 3f1404 */ _$tmp_9.683;
/* nil 3f1408 */ str.711;
/* nil 3b84f8 */ __FUNCTION__.820;
/* nil 3b85a8 */ __FUNCTION__.826;
/* nil 3f1428 */ _$tmp_0.578;
/* nil 3f142c */ _$tmp_1.586;
/* nil 3f1430 */ _$tmp_2.591;
/* nil 3f1434 */ _$tmp_3.599;
/* nil 3f1438 */ _$tmp_4.607;
/* nil 3f143c */ _$tmp_5.615;
/* nil 3f1440 */ _$tmp_6.623;
/* nil 3f1444 */ _$tmp_7.649;
/* nil 3f1448 */ _$tmp_8.657;
/* nil 3f144c */ _$tmp_9.662;
/* nil 3f1450 */ str.690;
/* nil 3f1468 */ _$tmp_0.599;
/* nil 3f146c */ _$tmp_1.607;
/* nil 3f1470 */ _$tmp_2.612;
/* nil 3f1474 */ _$tmp_3.620;
/* nil 3f1478 */ _$tmp_4.628;
/* nil 3f147c */ _$tmp_5.636;
/* nil 3f1480 */ _$tmp_6.644;
/* nil 3f1484 */ _$tmp_7.670;
/* nil 3f1488 */ _$tmp_8.678;
/* nil 3f148c */ _$tmp_9.683;
/* nil 3f1490 */ str.735;
/* nil 3b88c8 */ __FUNCTION__.988;
/* nil 3f14b0 */ str.646;
/* nil 3f14c8 */ _$tmp_0.759;
/* nil 3f14cc */ _$tmp_1.767;
/* nil 3f14d0 */ _$tmp_2.772;
/* nil 3f14d4 */ _$tmp_3.780;
/* nil 3f14d8 */ _$tmp_4.788;
/* nil 3f14dc */ _$tmp_5.796;
/* nil 3f14e0 */ _$tmp_6.804;
/* nil 3f14e4 */ _$tmp_7.830;
/* nil 3f14e8 */ _$tmp_8.838;
/* nil 3f14ec */ _$tmp_9.843;
/* nil 3b8e60 */ __FUNCTION__.1000;
/* nil 3b8ed8 */ __FUNCTION__.1021;
/* nil 3b8ef0 */ in_alpha_tbl.1024;
/* nil 3b8f00 */ out_alpha_tbl.1025;
/* nil 3b8f30 */ flea_rgb_tbl.1047;
/* nil 3b8f48 */ scale_tbl.1051;
/* nil 3b8f58 */ flea_rgb_tbl.1055;
/* nil 3b8f70 */ scale_tbl.1059;
/* nil 3b8f80 */ smoke_alpha_tbl.1066;
/* nil 3b8f98 */ __FUNCTION__.1076;
/* nil 3b8fe0 */ num_alpha_tbl.1082;
/* nil 3b8ff8 */ num_alpha_tbl_pal.1083;
/* nil 3b9028 */ hina_out_alpha.1090;
/* nil 3b90a0 */ scale_tbl.1109;
/* nil 3f14f0 */ str.697;
/* nil 3f1510 */ _$tmp_0.692;
/* nil 3f1514 */ _$tmp_1.700;
/* nil 3f1518 */ _$tmp_2.705;
/* nil 3f151c */ _$tmp_3.713;
/* nil 3f1520 */ _$tmp_4.721;
/* nil 3f1524 */ _$tmp_5.729;
/* nil 3f1528 */ _$tmp_6.737;
/* nil 3f152c */ _$tmp_7.763;
/* nil 3f1530 */ _$tmp_8.771;
/* nil 3f1534 */ _$tmp_9.776;
/* nil 3f1538 */ str.849;
/* nil 3b9168 */ __FUNCTION__.1099;
/* nil 3b91c8 */ __FUNCTION__.1108;
/* nil 3f1558 */ __FUNCTION__.1447;
/* nil 3f1560 */ __FUNCTION__.1450;
/* nil 3f1568 */ _$tmp_0.599;
/* nil 3f156c */ _$tmp_1.607;
/* nil 3f1570 */ _$tmp_2.612;
/* nil 3f1574 */ _$tmp_3.620;
/* nil 3f1578 */ _$tmp_4.628;
/* nil 3f157c */ _$tmp_5.636;
/* nil 3f1580 */ _$tmp_6.644;
/* nil 3f1584 */ _$tmp_7.670;
/* nil 3f1588 */ _$tmp_8.678;
/* nil 3f158c */ _$tmp_9.683;
/* nil 3f1590 */ str.735;
/* nil 3f15a8 */ spd.1156;
/* nil 3f15ac */ rate.1157;
/* nil 3f15b0 */ spd.1161;
/* nil 3f15b4 */ rate.1162;
/* nil 3f15b8 */ spd.1166;
/* nil 3f15bc */ rate.1167;
/* nil 3f15c0 */ spd.1171;
/* nil 3f15c4 */ rate.1172;
/* nil 3f15c8 */ spd.1176;
/* nil 3f15cc */ rate.1177;
/* nil 3f15d0 */ spd.1181;
/* nil 3f15d4 */ rate.1182;
/* nil 3f15d8 */ spd.1186;
/* nil 3f15dc */ rate.1187;
/* nil 3f15e0 */ spd.1191;
/* nil 3f15e4 */ rate.1192;
/* nil 3f15e8 */ spd.1196;
/* nil 3f15ec */ rate.1197;
/* nil 318730 */ DrawEnv.1258;
/* nil 3f15f0 */ str.646;
/* nil 3f1608 */ _$tmp_0.726;
/* nil 3f160c */ _$tmp_1.734;
/* nil 3f1610 */ _$tmp_2.739;
/* nil 3f1614 */ _$tmp_3.747;
/* nil 3f1618 */ _$tmp_4.755;
/* nil 3f161c */ _$tmp_5.763;
/* nil 3f1620 */ _$tmp_6.771;
/* nil 3f1624 */ _$tmp_7.797;
/* nil 3f1628 */ _$tmp_8.805;
/* nil 3f162c */ _$tmp_9.810;
/* nil 3b9428 */ __FUNCTION__.1069;
/* nil 3f1638 */ __FUNCTION__.1081;
/* nil 3b94a8 */ __FUNCTION__.1084;
/* nil 3f1640 */ __FUNCTION__.1087;
/* nil 3b9528 */ __FUNCTION__.1090;
/* nil 3b95c8 */ __FUNCTION__.1093;
/* nil 3b95f8 */ __FUNCTION__.1096;
/* nil 3b9638 */ __FUNCTION__.1102;
/* nil 3b9668 */ __FUNCTION__.1105;
/* nil 3b96a0 */ __FUNCTION__.1108;
/* nil 3b96b8 */ difficulty_value.1111;
/* nil 3b96f0 */ __FUNCTION__.1115;
/* nil 3b9730 */ __FUNCTION__.1118;
/* nil 3f1648 */ __FUNCTION__.1121;
/* nil 3f1650 */ str.574;
/* nil 3f1668 */ str.646;
/* nil 3f1680 */ str.646;
/* nil 3f1698 */ _$tmp_0.759;
/* nil 3f169c */ _$tmp_1.767;
/* nil 3f16a0 */ _$tmp_2.772;
/* nil 3f16a4 */ _$tmp_3.780;
/* nil 3f16a8 */ _$tmp_4.788;
/* nil 3f16ac */ _$tmp_5.796;
/* nil 3f16b0 */ _$tmp_6.804;
/* nil 3f16b4 */ _$tmp_7.830;
/* nil 3f16b8 */ _$tmp_8.838;
/* nil 3f16bc */ _$tmp_9.843;
/* nil 3f16e8 */ pos_x.1033;
/* nil 3f16f8 */ str.646;
/* nil 3f1710 */ _$tmp_0.759;
/* nil 3f1714 */ _$tmp_1.767;
/* nil 3f1718 */ _$tmp_2.772;
/* nil 3f171c */ _$tmp_3.780;
/* nil 3f1720 */ _$tmp_4.788;
/* nil 3f1724 */ _$tmp_5.796;
/* nil 3f1728 */ _$tmp_6.804;
/* nil 3f172c */ _$tmp_7.830;
/* nil 3f1730 */ _$tmp_8.838;
/* nil 3f1734 */ _$tmp_9.843;
/* nil 3b99c0 */ panel_item_tbl.979;
/* nil 3b99f0 */ __FUNCTION__.1001;
/* nil 3b9a78 */ kaza_out_alpha.1034;
/* nil 3b9ad8 */ __FUNCTION__.1041;
/* nil 3b9af0 */ in_alpha_tbl.1044;
/* nil 3b9b00 */ out_alpha_tbl.1045;
/* nil 3b9b30 */ __FUNCTION__.1064;
/* nil 3b9b50 */ shadow_tex_tbl.1067;
/* nil 3b9b90 */ rot_anim_tbl.1074;
/* nil 3b9ba8 */ __FUNCTION__.1075;
/* nil 3b9bc0 */ panel_tex_tbl.1078;
/* nil 3b9bf8 */ __FUNCTION__.1082;
/* nil 3b9c20 */ emboss_tbl.1085;
/* nil 3b9c60 */ emboss_tbl.1092;
/* nil 3b9c78 */ flare_tex_tbl.1096;
/* nil 3b9c88 */ flare_rgb_tbl.1100;
/* nil 3b9ca0 */ __FUNCTION__.1107;
/* nil 3b9cc0 */ num_tex_tbl.1110;
/* nil 3b9ce8 */ num_tex_tbl_s.1111;
/* nil 3f1738 */ str.646;
/* nil 3f1750 */ _$tmp_0.759;
/* nil 3f1754 */ _$tmp_1.767;
/* nil 3f1758 */ _$tmp_2.772;
/* nil 3f175c */ _$tmp_3.780;
/* nil 3f1760 */ _$tmp_4.788;
/* nil 3f1764 */ _$tmp_5.796;
/* nil 3f1768 */ _$tmp_6.804;
/* nil 3f176c */ _$tmp_7.830;
/* nil 3f1770 */ _$tmp_8.838;
/* nil 3f1774 */ _$tmp_9.843;
/* nil 3b9dd0 */ __FUNCTION__.997;
/* nil 3b9e58 */ kaza_out_alpha.1027;
/* nil 3b9eb8 */ __FUNCTION__.1034;
/* nil 3b9ed0 */ in_alpha_tbl.1037;
/* nil 3b9ee0 */ out_alpha_tbl.1038;
/* nil 3b9f10 */ __FUNCTION__.1054;
/* nil 3b9f30 */ shadow_tex_tbl.1057;
/* nil 3b9f70 */ rot_anim_tbl.1064;
/* nil 3b9f88 */ __FUNCTION__.1065;
/* nil 3b9fa0 */ panel_tex_tbl.1068;
/* nil 3b9fd8 */ __FUNCTION__.1072;
/* nil 3b9ff8 */ emboss_tbl.1075;
/* nil 3ba038 */ emboss_tbl.1082;
/* nil 3ba050 */ flare_tex_tbl.1086;
/* nil 3ba060 */ flare_rgb_tbl.1090;
/* nil 3ba078 */ __FUNCTION__.1097;
/* nil 3ba098 */ num_tex_tbl.1100;
/* nil 3ba0c0 */ num_tex_tbl_s.1101;
/* nil 3f1778 */ _$tmp_0.692;
/* nil 3f177c */ _$tmp_1.700;
/* nil 3f1780 */ _$tmp_2.705;
/* nil 3f1784 */ _$tmp_3.713;
/* nil 3f1788 */ _$tmp_4.721;
/* nil 3f178c */ _$tmp_5.729;
/* nil 3f1790 */ _$tmp_6.737;
/* nil 3f1794 */ _$tmp_7.763;
/* nil 3f1798 */ _$tmp_8.771;
/* nil 3f179c */ _$tmp_9.776;
/* nil 3f17a0 */ str.849;
/* nil 3ba198 */ __FUNCTION__.949;
/* nil 3ba2c0 */ __FUNCTION__.970;
/* nil 3f17c0 */ _$tmp_0.692;
/* nil 3f17c4 */ _$tmp_1.700;
/* nil 3f17c8 */ _$tmp_2.705;
/* nil 3f17cc */ _$tmp_3.713;
/* nil 3f17d0 */ _$tmp_4.721;
/* nil 3f17d4 */ _$tmp_5.729;
/* nil 3f17d8 */ _$tmp_6.737;
/* nil 3f17dc */ _$tmp_7.763;
/* nil 3f17e0 */ _$tmp_8.771;
/* nil 3f17e4 */ _$tmp_9.776;
/* nil 3f17e8 */ str.849;
/* nil 3ba358 */ __FUNCTION__.964;
/* nil 3ba3f0 */ tex_label_tbl.979;
/* nil 3ba408 */ flare_tex_tbl.983;
/* nil 3ba430 */ tex_label_tbl.987;
/* nil 3f1810 */ _$tmp_0.692;
/* nil 3f1814 */ _$tmp_1.700;
/* nil 3f1818 */ _$tmp_2.705;
/* nil 3f181c */ _$tmp_3.713;
/* nil 3f1820 */ _$tmp_4.721;
/* nil 3f1824 */ _$tmp_5.729;
/* nil 3f1828 */ _$tmp_6.737;
/* nil 3f182c */ _$tmp_7.763;
/* nil 3f1830 */ _$tmp_8.771;
/* nil 3f1834 */ _$tmp_9.776;
/* nil 3f1838 */ str.849;
/* nil 3ba4b0 */ __FUNCTION__.970;
/* nil 3f1850 */ _$tmp_0.692;
/* nil 3f1854 */ _$tmp_1.700;
/* nil 3f1858 */ _$tmp_2.705;
/* nil 3f185c */ _$tmp_3.713;
/* nil 3f1860 */ _$tmp_4.721;
/* nil 3f1864 */ _$tmp_5.729;
/* nil 3f1868 */ _$tmp_6.737;
/* nil 3f186c */ _$tmp_7.763;
/* nil 3f1870 */ _$tmp_8.771;
/* nil 3f1874 */ _$tmp_9.776;
/* nil 3f1878 */ str.849;
/* nil 3ba568 */ __FUNCTION__.976;
/* nil 3ba5e0 */ __FUNCTION__.985;
/* nil 3ba780 */ __FUNCTION__.1057;
/* nil 3f1898 */ _$tmp_0.692;
/* nil 3f189c */ _$tmp_1.700;
/* nil 3f18a0 */ _$tmp_2.705;
/* nil 3f18a4 */ _$tmp_3.713;
/* nil 3f18a8 */ _$tmp_4.721;
/* nil 3f18ac */ _$tmp_5.729;
/* nil 3f18b0 */ _$tmp_6.737;
/* nil 3f18b4 */ _$tmp_7.763;
/* nil 3f18b8 */ _$tmp_8.771;
/* nil 3f18bc */ _$tmp_9.776;
/* nil 3f18c0 */ str.849;
/* nil 3ba870 */ __FUNCTION__.961;
/* nil 3ba8e0 */ alpha_tbl.985;
/* nil 3f18e0 */ str.574;
/* nil 3ba9b8 */ __FUNCTION__.602;
/* nil 3baa20 */ __FUNCTION__.605;
/* nil 3baa58 */ __FUNCTION__.608;
/* nil 3baa90 */ __FUNCTION__.611;
/* nil 3f1900 */ _$tmp_0.629;
/* nil 3f1904 */ _$tmp_1.637;
/* nil 3f1908 */ _$tmp_2.642;
/* nil 3f190c */ _$tmp_3.650;
/* nil 3f1910 */ _$tmp_4.658;
/* nil 3f1914 */ _$tmp_5.666;
/* nil 3f1918 */ _$tmp_6.674;
/* nil 3f191c */ _$tmp_7.700;
/* nil 3f1920 */ _$tmp_8.708;
/* nil 3f1924 */ _$tmp_9.713;
/* nil 3f1928 */ str.786;
/* nil 3f1948 */ _$tmp_0.692;
/* nil 3f194c */ _$tmp_1.700;
/* nil 3f1950 */ _$tmp_2.705;
/* nil 3f1954 */ _$tmp_3.713;
/* nil 3f1958 */ _$tmp_4.721;
/* nil 3f195c */ _$tmp_5.729;
/* nil 3f1960 */ _$tmp_6.737;
/* nil 3f1964 */ _$tmp_7.763;
/* nil 3f1968 */ _$tmp_8.771;
/* nil 3f196c */ _$tmp_9.776;
/* nil 3f1970 */ str.849;
/* nil 3bab78 */ __FUNCTION__.976;
/* nil 3baf40 */ __FUNCTION__.1009;
/* nil 3f19a8 */ str.574;
/* nil 3f19c0 */ _$tmp_0.645;
/* nil 3f19c4 */ _$tmp_1.653;
/* nil 3f19c8 */ _$tmp_2.658;
/* nil 3f19cc */ _$tmp_3.666;
/* nil 3f19d0 */ _$tmp_4.674;
/* nil 3f19d4 */ _$tmp_5.682;
/* nil 3f19d8 */ _$tmp_6.690;
/* nil 3f19dc */ _$tmp_7.716;
/* nil 3f19e0 */ _$tmp_8.724;
/* nil 3f19e4 */ _$tmp_9.729;
/* nil 3bafd8 */ __FUNCTION__.952;
/* nil 3f19e8 */ str.574;
/* nil 3f1a08 */ _$tmp_0.692;
/* nil 3f1a0c */ _$tmp_1.700;
/* nil 3f1a10 */ _$tmp_2.705;
/* nil 3f1a14 */ _$tmp_3.713;
/* nil 3f1a18 */ _$tmp_4.721;
/* nil 3f1a1c */ _$tmp_5.729;
/* nil 3f1a20 */ _$tmp_6.737;
/* nil 3f1a24 */ _$tmp_7.763;
/* nil 3f1a28 */ _$tmp_8.771;
/* nil 3f1a2c */ _$tmp_9.776;
/* nil 3f1a30 */ str.849;
/* nil 3bb128 */ __FUNCTION__.982;
/* nil 3bb150 */ __FUNCTION__.991;
/* nil 3bb200 */ Offset.1090;
/* nil 3f1a68 */ _$tmp_0.671;
/* nil 3f1a6c */ _$tmp_1.679;
/* nil 3f1a70 */ _$tmp_2.684;
/* nil 3f1a74 */ _$tmp_3.692;
/* nil 3f1a78 */ _$tmp_4.700;
/* nil 3f1a7c */ _$tmp_5.708;
/* nil 3f1a80 */ _$tmp_6.716;
/* nil 3f1a84 */ _$tmp_7.742;
/* nil 3f1a88 */ _$tmp_8.750;
/* nil 3f1a8c */ _$tmp_9.755;
/* nil 3f1a90 */ str.807;
/* nil 3f1ac8 */ str.574;
/* nil 3bb658 */ __FUNCTION__.9;
/* nil 3bb6b0 */ __FUNCTION__.9;
/* nil 3bb6f0 */ __FUNCTION__.12;
/* nil 3f1ae8 */ _$tmp_0.620;
/* nil 3f1aec */ _$tmp_1.628;
/* nil 3f1af0 */ _$tmp_2.633;
/* nil 3f1af4 */ _$tmp_3.641;
/* nil 3f1af8 */ _$tmp_4.649;
/* nil 3f1afc */ _$tmp_5.657;
/* nil 3f1b00 */ _$tmp_6.665;
/* nil 3f1b04 */ _$tmp_7.691;
/* nil 3f1b08 */ _$tmp_8.699;
/* nil 3f1b0c */ _$tmp_9.704;
/* nil 3f1b10 */ str.777;
/* nil 3bb928 */ __FUNCTION__.904;
/* nil 3bb958 */ __FUNCTION__.907;
/* nil 3bb980 */ __FUNCTION__.910;
/* nil 3bbba8 */ __FUNCTION__.1012;
/* nil 3f1b68 */ str.574;
/* nil 3f1b80 */ _$tmp_0.654;
/* nil 3f1b84 */ _$tmp_1.662;
/* nil 3f1b88 */ _$tmp_2.667;
/* nil 3f1b8c */ _$tmp_3.675;
/* nil 3f1b90 */ _$tmp_4.683;
/* nil 3f1b94 */ _$tmp_5.691;
/* nil 3f1b98 */ _$tmp_6.699;
/* nil 3f1b9c */ _$tmp_7.725;
/* nil 3f1ba0 */ _$tmp_8.733;
/* nil 3f1ba4 */ _$tmp_9.738;
/* nil 3f1bb0 */ str.646;
/* nil 3f2a70 */ str.646;
/* nil 3f2a88 */ _$tmp_0.726;
/* nil 3f2a8c */ _$tmp_1.734;
/* nil 3f2a90 */ _$tmp_2.739;
/* nil 3f2a94 */ _$tmp_3.747;
/* nil 3f2a98 */ _$tmp_4.755;
/* nil 3f2a9c */ _$tmp_5.763;
/* nil 3f2aa0 */ _$tmp_6.771;
/* nil 3f2aa4 */ _$tmp_7.797;
/* nil 3f2aa8 */ _$tmp_8.805;
/* nil 3f2aac */ _$tmp_9.810;
/* nil 3f2ab0 */ cnt.967;
/* nil 3f2ac0 */ str.646;
/* nil 3bc3b8 */ __FUNCTION__.662;
/* nil 3bc438 */ __FUNCTION__.665;
/* nil 3bc468 */ __FUNCTION__.668;
/* nil 3bc4a0 */ __FUNCTION__.671;
/* nil 3bc500 */ __FUNCTION__.111;
/* nil 3bc570 */ __FUNCTION__.117;
/* nil 3f2af0 */ shoji_tbl.132;
/* nil 3bc5b8 */ shouji_x_tbl.133;
/* nil 3bc5e8 */ shouji_alpha_tbl.134;
/* nil 3f2af8 */ shoji_tbl.138;
/* nil 3bc610 */ shouji_x_tbl.139;
/* nil 3bc640 */ shouji_alpha_tbl.140;
/* nil 3bc680 */ moyou1_x_tbl.144;
/* nil 3bc6a0 */ moyou2_x_tbl.145;
/* nil 3bc6c0 */ moyou1_alpha_tbl.146;
/* nil 3bc730 */ moyou2_alpha_tbl.147;
/* nil 3bc7b0 */ shdw_alpha_tbl.148;
/* nil 3bc800 */ flea_alpha_tbl.149;
/* nil 3bc890 */ bg_alpha_tbl.150;
/* nil 3bc8b8 */ shadow_x_tbl.154;
/* nil 3bc8e8 */ shadow_alpha_tbl.155;
/* nil 3bc910 */ shadow_x_tbl.159;
/* nil 3bc940 */ shadow_alpha_tbl.160;
/* nil 3bc968 */ wall_alpha_tbl.164;
/* nil 3f2b08 */ str.688;
/* nil 3f2b20 */ _$tmp_0.780;
/* nil 3f2b24 */ _$tmp_1.788;
/* nil 3f2b28 */ _$tmp_2.793;
/* nil 3f2b2c */ _$tmp_3.801;
/* nil 3f2b30 */ _$tmp_4.809;
/* nil 3f2b34 */ _$tmp_5.817;
/* nil 3f2b38 */ _$tmp_6.825;
/* nil 3f2b3c */ _$tmp_7.851;
/* nil 3f2b40 */ _$tmp_8.859;
/* nil 3f2b44 */ _$tmp_9.864;
/* nil 3f2b48 */ __FUNCTION__.1078;
/* nil 3bca68 */ __FUNCTION__.1090;
/* nil 3f2b50 */ __FUNCTION__.1093;
/* nil 3bcad8 */ __FUNCTION__.1117;
/* nil 3bcaf8 */ __FUNCTION__.1138;
/* nil 3bcb08 */ __FUNCTION__.1147;
/* nil 3bcb50 */ __FUNCTION__.1153;
/* nil 3bcb68 */ __FUNCTION__.1156;
/* nil 3bcb80 */ __FUNCTION__.1159;
/* nil 3bcb98 */ __FUNCTION__.1162;
/* nil 3bcbb8 */ msg_id.1180;
/* nil 3f2b58 */ _$tmp_10.1260;
/* nil 3bcc38 */ frame_tex_tbl.1309;
/* nil 3f2b5c */ _$tmp_11.1317;
/* nil 3bccb0 */ top_gem_anim_tbl.1348;
/* nil 3bccd0 */ blue_flare_alpha_anim_tbl.1349;
/* nil 3bccf8 */ blue_flare_scl_anim_tbl.1350;
/* nil 3bcd28 */ yellow_flare_alpha_anim_tbl.1351;
/* nil 3bcd48 */ under_gem_anim_tbl.1352;
/* nil 3f2b60 */ _$tmp_0.692;
/* nil 3f2b64 */ _$tmp_1.700;
/* nil 3f2b68 */ _$tmp_2.705;
/* nil 3f2b6c */ _$tmp_3.713;
/* nil 3f2b70 */ _$tmp_4.721;
/* nil 3f2b74 */ _$tmp_5.729;
/* nil 3f2b78 */ _$tmp_6.737;
/* nil 3f2b7c */ _$tmp_7.763;
/* nil 3f2b80 */ _$tmp_8.771;
/* nil 3f2b84 */ _$tmp_9.776;
/* nil 3f2b88 */ str.849;
/* nil 3bce58 */ __FUNCTION__.1072;
/* nil 3f2bc8 */ __FUNCTION__.1108;
/* nil 3f2bd0 */ __FUNCTION__.1117;
/* nil 3f2bd8 */ _$tmp_10.1148;
/* nil 3bcf70 */ __FUNCTION__.1158;
/* nil 3bcfb0 */ __FUNCTION__.1161;
/* nil 3f2bdc */ _$tmp_11.1168;
/* nil 3f2be0 */ _$tmp_12.1182;
/* nil 3f2be4 */ _$tmp_13.1184;
/* nil 3f2be8 */ _$tmp_0.701;
/* nil 3f2bec */ _$tmp_1.709;
/* nil 3f2bf0 */ _$tmp_2.714;
/* nil 3f2bf4 */ _$tmp_3.722;
/* nil 3f2bf8 */ _$tmp_4.730;
/* nil 3f2bfc */ _$tmp_5.738;
/* nil 3f2c00 */ _$tmp_6.746;
/* nil 3f2c04 */ _$tmp_7.772;
/* nil 3f2c08 */ _$tmp_8.780;
/* nil 3f2c0c */ _$tmp_9.785;
/* nil 3f2c10 */ str.858;
/* nil 3bd098 */ __FUNCTION__.1084;
/* nil 3f2c28 */ __FUNCTION__.1087;
/* nil 3f2c30 */ __FUNCTION__.1114;
/* nil 3f2c38 */ __FUNCTION__.1117;
/* nil 3bd1c8 */ msg_id.1129;
/* nil 3bd1d8 */ film_msg_tbl.1133;
/* nil 3bd208 */ msg_id.1137;
/* nil 3bd218 */ msg_id.1141;
/* nil 3bd228 */ base_tex_tbl.1157;
/* nil 3bd2a8 */ line_tex_tbl.1170;
/* nil 3f2c40 */ _$tmp_0.692;
/* nil 3f2c44 */ _$tmp_1.700;
/* nil 3f2c48 */ _$tmp_2.705;
/* nil 3f2c4c */ _$tmp_3.713;
/* nil 3f2c50 */ _$tmp_4.721;
/* nil 3f2c54 */ _$tmp_5.729;
/* nil 3f2c58 */ _$tmp_6.737;
/* nil 3f2c5c */ _$tmp_7.763;
/* nil 3f2c60 */ _$tmp_8.771;
/* nil 3f2c64 */ _$tmp_9.776;
/* nil 3f2c68 */ str.849;
/* nil 3bd368 */ __FUNCTION__.988;
/* nil 3bd3f0 */ __FUNCTION__.991;
/* nil 3bd438 */ __FUNCTION__.997;
/* nil 3bd490 */ __FUNCTION__.1000;
/* nil 3bd4e0 */ __FUNCTION__.1003;
/* nil 3bd4f8 */ cross_fade_in.1006;
/* nil 3bd508 */ cross_fade_out.1007;
/* nil 3bd538 */ __FUNCTION__.1008;
/* nil 3bd580 */ __FUNCTION__.1011;
/* nil 3bd5c0 */ __FUNCTION__.1020;
/* nil 3bd5f8 */ rgb_tbl.1044;
/* nil 3f2c88 */ _$tmp_0.692;
/* nil 3f2c8c */ _$tmp_1.700;
/* nil 3f2c90 */ _$tmp_2.705;
/* nil 3f2c94 */ _$tmp_3.713;
/* nil 3f2c98 */ _$tmp_4.721;
/* nil 3f2c9c */ _$tmp_5.729;
/* nil 3f2ca0 */ _$tmp_6.737;
/* nil 3f2ca4 */ _$tmp_7.763;
/* nil 3f2ca8 */ _$tmp_8.771;
/* nil 3f2cac */ _$tmp_9.776;
/* nil 3f2cb0 */ str.849;
/* nil 3f2cc8 */ __FUNCTION__.1072;
/* nil 3bd6f0 */ hp_tex_tbl.1078;
/* nil 3bd700 */ lens_tbl.1091;
/* nil 3bd728 */ film_tex.1095;
/* nil 3bd740 */ film_num_tex.1096;
/* nil 3f2d08 */ str.646;
/* nil 3f2d20 */ _$tmp_0.726;
/* nil 3f2d24 */ _$tmp_1.734;
/* nil 3f2d28 */ _$tmp_2.739;
/* nil 3f2d2c */ _$tmp_3.747;
/* nil 3f2d30 */ _$tmp_4.755;
/* nil 3f2d34 */ _$tmp_5.763;
/* nil 3f2d38 */ _$tmp_6.771;
/* nil 3f2d3c */ _$tmp_7.797;
/* nil 3f2d40 */ _$tmp_8.805;
/* nil 3f2d44 */ _$tmp_9.810;
/* nil 3bd918 */ __FUNCTION__.970;
/* nil 3bd990 */ __FUNCTION__.973;
/* nil 3bd9f0 */ __FUNCTION__.1012;
/* nil 3bda50 */ __FUNCTION__.1021;
/* nil 3f2d68 */ frame_tbl.1156;
/* nil 3f2d70 */ arrow_tbl.1160;
/* nil 3f2d78 */ shadow_tbl.1161;
/* nil 3f2d80 */ off_x_tbl.1162;
/* nil 3f2d88 */ off_y_tbl.1163;
/* nil 3f2d98 */ _$tmp_0.692;
/* nil 3f2d9c */ _$tmp_1.700;
/* nil 3f2da0 */ _$tmp_2.705;
/* nil 3f2da4 */ _$tmp_3.713;
/* nil 3f2da8 */ _$tmp_4.721;
/* nil 3f2dac */ _$tmp_5.729;
/* nil 3f2db0 */ _$tmp_6.737;
/* nil 3f2db4 */ _$tmp_7.763;
/* nil 3f2db8 */ _$tmp_8.771;
/* nil 3f2dbc */ _$tmp_9.776;
/* nil 3f2dc0 */ str.849;
/* nil 3bdbe0 */ __FUNCTION__.1000;
/* nil 3bdc78 */ __FUNCTION__.1006;
/* nil 3bdd18 */ item_sel_on.1039;
/* nil 3bdd88 */ item_sel_off.1040;
/* nil 3bdde0 */ item_doc_tex.1044;
/* nil 3f2de0 */ _$tmp_0.692;
/* nil 3f2de4 */ _$tmp_1.700;
/* nil 3f2de8 */ _$tmp_2.705;
/* nil 3f2dec */ _$tmp_3.713;
/* nil 3f2df0 */ _$tmp_4.721;
/* nil 3f2df4 */ _$tmp_5.729;
/* nil 3f2df8 */ _$tmp_6.737;
/* nil 3f2dfc */ _$tmp_7.763;
/* nil 3f2e00 */ _$tmp_8.771;
/* nil 3f2e04 */ _$tmp_9.776;
/* nil 3f2e08 */ str.849;
/* nil 3f2e30 */ __FUNCTION__.988;
/* nil 3bdef8 */ __FUNCTION__.991;
/* nil 3bdf58 */ __FUNCTION__.1003;
/* nil 3bdf80 */ __FUNCTION__.1006;
/* nil 3bdff0 */ __FUNCTION__.1051;
/* nil 3be020 */ __FUNCTION__.1066;
/* nil 3be088 */ __FUNCTION__.1069;
/* nil 3be0b8 */ __FUNCTION__.1072;
/* nil 3be0f0 */ __FUNCTION__.1075;
/* nil 3be110 */ __FUNCTION__.1078;
/* nil 3be130 */ csr_in_alpha_tbl.1093;
/* nil 3be140 */ csr_loop_alpha_tbl.1094;
/* nil 3f2e38 */ _$tmp_0.692;
/* nil 3f2e3c */ _$tmp_1.700;
/* nil 3f2e40 */ _$tmp_2.705;
/* nil 3f2e44 */ _$tmp_3.713;
/* nil 3f2e48 */ _$tmp_4.721;
/* nil 3f2e4c */ _$tmp_5.729;
/* nil 3f2e50 */ _$tmp_6.737;
/* nil 3f2e54 */ _$tmp_7.763;
/* nil 3f2e58 */ _$tmp_8.771;
/* nil 3f2e5c */ _$tmp_9.776;
/* nil 3f2e60 */ str.849;
/* nil 3be288 */ memo_first_tbl.1006;
/* nil 3be378 */ memo_second_tbl.1007;
/* nil 3be468 */ color_type_tbl.1008;
/* nil 3f2e80 */ str.646;
/* nil 3f2e98 */ _$tmp_0.759;
/* nil 3f2e9c */ _$tmp_1.767;
/* nil 3f2ea0 */ _$tmp_2.772;
/* nil 3f2ea4 */ _$tmp_3.780;
/* nil 3f2ea8 */ _$tmp_4.788;
/* nil 3f2eac */ _$tmp_5.796;
/* nil 3f2eb0 */ _$tmp_6.804;
/* nil 3f2eb4 */ _$tmp_7.830;
/* nil 3f2eb8 */ _$tmp_8.838;
/* nil 3f2ebc */ _$tmp_9.843;
/* nil 3be5e0 */ __FUNCTION__.1021;
/* nil 3be650 */ number_tbl.1033;
/* nil 3be6d0 */ sel_tbl.1034;
/* nil 3be710 */ bg_tbl.1035;
/* nil 3be750 */ protect_tbl.1039;
/* nil 3be7c0 */ number_tbl.1043;
/* nil 3be840 */ sel_tbl.1056;
/* nil 3be858 */ not_sel_tbl.1057;
/* nil 3be870 */ sel_scl_tbl.1058;
/* nil 3be888 */ non_sel_scl_tbl.1059;
/* nil 3be8a0 */ alpha_tbl.1060;
/* nil 3be8b0 */ sel_tbl.1070;
/* nil 3be8c8 */ not_sel_tbl.1071;
/* nil 3f2ec8 */ _$tmp_0.692;
/* nil 3f2ecc */ _$tmp_1.700;
/* nil 3f2ed0 */ _$tmp_2.705;
/* nil 3f2ed4 */ _$tmp_3.713;
/* nil 3f2ed8 */ _$tmp_4.721;
/* nil 3f2edc */ _$tmp_5.729;
/* nil 3f2ee0 */ _$tmp_6.737;
/* nil 3f2ee4 */ _$tmp_7.763;
/* nil 3f2ee8 */ _$tmp_8.771;
/* nil 3f2eec */ _$tmp_9.776;
/* nil 3f2ef0 */ str.849;
/* nil 3bea70 */ __FUNCTION__.1021;
/* nil 3bea90 */ crystal_in_alpha_tbl.1024;
/* nil 3beab0 */ crystal_flare_in_alpha_tbl.1025;
/* nil 3f2f30 */ _$tmp_0.692;
/* nil 3f2f34 */ _$tmp_1.700;
/* nil 3f2f38 */ _$tmp_2.705;
/* nil 3f2f3c */ _$tmp_3.713;
/* nil 3f2f40 */ _$tmp_4.721;
/* nil 3f2f44 */ _$tmp_5.729;
/* nil 3f2f48 */ _$tmp_6.737;
/* nil 3f2f4c */ _$tmp_7.763;
/* nil 3f2f50 */ _$tmp_8.771;
/* nil 3f2f54 */ _$tmp_9.776;
/* nil 3f2f58 */ str.849;
/* nil 3bec60 */ __FUNCTION__.1000;
/* nil 3becc8 */ __FUNCTION__.1042;
/* nil 3f2f78 */ _$tmp_0.692;
/* nil 3f2f7c */ _$tmp_1.700;
/* nil 3f2f80 */ _$tmp_2.705;
/* nil 3f2f84 */ _$tmp_3.713;
/* nil 3f2f88 */ _$tmp_4.721;
/* nil 3f2f8c */ _$tmp_5.729;
/* nil 3f2f90 */ _$tmp_6.737;
/* nil 3f2f94 */ _$tmp_7.763;
/* nil 3f2f98 */ _$tmp_8.771;
/* nil 3f2f9c */ _$tmp_9.776;
/* nil 3f2fa0 */ str.849;
/* nil 3bedc8 */ chapter_data.1018;
/* nil 3bedf8 */ alpha_tbl.1028;
/* nil 3bee08 */ move_in_alpha.1029;
/* nil 3bee18 */ exit_menu_alpha.1030;
/* nil 3bee28 */ move_menu_alpha.1031;
/* nil 3bee38 */ select_tbl.1038;
/* nil 3bee98 */ sel_pk2_tbl.1039;
/* nil 3beeb8 */ non_sel_pk2_tbl.1040;
/* nil 3beed8 */ __FUNCTION__.1068;
/* nil 3beef0 */ chapter_tbl.1071;
/* nil 3befd8 */ msg_id.1075;
/* nil 3f2fc0 */ __FUNCTION__.1079;
/* nil 3f2fc8 */ str.646;
/* nil 3bf180 */ __FUNCTION__.806;
/* nil 3bf218 */ __FUNCTION__.809;
/* nil 3bf278 */ __FUNCTION__.812;
/* nil 3bf2b8 */ __FUNCTION__.815;
/* nil 3bf308 */ __FUNCTION__.818;
/* nil 3bf360 */ __FUNCTION__.827;
/* nil 3bf390 */ __FUNCTION__.851;
/* nil 3bf3a0 */ normal_tbl.854;
/* nil 3bf3c0 */ __FUNCTION__.858;
/* nil 3bf470 */ __FUNCTION__.864;
/* nil 3bf580 */ __FUNCTION__.873;
/* nil 3bf670 */ __FUNCTION__.882;
/* nil 3bf710 */ __FUNCTION__.903;
/* nil 3bf728 */ normal_tbl.906;
/* nil 3bf840 */ __FUNCTION__.937;
/* nil 3bf898 */ __FUNCTION__.940;
/* nil 3bf8e8 */ __FUNCTION__.943;
/* nil 3bf980 */ __FUNCTION__.949;
/* nil 3bf9b8 */ __FUNCTION__.961;
/* nil 3f3040 */ str.646;
/* nil 3f3058 */ str.646;
/* nil 3f3070 */ _$tmp_0.726;
/* nil 3f3074 */ _$tmp_1.734;
/* nil 3f3078 */ _$tmp_2.739;
/* nil 3f307c */ _$tmp_3.747;
/* nil 3f3080 */ _$tmp_4.755;
/* nil 3f3084 */ _$tmp_5.763;
/* nil 3f3088 */ _$tmp_6.771;
/* nil 3f308c */ _$tmp_7.797;
/* nil 3f3090 */ _$tmp_8.805;
/* nil 3f3094 */ _$tmp_9.810;
/* nil 3c0040 */ __FUNCTION__.994;
/* nil 3c00c8 */ __FUNCTION__.1012;
/* nil 32d290 */ iSumiY.90;
/* nil 32d2a8 */ iNon.91;
/* nil 32d2c0 */ iPosY.98;
/* nil 32d2d8 */ iPosY.102;
/* nil 32d2f0 */ iWakuY.103;
/* nil 32d308 */ iPos.107;
/* nil 32d330 */ iPosY.120;
/* nil 3f30b0 */ iCsrTime.121;
/* nil 32d390 */ iPosY.125;
/* nil 3f30c0 */ iPosX.135;
/* nil 3f30c8 */ _$tmp_0.692;
/* nil 3f30cc */ _$tmp_1.700;
/* nil 3f30d0 */ _$tmp_2.705;
/* nil 3f30d4 */ _$tmp_3.713;
/* nil 3f30d8 */ _$tmp_4.721;
/* nil 3f30dc */ _$tmp_5.729;
/* nil 3f30e0 */ _$tmp_6.737;
/* nil 3f30e4 */ _$tmp_7.763;
/* nil 3f30e8 */ _$tmp_8.771;
/* nil 3f30ec */ _$tmp_9.776;
/* nil 3f30f0 */ str.849;
/* nil 3f3120 */ __FUNCTION__.976;
/* nil 3c01f8 */ sTAlpha.1012;
/* nil 3f3138 */ _$tmp_0.692;
/* nil 3f313c */ _$tmp_1.700;
/* nil 3f3140 */ _$tmp_2.705;
/* nil 3f3144 */ _$tmp_3.713;
/* nil 3f3148 */ _$tmp_4.721;
/* nil 3f314c */ _$tmp_5.729;
/* nil 3f3150 */ _$tmp_6.737;
/* nil 3f3154 */ _$tmp_7.763;
/* nil 3f3158 */ _$tmp_8.771;
/* nil 3f315c */ _$tmp_9.776;
/* nil 3f3160 */ str.849;
/* nil 3c0280 */ sTAlpha.1000;
/* nil 3c02a8 */ sTAlpha2.1001;
/* nil 3c02d0 */ sMskAlpha.1002;
/* nil 3c02e8 */ sTScale.1003;
/* nil 3c0360 */ sAlDat.1010;
/* nil 32e968 */ iDatList.1011;
/* nil 3f3188 */ _$tmp_0.692;
/* nil 3f318c */ _$tmp_1.700;
/* nil 3f3190 */ _$tmp_2.705;
/* nil 3f3194 */ _$tmp_3.713;
/* nil 3f3198 */ _$tmp_4.721;
/* nil 3f319c */ _$tmp_5.729;
/* nil 3f31a0 */ _$tmp_6.737;
/* nil 3f31a4 */ _$tmp_7.763;
/* nil 3f31a8 */ _$tmp_8.771;
/* nil 3f31ac */ _$tmp_9.776;
/* nil 3f31b0 */ str.849;
/* nil 3c03c8 */ __FUNCTION__.976;
/* nil 3f31c8 */ str.646;
/* nil 3f31e0 */ _$tmp_0.768;
/* nil 3f31e4 */ _$tmp_1.776;
/* nil 3f31e8 */ _$tmp_2.781;
/* nil 3f31ec */ _$tmp_3.789;
/* nil 3f31f0 */ _$tmp_4.797;
/* nil 3f31f4 */ _$tmp_5.805;
/* nil 3f31f8 */ _$tmp_6.813;
/* nil 3f31fc */ _$tmp_7.839;
/* nil 3f3200 */ _$tmp_8.847;
/* nil 3f3204 */ _$tmp_9.852;
/* nil 3c0518 */ __FUNCTION__.1090;
/* nil 3c0580 */ __FUNCTION__.1096;
/* nil 3c05a8 */ __FUNCTION__.1099;
/* nil 3c05b8 */ __FUNCTION__.1105;
/* nil 3c05c8 */ __FUNCTION__.1108;
/* nil 3c05f0 */ __FUNCTION__.1111;
/* nil 3c0600 */ __FUNCTION__.1123;
/* nil 3c0618 */ __FUNCTION__.1135;
/* nil 3c0668 */ __FUNCTION__.1141;
/* nil 3c06c0 */ __FUNCTION__.1210;
/* nil 3c06f8 */ __FUNCTION__.1216;
/* nil 3f3230 */ str.574;
/* nil 3f3248 */ _$tmp_0.687;
/* nil 3f324c */ _$tmp_1.695;
/* nil 3f3250 */ _$tmp_2.700;
/* nil 3f3254 */ _$tmp_3.708;
/* nil 3f3258 */ _$tmp_4.716;
/* nil 3f325c */ _$tmp_5.724;
/* nil 3f3260 */ _$tmp_6.732;
/* nil 3f3264 */ _$tmp_7.758;
/* nil 3f3268 */ _$tmp_8.766;
/* nil 3f326c */ _$tmp_9.771;
/* nil 3c09d0 */ __FUNCTION__.892;
/* nil 3f3278 */ str.646;
/* nil 3f3290 */ str.646;
/* nil 3f32a8 */ _$tmp_0.726;
/* nil 3f32ac */ _$tmp_1.734;
/* nil 3f32b0 */ _$tmp_2.739;
/* nil 3f32b4 */ _$tmp_3.747;
/* nil 3f32b8 */ _$tmp_4.755;
/* nil 3f32bc */ _$tmp_5.763;
/* nil 3f32c0 */ _$tmp_6.771;
/* nil 3f32c4 */ _$tmp_7.797;
/* nil 3f32c8 */ _$tmp_8.805;
/* nil 3f32cc */ _$tmp_9.810;
/* nil 3c0be0 */ __FUNCTION__.970;
/* nil 3c0c88 */ __FUNCTION__.982;
/* nil 3c0d58 */ __FUNCTION__.988;
/* nil 3c0dc0 */ __FUNCTION__.1003;
/* nil 3c0e30 */ __FUNCTION__.1018;
/* nil 3c0e68 */ __FUNCTION__.1036;
/* nil 32eef0 */ p.1072;
/* nil 32ef00 */ ofs0.1076;
/* nil 32ef10 */ ofs1.1077;
/* nil 3c1148 */ __FUNCTION__.1105;
/* nil 3c1210 */ __FUNCTION__.1162;
/* nil 3c1270 */ __FUNCTION__.1177;
/* nil 3c12b8 */ __FUNCTION__.1180;
/* nil 3f32dc */ _$tmp_10.1205;
/* nil 3c12f8 */ __FUNCTION__.1201;
/* nil 3f32e0 */ _$tmp_11.1219;
/* nil 3f32e4 */ _$tmp_12.1221;
/* nil 3f3308 */ str.646;
/* nil 3f3320 */ _$tmp_0.747;
/* nil 3f3324 */ _$tmp_1.755;
/* nil 3f3328 */ _$tmp_2.760;
/* nil 3f332c */ _$tmp_3.768;
/* nil 3f3330 */ _$tmp_4.776;
/* nil 3f3334 */ _$tmp_5.784;
/* nil 3f3338 */ _$tmp_6.792;
/* nil 3f333c */ _$tmp_7.818;
/* nil 3f3340 */ _$tmp_8.826;
/* nil 3f3344 */ _$tmp_9.831;
/* nil 3c1400 */ __FUNCTION__.949;
/* nil 3f3358 */ _$tmp_0.623;
/* nil 3f335c */ _$tmp_1.631;
/* nil 3f3360 */ _$tmp_2.636;
/* nil 3f3364 */ _$tmp_3.644;
/* nil 3f3368 */ _$tmp_4.652;
/* nil 3f336c */ _$tmp_5.660;
/* nil 3f3370 */ _$tmp_6.668;
/* nil 3f3374 */ _$tmp_7.694;
/* nil 3f3378 */ _$tmp_8.702;
/* nil 3f337c */ _$tmp_9.707;
/* nil 3f3380 */ str.780;
/* nil 3c15d8 */ __FUNCTION__.925;
/* nil 3f33a0 */ _$tmp_0.602;
/* nil 3f33a4 */ _$tmp_1.610;
/* nil 3f33a8 */ _$tmp_2.615;
/* nil 3f33ac */ _$tmp_3.623;
/* nil 3f33b0 */ _$tmp_4.631;
/* nil 3f33b4 */ _$tmp_5.639;
/* nil 3f33b8 */ _$tmp_6.647;
/* nil 3f33bc */ _$tmp_7.673;
/* nil 3f33c0 */ _$tmp_8.681;
/* nil 3f33c4 */ _$tmp_9.686;
/* nil 3f33c8 */ str.738;
/* nil 3f33e0 */ __FUNCTION__.826;
/* nil 3f33e8 */ _$tmp_0.692;
/* nil 3f33ec */ _$tmp_1.700;
/* nil 3f33f0 */ _$tmp_2.705;
/* nil 3f33f4 */ _$tmp_3.713;
/* nil 3f33f8 */ _$tmp_4.721;
/* nil 3f33fc */ _$tmp_5.729;
/* nil 3f3400 */ _$tmp_6.737;
/* nil 3f3404 */ _$tmp_7.763;
/* nil 3f3408 */ _$tmp_8.771;
/* nil 3f340c */ _$tmp_9.776;
/* nil 3f3410 */ str.849;
/* nil 3f3428 */ msg_lbl.1048;
/* nil 3c1810 */ msg_lbl.1049;
/* nil 3c1840 */ move_alpha_tbl1.1053;
/* nil 3c1868 */ move_alpha_tbl2.1054;
/* nil 3c1890 */ __FUNCTION__.1055;
/* nil 3c18b0 */ move_pos_tbl.1058;
/* nil 3f3430 */ _$tmp_0.692;
/* nil 3f3434 */ _$tmp_1.700;
/* nil 3f3438 */ _$tmp_2.705;
/* nil 3f343c */ _$tmp_3.713;
/* nil 3f3440 */ _$tmp_4.721;
/* nil 3f3444 */ _$tmp_5.729;
/* nil 3f3448 */ _$tmp_6.737;
/* nil 3f344c */ _$tmp_7.763;
/* nil 3f3450 */ _$tmp_8.771;
/* nil 3f3454 */ _$tmp_9.776;
/* nil 3f3458 */ str.849;
/* nil 3c1980 */ __FUNCTION__.946;
/* nil 3c19f8 */ __FUNCTION__.949;
/* nil 3f3470 */ str.646;
/* nil 3f3488 */ _$tmp_0.759;
/* nil 3f348c */ _$tmp_1.767;
/* nil 3f3490 */ _$tmp_2.772;
/* nil 3f3494 */ _$tmp_3.780;
/* nil 3f3498 */ _$tmp_4.788;
/* nil 3f349c */ _$tmp_5.796;
/* nil 3f34a0 */ _$tmp_6.804;
/* nil 3f34a4 */ _$tmp_7.830;
/* nil 3f34a8 */ _$tmp_8.838;
/* nil 3f34ac */ _$tmp_9.843;
/* nil 3f34d8 */ __FUNCTION__.1003;
/* nil 3f34e0 */ __FUNCTION__.1006;
/* nil 3c1d58 */ __FUNCTION__.1009;
/* nil 3f34e8 */ __FUNCTION__.1039;
/* nil 3f34f0 */ __FUNCTION__.698;
/* nil 3f34f8 */ __FUNCTION__.1321;
/* nil 3f3500 */ __FUNCTION__.1327;
/* nil 3f3510 */ _$tmp_0.629;
/* nil 3f3514 */ _$tmp_1.637;
/* nil 3f3518 */ _$tmp_2.642;
/* nil 3f351c */ _$tmp_3.650;
/* nil 3f3520 */ _$tmp_4.658;
/* nil 3f3524 */ _$tmp_5.666;
/* nil 3f3528 */ _$tmp_6.674;
/* nil 3f352c */ _$tmp_7.700;
/* nil 3f3530 */ _$tmp_8.708;
/* nil 3f3534 */ _$tmp_9.713;
/* nil 3f3538 */ str.786;
/* nil 3f3550 */ __FUNCTION__.1078;
/* nil 3f3558 */ __FUNCTION__.1162;
/* nil 3f3560 */ __FUNCTION__.1000;
/* nil 3f3568 */ aFilmTypeNo.1222;
/* nil 3f3570 */ _$tmp_0.692;
/* nil 3f3574 */ _$tmp_1.700;
/* nil 3f3578 */ _$tmp_2.705;
/* nil 3f357c */ _$tmp_3.713;
/* nil 3f3580 */ _$tmp_4.721;
/* nil 3f3584 */ _$tmp_5.729;
/* nil 3f3588 */ _$tmp_6.737;
/* nil 3f358c */ _$tmp_7.763;
/* nil 3f3590 */ _$tmp_8.771;
/* nil 3f3594 */ _$tmp_9.776;
/* nil 3f3598 */ str.849;
/* nil 3c20e0 */ __FUNCTION__.970;
/* nil 3f35b0 */ dif_tex_tbl.985;
/* nil 3c2160 */ alpha_tbl.995;
/* nil 3f35b8 */ str.574;
/* nil 3f35d0 */ __FUNCTION__.923;
/* nil 3f35e8 */ __FUNCTION__.932;
/* nil 3f35f8 */ _$tmp_0.692;
/* nil 3f35fc */ _$tmp_1.700;
/* nil 3f3600 */ _$tmp_2.705;
/* nil 3f3604 */ _$tmp_3.713;
/* nil 3f3608 */ _$tmp_4.721;
/* nil 3f360c */ _$tmp_5.729;
/* nil 3f3610 */ _$tmp_6.737;
/* nil 3f3614 */ _$tmp_7.763;
/* nil 3f3618 */ _$tmp_8.771;
/* nil 3f361c */ _$tmp_9.776;
/* nil 3f3620 */ str.849;
/* nil 3f3650 */ _$tmp_0.692;
/* nil 3f3654 */ _$tmp_1.700;
/* nil 3f3658 */ _$tmp_2.705;
/* nil 3f365c */ _$tmp_3.713;
/* nil 3f3660 */ _$tmp_4.721;
/* nil 3f3664 */ _$tmp_5.729;
/* nil 3f3668 */ _$tmp_6.737;
/* nil 3f366c */ _$tmp_7.763;
/* nil 3f3670 */ _$tmp_8.771;
/* nil 3f3674 */ _$tmp_9.776;
/* nil 3f3678 */ str.849;
/* nil 3f3690 */ str.646;
/* nil 3f36a8 */ _$tmp_0.768;
/* nil 3f36ac */ _$tmp_1.776;
/* nil 3f36b0 */ _$tmp_2.781;
/* nil 3f36b4 */ _$tmp_3.789;
/* nil 3f36b8 */ _$tmp_4.797;
/* nil 3f36bc */ _$tmp_5.805;
/* nil 3f36c0 */ _$tmp_6.813;
/* nil 3f36c4 */ _$tmp_7.839;
/* nil 3f36c8 */ _$tmp_8.847;
/* nil 3f36cc */ _$tmp_9.852;
/* nil 3f36e0 */ _$tmp_0.692;
/* nil 3f36e4 */ _$tmp_1.700;
/* nil 3f36e8 */ _$tmp_2.705;
/* nil 3f36ec */ _$tmp_3.713;
/* nil 3f36f0 */ _$tmp_4.721;
/* nil 3f36f4 */ _$tmp_5.729;
/* nil 3f36f8 */ _$tmp_6.737;
/* nil 3f36fc */ _$tmp_7.763;
/* nil 3f3700 */ _$tmp_8.771;
/* nil 3f3704 */ _$tmp_9.776;
/* nil 3f3708 */ str.849;
/* nil 3c2a40 */ __FUNCTION__.949;
/* nil 3f3730 */ _$tmp_0.692;
/* nil 3f3734 */ _$tmp_1.700;
/* nil 3f3738 */ _$tmp_2.705;
/* nil 3f373c */ _$tmp_3.713;
/* nil 3f3740 */ _$tmp_4.721;
/* nil 3f3744 */ _$tmp_5.729;
/* nil 3f3748 */ _$tmp_6.737;
/* nil 3f374c */ _$tmp_7.763;
/* nil 3f3750 */ _$tmp_8.771;
/* nil 3f3754 */ _$tmp_9.776;
/* nil 3f3758 */ str.849;
/* nil 3c2af8 */ __FUNCTION__.976;
/* nil 3f3778 */ str.646;
/* nil 3f3790 */ _$tmp_0.759;
/* nil 3f3794 */ _$tmp_1.767;
/* nil 3f3798 */ _$tmp_2.772;
/* nil 3f379c */ _$tmp_3.780;
/* nil 3f37a0 */ _$tmp_4.788;
/* nil 3f37a4 */ _$tmp_5.796;
/* nil 3f37a8 */ _$tmp_6.804;
/* nil 3f37ac */ _$tmp_7.830;
/* nil 3f37b0 */ _$tmp_8.838;
/* nil 3f37b4 */ _$tmp_9.843;
/* nil 3c2c88 */ __FUNCTION__.1084;
/* nil 3c2d28 */ __FUNCTION__.1141;
/* nil 3c2d48 */ __FUNCTION__.1147;
/* nil 3c2df8 */ __FUNCTION__.1174;
/* nil 3c2e10 */ __FUNCTION__.1186;
/* nil 3c2e28 */ __FUNCTION__.1189;
/* nil 3f37c0 */ str.688;
/* nil 3f37d8 */ _$tmp_0.759;
/* nil 3f37dc */ _$tmp_1.767;
/* nil 3f37e0 */ _$tmp_2.772;
/* nil 3f37e4 */ _$tmp_3.780;
/* nil 3f37e8 */ _$tmp_4.788;
/* nil 3f37ec */ _$tmp_5.796;
/* nil 3f37f0 */ _$tmp_6.804;
/* nil 3f37f4 */ _$tmp_7.830;
/* nil 3f37f8 */ _$tmp_8.838;
/* nil 3f37fc */ _$tmp_9.843;
/* nil 3f3800 */ __FUNCTION__.1051;
/* nil 3f3808 */ _$tmp_0.620;
/* nil 3f380c */ _$tmp_1.628;
/* nil 3f3810 */ _$tmp_2.633;
/* nil 3f3814 */ _$tmp_3.641;
/* nil 3f3818 */ _$tmp_4.649;
/* nil 3f381c */ _$tmp_5.657;
/* nil 3f3820 */ _$tmp_6.665;
/* nil 3f3824 */ _$tmp_7.691;
/* nil 3f3828 */ _$tmp_8.699;
/* nil 3f382c */ _$tmp_9.704;
/* nil 3f3830 */ str.777;
/* nil 3c3040 */ __FUNCTION__.1072;
/* nil 3f3858 */ __FUNCTION__.1081;
/* nil 3f3860 */ __FUNCTION__.1087;
/* nil 3f3868 */ __FUNCTION__.1093;
/* nil 3c3180 */ __FUNCTION__.1102;
/* nil 3f3888 */ __FUNCTION__.1096;
/* nil 3c31f8 */ __FUNCTION__.1126;
/* nil 3f3890 */ _$tmp_0.692;
/* nil 3f3894 */ _$tmp_1.700;
/* nil 3f3898 */ _$tmp_2.705;
/* nil 3f389c */ _$tmp_3.713;
/* nil 3f38a0 */ _$tmp_4.721;
/* nil 3f38a4 */ _$tmp_5.729;
/* nil 3f38a8 */ _$tmp_6.737;
/* nil 3f38ac */ _$tmp_7.763;
/* nil 3f38b0 */ _$tmp_8.771;
/* nil 3f38b4 */ _$tmp_9.776;
/* nil 3f38b8 */ str.849;
/* nil 3f38d0 */ cnt.1018;
/* nil 3f38d4 */ alp1.1019;
/* nil 3f38d5 */ alp2.1020;
/* nil 3f38d8 */ flash_fr.1021;
/* nil 3f38dc */ fl_cnt.1022;
/* nil 3f38e0 */ _$tmp_0.692;
/* nil 3f38e4 */ _$tmp_1.700;
/* nil 3f38e8 */ _$tmp_2.705;
/* nil 3f38ec */ _$tmp_3.713;
/* nil 3f38f0 */ _$tmp_4.721;
/* nil 3f38f4 */ _$tmp_5.729;
/* nil 3f38f8 */ _$tmp_6.737;
/* nil 3f38fc */ _$tmp_7.763;
/* nil 3f3900 */ _$tmp_8.771;
/* nil 3f3904 */ _$tmp_9.776;
/* nil 3f3908 */ str.849;
/* nil 3c3478 */ __FUNCTION__.955;
/* nil 3c34e0 */ __FUNCTION__.958;
/* nil 3f3920 */ _$tmp_0.692;
/* nil 3f3924 */ _$tmp_1.700;
/* nil 3f3928 */ _$tmp_2.705;
/* nil 3f392c */ _$tmp_3.713;
/* nil 3f3930 */ _$tmp_4.721;
/* nil 3f3934 */ _$tmp_5.729;
/* nil 3f3938 */ _$tmp_6.737;
/* nil 3f393c */ _$tmp_7.763;
/* nil 3f3940 */ _$tmp_8.771;
/* nil 3f3944 */ _$tmp_9.776;
/* nil 3f3948 */ str.849;
/* nil 3f3974 */ cnt.1138;
/* nil 3f3978 */ _$tmp_10.1143;
/* nil 3f397c */ _$tmp_11.1148;
/* nil 3f39a8 */ __FUNCTION__.1155;
/* nil 3f39ad */ lever_dir_old.1164;
/* nil 3f39ae */ no_rot_cng2.1243;
/* nil 3f39b0 */ keep_rot.1244;
/* nil 3f39b8 */ rs.1245;
/* nil 3f39c0 */ ds.1246;
/* nil 3f39e0 */ mvib_time0.1325;
/* nil 3f39e2 */ mvib_time1.1326;
/* nil 3f39e4 */ mpow.1334;
/* nil 3c38e8 */ __FUNCTION__.1347;
/* nil 3f39e8 */ old_out_info.1434;
/* nil 3c3bd0 */ __FUNCTION__.1441;
/* nil 3c3c98 */ ani_tbl.1477;
/* nil 3f3a08 */ __FUNCTION__.964;
/* nil 3c3d80 */ __FUNCTION__.1508;
/* nil 3c3d98 */ __FUNCTION__.1511;
/* nil 3c3db0 */ __FUNCTION__.1526;
/* nil 3f3a10 */ str.646;
/* nil 3f3a28 */ _$tmp_0.786;
/* nil 3f3a2c */ _$tmp_1.794;
/* nil 3f3a30 */ _$tmp_2.799;
/* nil 3f3a34 */ _$tmp_3.807;
/* nil 3f3a38 */ _$tmp_4.815;
/* nil 3f3a3c */ _$tmp_5.823;
/* nil 3f3a40 */ _$tmp_6.831;
/* nil 3f3a44 */ _$tmp_7.857;
/* nil 3f3a48 */ _$tmp_8.865;
/* nil 3f3a4c */ _$tmp_9.870;
/* nil 3c3eb8 */ __FUNCTION__.1198;
/* nil 3f3a6c */ _$tmp_10.1235;
/* nil 3c3ed8 */ __FUNCTION__.1231;
/* nil 3c3f00 */ __FUNCTION__.1236;
/* nil 3c3f38 */ __FUNCTION__.1248;
/* nil 3c3fb0 */ __FUNCTION__.1290;
/* nil 3c4010 */ __FUNCTION__.1293;
/* nil 3f3a78 */ _$tmp_0.692;
/* nil 3f3a7c */ _$tmp_1.700;
/* nil 3f3a80 */ _$tmp_2.705;
/* nil 3f3a84 */ _$tmp_3.713;
/* nil 3f3a88 */ _$tmp_4.721;
/* nil 3f3a8c */ _$tmp_5.729;
/* nil 3f3a90 */ _$tmp_6.737;
/* nil 3f3a94 */ _$tmp_7.763;
/* nil 3f3a98 */ _$tmp_8.771;
/* nil 3f3a9c */ _$tmp_9.776;
/* nil 3f3aa0 */ str.849;
/* nil 3c40d0 */ __FUNCTION__.976;
/* nil 3c4160 */ __FUNCTION__.985;
/* nil 3c41c0 */ __FUNCTION__.991;
/* nil 3c4208 */ __FUNCTION__.994;
/* nil 3f3ab8 */ _$tmp_0.692;
/* nil 3f3abc */ _$tmp_1.700;
/* nil 3f3ac0 */ _$tmp_2.705;
/* nil 3f3ac4 */ _$tmp_3.713;
/* nil 3f3ac8 */ _$tmp_4.721;
/* nil 3f3acc */ _$tmp_5.729;
/* nil 3f3ad0 */ _$tmp_6.737;
/* nil 3f3ad4 */ _$tmp_7.763;
/* nil 3f3ad8 */ _$tmp_8.771;
/* nil 3f3adc */ _$tmp_9.776;
/* nil 3f3ae0 */ str.849;
/* nil 3c42a8 */ __FUNCTION__.982;
/* nil 3c4320 */ __FUNCTION__.985;
/* nil 3c4388 */ __FUNCTION__.988;
/* nil 3c43a0 */ tex_data_tbl.991;
/* nil 3f3af8 */ next_step_tbl.1001;
/* nil 3c43e0 */ __FUNCTION__.1005;
/* nil 3c4418 */ __FUNCTION__.1023;
/* nil 3c4430 */ in_alpha_tbl.1026;
/* nil 3c4488 */ __FUNCTION__.1027;
/* nil 3c44b8 */ __FUNCTION__.1045;
/* nil 3c44f8 */ snd_label_tbl.1063;
/* nil 3f3b08 */ str.646;
/* nil 3f3b70 */ str.646;
/* nil 3f3b90 */ str.646;
/* nil 3f3ba8 */ _$tmp_0.759;
/* nil 3f3bac */ _$tmp_1.767;
/* nil 3f3bb0 */ _$tmp_2.772;
/* nil 3f3bb4 */ _$tmp_3.780;
/* nil 3f3bb8 */ _$tmp_4.788;
/* nil 3f3bbc */ _$tmp_5.796;
/* nil 3f3bc0 */ _$tmp_6.804;
/* nil 3f3bc4 */ _$tmp_7.830;
/* nil 3f3bc8 */ _$tmp_8.838;
/* nil 3f3bcc */ _$tmp_9.843;
/* nil 3c47a0 */ six_out_alpha.1027;
/* nil 3c4810 */ __FUNCTION__.1028;
/* nil 3c4828 */ in_alpha_tbl.1031;
/* nil 3c4838 */ out_alpha_tbl.1032;
/* nil 3c48b0 */ move_alpha_tbl1.1069;
/* nil 3c48d8 */ move_alpha_tbl2.1070;
/* nil 3c4900 */ move_pos_tbl.1074;
/* nil 3c4958 */ msg_type_tbl.1078;
/* nil 3c4970 */ move_alpha_tbl.1085;
/* nil 3c4988 */ csr_alpha_tbl.1095;
/* nil 3c49b8 */ flea_alpha_tbl.1114;
/* nil 3f3bd0 */ _$tmp_0.692;
/* nil 3f3bd4 */ _$tmp_1.700;
/* nil 3f3bd8 */ _$tmp_2.705;
/* nil 3f3bdc */ _$tmp_3.713;
/* nil 3f3be0 */ _$tmp_4.721;
/* nil 3f3be4 */ _$tmp_5.729;
/* nil 3f3be8 */ _$tmp_6.737;
/* nil 3f3bec */ _$tmp_7.763;
/* nil 3f3bf0 */ _$tmp_8.771;
/* nil 3f3bf4 */ _$tmp_9.776;
/* nil 3f3bf8 */ str.849;
/* nil 3c4ab8 */ __FUNCTION__.180;
/* nil 3f3c18 */ str.646;
/* nil 3f3c30 */ _$tmp_0.759;
/* nil 3f3c34 */ _$tmp_1.767;
/* nil 3f3c38 */ _$tmp_2.772;
/* nil 3f3c3c */ _$tmp_3.780;
/* nil 3f3c40 */ _$tmp_4.788;
/* nil 3f3c44 */ _$tmp_5.796;
/* nil 3f3c48 */ _$tmp_6.804;
/* nil 3f3c4c */ _$tmp_7.830;
/* nil 3f3c50 */ _$tmp_8.838;
/* nil 3f3c54 */ _$tmp_9.843;
/* nil 3c4b98 */ __FUNCTION__.973;
/* nil 3c4c00 */ __FUNCTION__.84;
/* nil 3c4c78 */ moyou1_alpha_tbl.90;
/* nil 3c4cb0 */ moyou2_alpha_tbl.91;
/* nil 3c4cf0 */ bg_flea_alpha_tbl.92;
/* nil 3c4d20 */ moyou1_x_tbl.93;
/* nil 3c4d40 */ moyou2_x_tbl.94;
/* nil 3f3c58 */ _$tmp_0.692;
/* nil 3f3c5c */ _$tmp_1.700;
/* nil 3f3c60 */ _$tmp_2.705;
/* nil 3f3c64 */ _$tmp_3.713;
/* nil 3f3c68 */ _$tmp_4.721;
/* nil 3f3c6c */ _$tmp_5.729;
/* nil 3f3c70 */ _$tmp_6.737;
/* nil 3f3c74 */ _$tmp_7.763;
/* nil 3f3c78 */ _$tmp_8.771;
/* nil 3f3c7c */ _$tmp_9.776;
/* nil 3f3c80 */ str.849;
/* nil 3c4dd0 */ __FUNCTION__.949;
/* nil 3f3ca0 */ _$tmp_0.692;
/* nil 3f3ca4 */ _$tmp_1.700;
/* nil 3f3ca8 */ _$tmp_2.705;
/* nil 3f3cac */ _$tmp_3.713;
/* nil 3f3cb0 */ _$tmp_4.721;
/* nil 3f3cb4 */ _$tmp_5.729;
/* nil 3f3cb8 */ _$tmp_6.737;
/* nil 3f3cbc */ _$tmp_7.763;
/* nil 3f3cc0 */ _$tmp_8.771;
/* nil 3f3cc4 */ _$tmp_9.776;
/* nil 3f3cc8 */ str.849;
/* nil 3c4e98 */ __FUNCTION__.982;
/* nil 3f3ce8 */ _$tmp_0.692;
/* nil 3f3cec */ _$tmp_1.700;
/* nil 3f3cf0 */ _$tmp_2.705;
/* nil 3f3cf4 */ _$tmp_3.713;
/* nil 3f3cf8 */ _$tmp_4.721;
/* nil 3f3cfc */ _$tmp_5.729;
/* nil 3f3d00 */ _$tmp_6.737;
/* nil 3f3d04 */ _$tmp_7.763;
/* nil 3f3d08 */ _$tmp_8.771;
/* nil 3f3d0c */ _$tmp_9.776;
/* nil 3f3d10 */ str.849;
/* nil 3c4f70 */ __FUNCTION__.961;
/* nil 3c4fd8 */ __FUNCTION__.964;
/* nil 3c4fe8 */ __FUNCTION__.973;
/* nil 3c5000 */ msg_id_tbl.985;
/* nil 3c5010 */ msg_y_tbl.992;
/* nil 3c5020 */ msg_id_tbl.993;
/* nil 3f3d30 */ _$tmp_0.692;
/* nil 3f3d34 */ _$tmp_1.700;
/* nil 3f3d38 */ _$tmp_2.705;
/* nil 3f3d3c */ _$tmp_3.713;
/* nil 3f3d40 */ _$tmp_4.721;
/* nil 3f3d44 */ _$tmp_5.729;
/* nil 3f3d48 */ _$tmp_6.737;
/* nil 3f3d4c */ _$tmp_7.763;
/* nil 3f3d50 */ _$tmp_8.771;
/* nil 3f3d54 */ _$tmp_9.776;
/* nil 3f3d58 */ str.849;
/* nil 3c5088 */ __FUNCTION__.1063;
/* nil 3c51a8 */ __FUNCTION__.946;
/* nil 3f3da0 */ _$tmp_10.1265;
/* nil 3f3da4 */ _$tmp_11.1303;
/* nil 3f3dc8 */ _$tmp_12.1317;
/* nil 3f3e48 */ str.646;
/* nil 3f3e78 */ str.574;
/* nil 3f3e90 */ _$tmp_0.678;
/* nil 3f3e94 */ _$tmp_1.686;
/* nil 3f3e98 */ _$tmp_2.691;
/* nil 3f3e9c */ _$tmp_3.699;
/* nil 3f3ea0 */ _$tmp_4.707;
/* nil 3f3ea4 */ _$tmp_5.715;
/* nil 3f3ea8 */ _$tmp_6.723;
/* nil 3f3eac */ _$tmp_7.749;
/* nil 3f3eb0 */ _$tmp_8.757;
/* nil 3f3eb4 */ _$tmp_9.762;
/* nil 3f3eb8 */ BlurAlpha.943;
/* nil 3f3ebc */ nalp.968;
/* nil 3f3ec0 */ _$tmp_0.692;
/* nil 3f3ec4 */ _$tmp_1.700;
/* nil 3f3ec8 */ _$tmp_2.705;
/* nil 3f3ecc */ _$tmp_3.713;
/* nil 3f3ed0 */ _$tmp_4.721;
/* nil 3f3ed4 */ _$tmp_5.729;
/* nil 3f3ed8 */ _$tmp_6.737;
/* nil 3f3edc */ _$tmp_7.763;
/* nil 3f3ee0 */ _$tmp_8.771;
/* nil 3f3ee4 */ _$tmp_9.776;
/* nil 3f3ee8 */ str.849;
/* nil 3f4030 */ pause_flg.979;
/* nil 3c61c0 */ __FUNCTION__.998;
/* nil 3f41d0 */ vib2_val.1097;
/* nil 3f4200 */ str.688;
/* nil 3f4218 */ _$tmp_0.759;
/* nil 3f421c */ _$tmp_1.767;
/* nil 3f4220 */ _$tmp_2.772;
/* nil 3f4224 */ _$tmp_3.780;
/* nil 3f4228 */ _$tmp_4.788;
/* nil 3f422c */ _$tmp_5.796;
/* nil 3f4230 */ _$tmp_6.804;
/* nil 3f4234 */ _$tmp_7.830;
/* nil 3f4238 */ _$tmp_8.838;
/* nil 3f423c */ _$tmp_9.843;
/* nil 3f4240 */ str.646;
/* nil 3f4258 */ _$tmp_0.759;
/* nil 3f425c */ _$tmp_1.767;
/* nil 3f4260 */ _$tmp_2.772;
/* nil 3f4264 */ _$tmp_3.780;
/* nil 3f4268 */ _$tmp_4.788;
/* nil 3f426c */ _$tmp_5.796;
/* nil 3f4270 */ _$tmp_6.804;
/* nil 3f4274 */ _$tmp_7.830;
/* nil 3f4278 */ _$tmp_8.838;
/* nil 3f427c */ _$tmp_9.843;
/* nil 3f4290 */ _$tmp_0.692;
/* nil 3f4294 */ _$tmp_1.700;
/* nil 3f4298 */ _$tmp_2.705;
/* nil 3f429c */ _$tmp_3.713;
/* nil 3f42a0 */ _$tmp_4.721;
/* nil 3f42a4 */ _$tmp_5.729;
/* nil 3f42a8 */ _$tmp_6.737;
/* nil 3f42ac */ _$tmp_7.763;
/* nil 3f42b0 */ _$tmp_8.771;
/* nil 3f42b4 */ _$tmp_9.776;
/* nil 3f42b8 */ str.849;
/* nil 3c6bf8 */ __FUNCTION__.976;
/* nil 3c6c58 */ __FUNCTION__.985;
/* nil 3f42d8 */ __FUNCTION__.988;
/* nil 3f42e0 */ __FUNCTION__.991;
/* nil 3f42e8 */ __FUNCTION__.994;
/* nil 3f42f0 */ __FUNCTION__.997;
/* nil 3c6d08 */ msg_id_tbl.1018;
/* nil 3c6d18 */ msg_id_tbl.1022;
/* nil 3c6d30 */ __FUNCTION__.1032;
/* nil 3c6d50 */ menu_tex_tbl.1035;
/* nil 3f42f8 */ csr_tex_tbl.1042;
/* nil 3f4300 */ csr_flare_tex_tbl.1043;
/* nil 3c6d68 */ __FUNCTION__.1047;
/* nil 3c6d88 */ costume_type_tbl.1050;
/* nil 3c6dd0 */ __FUNCTION__.1060;
/* nil 3c6de8 */ difficulty_tex_tbl.1063;
/* nil 3c6e08 */ csr_right_x_tbl.1073;
/* nil 3c6e18 */ difficulty_csr_right_x_tbl.1074;
/* nil 3c6e28 */ flare_right_x_tbl.1075;
/* nil 3c6e38 */ difficulty_flare_right_x_tbl.1076;
/* nil 3f4308 */ str.574;
/* nil 3f4320 */ _$tmp_0.687;
/* nil 3f4324 */ _$tmp_1.695;
/* nil 3f4328 */ _$tmp_2.700;
/* nil 3f432c */ _$tmp_3.708;
/* nil 3f4330 */ _$tmp_4.716;
/* nil 3f4334 */ _$tmp_5.724;
/* nil 3f4338 */ _$tmp_6.732;
/* nil 3f433c */ _$tmp_7.758;
/* nil 3f4340 */ _$tmp_8.766;
/* nil 3f4344 */ _$tmp_9.771;
/* nil 3f4348 */ str.646;
/* nil 3f4360 */ _$tmp_0.738;
/* nil 3f4364 */ _$tmp_1.746;
/* nil 3f4368 */ _$tmp_2.751;
/* nil 3f436c */ _$tmp_3.759;
/* nil 3f4370 */ _$tmp_4.767;
/* nil 3f4374 */ _$tmp_5.775;
/* nil 3f4378 */ _$tmp_6.783;
/* nil 3f437c */ _$tmp_7.809;
/* nil 3f4380 */ _$tmp_8.817;
/* nil 3f4384 */ _$tmp_9.822;
/* nil 3c6fb0 */ __FUNCTION__.1135;
/* nil 3c7018 */ __FUNCTION__.1138;
/* nil 3c7030 */ __FUNCTION__.1156;
/* nil 3c7090 */ __FUNCTION__.1159;
/* nil 3f4388 */ _$tmp_10.1166;
/* nil 3c7348 */ __FUNCTION__.1162;
/* nil 3c7380 */ __FUNCTION__.1209;
/* nil 3f43a0 */ str.646;
/* nil 3f43b8 */ _$tmp_0.759;
/* nil 3f43bc */ _$tmp_1.767;
/* nil 3f43c0 */ _$tmp_2.772;
/* nil 3f43c4 */ _$tmp_3.780;
/* nil 3f43c8 */ _$tmp_4.788;
/* nil 3f43cc */ _$tmp_5.796;
/* nil 3f43d0 */ _$tmp_6.804;
/* nil 3f43d4 */ _$tmp_7.830;
/* nil 3f43d8 */ _$tmp_8.838;
/* nil 3f43dc */ _$tmp_9.843;
/* nil 3f441c */ _$tmp_10.1028;
/* nil 3f4420 */ cnt.1044;
/* nil 3f4424 */ cnt.1069;
/* nil 3f4428 */ turn_chk_time.1082;
/* nil 34f9b0 */ rrot.1107;
/* nil 3f4480 */ str.646;
/* nil 3f4498 */ _$tmp_0.735;
/* nil 3f449c */ _$tmp_1.743;
/* nil 3f44a0 */ _$tmp_2.748;
/* nil 3f44a4 */ _$tmp_3.756;
/* nil 3f44a8 */ _$tmp_4.764;
/* nil 3f44ac */ _$tmp_5.772;
/* nil 3f44b0 */ _$tmp_6.780;
/* nil 3f44b4 */ _$tmp_7.806;
/* nil 3f44b8 */ _$tmp_8.814;
/* nil 3f44bc */ _$tmp_9.819;
/* nil 3c7810 */ __FUNCTION__.1072;
/* nil 3f44c0 */ __FUNCTION__.1075;
/* nil 3c7938 */ __FUNCTION__.1078;
/* nil 3c79e0 */ __FUNCTION__.1081;
/* nil 3c7a28 */ __FUNCTION__.1084;
/* nil 3c7a78 */ __FUNCTION__.1099;
/* nil 3c7ac8 */ __FUNCTION__.1105;
/* nil 3c7b40 */ __FUNCTION__.1108;
/* nil 3f44c8 */ str.688;
/* nil 3f44e0 */ _$tmp_0.759;
/* nil 3f44e4 */ _$tmp_1.767;
/* nil 3f44e8 */ _$tmp_2.772;
/* nil 3f44ec */ _$tmp_3.780;
/* nil 3f44f0 */ _$tmp_4.788;
/* nil 3f44f4 */ _$tmp_5.796;
/* nil 3f44f8 */ _$tmp_6.804;
/* nil 3f44fc */ _$tmp_7.830;
/* nil 3f4500 */ _$tmp_8.838;
/* nil 3f4504 */ _$tmp_9.843;
/* nil 3f4508 */ __FUNCTION__.961;
/* nil 3f4510 */ str.694;
/* nil 3f4528 */ _$tmp_0.759;
/* nil 3f452c */ _$tmp_1.767;
/* nil 3f4530 */ _$tmp_2.772;
/* nil 3f4534 */ _$tmp_3.780;
/* nil 3f4538 */ _$tmp_4.788;
/* nil 3f453c */ _$tmp_5.796;
/* nil 3f4540 */ _$tmp_6.804;
/* nil 3f4544 */ _$tmp_7.830;
/* nil 3f4548 */ _$tmp_8.838;
/* nil 3f454c */ _$tmp_9.843;
/* nil 34fe60 */ ShutterChanceRgb.982;
/* nil 34fe70 */ NormalRgb.983;
/* nil 3f4550 */ _$tmp_0.608;
/* nil 3f4554 */ _$tmp_1.616;
/* nil 3f4558 */ _$tmp_2.621;
/* nil 3f455c */ _$tmp_3.629;
/* nil 3f4560 */ _$tmp_4.637;
/* nil 3f4564 */ _$tmp_5.645;
/* nil 3f4568 */ _$tmp_6.653;
/* nil 3f456c */ _$tmp_7.679;
/* nil 3f4570 */ _$tmp_8.687;
/* nil 3f4574 */ _$tmp_9.692;
/* nil 3f4578 */ str.744;
/* nil 3c7d50 */ __FUNCTION__.823;
/* nil 3f4598 */ str.574;
/* nil 3f45b0 */ _$tmp_0.675;
/* nil 3f45b4 */ _$tmp_1.683;
/* nil 3f45b8 */ _$tmp_2.688;
/* nil 3f45bc */ _$tmp_3.696;
/* nil 3f45c0 */ _$tmp_4.704;
/* nil 3f45c4 */ _$tmp_5.712;
/* nil 3f45c8 */ _$tmp_6.720;
/* nil 3f45cc */ _$tmp_7.746;
/* nil 3f45d0 */ _$tmp_8.754;
/* nil 3f45d4 */ _$tmp_9.759;
/* nil 3f45d8 */ _$tmp_0.692;
/* nil 3f45dc */ _$tmp_1.700;
/* nil 3f45e0 */ _$tmp_2.705;
/* nil 3f45e4 */ _$tmp_3.713;
/* nil 3f45e8 */ _$tmp_4.721;
/* nil 3f45ec */ _$tmp_5.729;
/* nil 3f45f0 */ _$tmp_6.737;
/* nil 3f45f4 */ _$tmp_7.763;
/* nil 3f45f8 */ _$tmp_8.771;
/* nil 3f45fc */ _$tmp_9.776;
/* nil 3f4600 */ str.849;
/* nil 3f46c0 */ _$tmp_0.692;
/* nil 3f46c4 */ _$tmp_1.700;
/* nil 3f46c8 */ _$tmp_2.705;
/* nil 3f46cc */ _$tmp_3.713;
/* nil 3f46d0 */ _$tmp_4.721;
/* nil 3f46d4 */ _$tmp_5.729;
/* nil 3f46d8 */ _$tmp_6.737;
/* nil 3f46dc */ _$tmp_7.763;
/* nil 3f46e0 */ _$tmp_8.771;
/* nil 3f46e4 */ _$tmp_9.776;
/* nil 3f46e8 */ str.849;
/* nil 3e6088 */ __FUNCTION__.946;
/* nil 3e60f8 */ __FUNCTION__.955;
/* nil 3e6110 */ __FUNCTION__.958;
/* nil 3e6128 */ __FUNCTION__.961;
/* nil 3f4718 */ mmsize.105;
/* nil 3f4720 */ mmsize.109;
/* nil 3e6640 */ __FUNCTION__.170;
/* nil 3e66b8 */ __FUNCTION__.173;
/* nil 3f4730 */ str.646;
/* nil 3f4748 */ _$tmp_0.759;
/* nil 3f474c */ _$tmp_1.767;
/* nil 3f4750 */ _$tmp_2.772;
/* nil 3f4754 */ _$tmp_3.780;
/* nil 3f4758 */ _$tmp_4.788;
/* nil 3f475c */ _$tmp_5.796;
/* nil 3f4760 */ _$tmp_6.804;
/* nil 3f4764 */ _$tmp_7.830;
/* nil 3f4768 */ _$tmp_8.838;
/* nil 3f476c */ _$tmp_9.843;
/* nil 3f4780 */ str.646;
/* nil 3f4798 */ _$tmp_0.759;
/* nil 3f479c */ _$tmp_1.767;
/* nil 3f47a0 */ _$tmp_2.772;
/* nil 3f47a4 */ _$tmp_3.780;
/* nil 3f47a8 */ _$tmp_4.788;
/* nil 3f47ac */ _$tmp_5.796;
/* nil 3f47b0 */ _$tmp_6.804;
/* nil 3f47b4 */ _$tmp_7.830;
/* nil 3f47b8 */ _$tmp_8.838;
/* nil 3f47bc */ _$tmp_9.843;
/* nil 3e6920 */ kumo_alpha_tbl.96;
/* nil 3e6950 */ moyou_alpha_tbl.97;
/* nil 3e6990 */ moyou2_alpha_tbl.98;
/* nil 3e69d0 */ bokasi_alpha_tbl.99;
/* nil 3e6a00 */ moyou_x_tbl.100;
/* nil 3e6a20 */ moyou2_x_tbl.101;
/* nil 3e6a40 */ kumo_x_tbl.102;
/* nil 3e6a60 */ bokasi_x_tbl.103;
/* nil 3e6a80 */ bokasi2_x_tbl.104;
/* nil 3f47c0 */ _$tmp_0.692;
/* nil 3f47c4 */ _$tmp_1.700;
/* nil 3f47c8 */ _$tmp_2.705;
/* nil 3f47cc */ _$tmp_3.713;
/* nil 3f47d0 */ _$tmp_4.721;
/* nil 3f47d4 */ _$tmp_5.729;
/* nil 3f47d8 */ _$tmp_6.737;
/* nil 3f47dc */ _$tmp_7.763;
/* nil 3f47e0 */ _$tmp_8.771;
/* nil 3f47e4 */ _$tmp_9.776;
/* nil 3f47e8 */ str.849;
/* nil 3e6b18 */ __FUNCTION__.955;
/* nil 3e6bb0 */ title_tbl.964;
/* nil 3f4800 */ str.646;
/* nil 3f4818 */ _$tmp_0.747;
/* nil 3f481c */ _$tmp_1.755;
/* nil 3f4820 */ _$tmp_2.760;
/* nil 3f4824 */ _$tmp_3.768;
/* nil 3f4828 */ _$tmp_4.776;
/* nil 3f482c */ _$tmp_5.784;
/* nil 3f4830 */ _$tmp_6.792;
/* nil 3f4834 */ _$tmp_7.818;
/* nil 3f4838 */ _$tmp_8.826;
/* nil 3f483c */ _$tmp_9.831;
/* nil 3f4840 */ _$tmp_0.692;
/* nil 3f4844 */ _$tmp_1.700;
/* nil 3f4848 */ _$tmp_2.705;
/* nil 3f484c */ _$tmp_3.713;
/* nil 3f4850 */ _$tmp_4.721;
/* nil 3f4854 */ _$tmp_5.729;
/* nil 3f4858 */ _$tmp_6.737;
/* nil 3f485c */ _$tmp_7.763;
/* nil 3f4860 */ _$tmp_8.771;
/* nil 3f4864 */ _$tmp_9.776;
/* nil 3f4868 */ str.849;
/* nil 3f4880 */ _$tmp_0.671;
/* nil 3f4884 */ _$tmp_1.679;
/* nil 3f4888 */ _$tmp_2.684;
/* nil 3f488c */ _$tmp_3.692;
/* nil 3f4890 */ _$tmp_4.700;
/* nil 3f4894 */ _$tmp_5.708;
/* nil 3f4898 */ _$tmp_6.716;
/* nil 3f489c */ _$tmp_7.742;
/* nil 3f48a0 */ _$tmp_8.750;
/* nil 3f48a4 */ _$tmp_9.755;
/* nil 3f48a8 */ str.807;
/* nil 3e6d98 */ __FUNCTION__.9;
/* nil 3e6e98 */ rgb_tbl.15;
/* nil 3e6eb8 */ alpha_tbl.19;
/* nil 3f4910 */ _$tmp_0.692;
/* nil 3f4914 */ _$tmp_1.700;
/* nil 3f4918 */ _$tmp_2.705;
/* nil 3f491c */ _$tmp_3.713;
/* nil 3f4920 */ _$tmp_4.721;
/* nil 3f4924 */ _$tmp_5.729;
/* nil 3f4928 */ _$tmp_6.737;
/* nil 3f492c */ _$tmp_7.763;
/* nil 3f4930 */ _$tmp_8.771;
/* nil 3f4934 */ _$tmp_9.776;
/* nil 3f4938 */ str.849;
/* nil 3e6f58 */ __FUNCTION__.967;
/* nil 3e70c8 */ __FUNCTION__.985;
/* nil 365e58 */ __ps2_libinfo__;
/* nil 3e8f28 */ sceFont8;
/* nil 3e9728 */ fontMask;
/* nil 365e80 */ __ps2_libinfo__;
/* nil 365e94 */ cb_thid;
/* nil 365e98 */ scmd_sema_keep_cmd;
/* nil 365e9c */ ncmd_sema_keep_cmd;
/* nil 365ea0 */ cb_semid;
/* nil 365ea4 */ Init_seq;
/* nil 365ebc */ _ncmd_bind;
/* nil 365ec0 */ _icmd_bind;
/* nil 365ec4 */ _sf_bind;
/* nil 365ec8 */ _scmd_dr_bind;
/* nil 365ecc */ _scmd_bind;
/* nil 365ed0 */ _it_bind;
/* nil 365ed4 */ c_cnt.66;
/* nil 367a28 */ rpc_mmode;
/* nil 367a2c */ outcnt_mmode;
/* nil 367a30 */ incnt_mmode;
/* nil 367a38 */ __ps2_libinfo__;
/* nil 3ea150 */ isclr;
/* nil 3ea178 */ ststbl;
/* nil 3ea188 */ stdtbl;
/* nil 3ea198 */ mfdtbl;
/* nil 36914c */ heap_ptr.39;
/* nil 369150 */ __ps2_libinfo__;
/* nil 369160 */ __ps2_libinfo__;
/* nil 369170 */ __ps2_libinfo__;
/* nil 369190 */ init_vif_regs.135;
/* nil 3691b0 */ __ps2_libinfo__;
/* nil 3691c0 */ isInit;
/* nil 3691c4 */ isWarning;
/* nil 3691c8 */ PadStateStr;
/* nil 3691e8 */ ReqStateStr;
/* nil 3691f8 */ __ps2_libinfo__;
/* nil 369208 */ mcRunCmdNo;
/* nil 36920c */ semaidRegFunc;
/* nil 369210 */ semaid_timerfunc;
/* nil 369220 */ __ps2_libinfo__;
/* nil 369230 */ gp.15;
/* nil 369240 */ init_vif_regs.12;
/* nil 369300 */ __ps2_libinfo__;
/* nil 4cc580 */ _sprtagdata.33;
/* nil 3693c0 */ _rix;
/* nil 3693e0 */ _ri0;
/* nil 369468 */ sceSdEndFunc;
/* nil 36946c */ sceSdEndGp;
/* nil 369470 */ __ps2_libinfo__;
/* nil 3694a4 */ _sce_sdr_cb_thid;
/* nil 3694b0 */ __ps2_libinfo__;
/* nil 3694c0 */ iqval;
/* nil 369510 */ vqval;
/* nil 369530 */ __ps2_libinfo__;
/* nil 369540 */ gConfig;
/* nil 369548 */ gRomName;
/* nil 369558 */ p.0;
/* nil 36955c */ completed.1;
/* nil 36956c */ once.0;
/* nil 369570 */ once_regsizes.1;
/* nil 369618 */ force_to_data;
/* nil 39dae8 */ __FRAME_END__;
/* nil 3ec780 */ blanks.0;
/* nil 3ec790 */ zeroes.1;
/* nil 3ec970 */ blanks.0;
/* nil 3ec980 */ zeroes.1;
/* nil 3ecb80 */ basefix.0;
/* nil 3ed048 */ lconv;
/* nil 3ed090 */ p05.0;
/* nil 367a70 */ __ps2_klibinfo__;
/* nil 3674c0 */ _sceCd_scmdsdata;
/* nil 367a00 */ _sceCd_cd_scmd;
/* nil 369498 */ _sce_sdr_transIntr0Gp;
/* nil 36949c */ _sce_sdr_transIntr1Gp;
/* nil 369480 */ _sce_sdr_transIntr0Hdr;
/* nil 286200 */ _xlaunch;
/* nil 369488 */ _sce_sdr_spu2IntrHdr;
/* nil 365ea8 */ _sceCd_ncmd_semid;
/* nil 36948c */ _sce_sdr_transIntr0Arg;
/* nil 3f57f0 */ _gp;
/* nil 365f00 */ _sceCd_ncmdrdata;
/* nil 365edc */ sceCdCbfunc_number;
/* nil 365e90 */ SCE_CD_debug;
/* nil 367050 */ _sceCd_cd_ncmd;
/* nil 2c3c74 */ __DTOR_END__;
/* nil 369490 */ _sce_sdr_transIntr1Arg;
/* nil 367a48 */ dch;
/* nil 365eb4 */ _sceCd_c_cb_sem;
/* nil 366f80 */ _sceCd_rd_intr_data;
/* nil 367040 */ _sceCd_Read_cur_pos;
/* nil 365eac */ _sceCd_scmd_semid;
/* nil 4ce0ec */ end;
/* nil 2c3b00 */ __CTOR_LIST__;
/* nil 369380 */ _defNIQM;
/* nil 369260 */ _strmap;
/* nil 60000 */ _stack_size;
/* nil 100008 */ ENTRYPOINT;
/* nil 369428 */ _showCount;
/* nil 365f80 */ _sceCd_ncmdsdata;
/* nil 369484 */ _sce_sdr_transIntr1Hdr;
/* nil 369494 */ _sce_sdr_spu2IntrArg;
/* nil 2c3c68 */ __CTOR_END__;
/* nil 2c3c6c */ __DTOR_LIST__;
/* nil 365eb0 */ _sceCd_rcmd_semid;
/* nil 36a260 */ __EH_FRAME_BEGIN__;
/* nil 365eb8 */ _sceCd_ee_read_mode;
/* nil 4ce0ec */ _end;
/* nil 367900 */ _sceCd_rcmdrdata;
/* nil 365ed8 */ sceCdCbfunc_num;
/* nil 3694a0 */ _sce_sdr_spu2IntrGp;
/* nil 369400 */ _isDirty;
/* nil 369340 */ _defIQM;
/* nil 1fa0000 */ _stack;
/* nil 3f4a80 */ _fbss;
/* nil 367080 */ _sceCd_scmdrdata;
