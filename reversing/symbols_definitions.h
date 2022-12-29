#include <iostream>
typedef void *__builtin_va_list;

typedef struct { 
 short int __delta;
 short int __index;
 void *__pfn;
 short int __delta2;
} __vtbl_ptr_type;

typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef unsigned int size_t;

typedef void *__gnuc_va_list;

typedef char *__gnuc_va_list;
typedef long unsigned int clock_t;
typedef long int time_t;


struct tm { 
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
};

typedef __uint32_t __ULong;

typedef unsigned int __ULong;

typedef struct _glue;
typedef struct _Bigint;
typedef struct _atexit;
typedef struct __sFILE;
typedef struct _reent;

struct _glue { 
 _glue *_next;
 int _niobs;
 __sFILE *_iobs;
};

struct _Bigint { 
 _Bigint *_next;
 int _k;
 int _maxwds;
 int _sign;
 int _wds;
 __ULong _x[1];
};

struct _atexit { 
 _atexit *_next;
 int _ind;
 void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf { 
 unsigned char *_base;
 int _size;
};

typedef long int _fpos_t;

struct __sFILE { 
 unsigned char *_p;
 int _r;
 int _w;
 short int _flags;
 short int _file;
 __sbuf _bf;
 int _lbfsize;
 void *_cookie;
 int (*_read)(/* parameters unknown */);
 int (*_write)(/* parameters unknown */);
 _fpos_t (*_seek)(/* parameters unknown */);
 int (*_close)(/* parameters unknown */);
 __sbuf _ub;
 unsigned char *_up;
 int _ur;
 unsigned char _ubuf[3];
 unsigned char _nbuf[1];
 __sbuf _lb;
 int _blksize;
 int _offset;
 _reent *_data;
};

enum {
	FADE_STOP_NONE = 0,
	FADE_STOP_REQ = 1,
	FADE_STOP_END = 2,
	FADE_STOP_WAIT = 3
};


enum {
	__no_type_class = -1,
	__void_type_class = 0,
	__integer_type_class = 1,
	__char_type_class = 2,
	__enumeral_type_class = 3,
	__boolean_type_class = 4,
	__pointer_type_class = 5,
	__reference_type_class = 6,
	__offset_type_class = 7,
	__real_type_class = 8,
	__complex_type_class = 9,
	__function_type_class = 10,
	__method_type_class = 11,
	__record_type_class = 12,
	__union_type_class = 13,
	__array_type_class = 14,
	__string_type_class = 15,
	__set_type_class = 16,
	__file_type_class = 17,
	__lang_type_class = 18
};


enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

typedef _fpos_t fpos_t;
typedef __sFILE FILE;


struct DEBUG_MENU_DATA { 
 char *str;
 int (*func)(/* parameters unknown */);
 void (*ini_func)(/* parameters unknown */);
};


typedef DEBUG_MENU_DATA DEBUG_MENU_DATA;


typedef enum {
	FADE_MODE_NONE = 0,
	FADE_MODE_IN = 1,
	FADE_MODE_KEEP = 2,
	FADE_MODE_OUT = 3,
	FADE_MODE_UP = 4,
	FADE_MODE_DOWN = 5,
	FADE_MODE_IN_STOP = 6,
	FADE_MODE_OUT_STOP = 7
} _FADE_MODE;


enum _FADE_MODE {
	FADE_MODE_NONE = 0,
	FADE_MODE_IN = 1,
	FADE_MODE_KEEP = 2,
	FADE_MODE_OUT = 3,
	FADE_MODE_UP = 4,
	FADE_MODE_DOWN = 5,
	FADE_MODE_IN_STOP = 6,
	FADE_MODE_OUT_STOP = 7
};

typedef _FADE_MODE FADE_MODE;

typedef struct _MALLOC_HEADER;

struct _MALLOC_HEADER { 
 _MALLOC_HEADER *pre;
 _MALLOC_HEADER *next;
 int use_size;
 int vac_size;
};

typedef _MALLOC_HEADER MALLOC_HEADER;

struct _MY_MALLOC { 
 MALLOC_HEADER wrk;
 void *adrs;
 int size;
};

typedef _MY_MALLOC MY_MALLOC;

struct _HEAP_WRK { 
 MY_MALLOC malloc;
 int heap_num;
 int memory_sema;
};

typedef _HEAP_WRK HEAP_WRK;

typedef enum {
	HEAPMEM_USED_SIZE = 0,
	HEAPMEM_LEAVE_SIZE = 1
} HEAP_MEMMODE;


typedef enum {
	SPU_CORE_1 = 0,
	SPU_CORE_2 = 1,
	SPU_CORE_NUM = 2
} _enum__SPU_CORE;


enum _enum__SPU_CORE {
	SPU_CORE_1 = 0,
	SPU_CORE_2 = 1,
	SPU_CORE_NUM = 2
};

typedef _enum__SPU_CORE enum_SPU_CORE;

struct _VOLSET { 
 short int l;
 short int r;
};

typedef _VOLSET VOLSET;
typedef unsigned char u_char;
typedef short unsigned int u_short;
typedef unsigned int u_int;
typedef long unsigned int u_long;

typedef int qword[4];
typedef int sceVu0IVECTOR[4];
typedef float sceVu0FVECTOR[4];
typedef float sceVu0FMATRIX[4][4];

struct _SND_3D_ENV { 
 float front;
 float side;
 float back;
 float vol_min;
 float farthest_dist;
 float nearest_dist;
};

typedef _SND_3D_ENV SND_3D_ENV;


struct _SND_3D_SET { 
 sceVu0FVECTOR *pos;
 sceVu0FVECTOR *vel;
 sceVu0FVECTOR *dir;
};


struct _SND_3D_SET { 
 float *pos[4];
 float *vel[4];
 float *dir[4];
};

typedef _SND_3D_SET SND_3D_SET;
typedef void (*CdlCB)(/* parameters unknown */);

typedef struct { 
 u_char trycount;
 u_char spindlctrl;
 u_char datapattern;
 u_char pad;
} sceCdRMode;

typedef struct { 
 u_char minute;
 u_char second;
 u_char sector;
 u_char track;
} sceCdlLOCCD;

typedef struct { 
 u_int lsn;
 u_int size;
 char name[16];
 u_char date[8];
 u_int flag;
} sceCdlFILE;

typedef struct { 
 u_char stat;
 u_char second;
 u_char minute;
 u_char hour;
 u_char pad;
 u_char day;
 u_char month;
 u_char year;
} sceCdCLOCK;

typedef struct { 
 u_int bufmax;
 u_int bankmax;
 u_int iop_bufaddr;
} sceCdStmInit;


typedef struct { 
 long unsigned int NLOOP : 15;
 long unsigned int EOP : 1;
 long unsigned int pad16;
 long unsigned int id : 14;
 long unsigned int PRE : 1;
 long unsigned int PRIM : 11;
 long unsigned int FLG : 2;
 long unsigned int NREG : 4;
 long unsigned int REGS0 : 4;
 long unsigned int REGS1 : 4;
 long unsigned int REGS2 : 4;
 long unsigned int REGS3 : 4;
 long unsigned int REGS4 : 4;
 long unsigned int REGS5 : 4;
 long unsigned int REGS6 : 4;
 long unsigned int REGS7 : 4;
 long unsigned int REGS8 : 4;
 long unsigned int REGS9 : 4;
 long unsigned int REGS10 : 4;
 long unsigned int REGS11 : 4;
 long unsigned int REGS12 : 4;
 long unsigned int REGS13 : 4;
 long unsigned int REGS14 : 4;
 long unsigned int REGS15 : 4;
} sceGifTag;


struct _sceGifPackRgbaq { 
 u_int R;
 u_int G;
 u_int B;
 u_int A;
};


_sceGifPackRgbaq _sceGifPackRgbaq;
typedef _sceGifPackRgbaq sceGifPackRgbaq;

struct _sceGifPackAd { 
 u_long DATA;
 u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

struct _sceGifPackSt { 
 float S;
 float T;
 float Q;
 u_int pad96;
};

typedef _sceGifPackSt sceGifPackSt;

struct _sceGifPackUv { 
 int U;
 int V;
 long int pad64;
};

typedef _sceGifPackUv sceGifPackUv;

struct _sceGifPackXyzf { 
 int X;
 int Y;
 u_int Z;
 u_int F : 12;
 u_int pad108 : 3;
 u_int ADC : 1;
 u_int pad112;
};

typedef _sceGifPackXyzf sceGifPackXyzf;

struct _sceGifPackXyz { 
 int X;
 int Y;
 u_int Z;
 u_int pad96 : 15;
 u_int ADC : 1;
 u_int pad112;
};

typedef _sceGifPackXyz sceGifPackXyz;

struct _sceGifPackFog { 
 u_int pad[3];
 u_int F;
};

typedef _sceGifPackFog sceGifPackFog;

struct _sceGifPackNop { 
 u_long pad[2];
};

typedef _sceGifPackNop sceGifPackNop;

typedef struct { 
 long unsigned int A : 2;
 long unsigned int B : 2;
 long unsigned int C : 2;
 long unsigned int D : 2;
 long unsigned int pad8;
 long unsigned int FIX;
 long unsigned int pad40;
} sceGsAlpha;

typedef struct { 
 long unsigned int SBP : 14;
 long unsigned int pad14 : 2;
 long unsigned int SBW : 6;
 long unsigned int pad22 : 2;
 long unsigned int SPSM : 6;
 long unsigned int pad30 : 2;
 long unsigned int DBP : 14;
 long unsigned int pad46 : 2;
 long unsigned int DBW : 6;
 long unsigned int pad54 : 2;
 long unsigned int DPSM : 6;
 long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct { 
 long unsigned int WMS : 2;
 long unsigned int WMT : 2;
 long unsigned int MINU : 10;
 long unsigned int MAXU : 10;
 long unsigned int MINV : 10;
 long unsigned int MAXV : 10;
 long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct { 
 long unsigned int pad00;
} sceGsFinish;

typedef struct { 
 long unsigned int pad00;
 long unsigned int F;
} sceGsFog;

typedef struct { 
 long unsigned int FCR;
 long unsigned int FCG;
 long unsigned int FCB;
 long unsigned int pad24;
} sceGsFogcol;

typedef struct { 
 long unsigned int FBP : 9;
 long unsigned int pad09 : 7;
 long unsigned int FBW : 6;
 long unsigned int pad22 : 2;
 long unsigned int PSM : 6;
 long unsigned int pad30 : 2;
 long unsigned int FBMSK;
} sceGsFrame;

typedef struct { 
 long unsigned int WDATA;
} sceGsHwreg;

typedef struct { 
 u_int ID;
 u_int IDMSK;
} sceGsLabel;

typedef struct { 
 long unsigned int TBP1 : 14;
 long unsigned int TBW1 : 6;
 long unsigned int TBP2 : 14;
 long unsigned int TBW2 : 6;
 long unsigned int TBP3 : 14;
 long unsigned int TBW3 : 6;
 long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct { 
 long unsigned int TBP4 : 14;
 long unsigned int TBW4 : 6;
 long unsigned int TBP5 : 14;
 long unsigned int TBW5 : 6;
 long unsigned int TBP6 : 14;
 long unsigned int TBW6 : 6;
 long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct { 
 u_int R;
 u_int G;
 u_int B;
 u_int A;
 u_int Q;
} sceGsRgbaq;

typedef struct { 
 long unsigned int SCAX0 : 11;
 long unsigned int pad11 : 5;
 long unsigned int SCAX1 : 11;
 long unsigned int pad27 : 5;
 long unsigned int SCAY0 : 11;
 long unsigned int pad43 : 5;
 long unsigned int SCAY1 : 11;
 long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct { 
 u_int ID;
 u_int IDMSK;
} sceGsSignal;

typedef struct { 
 float S;
 float T;
} sceGsSt;

typedef struct { 
 long unsigned int LCM : 1;
 long unsigned int pad01 : 1;
 long unsigned int MXL : 3;
 long unsigned int MMAG : 1;
 long unsigned int MMIN : 3;
 long unsigned int MTBA : 1;
 long unsigned int pad10 : 9;
 long unsigned int L : 2;
 long unsigned int pad21 : 11;
 long unsigned int K : 12;
 long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct { 
 long unsigned int pad00 : 20;
 long unsigned int PSM : 6;
 long unsigned int pad26 : 11;
 long unsigned int CBP : 14;
 long unsigned int CPSM : 4;
 long unsigned int CSM : 1;
 long unsigned int CSA : 5;
 long unsigned int CLD : 3;
} sceGsTex2;

typedef struct { 
 long unsigned int TA0;
 long unsigned int pad08 : 7;
 long unsigned int AEM : 1;
 long unsigned int pad16;
 long unsigned int TA1;
 long unsigned int pad40;
} sceGsTexa;

typedef struct { 
 long unsigned int pad00;
} sceGsTexflush;

typedef struct { 
 long unsigned int SSAX : 11;
 long unsigned int pad11 : 5;
 long unsigned int SSAY : 11;
 long unsigned int pad27 : 5;
 long unsigned int DSAX : 11;
 long unsigned int pad43 : 5;
 long unsigned int DSAY : 11;
 long unsigned int DIR : 2;
 long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct { 
 long unsigned int RRW : 12;
 long unsigned int pad12 : 20;
 long unsigned int RRH : 12;
 long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct { 
 long unsigned int OFX;
 long unsigned int pad16;
 long unsigned int OFY;
 long unsigned int pad48;
} sceGsXyoffset;

typedef struct { 
 long unsigned int X;
 long unsigned int Y;
 long unsigned int Z;
} sceGsXyz;

typedef struct { 
 long unsigned int X;
 long unsigned int Y;
 long unsigned int Z;
 long unsigned int F;
} sceGsXyzf;

typedef struct { 
 long unsigned int ZBP : 9;
 long unsigned int pad09 : 15;
 long unsigned int PSM : 4;
 long unsigned int pad28 : 4;
 long unsigned int ZMSK : 1;
 long unsigned int pad33 : 31;
} sceGsZbuf;


struct ThreadParam { 
 int status;
 void (*entry)(/* parameters unknown */);
 void *stack;
 int stackSize;
 void *gpReg;
 int initPriority;
 int currentPriority;
 u_int attr;
 u_int option;
 int waitType;
 int waitId;
 int wakeupCount;
};


ThreadParam ThreadParam;


struct ThreadParam { 
 int status;
 void (*entry)(/* parameters unknown */);
 void *stack;
 int stackSize;
 void *gpReg;
 int initPriority;
 int currentPriority;
 u_int attr;
 u_int option;
 int waitType;
 int waitId;
 int wakeupCount;
};

struct SemaParam { 
 int currentCount;
 int maxCount;
 int initCount;
 int numWaitThreads;
 u_int attr;
 u_int option;
};

typedef struct { 
 unsigned int COUNT;
 unsigned int p0;
} tT_COUNT;

typedef struct { 
 unsigned int CLKS : 2;
 unsigned int GATE : 1;
 unsigned int GATS : 1;
 unsigned int GATM : 2;
 unsigned int ZRET : 1;
 unsigned int CUE : 1;
 unsigned int CMPE : 1;
 unsigned int OVFE : 1;
 unsigned int EQUF : 1;
 unsigned int OVFF : 1;
 unsigned int p0 : 20;
} tT_MODE;

typedef struct { 
 unsigned int COMP;
 unsigned int p0;
} tT_COMP;

typedef struct { 
 unsigned int HOLD;
 unsigned int p0;
} tT_HOLD;


typedef struct { 
 unsigned int OPTION : 28;
 unsigned int CODE : 4;
} tIPU_CMD_write;


typedef struct { 
 unsigned int DATA;
 unsigned int p0 : 31;
 unsigned int BUSY : 1;
} tIPU_CMD_write;


typedef struct { 
 unsigned int DATA;
 unsigned int p0 : 31;
 unsigned int BUSY : 1;
} tIPU_CMD_read;


typedef struct { 
 unsigned int OPTION : 28;
 unsigned int CODE : 4;
} tIPU_CMD_read;

typedef struct { 
 unsigned int BSTOP;
 unsigned int p0 : 31;
 unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct { 
 unsigned int IFC : 4;
 unsigned int OFC : 4;
 unsigned int CBP : 6;
 unsigned int ECD : 1;
 unsigned int SCD : 1;
 unsigned int IDP : 2;
 unsigned int p0 : 2;
 unsigned int AS : 1;
 unsigned int IVF : 1;
 unsigned int QST : 1;
 unsigned int MP1 : 1;
 unsigned int PCT : 3;
 unsigned int p1 : 3;
 unsigned int RST : 1;
 unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct { 
 unsigned int BP : 7;
 unsigned int p0 : 1;
 unsigned int IFC : 4;
 unsigned int p1 : 4;
 unsigned int FP : 2;
 unsigned int p2 : 14;
} tIPU_BP;

typedef struct { 
 unsigned int RST : 1;
 unsigned int p0 : 2;
 unsigned int PSE : 1;
 unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct { 
 unsigned int M3R : 1;
 unsigned int p0 : 1;
 unsigned int IMT : 1;
 unsigned int p1 : 29;
} tGIF_MODE;

typedef struct { 
 unsigned int M3R : 1;
 unsigned int M3P : 1;
 unsigned int IMT : 1;
 unsigned int PSE : 1;
 unsigned int p0 : 1;
 unsigned int IP3 : 1;
 unsigned int P3Q : 1;
 unsigned int P2Q : 1;
 unsigned int P1Q : 1;
 unsigned int OPH : 1;
 unsigned int APATH : 2;
 unsigned int DIR : 1;
 unsigned int p1 : 11;
 unsigned int FQC : 5;
 unsigned int p2 : 3;
} tGIF_STAT;

typedef struct { 
 unsigned int NLOOP : 15;
 unsigned int EOP : 1;
 unsigned int tag;
} tGIF_TAG0;


typedef struct { 
 unsigned int tag : 14;
 unsigned int PRE : 1;
 unsigned int PRIM : 11;
 unsigned int FLG : 2;
 unsigned int NREG : 4;
} tGIF_TAG1;


typedef struct { 
 unsigned int tag : 15;
 unsigned int PRE : 1;
 unsigned int PRIM : 10;
 unsigned int FLG : 2;
 unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct { 
 unsigned int tag;
} tGIF_TAG2;

typedef struct { 
 unsigned int tag;
} tGIF_TAG3;

typedef struct { 
 unsigned int LOOPCNT : 15;
 unsigned int p0 : 1;
 unsigned int REGCNT : 4;
 unsigned int VUADDR : 10;
 unsigned int p1 : 2;
} tGIF_CNT;

typedef struct { 
 unsigned int P3CNT : 15;
 unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct { 
 unsigned int LOOPCNT : 15;
 unsigned int EOP : 1;
 unsigned int p0;
} tGIF_P3TAG;


typedef struct { 
 unsigned int VPS : 2;
 unsigned int VEW : 1;
 unsigned int p0 : 3;
 unsigned int MRK : 1;
 unsigned int p1 : 1;
 unsigned int VSS : 1;
 unsigned int VFS : 1;
 unsigned int VIS : 1;
 unsigned int INT : 1;
 unsigned int ERO : 1;
 unsigned int ER1 : 1;
 unsigned int p2 : 10;
 unsigned int FQC : 4;
 unsigned int p3 : 4;
} tVIF0_STAT;


typedef struct { 
 unsigned int VPS : 2;
 unsigned int VEW : 1;
 unsigned int p0 : 1;
 unsigned int p1 : 2;
 unsigned int MRK : 1;
 unsigned int p2 : 1;
 unsigned int VSS : 1;
 unsigned int VFS : 1;
 unsigned int VIS : 1;
 unsigned int INT : 1;
 unsigned int ERO : 1;
 unsigned int ER1 : 1;
 unsigned int p3 : 10;
 unsigned int FQC : 4;
 unsigned int p4 : 1;
 unsigned int p5 : 3;
} tVIF0_STAT;

typedef struct { 
 unsigned int RST : 1;
 unsigned int FBK : 1;
 unsigned int STP : 1;
 unsigned int STC : 1;
 unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct { 
 unsigned int MII : 1;
 unsigned int ME0 : 1;
 unsigned int ME1 : 1;
 unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct { 
 unsigned int MARK;
 unsigned int p0;
} tVIF_MARK;

typedef struct { 
 unsigned int CL;
 unsigned int WL;
 unsigned int p0;
} tVIF_CYCLE;

typedef struct { 
 unsigned int MOD : 2;
 unsigned int p0 : 30;
} tVIF_MODE;

typedef struct { 
 unsigned int num;
 unsigned int p0;
} tVIF0_NUM;

typedef struct { 
 unsigned int m0 : 2;
 unsigned int m1 : 2;
 unsigned int m2 : 2;
 unsigned int m3 : 2;
 unsigned int m4 : 2;
 unsigned int m5 : 2;
 unsigned int m6 : 2;
 unsigned int m7 : 2;
 unsigned int m8 : 2;
 unsigned int m9 : 2;
 unsigned int m10 : 2;
 unsigned int m11 : 2;
 unsigned int m12 : 2;
 unsigned int m13 : 2;
 unsigned int m14 : 2;
 unsigned int m15 : 2;
} tVIF_MASK;

typedef struct { 
 unsigned int immediate;
 unsigned int num;
 unsigned int CMD;
} tVIF_CODE;

typedef struct { 
 unsigned int ITOPS : 10;
 unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct { 
 unsigned int ITOP : 10;
 unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct { 
 unsigned int R0;
} tVIF_R0;

typedef struct { 
 unsigned int R1;
} tVIF_R1;

typedef struct { 
 unsigned int R2;
} tVIF_R2;

typedef struct { 
 unsigned int R3;
} tVIF_R3;

typedef struct { 
 unsigned int C0;
} tVIF_C0;

typedef struct { 
 unsigned int C1;
} tVIF_C1;

typedef struct { 
 unsigned int C2;
} tVIF_C2;

typedef struct { 
 unsigned int C3;
} tVIF_C3;

typedef struct { 
 unsigned int VPS : 2;
 unsigned int VEW : 1;
 unsigned int VGW : 1;
 unsigned int p0 : 2;
 unsigned int MRK : 1;
 unsigned int DBF : 1;
 unsigned int VSS : 1;
 unsigned int VFS : 1;
 unsigned int VIS : 1;
 unsigned int INT : 1;
 unsigned int ERO : 1;
 unsigned int ER1 : 1;
 unsigned int p1 : 9;
 unsigned int FDR : 1;
 unsigned int FQC : 5;
 unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct { 
 unsigned int RST : 1;
 unsigned int FBK : 1;
 unsigned int STP : 1;
 unsigned int STC : 1;
 unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct { 
 unsigned int MII : 1;
 unsigned int ME0 : 1;
 unsigned int ME1 : 1;
 unsigned int p0 : 29;
} tVIF1_ERR;


typedef struct { 
 unsigned int num;
 unsigned int p0;
} tVIF1_NUM;


typedef struct { 
 unsigned int num;
 unsigned int p0;
} tVIF1_NUM;

typedef struct { 
 unsigned int BASE : 10;
 unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct { 
 unsigned int OFFSET : 10;
 unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct { 
 unsigned int TOPS : 10;
 unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct { 
 unsigned int TOP : 10;
 unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct { 
 unsigned int DIR : 1;
 unsigned int p0 : 1;
 unsigned int MOD : 2;
 unsigned int ASP : 2;
 unsigned int TTE : 1;
 unsigned int TIE : 1;
 unsigned int STR : 1;
 unsigned int p1 : 7;
 unsigned int TAG;
} tD_CHCR;


typedef struct { 
 unsigned int ADDR : 31;
 unsigned int SPR : 1;
} tD_MADR;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int ADDR : 27;
 unsigned int SPR : 1;
} tD_MADR;

typedef struct { 
 unsigned int QWC;
 unsigned int p0;
} tD_QWC;


typedef struct { 
 unsigned int ADDR : 31;
 unsigned int SPR : 1;
} tD_TADR;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int ADDR : 27;
 unsigned int SPR : 1;
} tD_TADR;


typedef struct { 
 unsigned int ADDR : 31;
 unsigned int SPR : 1;
} tD_ASR0;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int ADDR : 27;
 unsigned int SPR : 1;
} tD_ASR0;


typedef struct { 
 unsigned int ADDR : 31;
 unsigned int SPR : 1;
} tD_ASR1;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int ADDR : 27;
 unsigned int SPR : 1;
} tD_ASR1;


typedef struct { 
 unsigned int ADDR : 14;
 unsigned int p0 : 18;
} tD_SADR;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int ADDR : 10;
 unsigned int p1 : 18;
} tD_SADR;

typedef struct { 
 unsigned int DMAE : 1;
 unsigned int RELE : 1;
 unsigned int MFD : 2;
 unsigned int STS : 2;
 unsigned int STD : 2;
 unsigned int RCYC : 3;
 unsigned int p0 : 21;
} tD_CTRL;

typedef struct { 
 unsigned int CIS0 : 1;
 unsigned int CIS1 : 1;
 unsigned int CIS2 : 1;
 unsigned int CIS3 : 1;
 unsigned int CIS4 : 1;
 unsigned int CIS5 : 1;
 unsigned int CIS6 : 1;
 unsigned int CIS7 : 1;
 unsigned int CIS8 : 1;
 unsigned int CIS9 : 1;
 unsigned int p0 : 3;
 unsigned int SIS : 1;
 unsigned int MEIS : 1;
 unsigned int BEIS : 1;
 unsigned int CIM0 : 1;
 unsigned int CIM1 : 1;
 unsigned int CIM2 : 1;
 unsigned int CIM3 : 1;
 unsigned int CIM4 : 1;
 unsigned int CIM5 : 1;
 unsigned int CIM6 : 1;
 unsigned int CIM7 : 1;
 unsigned int CIM8 : 1;
 unsigned int CIM9 : 1;
 unsigned int p1 : 3;
 unsigned int SIM : 1;
 unsigned int MEIM : 1;
 unsigned int p2 : 1;
} tD_STAT;

typedef struct { 
 unsigned int CPC0 : 1;
 unsigned int CPC1 : 1;
 unsigned int CPC2 : 1;
 unsigned int CPC3 : 1;
 unsigned int CPC4 : 1;
 unsigned int CPC5 : 1;
 unsigned int CPC6 : 1;
 unsigned int CPC7 : 1;
 unsigned int CPC8 : 1;
 unsigned int CPC9 : 1;
 unsigned int p0 : 6;
 unsigned int CDE0 : 1;
 unsigned int CDE1 : 1;
 unsigned int CDE2 : 1;
 unsigned int CDE3 : 1;
 unsigned int CDE4 : 1;
 unsigned int CDE5 : 1;
 unsigned int CDE6 : 1;
 unsigned int CDE7 : 1;
 unsigned int CDE8 : 1;
 unsigned int CDE9 : 1;
 unsigned int p1 : 5;
 unsigned int PCE : 1;
} tD_PCR;

typedef struct { 
 unsigned int SQWC;
 unsigned int p0;
 unsigned int TQWC;
 unsigned int p1;
} tD_SQWC;


typedef struct { 
 unsigned int RMSK : 31;
 unsigned int p0 : 1;
} tD_RBSR;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int RMSK : 27;
 unsigned int p1 : 1;
} tD_RBSR;


typedef struct { 
 unsigned int ADDR : 31;
 unsigned int p0 : 1;
} tD_RBOR;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int RMSK : 27;
 unsigned int p1 : 1;
} tD_RBOR;


typedef struct { 
 unsigned int ADDR : 31;
 unsigned int p0 : 1;
} tD_STADR;


typedef struct { 
 unsigned int p0 : 4;
 unsigned int ADDR : 27;
 unsigned int p1 : 1;
} tD_STADR;

typedef struct { 
 unsigned int p0;
 unsigned int CPND : 1;
 unsigned int p1 : 15;
} tD_ENABLER;

typedef struct { 
 unsigned int p0;
 unsigned int CPND : 1;
 unsigned int p1 : 15;
} tD_ENABLEW;


typedef struct { 
 unsigned int EN1 : 1;
 unsigned int EN2 : 1;
 unsigned int CRTMD : 3;
 unsigned int MMOD : 1;
 unsigned int AMOD : 1;
 unsigned int SLBG : 1;
 unsigned int ALP;
 unsigned int p0;
 unsigned int p1;
} tGS_PMODE;


typedef struct { 
 unsigned int EN1 : 1;
 unsigned int EN2 : 1;
 unsigned int CRTMD : 3;
 unsigned int MMOD : 1;
 unsigned int AMOD : 1;
 unsigned int SLBG : 1;
 unsigned int ALP;
 unsigned int NFLD : 1;
 unsigned int p0 : 15;
 unsigned int EXVWINS : 10;
 unsigned int EXVWINE : 10;
 unsigned int EXSYNCMD : 1;
 unsigned int p1 : 11;
} tGS_PMODE;


typedef struct { 
 unsigned int INT : 1;
 unsigned int FFMD : 1;
 unsigned int DPMS : 2;
 unsigned int p0 : 28;
 unsigned int p1;
} tGS_SMODE2;


typedef struct { 
 unsigned int INT : 1;
 unsigned int FFMD : 1;
 unsigned int DPMS : 2;
 unsigned int p0 : 28;
} tGS_SMODE2;

typedef struct { 
 unsigned int FBP : 9;
 unsigned int FBW : 6;
 unsigned int PSM : 5;
 unsigned int p0 : 12;
 unsigned int DBX : 11;
 unsigned int DBY : 11;
 unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct { 
 unsigned int DX : 12;
 unsigned int DY : 11;
 unsigned int MAGH : 4;
 unsigned int MAGV : 2;
 unsigned int p0 : 3;
 unsigned int DW : 12;
 unsigned int DH : 11;
 unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct { 
 unsigned int FBP : 9;
 unsigned int FBW : 6;
 unsigned int PSM : 5;
 unsigned int p0 : 12;
 unsigned int DBX : 11;
 unsigned int DBY : 11;
 unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct { 
 unsigned int DX : 12;
 unsigned int DY : 11;
 unsigned int MAGH : 4;
 unsigned int MAGV : 2;
 unsigned int p0 : 3;
 unsigned int DW : 12;
 unsigned int DH : 11;
 unsigned int p1 : 9;
} tGS_DISPLAY2;


typedef struct { 
 unsigned int EXBP : 14;
 unsigned int EXBW : 6;
 unsigned int FBIN : 2;
 unsigned int WFFMD : 1;
 unsigned int EMODA : 2;
 unsigned int EMODC : 2;
 unsigned int p0 : 5;
 unsigned int WDX : 11;
 unsigned int WDY : 11;
 unsigned int p1 : 10;
} tGS_EXTBUF;


typedef struct { 
 unsigned int EN1 : 1;
 unsigned int EN2 : 1;
 unsigned int CRTMD : 3;
 unsigned int MMOD : 1;
 unsigned int AMOD : 1;
 unsigned int SLBG : 1;
 unsigned int ALP;
 unsigned int NFLD : 1;
 unsigned int p0 : 15;
 unsigned int EXVWINS : 10;
 unsigned int EXVWINE : 10;
 unsigned int EXSYNCMD : 1;
 unsigned int p1 : 11;
} tGS_EXTBUF;

typedef struct { 
 unsigned int SX : 12;
 unsigned int SY : 11;
 unsigned int SMPH : 4;
 unsigned int SMPV : 2;
 unsigned int p0 : 3;
 unsigned int WW : 12;
 unsigned int WH : 11;
 unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct { 
 unsigned int WRITE : 1;
 unsigned int p0 : 31;
 unsigned int p1;
} tGS_EXTWRITE;


typedef struct { 
 unsigned int R;
 unsigned int G;
 unsigned int B;
 unsigned int p0;
 unsigned int p1;
} tGS_BGCOLOR;


typedef struct { 
 unsigned int R;
 unsigned int G;
 unsigned int B;
 unsigned char p0;
 unsigned int p1;
} tGS_BGCOLOR;


typedef struct { 
 unsigned int SIGNAL : 1;
 unsigned int FINISH : 1;
 unsigned int HSINT : 1;
 unsigned int VSINT : 1;
 unsigned int EDWINT : 1;
 unsigned int p0 : 3;
 unsigned int FLUSH : 1;
 unsigned int RESET : 1;
 unsigned int p1 : 2;
 unsigned int NFIELD : 1;
 unsigned int FIELD : 1;
 unsigned int FIFO : 2;
 unsigned int REV;
 unsigned int ID;
 unsigned int p2;
} tGS_CSR;


typedef struct { 
 unsigned int SIGNAL : 1;
 unsigned int FINISH : 1;
 unsigned int HSINT : 1;
 unsigned int VSINT : 1;
 unsigned int EDWINT : 1;
 unsigned int EXHSINT : 1;
 unsigned int EXVSINT : 1;
 unsigned int p0 : 1;
 unsigned int FLUSH : 1;
 unsigned int RESET : 1;
 unsigned int EXVERR : 1;
 unsigned int EXFIELD : 1;
 unsigned int NFIELD : 1;
 unsigned int FIELD : 1;
 unsigned int FIFO : 2;
 unsigned int REV;
 unsigned int ID;
 unsigned int p1;
} tGS_CSR;


typedef struct { 
 unsigned int p0;
 unsigned int SIGMSK : 1;
 unsigned int FINISHMSK : 1;
 unsigned int HSMSK : 1;
 unsigned int VSMSK : 1;
 unsigned int EDWMSK : 1;
 unsigned int p1 : 19;
 unsigned int p2;
} tGS_IMR;


typedef struct { 
 unsigned int p0;
 unsigned int SIGMSK : 1;
 unsigned int FINISHMSK : 1;
 unsigned int HSMSK : 1;
 unsigned int VSMSK : 1;
 unsigned int EDWMSK : 1;
 unsigned int EXHSMSK : 1;
 unsigned int EXVSMSK : 1;
 unsigned int p1 : 17;
 unsigned int p2;
} tGS_IMR;

typedef struct { 
 unsigned int DIR : 1;
 unsigned int p0 : 31;
 unsigned int p1;
} tGS_BUSDIR;

typedef struct { 
 unsigned int SIGID;
 unsigned int LBLID;
} tGS_SIGLBLID;

typedef struct { 
 tGS_PMODE pmode;
 tGS_SMODE2 smode2;
 tGS_DISPFB2 dispfb;
 tGS_DISPLAY2 display;
 tGS_BGCOLOR bgcolor;
} sceGsDispEnv;


typedef struct { 
 sceGsFrame frame1;
 u_long frame1addr;
 sceGsZbuf zbuf1;
 long int zbuf1addr;
 sceGsXyoffset xyoffset1;
 long int xyoffset1addr;
 sceGsScissor scissor1;
 long int scissor1addr;
 long int prmodecontaddr;
 long int colclampaddr;
 long int dtheaddr;
 long int test1addr;
} sceGsDrawEnv1;


typedef struct { 
 sceGsFrame frame2;
 u_long frame2addr;
 sceGsZbuf zbuf2;
 long int zbuf2addr;
 sceGsXyoffset xyoffset2;
 long int xyoffset2addr;
 sceGsScissor scissor2;
 long int scissor2addr;
 long int prmodecontaddr;
 long int colclampaddr;
 long int dtheaddr;
 long int test2addr;
} sceGsDrawEnv2;


typedef struct { 
 long int testaaddr;
 long int primaddr;
 sceGsRgbaq rgbaq;
 long int rgbaqaddr;
 sceGsXyz xyz2a;
 long int xyz2aaddr;
 sceGsXyz xyz2b;
 long int xyz2baddr;
 long int testbaddr;
} sceGsClear;

typedef struct { 
 sceGsDispEnv disp[2];
 sceGifTag giftag0;
 sceGsDrawEnv1 draw0;
 sceGsClear clear0;
 sceGifTag giftag1;
 sceGsDrawEnv1 draw1;
 sceGsClear clear1;
} sceGsDBuff;

typedef struct { 
 sceGsDispEnv disp[2];
 sceGifTag giftag0;
 sceGsDrawEnv1 draw01;
 sceGsDrawEnv2 draw02;
 sceGsClear clear0;
 sceGifTag giftag1;
 sceGsDrawEnv1 draw11;
 sceGsDrawEnv2 draw12;
 sceGsClear clear1;
} sceGsDBuffDc;


typedef struct { 
 sceGsTexflush texflush;
 long int texflushaddr;
 sceGsTex1 tex11;
 long int tex11addr;
 long int tex01addr;
 sceGsClamp clamp1;
 long int clamp1addr;
} sceGsTexEnv;


typedef struct { 
 sceGsTexflush texflush;
 long int texflushaddr;
 sceGsTex1 tex12;
 long int tex12addr;
 long int tex02addr;
 sceGsClamp clamp2;
 long int clamp2addr;
} sceGsTexEnv2;


typedef struct { 
 sceGsAlpha alpha1;
 long int alpha1addr;
 long int pabeaddr;
 sceGsTexa texa;
 long int texaaddr;
 long int fba1addr;
} sceGsAlphaEnv;


typedef struct { 
 sceGsAlpha alpha2;
 long int alpha2addr;
 long int pabeaddr;
 sceGsTexa texa;
 long int texaaddr;
 long int fba2addr;
} sceGsAlphaEnv2;


typedef struct { 
 sceGifTag giftag0;
 sceGsBitbltbuf bitbltbuf;
 long int bitbltbufaddr;
 sceGsTrxpos trxpos;
 long int trxposaddr;
 sceGsTrxreg trxreg;
 long int trxregaddr;
 long int trxdiraddr;
 sceGifTag giftag1;
} sceGsLoadImage;


typedef struct { 
 u_int vifcode[4];
 sceGifTag giftag;
 sceGsBitbltbuf bitbltbuf;
 long int bitbltbufaddr;
 sceGsTrxpos trxpos;
 long int trxposaddr;
 sceGsTrxreg trxreg;
 long int trxregaddr;
 sceGsFinish finish;
 long int finishaddr;
 long int trxdiraddr;
} sceGsStoreImage;

typedef struct { 
 short int sceGsInterMode;
 short int sceGsOutMode;
 short int sceGsFFMode;
 short int sceGsVersion;
 int (*sceGsVSCfunc)(/* parameters unknown */);
 int sceGsVSCid;
} sceGsGParam;

struct PAD_STRUCT { 
 int port;
 int slot;
 short unsigned int now;
 short unsigned int old;
 short unsigned int cnt[16];
 short unsigned int cnt_bak[16];
 short unsigned int one;
 short unsigned int rpt;
 short unsigned int rpt_time;
 unsigned char pad_direct[6];
 char flags;
 char step;
 char id;
 unsigned char analog[4];
 unsigned char push[12];
 short unsigned int an_cnt[2];
 short unsigned int an_cnt_bak[2];
 float an_rot[2];
 float an_rot_bak[2];
 unsigned char an_dir[2];
 unsigned char an_dir_bak[2];
};

typedef struct { 
 short int TimeZone;
 u_char Aspect;
 u_char DateNotation;
 u_char Language;
 u_char Spdif;
 u_char SummerTime;
 u_char TimeNotation;
} sceScfT10kConfig;


typedef union { 
 u_long ul64[2];
 u_int ui32[4];
 float fl32[4];
 u_short us16[8];
 u_char uc8[16];
 sceVu0FVECTOR fv;
 sceVu0IVECTOR iv;
} Q_WORDDATA;


typedef union { 
 u_long ul64[2];
 u_int ui32[4];
 float fl32[4];
 u_short us16[8];
 u_char uc8[16];
 float fv[4];
 sceVu0IVECTOR iv;
} Q_WORDDATA;

typedef union { 
 u_char *pu8;
 u_short *pu16;
 u_int *pu32;
 u_long *pu64;
 char *ps8;
 short int *ps16;
 int *ps32;
 long int *ps64;
 long int wrk;
} P_INT;

struct SYS_WRK { 
 u_long count;
 sceCdCLOCK rtc;
 short int sreset_count;
 u_char sreset_ng;
 u_char video_mode;
 u_char language;
 int game_mode;
 u_char interrupt;
};

struct OPTION_WRK { 
 int brightness;
 int snd_volume;
 u_char pad_vib;
 u_char pad_type;
 u_char view_vertical;
 u_char ana_replace;
 u_char credits;
 u_char snd_output;
 u_char move_operate;
 u_char pad;
};


struct MOVE_BOX { 
 float mloop;
 sceVu0FVECTOR pos;
 sceVu0FVECTOR bpos;
 sceVu0FVECTOR mv;
 sceVu0FVECTOR bmv;
 sceVu0FVECTOR rot;
 sceVu0FVECTOR brot;
 sceVu0FVECTOR spd;
 sceVu0FVECTOR rspd;
 sceVu0FVECTOR trot;
};

struct STATUS_DAT { 
 u_long sta;
 u_long sta_old;
 u_long mvsta;
 u_short hp;
 u_short sp;
 u_short hpmax;
 u_short spmax;
 u_short hp_recover_time;
 u_short sp_recover_time;
 u_short sp_down_fl;
 u_short dmg;
 u_short rhspdmg;
 u_short rhpdmg;
 u_short rspdmg;
 u_short dmg_old;
 u_short dmg_type;
 u_char dmg_cam_flag;
 u_short dwalk_tm;
 u_short cond;
 u_short cond_old;
 u_short cond_tm;
 u_short invisible_timer;
};


typedef struct { 
 sceVu0FVECTOR p0;
 sceVu0FVECTOR p1;
 sceVu0FVECTOR p2;
 sceVu0FVECTOR p3;
 sceVu0FVECTOR p4;
 sceVu0FVECTOR p5;
 sceVu0FVECTOR p6;
 sceVu0FVECTOR p7;
 sceVu0FVECTOR p8;
 sceVu0FVECTOR p9;
} MPOS;


typedef struct { 
 float p0[4];
 float p1[4];
 float p2[4];
 float p3[4];
 float p4[4];
 float p5[4];
 float p6[4];
 float p7[4];
 float p8[4];
 float p9[4];
} MPOS;

typedef struct { 
 u_char charge_range;
 u_char charge_max;
 u_char charge_speed;
 u_long point;
} CAM_CUSTOM_WRK;

struct DEBUG_WRK { 
 u_char fr_30;
 int mode;
 int menu_csr;
 int comp_mode;
 int init_movieviewer;
 int init_msg_viewer;
 int init_sndtest;
 int init_scntest;
 int init_screen_calib;
 int init_test2d;
 int init_motionviewer;
 int init_func;
 int init_subtitle_test;
 int dbg_menu_sw;
};

typedef struct CFVariable;

struct CFVariable { 
 float mValue;
 float m_fMax;
 float m_fMin;
};

typedef struct { 
 unsigned char *addr;
 int size;
} MC_SAVE_DATA;

typedef int ptrdiff_t;
typedef int dword[2];
typedef int word;
typedef unsigned int G3DCOLOR;


struct G3DMATERIAL { 
 sceVu0FVECTOR vDiffuse;
 sceVu0FVECTOR vAmbient;
 sceVu0FVECTOR vSpecular;
 sceVu0FVECTOR vEmissive;
 float fPower;
 int aiPad[3];
};


G3DMATERIAL G3DMATERIAL;


struct G3DMATERIAL { 
 float vDiffuse[4];
 float vAmbient[4];
 float vSpecular[4];
 float vEmissive[4];
 float fPower;
 int aiPad[3];
};

typedef enum {
	G3DLIGHT_DIRECTIONAL = 0,
	G3DLIGHT_POINT = 1,
	G3DLIGHT_SPOT = 2,
	NUM_G3DLIGHTTYPE = 3,
	G3DLIGHT_AMBIENT = 3,
	INVALID_G3DLIGHTTYPE = 2147483647,
	G3DLIGHTTYPE_FORCE_DWORD = 2147483647
} G3DLIGHTTYPE;


struct G3DLIGHT { 
 sceVu0FVECTOR vDiffuse;
 sceVu0FVECTOR vSpecular;
 sceVu0FVECTOR vAmbient;
 sceVu0FVECTOR vPosition;
 sceVu0FVECTOR vDirection;
 G3DLIGHTTYPE Type;
 float fAngleInside;
 float fAngleOutside;
 float fMaxRange;
 float fMinRange;
 float fFalloff;
 float afPad0[2];
};


struct G3DLIGHT { 
 float vDiffuse[4];
 float vSpecular[4];
 float vAmbient[4];
 float vPosition[4];
 float vDirection[4];
 G3DLIGHTTYPE Type;
 float fAngleInside;
 float fAngleOutside;
 float fMaxRange;
 float fMinRange;
 float fFalloff;
 float afPad0[2];
};

typedef enum {
	G3DRS_LIGHTING = 0,
	G3DRS_COLORVERTEX = 1,
	G3DRS_SPECULARENABLE = 2,
	G3DRS_DIFFUSEMATERIALSOURCE = 3,
	G3DRS_SPECULARMATERIALSOURCE = 4,
	G3DRS_AMBIENTMATERIALSOURCE = 5,
	G3DRS_EMISSIVEMATERIALSOURCE = 6,
	G3DRS_FOGCOLOR = 7,
	NUM_G3DRENDERSTATETYPE = 8,
	G3DRENDERSTATE_FORCE_DWORD = 2147483647
} G3DRENDERSTATETYPE;

typedef enum {
	G3DGS_LIGHTATTENUATIONTYPE = 0,
	G3DGS_LIGHTINGTYPE = 1,
	NUM_G3DGLOBALSTATETYPE = 2,
	G3DGLOBALSTATE_FORCE_DWORD = 2147483647
} G3DGLOBALSTATETYPE;

typedef enum {
	G3DMCS_MATERIAL = 0,
	G3DMCS_COLOR1 = 1,
	G3DMCS_COLOR2 = 2,
	G3DMCS_FORCE_DWORD = 2147483647
} G3DMATERIALCOLORSOURCE;

typedef enum {
	G3DLAT_LINEAR = 0,
	G3DLAT_HYPERBOLIC = 1,
	G3DLAT_FORCE_DWORD = 2147483647
} G3DLIGHTATTENUATIONTYPE;

typedef enum {
	G3DLT_CONSTANT = 0,
	G3DLT_LAMBERT = 1,
	G3DLT_PHONG = 2,
	NUM_G3DLIGHTINGTYPE = 3,
	G3DLIGHTINGTYPE_FORCE_DWORD = 2147483647
} G3DLIGHTINGTYPE;

typedef enum {
	G3DLIDX_DIRECTIONAL_0 = 0,
	G3DLIDX_DIRECTIONAL_1 = 1,
	G3DLIDX_DIRECTIONAL_2 = 2,
	G3DLIDX_POINT_0 = 3,
	G3DLIDX_POINT_1 = 4,
	G3DLIDX_POINT_2 = 5,
	G3DLIDX_SPOT_0 = 6,
	G3DLIDX_SPOT_1 = 7,
	G3DLIDX_SPOT_2 = 8,
	NUM_G3DLIGHTINDEX = 9,
	G3D_START_LIGHT_DIRECTIONAL = 0,
	G3D_END_LIGHT_DIRECTIONAL = 2,
	G3D_NUM_LIGHT_DIRECTIONAL = 3,
	G3D_START_LIGHT_POINT = 3,
	G3D_END_LIGHT_POINT = 5,
	G3D_NUM_LIGHT_POINT = 3,
	G3D_START_LIGHT_SPOT = 6,
	G3D_END_LIGHT_SPOT = 8,
	G3D_NUM_LIGHT_SPOT = 3,
	G3D_MAX_LIGHT_PER_TYPE = 3,
	INVALID_G3DLIGHTINDEX = 2147483647,
	G3DLIGHTINDEX_FORCE_DWORD = 2147483647
} G3DLIGHTINDEX;

struct G3DSCREEN { 
 float fWidth;
 float fHeight;
 float fDistance;
 float fDepth;
};

struct G3DWINDOW { 
 float fAspectX;
 float fAspectY;
 float fCenterX;
 float fCenterY;
};

struct G3DDEPTH { 
 float fZmax;
 float fZmin;
 float fNearZ;
 float fFarZ;
};

struct G3DVIEWPORT { 
 float fX;
 float fY;
 float fWidth;
 float fHeight;
 float fMinZ;
 float fMaxZ;
};

typedef enum {
	PT_PERSPECTIVE = 0,
	PT_ORTHO = 1,
	NUM_G3DCAMPROJECTIONTYPE = 2,
	G3DCAMPROJECTIONTYPE_FORCE_DWORD = -1
} G3DCAMPROJECTIONTYPE;

typedef enum {
	G3DTS_VIEW = 0,
	G3DTS_PROJECTION = 1,
	G3DTS_WORLD = 2,
	G3DTS_WORLD1 = 3,
	G3DTS_WORLDCLIP = 4,
	NUM_G3DTRANSFORMSTATETYPE = 5,
	G3DTS_FORCE_DWORD = 2147483647
} G3DTRANSFORMSTATETYPE;

struct G3DFOG { 
 float fMin;
 float fMax;
 float fNear;
 float fFar;
};

struct G3DFPOINT { 
 float fX;
 float fY;
};

struct G3DSIZE { 
 float fWidth;
 float fHeight;
};

struct G3DFRECT { 
 float fLeft;
 float fTop;
 float fRight;
 float fBottom;
};

struct G3DFREGION { 
 float fLeft;
 float fTop;
 float fWidth;
 float fHeight;
};

union G3DINTFLOAT { 
 int i;
 float f;
};

union __dmath { 
 __uint32_t i[2];
 double d;
};

struct __exception { 
 int type;
 char *name;
 double arg1;
 double arg2;
 double retval;
 int err;
};


typedef enum {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
} __fdlibm_version;


enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};

typedef signed char _G_int8_t;
typedef unsigned char _G_uint8_t;
typedef short int _G_int16_t;
typedef short unsigned int _G_uint16_t;
typedef int _G_int32_t;
typedef unsigned int _G_uint32_t;
typedef long int _G_int64_t;
typedef long unsigned int _G_uint64_t;
typedef long long int _G_llong;
typedef long long unsigned int _G_ullong;
typedef long unsigned int _G_clock_t;
typedef short int _G_dev_t;
typedef long int _G_fpos_t;
typedef short unsigned int _G_gid_t;
typedef short unsigned int _G_ino_t;
typedef int _G_mode_t;
typedef short unsigned int _G_nlink_t;
typedef long int _G_off_t;
typedef int _G_pid_t;
typedef int _G_ptrdiff_t;
typedef long unsigned int _G_sigset_t;
typedef unsigned int _G_size_t;
typedef long int _G_time_t;
typedef short unsigned int _G_uid_t;
typedef int _G_wchar_t;
typedef long int _G_ssize_t;
typedef int _G_wint_t;
typedef void *_G_va_list;

typedef struct { 
 int quot;
 int rem;
} div_t;

typedef struct { 
 long int quot;
 long int rem;
} ldiv_t;

typedef void (*terminate_handler)(/* parameters unknown */);
typedef void (*unexpected_handler)(/* parameters unknown */);
typedef void (*new_handler)(/* parameters unknown */);

typedef struct _IO_marker;
typedef struct _IO_FILE;

struct _IO_marker { 
 _IO_marker *_next;
 _IO_FILE *_sbuf;
 int _pos;
};

struct _IO_FILE { 
 int _flags;
 char *_IO_read_ptr;
 char *_IO_read_end;
 char *_IO_read_base;
 char *_IO_write_base;
 char *_IO_write_ptr;
 char *_IO_write_end;
 char *_IO_buf_base;
 char *_IO_buf_end;
 char *_IO_save_base;
 char *_IO_backup_base;
 char *_IO_save_end;
 _IO_marker *_markers;
 _IO_FILE *_chain;
 int _fileno;
 int _blksize;
 _G_off_t _offset;
 short unsigned int _cur_column;
 char _unused;
 char _shortbuf[1];
};

typedef struct { 
 _G_ssize_t (*read)(/* parameters unknown */);
 _G_ssize_t (*write)(/* parameters unknown */);
 _G_off_t (*seek)(/* parameters unknown */);
 int (*close)(/* parameters unknown */);
} _IO_cookie_io_functions_t;

struct _IO_cookie_file { 
 _IO_FILE file;
 void *vtable;
 void *cookie;
 _IO_cookie_io_functions_t io_functions;
};

typedef _G_off_t streamoff;
typedef _G_off_t streampos;
typedef _G_ssize_t streamsize;
typedef long unsigned int __fmtflags;
typedef unsigned char __iostate;

typedef enum {
	goodbit = 0,
	eofbit = 1,
	failbit = 2,
	badbit = 4
} io_state;

typedef enum {
	in = 1,
	out = 2,
	ate = 4,
	app = 8,
	trunc = 16,
	nocreate = 32,
	noreplace = 64,
	bin = 128,
	binary = 128
} open_mode;

typedef enum {
	beg = 0,
	cur = 1,
	end = 2
} seek_dir;

struct _G3DLINEINFO { 
 char *pFileName;
 int iLine;
 char *pFunctionName;
 char *pExpression;
};

struct XVECTOR { 
 float x;
 float y;
 float z;
 float w;

};

struct XMATRIX { 
 union { 
	 struct { 
		 float __11;
		 float __12;
		 float __13;
		 float __14;
		 float __21;
		 float __22;
		 float __23;
		 float __24;
		 float __31;
		 float __32;
		 float __33;
		 float __34;
		 float __41;
		 float __42;
		 float __43;
		 float __44;
		};
	 float m[4][4];
	};

};

struct G3D_EMULATE_DIRECTIONALLIGHT_DATA { 
 XVECTOR vDiffuse;
 XVECTOR vDirection;
 float fLength;
 int aiPad[3];
};

struct LIGHTCOMPAREDATA { 
 float fPower;
 G3DLIGHT *pLight;
 int iIndex;
};

typedef enum {
	SPTR_D1_START = 0,
	SPTR_D2_START = 1,
	SPTR_VIF1_ACTIVE = 2,
	SPTR_VU0_STAT = 3,
	SPTR_GIF_STAT = 4,
	SPTR_GS_CSR_FINISH = 5
} G3DGSSYNCPATHTIMEOUTREASON;

typedef void (*LPFUNC_ONDETECTPACKETDOESNOTTERMINATED)(/* parameters unknown */);
typedef void (*LPFUNC_VU0LOADMATRIX)(/* parameters unknown */);
typedef void (*LPFUNC_VU0APPLYMATRIXWITHOUTTRANS)(/* parameters unknown */);

struct CVu0Matrix { 
	static LPFUNC_VU0LOADMATRIX s_pFuncLoadMatrix;
	static LPFUNC_VU0APPLYMATRIXWITHOUTTRANS s_pFuncApplyMatrixWithoutTrans;
};

typedef enum {
	MA_VF01 = 1,
	MA_LWMATRIX0_0 = 2,
	MA_LWMATRIX0_1 = 3,
	MA_LWMATRIX0_2 = 4,
	MA_LWMATRIX0_3 = 5,
	MA_LWMATRIX1_0 = 6,
	MA_LWMATRIX1_1 = 7,
	MA_LWMATRIX1_2 = 8,
	MA_LWMATRIX1_3 = 9,
	MA_CAMERAMATRIX0 = 10,
	MA_CAMERAMATRIX1 = 11,
	MA_CAMERAMATRIX2 = 12,
	MA_CAMERAMATRIX3 = 13,
	MA_WSMATRIX0 = 14,
	MA_WSMATRIX1 = 15,
	MA_WSMATRIX2 = 16,
	MA_WSMATRIX3 = 17,
	MA_WCMATRIX0 = 18,
	MA_WCMATRIX1 = 19,
	MA_WCMATRIX2 = 20,
	MA_WCMATRIX3 = 21,
	MA_VERTEX = 22,
	MA_NORMAL = 23,
	MA_DIRCOLAMB0 = 24,
	MA_DIRCOLAMB1 = 25,
	MA_DIRCOLAMB2 = 26,
	MA_DIRCOLDIF0 = 27,
	MA_DIRCOLDIF1 = 28,
	MA_DIRCOLDIF2 = 29,
	MA_DIRCOLSPC0 = 30,
	MA_DIRCOLSPC1 = 31,
	MA_DIRCOLSPC2 = 32,
	MA_POINTCOLAMB0 = 33,
	MA_POINTCOLAMB1 = 34,
	MA_POINTCOLAMB2 = 35,
	MA_POINTCOLDIF0 = 36,
	MA_POINTCOLDIF1 = 37,
	MA_POINTCOLDIF2 = 38,
	MA_POINTCOLSPC0 = 39,
	MA_POINTCOLSPC1 = 40,
	MA_POINTCOLSPC2 = 41,
	MA_SPOTCOLAMB0 = 42,
	MA_SPOTCOLAMB1 = 43,
	MA_SPOTCOLAMB2 = 44,
	MA_SPOTCOLDIF0 = 45,
	MA_SPOTCOLDIF1 = 46,
	MA_SPOTCOLDIF2 = 47,
	MA_SPOTCOLSPC0 = 48,
	MA_SPOTCOLSPC1 = 49,
	MA_SPOTCOLSPC2 = 50,
	MA_LIGHTSTATUS = 51,
	MA_DIRDIR0 = 52,
	MA_DIRDIR1 = 53,
	MA_DIRDIR2 = 54,
	MA_POINTPOS0 = 55,
	MA_POINTPOS1 = 56,
	MA_POINTPOS2 = 57,
	MA_POINTMAXRANGE = 58,
	MA_POINTMAXMININVRANGE = 59,
	MA_SPOTPOS0 = 60,
	MA_SPOTPOS1 = 61,
	MA_SPOTPOS2 = 62,
	MA_SPOTDIR0 = 63,
	MA_SPOTDIR1 = 64,
	MA_SPOTDIR2 = 65,
	MA_SPOTMAXRANGE = 66,
	MA_SPOTMAXMININVRANGE = 67,
	MA_SPOTCOSOUT = 68,
	MA_SPOTCOSINOUTINV = 69,
	MA_MATERIALAMB = 70,
	MA_MATERIALDIF = 71,
	MA_MATERIALSPC = 72,
	MA_MATERIALEMI = 73,
	MA_MATERIALALPHA = 74,
	MA_GLOBALAMBIENT = 75,
	MA_TEMP = 76
} G3DVU1MEMADDRESS;


struct G3DVU1DIRECTIONALLIGHT { 
 float avDirection[3][4];
};


struct G3DVU1DIRECTIONALLIGHT { 
 sceVu0FVECTOR avDirection[3];
};


struct G3DVU1POINTLIGHT { 
 float avPosition[3][4];
 float vMaxRange[4];
 float vMax_Min_InverseRange[4];
};


struct G3DVU1POINTLIGHT { 
 sceVu0FVECTOR avPosition[3];
 sceVu0FVECTOR vMaxRange;
 sceVu0FVECTOR vMax_Min_InverseRange;
};


struct G3DVU1SPOTLIGHT { 
 float avPosition[3][4];
 float avDirection[3][4];
 float vMaxRange[4];
 float vMax_Min_InverseRange[4];
 float vCosOutside[4];
 float vCosIn_Out_Inverse[4];
};


struct G3DVU1SPOTLIGHT { 
 sceVu0FVECTOR avPosition[3];
 sceVu0FVECTOR avDirection[3];
 sceVu0FVECTOR vMaxRange;
 sceVu0FVECTOR vMax_Min_InverseRange;
 sceVu0FVECTOR vCosOutside;
 sceVu0FVECTOR vCosIn_Out_Inverse;
};


struct G3DVU1COLOR_DIRECTIONAL { 
 float avAmbient[3][4];
 float avDiffuse[3][4];
 float avSpecular[3][4];
};


struct G3DVU1COLOR_DIRECTIONAL { 
 sceVu0FVECTOR avAmbient[3];
 sceVu0FVECTOR avDiffuse[3];
 sceVu0FVECTOR avSpecular[3];
};


struct G3DVU1COLOR_POINT { 
 float avAmbient[3][4];
 float avDiffuse[3][4];
 float avSpecular[3][4];
};


struct G3DVU1COLOR_POINT { 
 sceVu0FVECTOR avAmbient[3];
 sceVu0FVECTOR avDiffuse[3];
 sceVu0FVECTOR avSpecular[3];
};


struct G3DVU1COLOR_SPOT { 
 float avAmbient[3][4];
 float avDiffuse[3][4];
 float avSpecular[3][4];
};


struct G3DVU1COLOR_SPOT { 
 sceVu0FVECTOR avAmbient[3];
 sceVu0FVECTOR avDiffuse[3];
 sceVu0FVECTOR avSpecular[3];
};

struct G3DVU1COLOR { 
 G3DVU1COLOR_DIRECTIONAL dir;
 G3DVU1COLOR_POINT point;
 G3DVU1COLOR_SPOT spot;
};


struct G3DVU1COLOR_PHONG { 
 float avAmbient[3][4];
 float avDiffuse[3][4];
 float avSpecular[3][4];
};


struct G3DVU1COLOR_PHONG { 
 sceVu0FVECTOR avAmbient[3];
 sceVu0FVECTOR avDiffuse[3];
 sceVu0FVECTOR avSpecular[3];
};


struct G3DVU1COLOR_LAMBERT { 
 float avAmbient[3][4];
 float avDiffuse[3][4];
};


struct G3DVU1COLOR_LAMBERT { 
 sceVu0FVECTOR avAmbient[3];
 sceVu0FVECTOR avDiffuse[3];
};


struct G3DVU1COLOR_CONSTANT { 
 float avAmbient[3][4];
};


struct G3DVU1COLOR_CONSTANT { 
 sceVu0FVECTOR avAmbient[3];
};


struct G3DVU1CALCULATED { 
 float vAmbient[4];
 float vMisc[4];
};


struct G3DVU1CALCULATED { 
 sceVu0FVECTOR vAmbient;
 sceVu0FVECTOR vMisc;
};


struct G3DVU1CONSTANT { 
 float v0001[4];
 float v1111[4];
};


struct G3DVU1CONSTANT { 
 sceVu0FVECTOR v0001;
 sceVu0FVECTOR v1111;
};

struct G3DVU1FOG { 
 float fMin;
 float fMax;
 float FA;
 float FB;
};


struct G3DVU1GLOBAL { 
 float vAmbient[4];
 float vTemp[4];
 sceVu0IVECTOR ivFogColor;
 G3DVU1FOG Fog;
 sceGifTag gtPrimitve;
 sceGifTag gtVertexBuffer;
};


struct G3DVU1GLOBAL { 
 sceVu0FVECTOR vAmbient;
 sceVu0FVECTOR vTemp;
 sceVu0IVECTOR ivFogColor;
 G3DVU1FOG Fog;
 sceGifTag gtPrimitve;
 sceGifTag gtVertexBuffer;
};


struct G3DVU1TRANSFORM { 
 float matLocalWorld[4][4];
 float matLocalWorld1[4][4];
 float matCamera[4][4];
 float matWorldScreen[4][4];
 float matWorldClip[4][4];
 float vVertex[4];
 float vNormal[4];
};


struct G3DVU1TRANSFORM { 
 sceVu0FMATRIX matLocalWorld;
 sceVu0FMATRIX matLocalWorld1;
 sceVu0FMATRIX matCamera;
 sceVu0FMATRIX matWorldScreen;
 sceVu0FMATRIX matWorldClip;
 sceVu0FVECTOR vVertex;
 sceVu0FVECTOR vNormal;
};

struct G3DVU1LIGHTACTIVITYSTATUS { 
 unsigned int uiEnableDir0 : 1;
 unsigned int uiEnableDir1 : 1;
 unsigned int uiEnableDir2 : 1;
 unsigned int _uiPad0 : 1;
 unsigned int uiEnablePoint0 : 1;
 unsigned int uiEnablePoint1 : 1;
 unsigned int uiEnablePoint2 : 1;
 unsigned int _uiPad1 : 1;
 unsigned int uiEnableSpot0 : 1;
 unsigned int uiEnableSpot1 : 1;
 unsigned int uiEnableSpot2 : 1;
 unsigned int _uiPad2 : 1;
 unsigned int _uiPad : 4;
};

struct G3DVU1LIGHTSTATUS { 
 unsigned int auiPad[2];
 union { 
	 G3DVU1LIGHTACTIVITYSTATUS as;
	 long int lAS;
	};
};

struct G3DVU1LIGHT { 
 G3DVU1LIGHTSTATUS status;
 G3DVU1DIRECTIONALLIGHT dir;
 G3DVU1POINTLIGHT point;
 G3DVU1SPOTLIGHT spot;
};


struct G3DVU1MEMLAYOUT_DIRECT { 
 float v0001[4];
 float v1111[4];
 float matLocalWorld[4][4];
 float matLocalWorld1[4][4];
 float matCamera[4][4];
 float matWorldScreen[4][4];
 float matWorldClip[4][4];
 float vVertex[4];
 float vNormal[4];
 float avAmbientDirectional[3][4];
 float avDiffuseDirectional[3][4];
 float avSpecularDirectional[3][4];
 float avAmbientPoint[3][4];
 float avDiffusePoint[3][4];
 float avSpecularPoint[3][4];
 float avAmbientSpot[3][4];
 float avDiffuseSpot[3][4];
 float avSpecularSpot[3][4];
 G3DVU1LIGHTSTATUS lightstatus;
 float avDirectionDirectional[3][4];
 float avPositionPoint[3][4];
 float vMaxRangePoint[4];
 float vMax_Min_RangeInversePoint[4];
 float avPositionSpot[3][4];
 float avDirectionSpot[3][4];
 float vMaxRangeSpot[4];
 float vMax_Min_RangeInverseSpot[4];
 float vCosOutsideSpot[4];
 float vCosIn_Out_InverseSpot[4];
 float vAmbientMaterial[4];
 float vDiffuseMaterial[4];
 float vSpecularMaterial[4];
 float vEmissiveMaterial[4];
 float vAlphaMaterial[4];
 float vAmbientGlobal[4];
 float vTemp[4];
 sceVu0IVECTOR ivFogColor;
 G3DVU1FOG Fog;
 sceGifTag gtPrimitve;
 sceGifTag gtVertexBuffer;
 float vAmbientCalculated[4];
 float vMisc[4];
 float avAmbientDirectionalOrigin[3][4];
 float avDiffuseDirectionalOrigin[3][4];
 float avSpecularDirectionalOrigin[3][4];
 float avAmbientPointOrigin[3][4];
 float avDiffusePointOrigin[3][4];
 float avSpecularPointOrigin[3][4];
 float avAmbientSpotOrigin[3][4];
 float avDiffuseSpotOrigin[3][4];
 float avSpecularSpotOrigin[3][4];
};


struct G3DVU1MEMLAYOUT_DIRECT { 
 sceVu0FVECTOR v0001;
 sceVu0FVECTOR v1111;
 sceVu0FMATRIX matLocalWorld;
 sceVu0FMATRIX matLocalWorld1;
 sceVu0FMATRIX matCamera;
 sceVu0FMATRIX matWorldScreen;
 sceVu0FMATRIX matWorldClip;
 sceVu0FVECTOR vVertex;
 sceVu0FVECTOR vNormal;
 sceVu0FVECTOR avAmbientDirectional[3];
 sceVu0FVECTOR avDiffuseDirectional[3];
 sceVu0FVECTOR avSpecularDirectional[3];
 sceVu0FVECTOR avAmbientPoint[3];
 sceVu0FVECTOR avDiffusePoint[3];
 sceVu0FVECTOR avSpecularPoint[3];
 sceVu0FVECTOR avAmbientSpot[3];
 sceVu0FVECTOR avDiffuseSpot[3];
 sceVu0FVECTOR avSpecularSpot[3];
 G3DVU1LIGHTSTATUS lightstatus;
 sceVu0FVECTOR avDirectionDirectional[3];
 sceVu0FVECTOR avPositionPoint[3];
 sceVu0FVECTOR vMaxRangePoint;
 sceVu0FVECTOR vMax_Min_RangeInversePoint;
 sceVu0FVECTOR avPositionSpot[3];
 sceVu0FVECTOR avDirectionSpot[3];
 sceVu0FVECTOR vMaxRangeSpot;
 sceVu0FVECTOR vMax_Min_RangeInverseSpot;
 sceVu0FVECTOR vCosOutsideSpot;
 sceVu0FVECTOR vCosIn_Out_InverseSpot;
 sceVu0FVECTOR vAmbientMaterial;
 sceVu0FVECTOR vDiffuseMaterial;
 sceVu0FVECTOR vSpecularMaterial;
 sceVu0FVECTOR vEmissiveMaterial;
 sceVu0FVECTOR vAlphaMaterial;
 sceVu0FVECTOR vAmbientGlobal;
 sceVu0FVECTOR vTemp;
 sceVu0IVECTOR ivFogColor;
 G3DVU1FOG Fog;
 sceGifTag gtPrimitve;
 sceGifTag gtVertexBuffer;
 sceVu0FVECTOR vAmbientCalculated;
 sceVu0FVECTOR vMisc;
 sceVu0FVECTOR avAmbientDirectionalOrigin[3];
 sceVu0FVECTOR avDiffuseDirectionalOrigin[3];
 sceVu0FVECTOR avSpecularDirectionalOrigin[3];
 sceVu0FVECTOR avAmbientPointOrigin[3];
 sceVu0FVECTOR avDiffusePointOrigin[3];
 sceVu0FVECTOR avSpecularPointOrigin[3];
 sceVu0FVECTOR avAmbientSpotOrigin[3];
 sceVu0FVECTOR avDiffuseSpotOrigin[3];
 sceVu0FVECTOR avSpecularSpotOrigin[3];
};

struct G3DVU1MEMLAYOUT_PACKED { 
 G3DVU1CONSTANT Constant;
 G3DVU1TRANSFORM Transform;
 G3DVU1COLOR Color;
 G3DVU1LIGHT Light;
 G3DMATERIAL Material;
 G3DVU1GLOBAL Global;
 G3DVU1CALCULATED Calc;
 G3DVU1COLOR ColorOrigin;
};

union G3DVU1MEMLAYOUT { 
 G3DVU1MEMLAYOUT_PACKED Packed;
 G3DVU1MEMLAYOUT_DIRECT Direct;
};

typedef enum {
	LID_DIRECTIONAL_0 = 0,
	LID_DIRECTIONAL_1 = 1,
	LID_DIRECTIONAL_2 = 2,
	LID_POINT_0 = 3,
	LID_POINT_1 = 4,
	LID_POINT_2 = 5,
	LID_POINT_3 = 6,
	LID_POINT_4 = 7,
	LID_POINT_5 = 8,
	LID_POINT_6 = 9,
	LID_POINT_7 = 10,
	LID_POINT_8 = 11,
	LID_POINT_9 = 12,
	LID_POINT_10 = 13,
	LID_POINT_11 = 14,
	LID_POINT_12 = 15,
	LID_POINT_13 = 16,
	LID_POINT_14 = 17,
	LID_POINT_15 = 18,
	LID_POINT_FLASHLIGHT_0 = 19,
	LID_POINT_FLASHLIGHT_1 = 20,
	LID_POINT_SELFREFLECTION = 21,
	LID_SPOT_0 = 22,
	LID_SPOT_1 = 23,
	LID_SPOT_2 = 24,
	LID_SPOT_3 = 25,
	LID_SPOT_4 = 26,
	LID_SPOT_5 = 27,
	LID_SPOT_6 = 28,
	LID_SPOT_7 = 29,
	LID_SPOT_8 = 30,
	LID_SPOT_9 = 31,
	LID_SPOT_10 = 32,
	LID_SPOT_11 = 33,
	LID_SPOT_12 = 34,
	LID_SPOT_13 = 35,
	LID_SPOT_14 = 36,
	LID_SPOT_15 = 37,
	LID_SPOT_FLASHLIGHT = 38,
	NUM_GRA3DLIGHTID = 39,
	GRA3D_START_LIGHT_DIRECTIONAL = 0,
	GRA3D_END_LIGHT_DIRECTIONAL = 2,
	GRA3D_NUM_LIGHT_DIRECTIONAL = 3,
	GRA3D_START_LIGHT_POINT = 3,
	GRA3D_END_LIGHT_POINT = 21,
	GRA3D_NUM_LIGHT_POINT = 19,
	GRA3D_NUM_LIGHT_POINT_STATIC = 16,
	GRA3D_START_LIGHT_SPOT = 22,
	GRA3D_END_LIGHT_SPOT = 38,
	GRA3D_NUM_LIGHT_SPOT = 17,
	GRA3D_NUM_LIGHT_SPOT_STATIC = 16,
	INVALID_GRA3DLIGHTID = 2147483647,
	GRA3DLIGHTID_FORCE_DWORD = 2147483647
} GRA3DLIGHTID;

struct GRA3DCAMERA { 
 float fFov;
 float fNearZ;
 float fFarZ;
 float fAspectX;
 float fAspectY;
 float fCenterX;
 float fCenterY;
 float fZmin;
 float fZmax;
 G3DCAMPROJECTIONTYPE type;
 int aiPad[2];
 float vTarget[4];
 float vPositionOld[4];
 float vTargetOld[4];
 float matViewClipPolygon[4][4];
 float matViewClipObject[4][4];
 float matWorldScreen[4][4];
 float matWorldClipPolygon[4][4];
 float matWorldClipObject[4][4];
 float matCoord[4][4];
};

typedef float LMATRIX[3][4];

struct TextureAnimation { 
 u_char TexNum;
 u_char pads;
 u_char AnmON;
 u_char AnmStep;
 u_char AnmCnt;
 u_char AnmLoop;
};

struct ModelGroup { 
 short int GroupNo;
 short int Num;
 short int Lists[1];
};

struct GRA3DMATERIALINDEXCACHE { 
 int bEnable;
 int aiIndex[3];
};

struct CoordCache { 
 int cache_on;
 int edge_check;
 int cn0;
 GRA3DMATERIALINDEXCACHE Point;
 GRA3DMATERIALINDEXCACHE Spot;
};

struct GRA3DLIGHTSTATUS { 
 int bEnable;
 int bEnableToChar;
 int bEnableToShadow;
 int bEmulateToDirectionalLight;
};

struct GRA3DLIGHTDATA { 
 float vAmbient[4];
 G3DLIGHT aLight[39];
 GRA3DLIGHTSTATUS aStatus[39];
 int aiNumInitial[3];
 int aiPad[1];
};

struct ZERO2LIGHTDATAFILE { 
 int iSignature;
 int iSizeOfThisFile;
 int aiPad[2];
 char astrLightName[39][32];
 GRA3DLIGHTDATA LD;
};

typedef enum {
	GRA3DTS_VIEW = 0,
	GRA3DTS_PROJECTION = 1,
	GRA3DTS_WORLD = 2,
	GRA3DTS_WORLD1 = 3,
	GRA3DTS_WORLDCLIP = 4,
	GRA3DTS_WORLDSCREEN = 5,
	NUM_GRA3DTRANSFORMSTATETYPE = 6,
	GRA3DTS_FORCE_DWORD = 2147483647
} GRA3DTRANSFORMSTATETYPE;

typedef enum {
	GRA3DVU1MEM_TOP = 0,
	GRA3DVU1MEM_VF01 = 0,
	GRA3DVU1MEM_VF02 = 1,
	GRA3DVU1MEM_DBADDRESS = 2,
	GRA3DVU1MEM_GTTRISTRIP_NOTEX = 3,
	GRA3DVU1MEM_GTTRISTRIP_TEX = 4,
	GRA3DVU1MEM_GTEOP = 5,
	GRA3DVU1MEM_GTTRIFAN_NOTEX = 6,
	GRA3DVU1MEM_GTTRIFAN_TEX = 7,
	GRA3DVU1MEM_WSMATRIX0 = 8,
	GRA3DVU1MEM_WSMATRIX1 = 9,
	GRA3DVU1MEM_WSMATRIX2 = 10,
	GRA3DVU1MEM_WSMATRIX3 = 11,
	GRA3DVU1MEM_WCMATRIX0 = 12,
	GRA3DVU1MEM_WCMATRIX1 = 13,
	GRA3DVU1MEM_WCMATRIX2 = 14,
	GRA3DVU1MEM_WCMATRIX3 = 15,
	GRA3DVU1MEM_LWMATRIX0 = 16,
	GRA3DVU1MEM_LWMATRIX1 = 17,
	GRA3DVU1MEM_LWMATRIX2 = 18,
	GRA3DVU1MEM_LWMATRIX3 = 19,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED0 = 20,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED1 = 21,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED2 = 22,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED3 = 23,
	GRA3DVU1MEM_FOG = 24,
	GRA3DVU1MEM_DIRLIGHTDIF0 = 25,
	GRA3DVU1MEM_DIRLIGHTDIF1 = 26,
	GRA3DVU1MEM_DIRLIGHTDIF2 = 27,
	GRA3DVU1MEM_DIRLIGHTSPC0 = 28,
	GRA3DVU1MEM_DIRLIGHTSPC1 = 29,
	GRA3DVU1MEM_DIRLIGHTSPC2 = 30,
	GRA3DVU1MEM_SPOTPOS0 = 31,
	GRA3DVU1MEM_SPOTPOS1 = 32,
	GRA3DVU1MEM_SPOTPOS2 = 33,
	GRA3DVU1MEM_SPOTINTENS = 34,
	GRA3DVU1MEM_SPOTINTENSB = 35,
	GRA3DVU1MEM_SPOTLIGHTDIF0 = 36,
	GRA3DVU1MEM_SPOTLIGHTDIF1 = 37,
	GRA3DVU1MEM_SPOTLIGHTDIF2 = 38,
	GRA3DVU1MEM_SPOTLIGHTSPC0 = 39,
	GRA3DVU1MEM_SPOTLIGHTSPC1 = 40,
	GRA3DVU1MEM_SPOTLIGHTSPC2 = 41,
	GRA3DVU1MEM_POINTPOS0 = 42,
	GRA3DVU1MEM_POINTPOS1 = 43,
	GRA3DVU1MEM_POINTPOS2 = 44,
	GRA3DVU1MEM_EYEVECTOR = 45,
	GRA3DVU1MEM_GLOBALAMBIENT = 46,
	GRA3DVU1MEM_DIRCOLDIF0 = 47,
	GRA3DVU1MEM_DIRCOLDIF1 = 48,
	GRA3DVU1MEM_DIRCOLDIF2 = 49,
	GRA3DVU1MEM_DIRCOLSPC0 = 50,
	GRA3DVU1MEM_DIRCOLSPC1 = 51,
	GRA3DVU1MEM_DIRCOLSPC2 = 52,
	GRA3DVU1MEM_SPOTBTIMES = 53,
	GRA3DVU1MEM_SPOTCOLDIF0 = 54,
	GRA3DVU1MEM_SPOTCOLDIF1 = 55,
	GRA3DVU1MEM_SPOTCOLDIF2 = 56,
	GRA3DVU1MEM_SPOTCOLSPC0 = 57,
	GRA3DVU1MEM_SPOTCOLSPC1 = 58,
	GRA3DVU1MEM_SPOTCOLSPC2 = 59,
	GRA3DVU1MEM_POINTBTIMES = 60,
	GRA3DVU1MEM_POINTCOLDIF0 = 61,
	GRA3DVU1MEM_POINTCOLDIF1 = 62,
	GRA3DVU1MEM_POINTCOLDIF2 = 63,
	GRA3DVU1MEM_POINTCOLSPC0 = 64,
	GRA3DVU1MEM_POINTCOLSPC1 = 65,
	GRA3DVU1MEM_POINTCOLSPC2 = 66,
	GRA3DVU1MEM_COORDMATRIX0 = 67,
	GRA3DVU1MEM_COORDMATRIX1 = 68,
	GRA3DVU1MEM_COORDMATRIX2 = 69,
	GRA3DVU1MEM_COORDMATRIX3 = 70,
	GRA3DVU1MEM_MAPSHADOW_VF01 = 0,
	GRA3DVU1MEM_MAPSHADOW_VF02 = 1,
	GRA3DVU1MEM_MAPSHADOW_DBADDRESS = 2,
	GRA3DVU1MEM_MAPSHADOW_OFFSETDATA = 3,
	GRA3DVU1MEM_MAPSHADOW_GTTRISTRIP = 4,
	GRA3DVU1MEM_MAPSHADOW_GTTRIFAN = 5,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX0 = 8,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX1 = 9,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX2 = 10,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX3 = 11,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX0 = 12,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX1 = 13,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX2 = 14,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX3 = 15,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX0 = 19,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX1 = 20,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX2 = 21,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX3 = 22,
	GRA3DVU1MEM_MAPSHADOW_SHADOWCOLOR = 23,
	GRA3DVU1MEM_MAPSHADOW_FOGDATA = 24,
	GRA3DVU1MEM_DBBASE = 96,
	GRA3DVU1MEM_DBEND = 1024
} GRA3DVU1MEMADDRESS;


struct GRA3DVU1LIGHTDATA_DIRECTIONAL { 
 LMATRIX lmDiffuse;
 LMATRIX lmSpecular;
};


struct GRA3DVU1LIGHTDATA_DIRECTIONAL { 
 float lmDiffuse[3][4];
 float lmSpecular[3][4];
};


struct GRA3DVU1LIGHTDATA_POINT { 
 LMATRIX lmPosition;
 float _vDirectionInverse[4];
};


struct GRA3DVU1LIGHTDATA_POINT { 
 float lmPosition[3][4];
 float _vDirectionInverse[4];
};


struct GRA3DVU1LIGHTDATA_SPOT { 
 LMATRIX lmPosition;
 float vIntens[4];
 float vIntensB[4];
 LMATRIX lmDirection;
 LMATRIX lmSpecular;
};


struct GRA3DVU1LIGHTDATA_SPOT { 
 float lmPosition[3][4];
 float vIntens[4];
 float vIntensB[4];
 float lmDirection[3][4];
 float lmSpecular[3][4];
};

struct GRA3DVU1LIGHTDATA { 
 GRA3DVU1LIGHTDATA_DIRECTIONAL dir;
 GRA3DVU1LIGHTDATA_SPOT spot;
 GRA3DVU1LIGHTDATA_POINT point;
};


struct GRA3DVU1MATERIALDATA_POINT { 
 float vPower[4];
 LMATRIX lmDiffuse;
 LMATRIX lmSpecular;
};


struct GRA3DVU1MATERIALDATA_POINT { 
 float vPower[4];
 float lmDiffuse[3][4];
 float lmSpecular[3][4];
};


struct GRA3DVU1MATERIALDATA_SPOT { 
 float vPower[4];
 LMATRIX lmDiffuse;
 LMATRIX lmSpecular;
};


struct GRA3DVU1MATERIALDATA_SPOT { 
 float vPower[4];
 float lmDiffuse[3][4];
 float lmSpecular[3][4];
};


struct GRA3DVU1MATERIALDATA_DIRECTIONAL { 
 float vAmbient[4];
 LMATRIX lmDiffuse;
 LMATRIX lmSpecular;
};


struct GRA3DVU1MATERIALDATA_DIRECTIONAL { 
 float vAmbient[4];
 float lmDiffuse[3][4];
 float lmSpecular[3][4];
};

struct GRA3DVU1MATERIALCACHE_POINT { 
 GRA3DVU1MATERIALDATA_POINT Data;
 GRA3DMATERIALINDEXCACHE Index;
};

struct GRA3DVU1MATERIALCACHE_SPOT { 
 GRA3DVU1MATERIALDATA_SPOT Data;
 GRA3DMATERIALINDEXCACHE Index;
};

struct GRA3DVU1MATERIALDATA { 
 GRA3DVU1MATERIALDATA_DIRECTIONAL dir;
 GRA3DVU1MATERIALDATA_SPOT spot;
 GRA3DVU1MATERIALDATA_POINT point;
};

struct GRA3DVU1LIGHTPACKET { 
 qword qwVif1Code;
 GRA3DVU1LIGHTDATA Data;
};

struct GRA3DVU1MATERIALPACKET_DIRECTIONAL { 
 qword qwVif1Code;
 GRA3DVU1MATERIALDATA_DIRECTIONAL Data;
};

struct GRA3DVU1MATERIALPACKET_POINT { 
 qword qwVif1Code;
 GRA3DVU1MATERIALDATA_POINT Data;
};

struct GRA3DVU1MATERIALPACKET_SPOT { 
 qword qwVif1Code;
 GRA3DVU1MATERIALDATA_SPOT Data;
};

struct GRA3DVU1DBADDRESS { 
 unsigned int uiContext0;
 unsigned int uiContext1;
 unsigned int auiPad[2];
};

struct GRA3DVU1TRANSFORMDATA { 
 float matWorldScreen[4][4];
 float matWorldClip[4][4];
 float matLocalWorld[4][4];
 float matLocalWorldNoNormalized[4][4];
};

struct _LIGHT_POINT_AND_SPOT_NUM { 
 int iPad0;
 int iNumSpotGroup;
 int iNumPointGroup;
 int iPad1;
};

union SCEGIFTAG_EOP { 
 sceGifTag gtEOP;
 _LIGHT_POINT_AND_SPOT_NUM lightnum;
};

struct GRA3DVU1CONSTDATA { 
 float _vVF1[4];
 float _vVF2[4];
 GRA3DVU1DBADDRESS DBAddress;
 sceGifTag gtTRISTRIP_NOTEXTURE;
 sceGifTag gtTRISTRIP_TEXTURE;
 SCEGIFTAG_EOP gtEOP;
 sceGifTag gtTRIFAN_NOTEXTURE;
 sceGifTag gtTRIFAN_TEXTURE;
};


struct GRA3DVU1MEMLAYOUT_DIRECT { 
 float _vVF1[4];
 float _vVF2[4];
 GRA3DVU1DBADDRESS DBAddress;
 sceGifTag gtTRISTRIP_NOTEXTURE;
 sceGifTag gtTRISTRIP_TEXTURE;
 SCEGIFTAG_EOP gtEOP;
 sceGifTag gtTRIFAN_NOTEXTURE;
 sceGifTag gtTRIFAN_TEXTURE;
 float matWorldScreen[4][4];
 float matWorldClip[4][4];
 float matLocalWorld[4][4];
 float matLocalWorldNoNormalized[4][4];
 G3DVU1FOG Fog;
 LMATRIX lmatDiffuse_Directional;
 LMATRIX lmatSpecular_Directional;
 float vPosition_Spot0[4];
 float vPosition_Spot1[4];
 float vPosition_Spot2[4];
 float vIntension_Spot[4];
 float vIntensionB_Spot[4];
 LMATRIX lmatDiffuse_Spot;
 LMATRIX lmatSpecular_Spot;
 float vPosition_Point0[4];
 float vPosition_Point1[4];
 float vPosition_Point2[4];
 float _vEyeDirection_Point[4];
 float vAmbient_Directional[4];
 LMATRIX lmatDiffuse_Directional_Material;
 LMATRIX lmatSpecular_Directional_Material;
 float vBTimes_Spot[4];
 LMATRIX lmatDiffuse_Spot_Material;
 LMATRIX lmatSpecular_Spot_Material;
 float vBTimes_Point[4];
 LMATRIX lmatDiffuse_Point_Material;
 LMATRIX lmatSpecular_Point_Material;
};


struct GRA3DVU1MEMLAYOUT_DIRECT { 
 float _vVF1[4];
 float _vVF2[4];
 GRA3DVU1DBADDRESS DBAddress;
 sceGifTag gtTRISTRIP_NOTEXTURE;
 sceGifTag gtTRISTRIP_TEXTURE;
 SCEGIFTAG_EOP gtEOP;
 sceGifTag gtTRIFAN_NOTEXTURE;
 sceGifTag gtTRIFAN_TEXTURE;
 float matWorldScreen[4][4];
 float matWorldClip[4][4];
 float matLocalWorld[4][4];
 float matLocalWorldNoNormalized[4][4];
 G3DVU1FOG Fog;
 float lmatDiffuse_Directional[3][4];
 float lmatSpecular_Directional[3][4];
 float vPosition_Spot0[4];
 float vPosition_Spot1[4];
 float vPosition_Spot2[4];
 float vIntension_Spot[4];
 float vIntensionB_Spot[4];
 float lmatDiffuse_Spot[3][4];
 float lmatSpecular_Spot[3][4];
 float vPosition_Point0[4];
 float vPosition_Point1[4];
 float vPosition_Point2[4];
 float _vEyeDirection_Point[4];
 float vAmbient_Directional[4];
 float lmatDiffuse_Directional_Material[3][4];
 float lmatSpecular_Directional_Material[3][4];
 float vBTimes_Spot[4];
 float lmatDiffuse_Spot_Material[3][4];
 float lmatSpecular_Spot_Material[3][4];
 float vBTimes_Point[4];
 float lmatDiffuse_Point_Material[3][4];
 float lmatSpecular_Point_Material[3][4];
};

struct GRA3DVU1MEMLAYOUT_PACKED { 
 GRA3DVU1CONSTDATA Const;
 GRA3DVU1TRANSFORMDATA Transform;
 G3DVU1FOG Fog;
 GRA3DVU1LIGHTDATA Light;
 GRA3DVU1MATERIALDATA Material;
};

union GRA3DVU1MEMLAYOUT { 
 GRA3DVU1MEMLAYOUT_DIRECT Direct;
 GRA3DVU1MEMLAYOUT_PACKED Packed;
};

struct GRA3DVU1MEMLAYOUT_MAPSHADOW_DIRECT { 
 float _vf01[4];
 float _vf02[4];
 GRA3DVU1DBADDRESS DataAddress;
 float vOffsetData[4];
 sceGifTag gtTRISTRIP;
 sceGifTag gtTRIFAN;
 qword qw0x06;
 qword qw0x07;
 float matLocalScreen[4][4];
 float matLocalClip[4][4];
 qword qw0x10;
 qword qw0x11;
 qword qw0x12;
 float matLIP[4][4];
 sceVu0IVECTOR ivColor;
 G3DVU1FOG Fog;
};

union GRA3DVU1MEMLAYOUT_MAPSHADOW { 
 GRA3DVU1MEMLAYOUT_MAPSHADOW_DIRECT Direct;
};

typedef enum {
	VF_00 = 0,
	VF_01 = 1,
	VF_02 = 2,
	NUM_VFINDEX = 3,
	VFINDEX_FORCE_DWORD = 2147483647
} VFINDEX;

struct GRA3DEMULATIONLIGHTDATACREATIONDATA { 
 float vStaticDirLightColor[4];
 float fAngleScale;
 float fDiffuseScale;
 float fMaplightScale;
 int bEnableSelfreflection;
 int bEmulateSelfreflection;
 int bEnableFlashlight;
 int bEmulateFlashlight;
 int bEnableFlashlight2;
 int bEmulateFlashlight2;
 int bEnableStaticDirLight;
};

struct G3DVIF1CODE_STCYCLE { 
 unsigned int CL;
 unsigned int WL;
 unsigned int NUM;
 unsigned int CMD : 7;
 unsigned int irq : 1;
};

struct G3DVIF1CODE_OFFSET { 
 unsigned int OFFSET : 10;
 unsigned int __ : 6;
 unsigned int NUM;
 unsigned int CMD : 7;
 unsigned int irq : 1;
};

struct G3DVIF1CODE_BASE { 
 unsigned int BASE;
 unsigned int __;
 unsigned int NUM;
 unsigned int CMD : 7;
 unsigned int irq : 1;
};

struct G3DVIF1CODE_ITOP { 
 unsigned int ADDR;
 unsigned int __;
 unsigned int NUM;
 unsigned int CMD : 7;
 unsigned int irq : 1;
};

struct G3DVIF1CODE_STMOD { 
 unsigned int MODE : 2;
 unsigned int __ : 14;
 unsigned int NUM;
 unsigned int CMD : 7;
 unsigned int irq : 1;
};

struct G3DVIF1CODE_MARK { 
 unsigned int MARK;
 unsigned int NUM;
 unsigned int CMD : 7;
 unsigned int irq : 1;
};

struct G3DVIF1CODE_DIRECT { 
 unsigned int size;
 unsigned int num;
 unsigned int cmd : 7;
 unsigned int irq : 1;
};

struct G3DVIF1CODE_UNPACK { 
 unsigned int ADDR : 10;
 unsigned int pad : 4;
 unsigned int USN : 1;
 unsigned int FLG : 1;
 unsigned int NUM;
 unsigned int CMD;
};

union G3DVIF1CODE { 
 G3DVIF1CODE_STCYCLE stcycle;
 G3DVIF1CODE_OFFSET offset;
 G3DVIF1CODE_BASE base;
 G3DVIF1CODE_ITOP itop;
 G3DVIF1CODE_STMOD stmod;
 G3DVIF1CODE_MARK mark;
 G3DVIF1CODE_DIRECT direct;
 G3DVIF1CODE_UNPACK unpack;
};

struct G3DVIF1REGISTERLAYOUT_DIRECT { 
 tVIF1_STAT stat;
 tVIF1_FBRST fbrst;
 tVIF1_ERR err;
 tVIF_MARK mark;
 tVIF_CYCLE cycle;
 tVIF_MODE mode;
 tVIF1_NUM num;
 tVIF_MASK mask;
 tVIF_CODE code;
 tVIF_ITOPS itop;
 tVIF1_BASE base;
 tVIF1_OFST ofst;
 tVIF1_TOPS tops;
 int _aiReserved0[1];
 tVIF_R0 r0;
 tVIF_R1 r1;
 tVIF_R2 r2;
 tVIF_R3 r3;
 tVIF_C0 c0;
 tVIF_C1 c1;
 tVIF_C2 c2;
 tVIF_C3 c3;
};

typedef word G3DVIF1REGISTERLAYOUT_ARRAY[22];

union G3DVIF1REGISTERLAYOUT { 
 G3DVIF1REGISTERLAYOUT_DIRECT Direct;
 G3DVIF1REGISTERLAYOUT_ARRAY Array;
};

struct G3DVIF1CMDDATA { 
 unsigned int uiCmd;
 unsigned int auiSubPacket[4];
};


typedef float DVECTOR[2][4];

typedef sceVu0FVECTOR DVECTOR[2];
typedef float VECTOR3[3];
typedef G3DLIGHTTYPE SGDLIGHTTYPE;

struct SGDTRI2FILEHEADER { 
 unsigned int uiVif1Code_NOP0;
 unsigned int uiVif1Code_NOP1;
 unsigned int uiVif1Code_FLUSH;
 unsigned int uiVif1Code_DIRECT;
 sceGsLoadImage gsli;

};

typedef GRA3DMATERIALINDEXCACHE SGDMATERIALCACHE;

struct SGDMATERIAL { 
 unsigned int uiPrimType;
 char strTexName[12];
 float vAmbient[4];
 float vDiffuse[4];
 float vSpecular[4];
 float vEmission[4];
 int iCacheStatus;
 unsigned int iTagAddressOld;
 int iSizeOld;
 int iPad;
 SGDMATERIALCACHE aCache[3];
 int aiPad[8];
};

struct _VECTORINDEX { 
 unsigned int uiVertexId;
 unsigned int uiNormalId;
};


struct _VECTORADDRESS { 
 sceVu0FVECTOR *pVertex;
 sceVu0FVECTOR *pNormal;
};


struct _VECTORADDRESS { 
 float *pVertex[4];
 float *pNormal[4];
};

union _VECTORDATA { 
 _VECTORINDEX vIndex;
 _VECTORADDRESS vAddress;
};

struct SGDVUVNDESC { 
 short int sNumVertex;
 short int sNumNormal;
 unsigned char ucSize;
 unsigned char ucVectorType;
 unsigned char aucPad[2];
};

struct SGDVUVNDATA { 
 qword qwVif1Code;
 unsigned int uiVTop;
 unsigned int uiPTop;
 unsigned int uiWTop;
 unsigned int uiNumMesh;
};

struct _SGDVUMESHCOLORDATA { 
 G3DVIF1CODE_UNPACK VifUnpack;
 VECTOR3 avColor[1];
};

struct SGDMESHVERTEXDATA_TYPE2 { 
 VECTOR3 vVertex;
 VECTOR3 vNormal;
};

struct SGDMESHVERTEXDATA_TYPE2F { 
 VECTOR3 avNormal[1];
};

struct SGDVUVNDATA_PRESET { 
 unsigned int aui[10];
 union { 
	 SGDMESHVERTEXDATA_TYPE2 avt2[1];
	 SGDMESHVERTEXDATA_TYPE2F vt2f;
	};
};

struct SGDVUVNDATA_WEIGHTED { 
 unsigned char auc0[28];
 unsigned char ucBoneId0;
 unsigned char ucBoneId1;
 unsigned char auc1[2];
};

struct SGDVUMESHTYPE { 
 unsigned char GRD : 1;
 unsigned char TEX : 1;
 unsigned char VTYPE : 2;
 unsigned char PRE : 1;
 unsigned char FLAT : 1;
 unsigned char MULTI : 1;
 unsigned char NVL : 1;
};

struct SGDVUMESHDESC { 
 int iTagSize;
 unsigned char ucPad0;
 union { 
	 SGDVUMESHTYPE MeshType;
	 unsigned char ucMeshType;
	};
 unsigned char ucNumMesh;
 unsigned char ucPad1;
};

struct SGDVUMESHDATA { 
 qword qwVif1Code;
 sceGifTag GifTag;
};

struct SGDVUMESHDATA_PRESET { 
 short int asPad0[2];
 short int sOffsetToST;
 short int sOffsetToPrim;
 int aiPad1[2];
 long int alData[1];
};

struct SGDVUMATERIALDESC { 
 union { 
	 int iMaterialIndex;
	 SGDMATERIAL *pMat;
	};
 int iPad;
};

struct SGDCOORDINATEDESC { 
 int iCoordId0;
 int iCoordId1;
};

struct SGDBOUNDINGBOXDESC { 
 int iCoordId;
 int iPad;
};

struct SGDGSIMAGEDESC { 
 int iQWordSize;
 int iPad;
};

struct SGDGSIMAGEDATA { 
 unsigned int auiVifCode[4];
 sceGifTag GT;
 unsigned char aucData[1];
};

struct SGDTEXTUREIMAGEDESC { 
 int iNumTexture;
 int iPaddingSize;
};

struct SGDLIGHTDESC { 
 SGDLIGHTTYPE Type;
 int iNum;
};

struct SGDLIGHTDATA_DIRECTIONAL { 
 float vColor[4];
 float vDirection[4];
};

struct SGDLIGHTDATA_POINT { 
 float vColor[4];
 float vPosition[4];
};

struct SGDLIGHTDATA_SPOT { 
 float vColor[4];
 float vPosition[4];
 float vTarget[4];
};

struct SGDLIGHTDATA_AMBIENT { 
 float vColor[4];
};

struct SGDTEXTUREANIMATIONDESC { 
 unsigned char ucNumTexture;
 unsigned char ucPaddingSize;
 unsigned char bEnable;
 unsigned char ucStep;
 unsigned char ucCount;
 unsigned char bLoop;
 unsigned char aucPad[2];
};

typedef struct SGDPROCUNITHEADER;

struct SGDPROCUNITHEADER { 
 SGDPROCUNITHEADER *pNext;
 int iCategory;
 union { 
	 long int lPrimType;
	 SGDVUVNDESC VUVNDesc;
	 SGDVUMESHDESC VUMeshDesc;
	 SGDVUMATERIALDESC VUMaterialDesc;
	 SGDCOORDINATEDESC CoordDesc;
	 SGDBOUNDINGBOXDESC BoundingBoxDesc;
	 SGDGSIMAGEDESC GSImageDesc;
	 SGDLIGHTDESC LightDesc;
	 SGDTEXTUREIMAGEDESC TexDesc;
	 SGDTEXTUREANIMATIONDESC TexAnimDesc;
	};
};

union SGDPROCUNITDATA { 
 SGDVUVNDATA VUVNData;
 SGDVUMESHDATA VUMeshData;
 SGDVUVNDATA_PRESET VUVNData_Preset;
 SGDVUMESHDATA_PRESET VUMeshData_Preset;
 unsigned char aucGSImage;
 float avBB[8][4];
 SGDLIGHTDATA_DIRECTIONAL alightDirectional[1];
 SGDLIGHTDATA_POINT alightPoint[1];
 SGDLIGHTDATA_SPOT alightSpot[1];
 SGDLIGHTDATA_AMBIENT lightAmbient;
 SGDGSIMAGEDATA GSImage;
};

typedef enum {
	SVA_UNIQUE = 0,
	SVA_COMMON = 1,
	SVA_WEIGHTED = 2,
	NUM_SGDVECTORADDRESSID = 3,
	SGDVECTORADDRESSID_FORCE_DWORD = -1
} SGDVECTORADDRESSID;

struct _ONELIST { 
 short int sCoordId0;
 short int sCoordId1;
 u_short usNumVector;
 u_short vOff;
};

struct _VERTEXLIST { 
 int iNumList;
 _ONELIST aList[1];
};


struct SGDVECTORADDRESS { 
 unsigned int uiSize;
 sceVu0FVECTOR *pvVertex;
 sceVu0FVECTOR *pvNormal;
 _VERTEXLIST *pVertexList;
};


struct SGDVECTORADDRESS { 
 unsigned int uiSize;
 float *pvVertex[4];
 float *pvNormal[4];
 _VERTEXLIST *pVertexList;
};

struct SGDVECTORINFO { 
 unsigned int uiNumAddress;
 SGDVECTORADDRESS aAddress[3];
};

typedef struct SGDCOORDINATE;

struct SGDCOORDINATE { 
 float matCoord[4][4];
 float matLocalWorld[4][4];
 float _matWork[4][4];
 float vRot[4];
 SGDCOORDINATE *pParent;
 unsigned int bCalc;
 unsigned int edge_check;
 int bInViewvolume;
};

struct SGDFILEHEADER { 
 unsigned int uiVersionId;
 unsigned char ucMapFlag;
 unsigned char ucModelType;
 short unsigned int usNumMaterial;
 SGDCOORDINATE *pCoord;
 SGDMATERIAL *pMaterial;
 SGDVECTORINFO *pVectorInfo;
 unsigned int uiNumBlock;
 SGDPROCUNITHEADER *apProcUnitHead[1];
 int aiPad[1];
};

typedef enum {
	SRT_REALTIME = 0,
	SRT_PRELIGHTING = 1,
	SRT_MAPSHADOW = 2,
	SRT_CLEARPRELIGHTING = 3,
	NUM_SGDRENDERTYPE = 4
} SGDRENDERTYPE;


struct GRA3DSGDCREATIONDATA { 
 sceVu0FVECTOR *vnarray;
 int size;
};


struct GRA3DSGDCREATIONDATA { 
 float *vnarray[4];
 int size;
};

struct GRA3DSCRATCHPADLAYOUT { 
 qword qwVif1Code0;
 GRA3DVU1MEMLAYOUT Vu1Mem;
};

struct CSND_BUF_PLAY { 
 int play_id;

};

typedef enum {
	YZ = 0,
	ZX = 1,
	XY = 2
} _PLANE3D;

typedef _PLANE3D PLANE3D;

typedef void* (*LPFUNC_ALLOCATE)(/* parameters unknown */);
typedef void (*LPFUNC_DEALLOCATE)(/* parameters unknown */);
typedef void (*LPFUNC_ONEDITVALUECHANGED)(/* parameters unknown */);

struct PHEAD { 
 u_int HeaderSections;
 u_int UniqHeaderSize;
 float *pUniqVertex[4];
 float *pUniqNormal[4];
 u_int *pUniqList;
 u_int CommonHeaderSize;
 float *pCommonVertex[4];
 float *pCommonNormal[4];
 u_int *pCommonList;
 u_int WeightedHeaderSize;
 float *pWeightedVertex[4];
 float *pWeightedNormal[4];
 u_int *pWeightedList;
};

typedef struct { 
 short int cn0;
 short int cn1;
 u_short vIdx;
 u_short vOff;
} ONELIST;

typedef struct { 
 int list_num;
 ONELIST lists[1];
} VERTEXLIST;

struct HeaderSection { 
 u_int VersionID;
 u_char MAPFLAG;
 u_char kind;
 u_short materials;
 SGDCOORDINATE *coordp;
 SGDMATERIAL *matp;
 u_int *phead;
 u_int blocks;
 u_int **primitives;
};

typedef struct { 
 short int vnum;
 short int nnum;
 char vif_size;
 char vtype;
} VUVN_PRIM;

typedef u_short ANI_CODE;


struct C_PARTICLE { 
 float p[4];
 float old[4];
 float v[4];
 float org[4];
 float c_old[4];
 int s_flg;
};


struct C_PARTICLE { 
 sceVu0FVECTOR p;
 sceVu0FVECTOR old;
 sceVu0FVECTOR v;
 sceVu0FVECTOR org;
 sceVu0FVECTOR c_old;
 int s_flg;
};

struct SPRING { 
 u_short p1;
 u_short p2;
 float ldef;
};


struct SPHERE { 
 float center[4];
 float r;
};


struct SPHERE { 
 sceVu0FVECTOR center;
 float r;
};


struct TUBE { 
 float p0[4];
 float p1[4];
 float r;
 u_int axis;
};


struct TUBE { 
 sceVu0FVECTOR p0;
 sceVu0FVECTOR p1;
 float r;
 u_int axis;
};


struct CPLANE { 
 float p0[4];
 float r;
};


struct CPLANE { 
 sceVu0FVECTOR p0;
 float r;
};

struct COLLISION_DAT { 
 void *dat;
 u_char type;
 u_char bone_id;
};

struct ROPE_DAT { 
 float *vtx;
 float gravity;
 float Kd;
 float Ke;
 u_int fixed_num;
};


struct ROPE_CTRL { 
 C_PARTICLE *particle;
 SPRING *spring;
 ROPE_DAT *rdat;
 float dir[4];
 float top[4];
 float pow;
 u_int furn_id;
 u_char p_num;
 u_char spring_num;
 u_char stat;
 u_char move_mode;
};


struct ROPE_CTRL { 
 C_PARTICLE *particle;
 SPRING *spring;
 ROPE_DAT *rdat;
 sceVu0FVECTOR dir;
 sceVu0FVECTOR top;
 float pow;
 u_int furn_id;
 u_char p_num;
 u_char spring_num;
 u_char stat;
 u_char move_mode;
};


struct WIND_CTRL { 
 float dir[4];
 float pow;
 int cycle;
 int strong;
 int weak;
 int sta;
};


struct WIND_CTRL { 
 sceVu0FVECTOR dir;
 float pow;
 int cycle;
 int strong;
 int weak;
 int sta;
};

struct CLOTH { 
 float gravity;
 float Kd;
 float Ke;
 u_char w;
 u_char h;
 u_char type;
};


struct CLOTH_DAT { 
 CLOTH *dat;
 float *rist_vtx[4];
 u_char bone_id;
 u_char bone_id2;
 u_char sgd_id;
 u_char flg;
 int b_point;
};


struct CLOTH_DAT { 
 CLOTH *dat;
 sceVu0FVECTOR *rist_vtx;
 u_char bone_id;
 u_char bone_id2;
 u_char sgd_id;
 u_char flg;
 int b_point;
};


struct CLOTH_CTRL { 
 C_PARTICLE *particle;
 SPRING *spring;
 CLOTH_DAT *cdat;
 float old_bone_pos[4];
 float old_w2l[4][4];
 u_short p_num;
 u_short spring_num;
 u_short w;
 u_short h;
 u_char reset_flg;
 u_char pad;
 WIND_CTRL w_ctrl;
};


struct CLOTH_CTRL { 
 C_PARTICLE *particle;
 SPRING *spring;
 CLOTH_DAT *cdat;
 float old_bone_pos[4];
 sceVu0FMATRIX old_w2l;
 u_short p_num;
 u_short spring_num;
 u_short w;
 u_short h;
 u_char reset_flg;
 u_char pad;
 WIND_CTRL w_ctrl;
};


struct CLOTH_CTRL { 
 C_PARTICLE *particle;
 SPRING *spring;
 CLOTH_DAT *cdat;
 sceVu0FVECTOR old_bone_pos;
 sceVu0FMATRIX old_w2l;
 u_short p_num;
 u_short spring_num;
 u_short w;
 u_short h;
 u_char reset_flg;
 u_char pad;
 WIND_CTRL w_ctrl;
};


struct COLLISION_CTRL { 
 float old_w2c[5][4][4];
};


struct COLLISION_CTRL { 
 sceVu0FMATRIX old_w2c[5];
};

struct ACS_ALPHA { 
 short int alpha;
 short int stat;
};

struct CMOVE_CTRL { 
 u_int type;
 u_int furn_id;
 u_int timer;
 u_int req;
 u_char alpha;
};

struct FURNMDL_DAT { 
 CLOTH_DAT *cdat;
 COLLISION_DAT *collision;
};

struct C_ACS_CTRL { 
 CLOTH_CTRL *c_cloth_ctrl;
 u_int *addr;
 int mdl_no;
 int key;
};

typedef struct { 
 u_char file_id[4];
 u_int map_flg;
 u_int bone_num;
 u_int trans_num;
 u_int frame_num;
 u_int interp_frame;
 u_int flg;
 u_int si_frame;
} MOT_FILE_HEADER;

typedef struct { 
 u_char parent_id;
 u_char trans_id;
} MOT_ID_TABLE;

typedef struct { 
 u_int *frame_addr;
} MOT_ADDR_TABLE;

struct ANI_BUF { 
 ANI_CODE code;
 u_short cnt;
 u_int stat;
};

struct ANI_CODE_CTRL { 
 int playnum;
 int stat;
 int loop_rest;
 int timer;
 ANI_BUF buf[10];
 ANI_CODE *code_head;
 ANI_CODE *code_now;
 ANI_CODE *loop_start;
};


struct RST_DATA { 
 float rot[4];
 float scale[4];
 float trans[4];
};


struct RST_DATA { 
 sceVu0FVECTOR rot;
 sceVu0FVECTOR scale;
 sceVu0FVECTOR trans;
};

struct MOT_CTRL { 
 u_int *top;
 u_int *dat;
 u_int play_id;
 int cnt;
 int all_cnt;
 int inp_allcnt;
 float inp_cnt;
 float old_mot_cnt;
 int reso;
 int reso_cnt;
 int next_flg;
 int end_flg;
 RST_DATA *rst0;
 RST_DATA *rst1;
};

typedef struct { 
 u_char file_id[4];
 u_int map_flg;
 u_int key_num;
 u_int frame_num;
 u_int parts_no;
 u_int flg;
 u_char w_name[8];
} MIM_FILE_HEADER;

typedef struct { 
 u_int *wav_addr;
 u_int *key_addr;
} MIM_ADDR_TABLE;


struct MIME_DAT { 
 float *vtx[4];
 float *pkt[4];
 u_int *dat;
 u_int vtx_num;
 u_int p_no;
};


struct MIME_DAT { 
 sceVu0FVECTOR *vtx;
 sceVu0FVECTOR *pkt;
 u_int *dat;
 u_int vtx_num;
 u_int p_no;
};


struct WMIM { 
 u_char *name;
 float mass;
 float Ks;
 float dec;
 float pos[4];
 float gravity[4];
};


struct WMIM { 
 u_char *name;
 float mass;
 float Ks;
 float dec;
 sceVu0FVECTOR pos;
 sceVu0FVECTOR gravity;
};

struct WMIM_DAT { 
 WMIM *dat;
 u_char bone_id;
};


struct WMIM_CTRL { 
 WMIM_DAT *wdat;
 float v[4];
 float w[4];
 float pbak[4];
 float old_pos[4];
};


struct WMIM_CTRL { 
 WMIM_DAT *wdat;
 sceVu0FVECTOR v;
 sceVu0FVECTOR w;
 sceVu0FVECTOR pbak;
 sceVu0FVECTOR old_pos;
};

typedef struct { 
 u_int *addr;
 u_char *dat;
} MIME_LOAD;

struct MIME_CTRL { 
 MIME_DAT *mdat;
 int frame;
 int reso;
 u_short furn_id;
 float cnt;
 u_char weight_id;
 u_char parts_id;
 u_char loop;
 u_char stat;
 u_char rev;
 u_char flg;
 u_char pad;
};


struct NECK_CTRL_WORK { 
 float neck_lw[4][4];
 float neck_p_lw[4][4];
 float chest_lw[4][4];
 int flg;
};


struct NECK_CTRL_WORK { 
 sceVu0FMATRIX neck_lw;
 sceVu0FMATRIX neck_p_lw;
 sceVu0FMATRIX chest_lw;
 int flg;
};


struct ANI_CTRL { 
 ANI_CODE_CTRL anm;
 MOT_CTRL mot;
 float pbak[4];
 float rbak[4];
 u_int *mdl_p;
 u_int *pk2_p;
 u_int *mpk_p;
 HeaderSection *base_p;
 u_int *anm_p;
 u_int *mtop;
 u_int *mdat;
 u_int *tanm_p;
 u_int *bwc_p;
 MIME_CTRL *mim;
 MIME_CTRL *bgmim;
 WMIM_CTRL *wmim;
 CLOTH_CTRL *cloth_ctrl;
 COLLISION_CTRL *collision_ctrl;
 u_int mot_num;
 u_int mim_num;
 u_int bg_num;
 u_int wmim_num;
 u_short ftype;
 u_short interp_flg;
 void *pkt_p;
 int use;
 int mdl_no;
 int anm_no;
 float eye_rots[2][4];
 float neck_rot[4];
 float chest_rot[4];
 NECK_CTRL_WORK neck_work;
};


struct ANI_CTRL { 
 ANI_CODE_CTRL anm;
 MOT_CTRL mot;
 sceVu0FVECTOR pbak;
 sceVu0FVECTOR rbak;
 u_int *mdl_p;
 u_int *pk2_p;
 u_int *mpk_p;
 HeaderSection *base_p;
 u_int *anm_p;
 u_int *mtop;
 u_int *mdat;
 u_int *tanm_p;
 u_int *bwc_p;
 MIME_CTRL *mim;
 MIME_CTRL *bgmim;
 WMIM_CTRL *wmim;
 CLOTH_CTRL *cloth_ctrl;
 COLLISION_CTRL *collision_ctrl;
 u_int mot_num;
 u_int mim_num;
 u_int bg_num;
 u_int wmim_num;
 u_short ftype;
 u_short interp_flg;
 void *pkt_p;
 int use;
 int mdl_no;
 int anm_no;
 sceVu0FVECTOR eye_rots[2];
 sceVu0FVECTOR neck_rot;
 sceVu0FVECTOR chest_rot;
 NECK_CTRL_WORK neck_work;
};

struct MANMDL_DAT { 
 float scale;
 u_char head_id;
 u_char neck_id;
 u_char chest_id;
 u_char waist_id;
 u_char hip_id;
 u_char leg_id;
 WMIM_DAT *wdat;
 CLOTH_DAT *cdat;
 COLLISION_DAT *collision;
};

typedef struct { 
 u_int *mdl_p;
 u_int flg;
 u_int mdl_no;
 int offset;
} ENE_VRAM_CTRL;

typedef struct { 
 u_int pak_num;
 u_int map_flg;
 u_int pad[2];
} MANMPK_HEADER;

struct ENE_CHILD_CTRL { 
 float r;
 float ry;
 u_char bone_id;
 u_char flg;
};

typedef struct { 
 u_char map_flg;
 u_short anm_no;
 u_int *anm_p;
 u_char pkt_no;
} ANI_MDL_CTRL;

typedef struct { 
 u_char buf_no;
 u_char pkt_no;
} ENE_PKT_CTRL;

typedef struct { 
 u_char msn_no;
 u_char step;
} MSN_PLYR_INIT;

struct ENE_COLLISION { 
 ANI_CTRL *ani_ctrl;
 u_short mdl_no;
};

typedef float NECK_SPD;

typedef struct { 
 float neck_lr_limit;
 NECK_SPD *neck_spd;
} NECK_ACS_DAT;

typedef u_long MORPH_CODE;

struct ANI_TBL { 
 ANI_CODE **ani;
 MORPH_CODE **morph;
 float neck_lr_limit;
 NECK_SPD *neck_spd;
};


typedef enum {
	SND_BANK_NOT_USE = 0,
	SND_BANK_NOT_READY = 1,
	SND_BANK_USE = 2,
	SND_BANK_ILLEGAL_SOUND_NO = 3,
	SND_BANK_OK = 4
} _SND_BANK_STATUS;


enum _SND_BANK_STATUS {
	SND_BANK_NOT_USE = 0,
	SND_BANK_NOT_READY = 1,
	SND_BANK_USE = 2,
	SND_BANK_ILLEGAL_SOUND_NO = 3,
	SND_BANK_OK = 4
};

typedef _SND_BANK_STATUS SND_BANK_STATUS;


struct _LOOK_AT_PARAM { 
 float pos[4];
 float eye_spd;
 float head_spd;
 float chest_spd;
 int enable;
};


struct _LOOK_AT_PARAM { 
 sceVu0FVECTOR pos;
 float eye_spd;
 float head_spd;
 float chest_spd;
 int enable;
};

typedef _LOOK_AT_PARAM LOOK_AT_PARAM;

typedef enum {
	LTP_MIO_ATTACK_ENEMY = 0,
	LTP_MIO_ENEMY = 1,
	LTP_MIO_EVENT_OBJ = 2,
	LTP_DUMMY_MIO_TIRED = 3,
	LTP_MIO_SPOT_LIGHT = 4,
	LTP_MIO_KAIDAN = 5,
	LTP_MIO_DOOR = 6,
	LTP_MIO_MAYU = 7,
	LTP_MIO_LEAST = -1
} _LOOK_TARGET_PRIORITY_MIO;

typedef _LOOK_TARGET_PRIORITY_MIO LOOK_TARGET_PRIORITY_MIO;

typedef enum {
	LTP_MAYU_ATTACK_ENEMY = 0,
	LTP_MAYU_ENEMY = 1,
	LTP_MAYU_EVENT_OBJ = 2,
	LTP_MAYU_MIO_FAR = 3,
	LTP_DUMMY_TIRED = 4,
	LTP_MAYU_MIO_NEAR = 5,
	LTP_MAYU_BACKGROUND = 6,
	LTP_MAYU_ITEM = 7,
	LTP_MAYU_OBJ = 8,
	LTP_MAYU_MIO_MIDDLE = 9,
	LTP_MAYU_KAIDAN = 10,
	LTP_MAYU_LEAST = -1
} _LOOK_TARGET_PRIORITY_MAYU;

typedef _LOOK_TARGET_PRIORITY_MAYU LOOK_TARGET_PRIORITY_MAYU;

typedef struct { 
 u_char num;
 unsigned char result[10];
 float p[4][10];
} PP_JUDGE;

typedef enum {
	ENE_RELEASE_NO_RELEASE = 0,
	ENE_RELEASE_TAKE_PICT = 1,
	ENE_RELEASE_TIME_OUT = 2,
	ENE_RELEASE_DIST = 3,
	ENE_RELEASE_DEAD = 4,
	ENE_RELEASE_REQ = 5,
	ENE_RELEASE_MAX_NO = 6,
	ENE_RELEASE_FORCE_DWORD = -1
} _ENE_RELASE_TYPE;

typedef _ENE_RELASE_TYPE ENE_RELASE_TYPE;

typedef enum {
	SHUTTER_CHANCE_NONE = 0,
	SHUTTER_CHANCE_NORMAL = 1,
	SHUTTER_CHANCE_SP = 2,
	SHUTTER_CHANCE_STATE_MAX = 3,
	SHUTTER_CHANCE_FORCE_DWORD = -1
} _SHUTTER_CHANCE_STATE;

typedef _SHUTTER_CHANCE_STATE SHUTTER_CHANCE_STATE;

struct CSpiritGage { 
 int mPercent;
 int mFlg;
};

typedef enum {
	OL_LOAD_ERR_OK = 0,
	OL_LOAD_ERR_MEMORY_LACK = 1,
	OL_LOAD_ERR_WORK_LACK = 2,
	OL_LOAD_ERR_FORCE_DWORD = -1
} _OL_LOAD_ERR;

typedef _OL_LOAD_ERR OL_LOAD_ERR;

typedef enum {
	OL_LOAD_READY_NOT_READY = 0,
	OL_LOAD_READY_READY = 1,
	OL_LOAD_READY_READY_FIRST = 3,
	OL_LOAD_READY_WAIT_MEMORY = 4
} OL_LOAD_READY;

struct OL_LOAD_ONE { 
 unsigned int mapping : 1;
 unsigned int load_end : 1;
 int cnt;
 void *adrs;
 int file_no;
};

typedef enum {
	ITEM_MODEL_PACK_ORDER_SGD = 0,
	ITEM_MODEL_PACK_ORDER_TM2 = 1,
	ITEM_MODEL_PACK_ORDER_BWC = 2
} ITEM_MODEL_PACK_ORDER;

typedef OL_LOAD_ERR MMANAGE_ERR;

typedef enum {
	ENE_STATUS_NO_USE = 0,
	ENE_STATUS_LOADING = 1,
	ENE_STATUS_WAIT_ANI_CTRL = 2,
	ENE_STATUS_READY = 3,
	ENE_STATUS_ACT = 4,
	ENE_STATUS_RELEASE = 5,
	ENE_STATUS_FORCE_DWORD = -1
} _ENE_STATUS;

typedef _ENE_STATUS ENE_STATUS;

typedef struct PLCMN_WRK;

typedef struct { 
 u_char attr;
 u_char alp;
 u_short mdl_no;
 u_short anm_no;
 u_short dmg;
 u_short hit_rng;
 u_short cond;
 u_int blifetime;
 u_short chg_cnt;
 float fstmove;
 float fstrot;
 float fdist;
 float fmove;
 float frot;
 float ndist;
 float nmove;
 float nrot;
} FLY_DATA;

typedef struct { 
 u_short sta;
 void *ew;
 FLY_DATA *dat;
 PLCMN_WRK *target;
 GRA3DLIGHTDATA light;
 float npos[4];
 float opos[4];
 float nrot[4];
 float tpos[4];
 float trot[4];
 float spd;
 u_int life_time;
 u_int life_cnt;
 float trace_ang;
 u_int trace_time;
 u_short now_cnt;
 u_char alp;
 void *efpw;
 void *ani_ctrl;
 int mdl_p;
 int mdl_no;
 int anm_p;
 int anm_no;
 int init_flow;
 float adjp_cnt;
 float adjp_span;
 float adjp_add;
 float adjp_ang;
 float adjv[4];
} FLY_WRK;

struct OLD_ENEALG_WRK { 
 u_char idx;
 u_char job_no;
 u_char pos_no;
 float wait_time;
 float loop[2];
 u_char pos_no_tr[2];
 float loop_tr[2];
 P_INT comm_add;
 long int comm_add_top;
 u_long stack_b[16];
 u_long *stack_p;
 u_char flag;
 u_char cnt[2];
 u_char branch;
 u_char bjob_no;
 u_char bpos_no;
 float bwait_time;
 P_INT bcomm_add;
 long int bcomm_add_top;
};

struct ENEALG_WRK { 
 long int comm_add_top;
 u_long stack_b[16];
 u_long *stack_p;
 long int bcomm_add_top;
 P_INT bcomm_add;
 P_INT comm_add;
 float wait_time;
 float loop[2];
 float loop_tr[2];
 float bwait_time;
 u_char pos_no_tr[2];
 u_char cnt[2];
 u_char idx;
 u_char job_no;
 u_char pos_no;
 u_char flag;
 u_char branch;
 u_char bjob_no;
 u_char bpos_no;
};

struct _ENE_DAT_COMMON { 
 int adpcm_no;
 float px;
 float py;
 float pz;
 int se_no;
 u_short mdl_no;
 u_short anm_no;
 u_short alg_no;
 u_short point_base;
 u_short dir;
 u_char neck_ctl;
 u_int attr;
 float near;
 float far;
 u_char blg_r;
 u_char blg_g;
 u_char blg_b;
 u_char balp;
 u_char ghost_list_no;
 u_char ghost_list_no_sp;
 u_char def_type[2];
 u_char def_size[2];
 u_char dih_type;
};

typedef _ENE_DAT_COMMON ENE_DAT_COMMON;

struct _SP_TIMING { 
 unsigned char start_frame;
 unsigned char end_frame;
};

typedef _SP_TIMING SP_TIMING;

typedef struct { 
 ENE_DAT_COMMON cmn;
 u_short dst_gthr;
 u_char way_gthr;
 u_char atk_ptn;
 float atk_rng;
 float hit_rng;
 float chance_rng;
 int dead_adpcm;
 short int hit_adjx;
 u_char hint_pic;
 u_char aura_alp;
 u_short trgt_chg;
 u_short hp;
 u_short atk_p;
 u_short atk_h;
 u_char atk;
 u_char atk_tm;
 u_char wspd;
 u_char rspd;
 u_char rotsp;
 u_short hitbk;
 u_int hp_recv_wait;
 float hp_recv_vol;
 short int fly_type[3];
 short int child_ene[3];
} ENE_DAT;

typedef struct { 
 ENE_DAT_COMMON cmn;
 u_char dat_no;
 u_char soul_no;
 u_short adpcm_tm;
 short int next;
 u_short chgattr;
 float rng;
 short int time;
 int se_foot;
} AENE_DAT;

struct ENE_WRK { 
 float bep[4];
 float neck_rot[4];
 float adjp[4];
 MPOS mpos;
 ENEALG_WRK alg;
 PP_JUDGE ppj;
 MOVE_BOX mbox;
 CSpiritGage spirit_gage;
 STATUS_DAT st;
 ENE_DAT *dat;
 AENE_DAT *aie;
 float dist_p_e[2];
 float dist_p_e_o[2];
 float dist_c_e;
 u_int hp_recv_tm;
 float hp_recv_pt;
 float reso;
 float wlk_reso_chg;
 float wlk_reso;
 PLCMN_WRK *target;
 float tr_frate;
 float tr_common;
 void *pdf;
 void *pdf2;
 float d_pd;
 float d_pd2;
 float d_pda;
 float d_pda2;
 float d_pdc;
 float d_pdc2;
 float d_mpd;
 float d_mpd2;
 void *nee;
 float nee_rate;
 float nee_size;
 u_int nee_col;
 void *efpw;
 float effw;
 float slow_hb_reso;
 int stream_id;
 int status;
 void *ani_ctrl_p;
 u_int attr;
 float directionaldiffuse[4];
 ENE_DAT_COMMON *cmn_dat;
 int anm_jibaku_p;
 int se_bank_jibaku_no;
 int se_bank_no;
 FLY_WRK *fw[3][5];
 void *wrkp[3];
 ENE_RELASE_TYPE rel_type;
 short int reso_tm;
 u_short atk_tm;
 u_short atk_type;
 short int combo_time;
 u_short tr_time;
 u_short tr2_cnt;
 u_short in_finder_tm;
 short int dat_no;
 short int fp[2];
 short int dist_in_tm[2];
 short int stm_slow;
 short int stm_view;
 short int mahi_total_time;
 short int mahi_cnt;
 short int mahi_one_stop_time;
 short int mahi_one_act_time;
 unsigned char bWithSearcher : 1;
 u_char anime_no;
 u_char target_n;
 u_char tr_max;
 u_char tr2_rate_alg;
 u_char tr2_base;
 u_char tr2_freq;
 u_char tr2_add;
 u_char tr_rate;
 u_char tr_rate_in;
 u_char tr_rate_out;
 u_char tr_rate_alg;
 u_char tr_rate_alg_sp;
 u_char ppj_check;
 u_char type;
 u_char act_no;
 u_char recog_tm;
 u_char room_no;
 u_char wlk_reso_frm;
 u_char wlk_reso_wait;
 char act_flg;
 char slow_hb_wait_frame;
 char slow_hb_frame;
 int ani_reso;
 char combo_counter;
 char combo_sb_counter;
};

typedef enum {
	GPHASE_CONTINUE = 0,
	GPHASE_END = 1,
	GPHASE_NOFRAME = 2
} GPHASE_ENUM;

typedef enum {
	GID_SUPER = 0,
	GID_BOOT_INIT = 1,
	GID_BOOT_PADCHECK = 2,
	GID_LANGDATA_CHECK = 3,
	GID_LANGSEL_MAIN = 4,
	GID_AUTOLOAD_MAIN = 5,
	GID_UBI_MODE = 6,
	GID_OUTGAME_MAIN = 7,
	GID_STORY_MAIN = 8,
	GID_GAMEOVER_MENU = 9,
	GID_ENDING_MOVIE = 10,
	GID_GAMERESULT = 11,
	GID_CLEARMENU = 12,
	GID_SOFTRESETMAIN = 13,
	GID_DEBUG_MENU = 14,
	GID_TECMO_MODE = 15,
	GID_PROJECT_MODE = 16,
	GID_TITLE_MODE = 17,
	GID_TITLE_MOVIE_MODE = 18,
	GID_STORY_NOWLOADING = 19,
	GID_STORY_NORMAL = 20,
	GID_STORY_DAMAGE = 21,
	GID_STORY_DOOR_OPEN = 22,
	GID_STORY_DEBUG = 23,
	GID_STORY_DEBUG_CAM = 24,
	GID_STORY_PAUSE = 25,
	GID_STORY_PAUSE_MISSION = 26,
	GID_STORY_MENU = 27,
	GID_STORY_MAP = 28,
	GID_STORY_MISSION_ST = 29,
	GID_STORY_MISSION_RESULT = 30,
	GID_STORY_GAME_OVER_PRE = 31,
	GID_STORY_GAME_OVER = 32,
	GID_STORY_SCENE = 33,
	GID_STORY_MOVIE = 34,
	GID_STORY_EFFECT = 35,
	GID_EVENTMSG_DISP = 36,
	GID_EVENTFILE_DISP = 37,
	GID_STORY_PHOTO = 38,
	GID_STORY_ENE_DEAD = 39,
	GID_STORY_PUZZLE = 40,
	GID_STORY_SAVEPOINT = 41,
	GID_STORY_MOVIE_ROOM_SEL = 42,
	GID_GAMEOVER_MENU_TOP = 43,
	GID_GAMEOVER_MENU_LOAD = 44,
	GID_GAMEOVER_MENU_ALBUM = 45,
	GID_ENDING_NORMAL1 = 46,
	GID_ENDING_NORMAL2 = 47,
	GID_ENDING_HARD = 48,
	GID_GAMERESULT_TOP = 49,
	GID_CLEARMENU_TOP = 50,
	GID_CLEARMENU_SAVE = 51,
	GID_CLEARMENU_ALBUM = 52,
	GID_TITLE_TOP = 53,
	GID_TITLE_MENU = 54,
	GID_TITLE_NEWGAME = 55,
	GID_TITLE_LOADGAME = 56,
	GID_TITLE_SETUP = 57,
	GID_TITLE_ALBUM = 58,
	GID_TITLE_GALLERY = 59,
	GID_TITLE_OPTION = 60,
	GID_TITLE_FRAMERATE_SEL = 61,
	GID_TITLE_CHAPTER_SEL = 62,
	GID_TITLE_MOVE_MOVIE = 63,
	GID_STORY_LOAD_MISSION = 64,
	GID_STORY_LOAD_MISSION_EVENT = 65,
	GID_STORY_LOAD_MISSION_SAVE = 66,
	GID_STORY_GAMEOVER_EFF = 67,
	GID_STORY_GAMEOVER_FADE = 68,
	GID_STORY_GAMEOVER_MOVIE = 69,
	GID_STORY_SCENE_PRELOAD = 70,
	GID_STORY_SCENE_MAIN = 71,
	GID_STORY_MOVIE_PRELOAD = 72,
	GID_STORY_MOVIE_MAIN = 73,
	GID_PUZZLE_INCONF = 74,
	GID_PUZZLE_CROSSFADE = 75,
	GID_PUZZLE_HINA = 76,
	GID_PUZZLE_ROKU = 77,
	GID_PUZZLE_KAZA = 78,
	GID_PUZZLE_KAZA2 = 79,
	GID_PUZZLE_KAI1 = 80,
	GID_PUZZLE_KAI2 = 81,
	GID_SAVEPOINT_FADEIN = 82,
	GID_SAVEPOINT_MAIN = 83,
	GID_SAVEPOINT_FADEOUT = 84,
	GID_TITLE_SETUPMENU = 85,
	GID_TITLE_MISSION = 86,
	GID_SAVEPOINT_TOP = 87,
	GID_SAVEPOINT_SAVE = 88,
	GID_SAVEPOINT_ALBUM = 89,
	GID_MISSION_SEL = 90,
	GID_MISSION_CAM = 91,
	GID_MISSION_ALBUM = 92,
	GID_MISSION_SAVE = 93,
	GPHASE_ID_NONE = -1
} GPHASE_ID_ENUM;


struct POINT_T { 
 float x;
 float y;
};


POINT_T POINT_T;

struct LINE_T { 
 POINT_T a;
 POINT_T b;
};

struct FUYU_GHOST_ONE_DATA { 
 short int mGhostLabel[3];
	static int mAppearNum;
};

struct FUYU_GHOST_DATA { 
 FUYU_GHOST_ONE_DATA *pOne;
 int iNum;
};

struct CFEneEntry { 
 char mMode;
 char mApparType;
 char mNowAreaNo;
 char mLockCnt;
 unsigned char mCamChangeFlg : 1;
 unsigned char mMultiEnemyDisable : 1;
 FUYU_GHOST_ONE_DATA *mpFD;
 int mWaitSave;
	static short int aResionAreaTbl[0];
	static FUYU_GHOST_DATA aFuyuGhostTbl[6][11];
	static float aFuyuAppearTbl[66][3][4];
};


struct CFEneEntry { 
 char mMode;
 char mApparType;
 char mNowAreaNo;
 char mLockCnt;
 unsigned char mCamChangeFlg : 1;
 unsigned char mMultiEnemyDisable : 1;
 FUYU_GHOST_ONE_DATA *mpFD;
 int mWaitSave;
	static short int aResionAreaTbl[0];
	static FUYU_GHOST_DATA aFuyuGhostTbl[6][11];
	static float aFuyuAppearTbl[66][3][4];
};

typedef enum {
	COMP_TES_PKS = 0,
	COMP_TES_CMP = 1,
	LOGO_PK2 = 2,
	ZERO_LOGO_PK2 = 3,
	VRAM_TEX_PK2 = 4,
	VRAM_TEX_F_PK2 = 5,
	VRAM_TEX_G_PK2 = 6,
	VRAM_TEX_S_PK2 = 7,
	VRAM_TEX_I_PK2 = 8,
	N_FINDER_PK2 = 9,
	N_FINDER_F_PK2 = 10,
	N_FINDER_G_PK2 = 11,
	N_FINDER_S_PK2 = 12,
	N_FINDER_I_PK2 = 13,
	N_LIFE_PK2 = 14,
	N_LIFE_F_PK2 = 15,
	N_LIFE_G_PK2 = 16,
	N_LIFE_S_PK2 = 17,
	N_LIFE_I_PK2 = 18,
	OUTGAME_PK2 = 19,
	SCREENSAVER_PK2 = 20,
	SCREENSAVER2_PK2 = 21,
	OS_R00_TM2 = 22,
	OS_R04_TM2 = 23,
	OK_R04_TM2 = 24,
	PHT_HINT_GET_000_TM2 = 25,
	PHT_ETC_GET_000_PK2 = 26,
	MENU_BG_PK2 = 27,
	MENU_BG_F_PK2 = 28,
	MENU_BG_G_PK2 = 29,
	MENU_BG_S_PK2 = 30,
	MENU_BG_I_PK2 = 31,
	MENU_PLAYDATA_PK2 = 32,
	MENU_PLAYDATA_F_PK2 = 33,
	MENU_PLAYDATA_G_PK2 = 34,
	MENU_PLAYDATA_S_PK2 = 35,
	MENU_PLAYDATA_I_PK2 = 36,
	MENU_STATUS_PK2 = 37,
	MENU_STATUS_F_PK2 = 38,
	MENU_STATUS_G_PK2 = 39,
	MENU_STATUS_S_PK2 = 40,
	MENU_STATUS_I_PK2 = 41,
	MENU_TOUROU_PK2 = 42,
	MENU_ITEM_PK2 = 43,
	MENU_ITEM_F_PK2 = 44,
	MENU_ITEM_G_PK2 = 45,
	MENU_ITEM_S_PK2 = 46,
	MENU_ITEM_I_PK2 = 47,
	MENU_PHOTO_PK2 = 48,
	MENU_PHOTO_F_PK2 = 49,
	MENU_PHOTO_G_PK2 = 50,
	MENU_PHOTO_S_PK2 = 51,
	MENU_PHOTO_I_PK2 = 52,
	MENU_FILE_CMN_PK2 = 53,
	MENU_FILE_CMN_F_PK2 = 54,
	MENU_FILE_CMN_G_PK2 = 55,
	MENU_FILE_CMN_S_PK2 = 56,
	MENU_FILE_CMN_I_PK2 = 57,
	MENU_FILE_TOP_PK2 = 58,
	MENU_FILE_TOP_F_PK2 = 59,
	MENU_FILE_TOP_G_PK2 = 60,
	MENU_FILE_TOP_S_PK2 = 61,
	MENU_FILE_TOP_I_PK2 = 62,
	MENU_FILE_PHOTO_PK2 = 63,
	MENU_FILE_TXT_PK2 = 64,
	MENU_FILE_MAP_PK2 = 65,
	MENU_MAP_PK2 = 66,
	MENU_MAP_F_PK2 = 67,
	MENU_MAP_G_PK2 = 68,
	MENU_MAP_S_PK2 = 69,
	MENU_MAP_I_PK2 = 70,
	MENU_RADIO_PK2 = 71,
	MENU_RADIO_F_PK2 = 72,
	MENU_RADIO_G_PK2 = 73,
	MENU_RADIO_S_PK2 = 74,
	MENU_RADIO_I_PK2 = 75,
	MENU_MEMO_PK2 = 76,
	MENU_MEMO_F_PK2 = 77,
	MENU_MEMO_G_PK2 = 78,
	MENU_MEMO_S_PK2 = 79,
	MENU_MEMO_I_PK2 = 80,
	MENU_CAMERA_PK2 = 81,
	MENU_CAMERA_F_PK2 = 82,
	MENU_CAMERA_G_PK2 = 83,
	MENU_CAMERA_S_PK2 = 84,
	MENU_CAMERA_I_PK2 = 85,
	MENU_CAMERA_EDT_PK2 = 86,
	MENU_CAMERA_EDT_F_PK2 = 87,
	MENU_CAMERA_EDT_G_PK2 = 88,
	MENU_CAMERA_EDT_S_PK2 = 89,
	MENU_CAMERA_EDT_I_PK2 = 90,
	MENU_GLIST_PK2 = 91,
	MENU_GLIST_F_PK2 = 92,
	MENU_GLIST_G_PK2 = 93,
	MENU_GLIST_S_PK2 = 94,
	MENU_GLIST_I_PK2 = 95,
	MENU_MAP_SNP_OS00_PK2 = 96,
	MENU_CHP1_PK2 = 97,
	MENU_CHP1_F_PK2 = 98,
	MENU_CHP1_G_PK2 = 99,
	MENU_CHP1_S_PK2 = 100,
	MENU_CHP1_I_PK2 = 101,
	MENU_CHP2_PK2 = 102,
	MENU_CHP2_F_PK2 = 103,
	MENU_CHP2_G_PK2 = 104,
	MENU_CHP2_S_PK2 = 105,
	MENU_CHP2_I_PK2 = 106,
	MENU_CHP3_PK2 = 107,
	MENU_CHP3_F_PK2 = 108,
	MENU_CHP3_G_PK2 = 109,
	MENU_CHP3_S_PK2 = 110,
	MENU_CHP3_I_PK2 = 111,
	MENU_CHP4_PK2 = 112,
	MENU_CHP4_F_PK2 = 113,
	MENU_CHP4_G_PK2 = 114,
	MENU_CHP4_S_PK2 = 115,
	MENU_CHP4_I_PK2 = 116,
	MENU_CHP5_PK2 = 117,
	MENU_CHP5_F_PK2 = 118,
	MENU_CHP5_G_PK2 = 119,
	MENU_CHP5_S_PK2 = 120,
	MENU_CHP5_I_PK2 = 121,
	MENU_CHP6_PK2 = 122,
	MENU_CHP6_F_PK2 = 123,
	MENU_CHP6_G_PK2 = 124,
	MENU_CHP6_S_PK2 = 125,
	MENU_CHP6_I_PK2 = 126,
	MENU_CHP7_PK2 = 127,
	MENU_CHP7_F_PK2 = 128,
	MENU_CHP7_G_PK2 = 129,
	MENU_CHP7_S_PK2 = 130,
	MENU_CHP7_I_PK2 = 131,
	MENU_CHP8_PK2 = 132,
	MENU_CHP8_F_PK2 = 133,
	MENU_CHP8_G_PK2 = 134,
	MENU_CHP8_S_PK2 = 135,
	MENU_CHP8_I_PK2 = 136,
	MENU_CHP9_PK2 = 137,
	MENU_CHP9_F_PK2 = 138,
	MENU_CHP9_G_PK2 = 139,
	MENU_CHP9_S_PK2 = 140,
	MENU_CHP9_I_PK2 = 141,
	MENU_CHP10_PK2 = 142,
	MENU_CHP10_F_PK2 = 143,
	MENU_CHP10_G_PK2 = 144,
	MENU_CHP10_S_PK2 = 145,
	MENU_CHP10_I_PK2 = 146,
	MENU_CHP11_PK2 = 147,
	MENU_CHP11_F_PK2 = 148,
	MENU_CHP11_G_PK2 = 149,
	MENU_CHP11_S_PK2 = 150,
	MENU_CHP11_I_PK2 = 151,
	MENU_CHP_MSN_PK2 = 152,
	MENU_CHP_MSN_F_PK2 = 153,
	MENU_CHP_MSN_G_PK2 = 154,
	MENU_CHP_MSN_S_PK2 = 155,
	MENU_CHP_MSN_I_PK2 = 156,
	SORA_PAK = 157,
	GAMEOVER_PK2 = 158,
	GAMEOVER_F_PK2 = 159,
	GAMEOVER_G_PK2 = 160,
	GAMEOVER_S_PK2 = 161,
	GAMEOVER_I_PK2 = 162,
	MENU_MAP_SOTO_PK2 = 163,
	MENU_MAP_OS1_PK2 = 164,
	MENU_MAP_OS2_PK2 = 165,
	MENU_MAP_OS0_PK2 = 166,
	MENU_MAP_KS0_PK2 = 167,
	MENU_MAP_KS1_PK2 = 168,
	MENU_MAP_KS2_PK2 = 169,
	MENU_MAP_RY1_PK2 = 170,
	MENU_MAP_RY2_PK2 = 171,
	MENU_MAP_RY0_PK2 = 172,
	MENU_MAP_TB1_PK2 = 173,
	MENU_MAP_TB2_PK2 = 174,
	MENU_MAP_TB0_PK2 = 175,
	MENU_MAP_CHIKA_PK2 = 176,
	MENU_MAP_KUC_PK2 = 177,
	MENU_MAP_KUH_PK2 = 178,
	MENU_MAP_KUR_PK2 = 179,
	SNP_SOTO_MIS_PK2 = 180,
	SNP_SOTO_MIS_E_PK2 = 181,
	SNP_SOTO_MIS_W_PK2 = 182,
	SNP_SOTO_OSA_PK2 = 183,
	SNP_SOTO_IDO_PK2 = 184,
	SNP_SOTO_MINAMI_PK2 = 185,
	SNP_SOTO_KIR_PK2 = 186,
	SNP_SOTO_TAC_PK2 = 187,
	SNP_SOTO_KITA_PK2 = 188,
	SNP_SOTO_MON_PK2 = 189,
	SNP_SOTO_SAS_PK2 = 190,
	SNP_SOTO_KUR_MAE_PK2 = 191,
	SNP_SOTO_MIN_PK2 = 192,
	SNP_SOTO_BOC_PK2 = 193,
	SNP_SOTO_KUC_PK2 = 194,
	SNP_SOTO_SAN_IRI_PK2 = 195,
	SNP_SOTO_SAN_PK2 = 196,
	SNP_SOTO_KUR_PK2 = 197,
	SNP_SOTO_KRO_PK2 = 198,
	SNP_SOTO_TAC_IE_PK2 = 199,
	SNP_OS1_GEN_PK2 = 200,
	SNP_OS1_KIM_PK2 = 201,
	SNP_OS1_NAN_PK2 = 202,
	SNP_OS1_IRO_PK2 = 203,
	SNP_OS1_DOM2_PK2 = 204,
	SNP_OS1_DOM1_PK2 = 205,
	SNP_OS1_DOM0_PK2 = 206,
	SNP_OS1_OZA_PK2 = 207,
	SNP_OS1_BUT_PK2 = 208,
	SNP_OS1_KAM_PK2 = 209,
	SNP_OS1_OKU_PK2 = 210,
	SNP_OS2_DOM_PK2 = 211,
	SNP_OS2_SEI_PK2 = 212,
	SNP_OS2_KYA_PK2 = 213,
	SNP_OS2_SIN_PK2 = 214,
	SNP_OS2_SHO_PK2 = 215,
	SNP_KS1_KEI_PK2 = 216,
	SNP_KS1_GEN_PK2 = 217,
	SNP_KS1_MEI_PK2 = 218,
	SNP_KS1_TUC_PK2 = 219,
	SNP_KS1_TUC_CHI_PK2 = 220,
	SNP_KS1_OHI_PK2 = 221,
	SNP_KS1_TUB_PK2 = 222,
	SNP_KS1_NUN_MON_PK2 = 223,
	SNP_KS1_NUN_PK2 = 224,
	SNP_KS1_DOZ_PK2 = 225,
	SNP_KS1_DOZ_ZAS_PK2 = 226,
	SNP_KS1_DOZ_TUU_PK2 = 227,
	SNP_KS1_BUT_PK2 = 228,
	SNP_KS1_WAT_PK2 = 229,
	SNP_KS1_KUS_KOB_PK2 = 230,
	SNP_KS1_KUS_PK2 = 231,
	SNP_KS1_KUS_TUU_PK2 = 232,
	SNP_KS0_CHI_PK2 = 233,
	SNP_KS2_TUB_PK2 = 234,
	SNP_KS2_NUN_PK2 = 235,
	SNP_KS2_MEI_PK2 = 236,
	SNP_KS2_MEIMETU_PK2 = 237,
	SNP_KS2_KYA_ROU_PK2 = 238,
	SNP_KS2_KYA_PK2 = 239,
	SNP_KS2_HIN_PK2 = 240,
	SNP_KS2_TOU_PK2 = 241,
	SNP_KS0_BUT_PK2 = 242,
	SNP_KS0_WAT_W_PK2 = 243,
	SNP_KS0_WAT_E_PK2 = 244,
	SNP_KS0_KUS_PK2 = 245,
	SNP_RY1_GEN_PK2 = 246,
	SNP_RY1_GEN_ROU_PK2 = 247,
	SNP_RY1_KUB_PK2 = 248,
	SNP_RY1_AKA_PK2 = 249,
	SNP_RY1_BUT_PK2 = 250,
	SNP_RY1_ZAS_PK2 = 251,
	SNP_RY1_NAK_PK2 = 252,
	SNP_RY1_KAM_PK2 = 253,
	SNP_RY1_FUT_PK2 = 254,
	SNP_RY1_MEI_PK2 = 255,
	SNP_RY1_KAR_PK2 = 256,
	SNP_RY1_FUK_PK2 = 257,
	SNP_RY1_SHO_PK2 = 258,
	SNP_RY1_EIS_PK2 = 259,
	SNP_RY1_KAI_PK2 = 260,
	SNP_RY2_WAT_PK2 = 261,
	SNP_RY2_FUK_PK2 = 262,
	SNP_RY2_SHO_PK2 = 263,
	SNP_RY2_KAI_PK2 = 264,
	SNP_RY2_TAK_PK2 = 265,
	SNP_TB1_GEN_PK2 = 266,
	SNP_TB1_GEN_ROU_PK2 = 267,
	SNP_TB1_KUB_PK2 = 268,
	SNP_TB1_ZAS_PK2 = 269,
	SNP_TB1_NAK_PK2 = 270,
	SNP_TB1_KAM_PK2 = 271,
	SNP_TB1_FUT_PK2 = 272,
	SNP_TB1_MEI_PK2 = 273,
	SNP_TB1_KAR_PK2 = 274,
	SNP_TB1_FUK_PK2 = 275,
	SNP_TB1_SHO_PK2 = 276,
	SNP_TB1_EIS_PK2 = 277,
	SNP_TB1_KAI_PK2 = 278,
	SNP_TB2_FUK_PK2 = 279,
	SNP_TB2_ITU_PK2 = 280,
	SNP_TB2_SHO_PK2 = 281,
	SNP_TB2_KAI_PK2 = 282,
	SNP_TB2_TAK_PK2 = 283,
	SNP_TB2_NAR_E_PK2 = 284,
	SNP_TB2_NAR_N_PK2 = 285,
	SNP_TB2_NAR_S_PK2 = 286,
	SNP_TB2_NAR_W_PK2 = 287,
	SNP_OS0_OSA_PK2 = 288,
	SNP_RY0_RYTB_PK2 = 289,
	SNP_CHIKA_FUK1_PK2 = 290,
	SNP_CHIKA_FUK2_PK2 = 291,
	SNP_CHIKA_HIK_PK2 = 292,
	SNP_CHIKA_UTU_PK2 = 293,
	SNP_KUR_PK2 = 294,
	SNP_KUC_PK2 = 295,
	SNP_KUREHA_PK2 = 296,
	SNP_SOTO_OSA_MAE_PK2 = 297,
	SNP_SOTO_KUR_URA_PK2 = 298,
	SNP_SOTO_KIR_URA_PK2 = 299,
	SNP_SOTO_KIR_IE_PK2 = 300,
	ENE_ACT01_OBJ = 301,
	SIS_ALG_OBJ = 302,
	CH000_MIO_MDL = 303,
	CH001_MAY_MDL = 304,
	CH002_FUUIN_MDL = 305,
	CH003_KUSABI2A_MDL = 306,
	CH004_MAKABE_MDL = 307,
	CH005_TYOU_MDL = 308,
	CH006_ITU_MDL = 309,
	CH007_DUMMY_MDL = 310,
	CH008_DUMMY_MDL = 311,
	CH009_KUSABI2C_MDL = 312,
	CH010_YAMI_MDL = 313,
	CH011_YAMI2_MDL = 314,
	CH012_KUSANAWA_MDL = 315,
	CH013_SAEREI1_MDL = 316,
	CH014_GUUJITAMA_MDL = 317,
	CH015_MAKI_MDL = 318,
	CH016_MIOKAGE_MDL = 319,
	CH017_MIYA_MDL = 320,
	CH018_KUSABI_MDL = 321,
	CH019_CHITOSE_MDL = 322,
	CH020_RAKKA_MDL = 323,
	CH021_WANINNGYOU_MDL = 324,
	CH022_HUTAGOREI_MDL = 325,
	CH023_ASHIREI_MDL = 326,
	CH024_HAKO_MDL = 327,
	CH025_KUBIORE_MDL = 328,
	CH026_KARAKURI_MDL = 329,
	CH027_ONIKODOMO1_MDL = 330,
	CH028_ONIKODOMO2_MDL = 331,
	CH029_ONIKODOMO3_MDL = 332,
	CH030_SUISI_MDL = 333,
	CH031_GUUJI_MDL = 334,
	CH032_IMIBITO1_MDL = 335,
	CH033_NINGYOU_MDL = 336,
	CH034_RAKKA2_MDL = 337,
	CH035_MURAA_MDL = 338,
	CH036_MURAB_MDL = 339,
	CH037_MURAC_MDL = 340,
	CH038_KUSA1_MDL = 341,
	CH039_KUSA2_MDL = 342,
	CH040_KUMITATE_MDL = 343,
	CH041_KUROREI_MDL = 344,
	CH042_DUMMY_MDL = 345,
	CH043_KUROSAWA_MDL = 346,
	CH044_SAECONTE_MDL = 347,
	CH045_LHANDREI_MDL = 348,
	CH046_YAMI_MDL = 349,
	CH047_KUSA3_MDL = 350,
	CH048_KUSA4_MDL = 351,
	CH049_KUSA5_MDL = 352,
	CH050_MURAREI4_MDL = 353,
	CH051_MURAREI5_MDL = 354,
	CH052_MURAREI6_MDL = 355,
	CH053_IMIBITO2_MDL = 356,
	CH054_MAKIMURA_MDL = 357,
	CH055_SUDO_MDL = 358,
	CH056_WANINGYOUR_MDL = 359,
	CH057_WANINGYOUL_MDL = 360,
	CH058_SAE_MDL = 361,
	CH059_MURAREI7_MDL = 362,
	CH060_MURAREI8_MDL = 363,
	CH061_MURAREI9_MDL = 364,
	CH000_GOTH_MDL = 365,
	CH001_GOTH_MDL = 366,
	CH000_YUKATA_1_MDL = 367,
	CH001_YUKATA_1_MDL = 368,
	CH000_YUKATA_2_MDL = 369,
	CH001_YUKATA_2_MDL = 370,
	CH000_YUKATA_3_MDL = 371,
	CH001_YUKATA_3_MDL = 372,
	CH000_YAE_MDL = 373,
	CH001_SAE_MDL = 374,
	CH000_MIKU_MDL = 375,
	CH001_MIKU_MDL = 376,
	CH000_SEIHUKU_MDL = 377,
	CH001_SEIHUKU_MDL = 378,
	CH000_BONTAGE_MDL = 379,
	CH001_BONTAGE_MDL = 380,
	MAN_MDL_END = 381,
	CH000_MIO_ANM = 382,
	CH000_MIO_L_ANM = 383,
	CH000_MIO_L_SP_01_ANM = 384,
	CH000_MIO_L_SP_02_ANM = 385,
	CH001_MAY_ANM = 386,
	CH001_MAY_SYNC_ANM = 387,
	CH003_KUSABI2A_ANM = 388,
	CH004_DUMMY_ANM = 389,
	CH005_TYOU_ANM = 390,
	CH007_DUMMY_ANM = 391,
	CH008_DUMMY_ANM = 392,
	CH009_KUSABI2C_ANM = 393,
	CH010_YAMI_ANM = 394,
	CH011_YAMI2_ANM = 395,
	CH012_KUSANAWA_ANM = 396,
	CH013_SAEREI1_ANM = 397,
	CH014_GUUJITAMA_ANM = 398,
	CH015_MAKI_ANM = 399,
	CH016_DUMMY_ANM = 400,
	CH017_MIYA_ANM = 401,
	CH018_KUSABI_ANM = 402,
	CH019_CHITOSE_ANM = 403,
	CH020_RAKKA_ANM = 404,
	CH021_WANINNGYOU_ANM = 405,
	CH022_HUTAGOREI_ANM = 406,
	CH023_DUMMY_ANM = 407,
	CH024_HAKO_ANM = 408,
	CH025_KUBIORE_ANM = 409,
	CH026_KARAKURI_ANM = 410,
	CH027_ONIKODOMO1_ANM = 411,
	CH028_ONIKODOMO2_ANM = 412,
	CH029_ONIKODOMO3_ANM = 413,
	CH030_SUISI_ANM = 414,
	CH031_GUUJI_ANM = 415,
	CH032_IMIBITO_ANM = 416,
	CH033_NINGYOU_ANM = 417,
	CH034_DUMMY_ANM = 418,
	CH035_MURAA_ANM = 419,
	CH036_MURAB_ANM = 420,
	CH037_MURAC_ANM = 421,
	CH038_KUSA1_ANM = 422,
	CH039_KUSA2_ANM = 423,
	CH040_DUMMY_ANM = 424,
	CH041_KUROREI_ANM = 425,
	CH042_DUMMY_ANM = 426,
	CH043_DUMMY_ANM = 427,
	CH044_DUMMY_ANM = 428,
	CH045_DUMMY_ANM = 429,
	CH047_DUMMY_ANM = 430,
	CH048_DUMMY_ANM = 431,
	CH049_DUMMY_ANM = 432,
	CH050_DUMMY_ANM = 433,
	CH051_DUMMY_ANM = 434,
	CH052_DUMMY_ANM = 435,
	CH053_DUMMY_ANM = 436,
	CH054_DUMMY_ANM = 437,
	CH055_DUMMY_ANM = 438,
	CH056_WANINGYOUR_ANM = 439,
	CH057_WANINGYOUL_ANM = 440,
	CH058_DUMMY_ANM = 441,
	CH059_DUMMY_ANM = 442,
	CH060_DUMMY_ANM = 443,
	CH061_DUMMY_ANM = 444,
	CH017_A000_STAND_ANM = 445,
	CH046_A026_TAORE_ANM = 446,
	CH999_DUMMY_ANM = 447,
	CH002_A032_HANDS_ANM = 448,
	CH017_A017_WALK_ANM = 449,
	CH017_A001_UP_ANM = 450,
	CH017_A024_WALK_ANM = 451,
	CH024_A003_BOXOUT2_ANM = 452,
	CH006_A027_STAND_ANM = 453,
	CH017_A028_NOREN_ANM = 454,
	CH006_A031_STAND_ANM = 455,
	CH001_A035_RUN1_ANM = 456,
	CH001_A036_RUN2_ANM = 457,
	CH030_A037_SUISHI_ANM = 458,
	CH035_A038_ESCAPE_ANM = 459,
	CH036_A039_ESCAPE_ANM = 460,
	CH037_A040_ESCAPE_ANM = 461,
	CH001_A041_WALK_ANM = 462,
	CH004_A042_FURIMUKI_ANM = 463,
	CH018_A043_HIKIZURI_ANM = 464,
	CH036_A044_HIKIZURARE_ANM = 465,
	CH018_A045_WALK_ANM = 466,
	CH024_A046_HUSI_ANM = 467,
	CH024_A048_STAND_ANM = 468,
	CH043_A049_STAND_ANM = 469,
	CH038_A050_HAIAGARI_ANM = 470,
	CH029_A055_OUDAN_ANM = 471,
	CH029_A056_NOZOKI_ANM = 472,
	CH004_A057_STAND_ANM = 473,
	CH043_A058_KEIKOKU_ANM = 474,
	CH031_A059_STAND_ANM = 475,
	CH031_A060_FURIMUKI_ANM = 476,
	CH024_A061_HIKIKOMI_ANM = 477,
	CH017_A062_STAND_ANM = 478,
	CH004_A063_WALK_ANM = 479,
	CH023_A066_WALK_ANM = 480,
	CH038_A067_TATI_ANM = 481,
	CH045_A068_HAND_ANM = 482,
	CH039_A069_MADO_ANM = 483,
	CH038_A070_SHAGAMI_ANM = 484,
	CH029_A076_NOZOKI_ANM = 485,
	CH029_A077_HIRAKI_ANM = 486,
	CH001_A087_CRAZY_ANM = 487,
	CH025_A089_WALK_ANM = 488,
	CH004_A090_WRITE_ANM = 489,
	CH022_A091_RUN_ANM = 490,
	CH022_A093_SEIZA_ANM = 491,
	CH026_A095_KARAKURISHI_ANM = 492,
	CH001_A096_WALK_SLOW_ANM = 493,
	CH032_A098_STAND_ANM = 494,
	CH001_A099_CRY_ANM = 495,
	CH006_A100_NEUTRAL_ANM = 496,
	CH059_A101_MURAWALK_ANM = 497,
	CH060_A102_MURAWALK_ANM = 498,
	CH061_A103_MURAWALK_ANM = 499,
	CH031_A104_FURIMUKI_ANM = 500,
	CH031_A105_FURIMUKI_ANM = 501,
	CH013_A106_TURN_R_ANM = 502,
	CH022_A107_SUWARI_R_ANM = 503,
	CH021_A108_SUWARI_L_ANM = 504,
	CH018_A111_KUSABI_ANM = 505,
	CH054_A112_NEUTRAL_ANM = 506,
	CH001_A113_DOWN_ANM = 507,
	CH054_A114_WALK_ANM = 508,
	CH013_A115_WALK_ANM = 509,
	CH013_A116_NEUTRAL_ANM = 510,
	CH013_A117_CRY_ANM = 511,
	CH006_A119_WALK_ANM = 512,
	CH013_A120_TURN_L_ANM = 513,
	CH038_A121_STAND_ANM = 514,
	CH019_A122_ESCAPE_ANM = 515,
	CH019_A123_RUN_ANM = 516,
	CH013_A124_WALK_ANM = 517,
	CH027_A126_RUN_ANM = 518,
	CH028_A127_RUN_ANM = 519,
	CH029_A128_RUN_ANM = 520,
	CH027_A129_LOOK_ANM = 521,
	CH031_A130_OJIGI_ANM = 522,
	CH004_A137_TATIAGARI_ANM = 523,
	CH019_A138_SIT_ANM = 524,
	CH028_A140_LOOK_ANM = 525,
	CH029_A141_LOOK_ANM = 526,
	CH031_A142_STAND_ANM = 527,
	CH010_A143_STAND_ANM = 528,
	CH011_A144_NEUTRAL_ANM = 529,
	CH040_A145_MIKAN_ANM = 530,
	CH010_A146_YAMI_WALK_ANM = 531,
	CH019_A147_NEUTRAL_ANM = 532,
	CH021_A148_NEUTRAL_ANM = 533,
	CH025_A149_NEUTRAL_ANM = 534,
	CH026_A150_STAND_ANM = 535,
	CH028_A151_WALK_ANM = 536,
	CH031_A152_WALK_ANM = 537,
	CH032_A153_WALK_ANM = 538,
	CH035_A154_NEUTRAL_ANM = 539,
	CH032_A156_IMIBITO_FURIKAERI_ANM = 540,
	CH019_A157_KAOAGERU_ANM = 541,
	CH015_A158_MAKIREI_SISU_ANM = 542,
	CH019_A165_HAIZURI_ANM = 543,
	CH028_A166_JUMP_ANM = 544,
	CH027_A171_STAND_ANM = 545,
	CH002_A173_HANDS_ANM = 546,
	CH021_A178_NEUTRAL_ANM = 547,
	CH001_A179_NEUTRAL_ANM = 548,
	CH019_A191_STANDUP_ANM = 549,
	CH001_A195_SAE_MAYU_ANM = 550,
	CH019_A202_CHITOSE_SIT_ANM = 551,
	CH024_A204_BOXOUT3_ANM = 552,
	MAN_ANM_END = 553,
	DOOR_ANIM_MOT = 554,
	ROOM_START_DMY = 555,
	RY00_PK2 = 556,
	RY00_ZLD = 557,
	RY00_PZB_PAK = 558,
	RY00_MH = 559,
	RY00MONO_PK2 = 560,
	RY01_PK2 = 561,
	RY01_ZLD = 562,
	RY01_PZB_PAK = 563,
	RY01_MH = 564,
	RY01MONO_PK2 = 565,
	RY02_PK2 = 566,
	RY02_ZLD = 567,
	RY02_PZB_PAK = 568,
	RY02_MH = 569,
	RY02MONO_PK2 = 570,
	RY03_PK2 = 571,
	RY03_ZLD = 572,
	RY03_PZB_PAK = 573,
	RY03_MH = 574,
	RY03MONO_PK2 = 575,
	RY04_PK2 = 576,
	RY04_ZLD = 577,
	RY04_PZB_PAK = 578,
	RY04_MH = 579,
	RY04MONO_PK2 = 580,
	RY05_PK2 = 581,
	RY05_ZLD = 582,
	RY05_PZB_PAK = 583,
	RY05_MH = 584,
	RY05MONO_PK2 = 585,
	RY06_PK2 = 586,
	RY06_ZLD = 587,
	RY06_PZB_PAK = 588,
	RY06_MH = 589,
	RY06MONO_PK2 = 590,
	RY07_PK2 = 591,
	RY07_ZLD = 592,
	RY07_PZB_PAK = 593,
	RY07_MH = 594,
	RY07MONO_PK2 = 595,
	RY08_PK2 = 596,
	RY08_ZLD = 597,
	RY08_PZB_PAK = 598,
	RY08_MH = 599,
	RY08MONO_PK2 = 600,
	RY09_PK2 = 601,
	RY09_ZLD = 602,
	RY09_PZB_PAK = 603,
	RY09_MH = 604,
	RY09MONO_PK2 = 605,
	RY10_PK2 = 606,
	RY10_ZLD = 607,
	RY10_PZB_PAK = 608,
	RY10_MH = 609,
	RY10MONO_PK2 = 610,
	RY11_PK2 = 611,
	RY11_ZLD = 612,
	RY11_PZB_PAK = 613,
	RY11_MH = 614,
	RY11MONO_PK2 = 615,
	RY12_PK2 = 616,
	RY12_ZLD = 617,
	RY12_PZB_PAK = 618,
	RY12_MH = 619,
	RY12MONO_PK2 = 620,
	ROS00_PK2 = 621,
	ROS00_ZLD = 622,
	ROS00_PZB_PAK = 623,
	ROS00_MH = 624,
	ROS00MONO_PK2 = 625,
	ROS01_PK2 = 626,
	ROS01_ZLD = 627,
	ROS01_PZB_PAK = 628,
	ROS01_MH = 629,
	ROS01MONO_PK2 = 630,
	ROS02_PK2 = 631,
	ROS02_ZLD = 632,
	ROS02_PZB_PAK = 633,
	ROS02_MH = 634,
	ROS02MONO_PK2 = 635,
	ROS03_PK2 = 636,
	ROS03_ZLD = 637,
	ROS03_PZB_PAK = 638,
	ROS03_MH = 639,
	ROS03MONO_PK2 = 640,
	ROS04_PK2 = 641,
	ROS04_ZLD = 642,
	ROS04_PZB_PAK = 643,
	ROS04_MH = 644,
	ROS04MONO_PK2 = 645,
	ROS05_PK2 = 646,
	ROS05_ZLD = 647,
	ROS05_PZB_PAK = 648,
	ROS05_MH = 649,
	ROS05MONO_PK2 = 650,
	RTB00_PK2 = 651,
	RTB00_ZLD = 652,
	RTB00_PZB_PAK = 653,
	RTB00_MH = 654,
	RTB00MONO_PK2 = 655,
	RTB01_PK2 = 656,
	RTB01_ZLD = 657,
	RTB01_PZB_PAK = 658,
	RTB01_MH = 659,
	RTB01MONO_PK2 = 660,
	RTB02_PK2 = 661,
	RTB02_ZLD = 662,
	RTB02_PZB_PAK = 663,
	RTB02_MH = 664,
	RTB02MONO_PK2 = 665,
	RTB03_PK2 = 666,
	RTB03_ZLD = 667,
	RTB03_PZB_PAK = 668,
	RTB03_MH = 669,
	RTB03MONO_PK2 = 670,
	RTB04_PK2 = 671,
	RTB04_ZLD = 672,
	RTB04_PZB_PAK = 673,
	RTB04_MH = 674,
	RTB04MONO_PK2 = 675,
	RTB05_PK2 = 676,
	RTB05_ZLD = 677,
	RTB05_PZB_PAK = 678,
	RTB05_MH = 679,
	RTB05MONO_PK2 = 680,
	RTB06_PK2 = 681,
	RTB06_ZLD = 682,
	RTB06_PZB_PAK = 683,
	RTB06_MH = 684,
	RTB06MONO_PK2 = 685,
	RTB07_PK2 = 686,
	RTB07_ZLD = 687,
	RTB07_PZB_PAK = 688,
	RTB07_MH = 689,
	RTB07MONO_PK2 = 690,
	RTB08_PK2 = 691,
	RTB08_ZLD = 692,
	RTB08_PZB_PAK = 693,
	RTB08_MH = 694,
	RTB08MONO_PK2 = 695,
	RTB09_PK2 = 696,
	RTB09_ZLD = 697,
	RTB09_PZB_PAK = 698,
	RTB09_MH = 699,
	RTB09MONO_PK2 = 700,
	RTB10_PK2 = 701,
	RTB10_ZLD = 702,
	RTB10_PZB_PAK = 703,
	RTB10_MH = 704,
	RTB10MONO_PK2 = 705,
	RRY00_PK2 = 706,
	RRY00_ZLD = 707,
	RRY00_PZB_PAK = 708,
	RRY00_MH = 709,
	RRY00MONO_PK2 = 710,
	RRY01_PK2 = 711,
	RRY01_ZLD = 712,
	RRY01_PZB_PAK = 713,
	RRY01_MH = 714,
	RRY01MONO_PK2 = 715,
	RRY02_PK2 = 716,
	RRY02_ZLD = 717,
	RRY02_PZB_PAK = 718,
	RRY02_MH = 719,
	RRY02MONO_PK2 = 720,
	RRY03_PK2 = 721,
	RRY03_ZLD = 722,
	RRY03_PZB_PAK = 723,
	RRY03_MH = 724,
	RRY03MONO_PK2 = 725,
	RRY04_PK2 = 726,
	RRY04_ZLD = 727,
	RRY04_PZB_PAK = 728,
	RRY04_MH = 729,
	RRY04MONO_PK2 = 730,
	RRY05_PK2 = 731,
	RRY05_ZLD = 732,
	RRY05_PZB_PAK = 733,
	RRY05_MH = 734,
	RRY05MONO_PK2 = 735,
	RRY06_PK2 = 736,
	RRY06_ZLD = 737,
	RRY06_PZB_PAK = 738,
	RRY06_MH = 739,
	RRY06MONO_PK2 = 740,
	RRY07_PK2 = 741,
	RRY07_ZLD = 742,
	RRY07_PZB_PAK = 743,
	RRY07_MH = 744,
	RRY07MONO_PK2 = 745,
	RRY08_PK2 = 746,
	RRY08_ZLD = 747,
	RRY08_PZB_PAK = 748,
	RRY08_MH = 749,
	RRY08MONO_PK2 = 750,
	RRY09_PK2 = 751,
	RRY09_ZLD = 752,
	RRY09_PZB_PAK = 753,
	RRY09_MH = 754,
	RRY09MONO_PK2 = 755,
	RKS00_PK2 = 756,
	RKS00_ZLD = 757,
	RKS00_PZB_PAK = 758,
	RKS00_MH = 759,
	RKS00MONO_PK2 = 760,
	RKS01_PK2 = 761,
	RKS01_ZLD = 762,
	RKS01_PZB_PAK = 763,
	RKS01_MH = 764,
	RKS01MONO_PK2 = 765,
	RKS02_PK2 = 766,
	RKS02_ZLD = 767,
	RKS02_PZB_PAK = 768,
	RKS02_MH = 769,
	RKS02MONO_PK2 = 770,
	RKS03_PK2 = 771,
	RKS03_ZLD = 772,
	RKS03_PZB_PAK = 773,
	RKS03_MH = 774,
	RKS03MONO_PK2 = 775,
	RKS04_PK2 = 776,
	RKS04_ZLD = 777,
	RKS04_PZB_PAK = 778,
	RKS04_MH = 779,
	RKS04MONO_PK2 = 780,
	RKS05_PK2 = 781,
	RKS05_ZLD = 782,
	RKS05_PZB_PAK = 783,
	RKS05_MH = 784,
	RKS05MONO_PK2 = 785,
	RKS06_PK2 = 786,
	RKS06_ZLD = 787,
	RKS06_PZB_PAK = 788,
	RKS06_MH = 789,
	RKS06MONO_PK2 = 790,
	RKS07_PK2 = 791,
	RKS07_ZLD = 792,
	RKS07_PZB_PAK = 793,
	RKS07_MH = 794,
	RKS07MONO_PK2 = 795,
	RKS08_PK2 = 796,
	RKS08_ZLD = 797,
	RKS08_PZB_PAK = 798,
	RKS08_MH = 799,
	RKS08MONO_PK2 = 800,
	RKS09_PK2 = 801,
	RKS09_ZLD = 802,
	RKS09_PZB_PAK = 803,
	RKS09_MH = 804,
	RKS09MONO_PK2 = 805,
	RKS10_PK2 = 806,
	RKS10_ZLD = 807,
	RKS10_PZB_PAK = 808,
	RKS10_MH = 809,
	RKS10MONO_PK2 = 810,
	RKS11_PK2 = 811,
	RKS11_ZLD = 812,
	RKS11_PZB_PAK = 813,
	RKS11_MH = 814,
	RKS11MONO_PK2 = 815,
	RKS12_PK2 = 816,
	RKS12_ZLD = 817,
	RKS12_PZB_PAK = 818,
	RKS12_MH = 819,
	RKS12MONO_PK2 = 820,
	RKS13_PK2 = 821,
	RKS13_ZLD = 822,
	RKS13_PZB_PAK = 823,
	RKS13_MH = 824,
	RKS13MONO_PK2 = 825,
	RKS14_PK2 = 826,
	RKS14_ZLD = 827,
	RKS14_PZB_PAK = 828,
	RKS14_MH = 829,
	RKS14MONO_PK2 = 830,
	RKH00_PK2 = 831,
	RKH00_ZLD = 832,
	RKH00_PZB_PAK = 833,
	RKH00_MH = 834,
	RKH00MONO_PK2 = 835,
	RKC00_PK2 = 836,
	RKC00_ZLD = 837,
	RKC00_PZB_PAK = 838,
	RKC00_MH = 839,
	RKC00MONO_PK2 = 840,
	RKR00_PK2 = 841,
	RKR00_ZLD = 842,
	RKR00_PZB_PAK = 843,
	RKR00_MH = 844,
	RKR00MONO_PK2 = 845,
	RCH00_PK2 = 846,
	RCH00_ZLD = 847,
	RCH00_PZB_PAK = 848,
	RCH00_MH = 849,
	RCH00MONO_PK2 = 850,
	RCH01_PK2 = 851,
	RCH01_ZLD = 852,
	RCH01_PZB_PAK = 853,
	RCH01_MH = 854,
	RCH01MONO_PK2 = 855,
	RCH02_PK2 = 856,
	RCH02_ZLD = 857,
	RCH02_PZB_PAK = 858,
	RCH02_MH = 859,
	RCH02MONO_PK2 = 860,
	RCH03_PK2 = 861,
	RCH03_ZLD = 862,
	RCH03_PZB_PAK = 863,
	RCH03_MH = 864,
	RCH03MONO_PK2 = 865,
	RCH04_PK2 = 866,
	RCH04_ZLD = 867,
	RCH04_PZB_PAK = 868,
	RCH04_MH = 869,
	RCH04MONO_PK2 = 870,
	RCH05_PK2 = 871,
	RCH05_ZLD = 872,
	RCH05_PZB_PAK = 873,
	RCH05_MH = 874,
	RCH05MONO_PK2 = 875,
	RCH06_PK2 = 876,
	RCH06_ZLD = 877,
	RCH06_PZB_PAK = 878,
	RCH06_MH = 879,
	RCH06MONO_PK2 = 880,
	RY13_PK2 = 881,
	RY13_ZLD = 882,
	RY13_PZB_PAK = 883,
	RY13_MH = 884,
	RY13MONO_PK2 = 885,
	ROOM_END_DMY = 886,
	F000_PK2 = 887,
	F001_PK2 = 888,
	F002_PK2 = 889,
	F003_PK2 = 890,
	F004_PK2 = 891,
	F005_PK2 = 892,
	F006_PK2 = 893,
	F007_PK2 = 894,
	F008_PK2 = 895,
	F009_PK2 = 896,
	F010_PK2 = 897,
	F011_PK2 = 898,
	F012_PK2 = 899,
	F013_PK2 = 900,
	F014_PK2 = 901,
	F015_PK2 = 902,
	F016_PK2 = 903,
	F017_PK2 = 904,
	F018_PK2 = 905,
	F019_PK2 = 906,
	F020_PK2 = 907,
	F021_PK2 = 908,
	F022_PK2 = 909,
	F023_PK2 = 910,
	F024_PK2 = 911,
	F025_PK2 = 912,
	F026_PK2 = 913,
	F027_PK2 = 914,
	F028_PK2 = 915,
	F029_PK2 = 916,
	F030_PK2 = 917,
	F031_PK2 = 918,
	F032_PK2 = 919,
	F033_PK2 = 920,
	F034_PK2 = 921,
	F035_PK2 = 922,
	F036_PK2 = 923,
	F037_PK2 = 924,
	F038_PK2 = 925,
	F039_PK2 = 926,
	F040_PK2 = 927,
	F041_PK2 = 928,
	F042_PK2 = 929,
	F043_PK2 = 930,
	F044_PK2 = 931,
	F045_PK2 = 932,
	F046_PK2 = 933,
	F047_PK2 = 934,
	F048_PK2 = 935,
	F049_PK2 = 936,
	F050_PK2 = 937,
	F051_PK2 = 938,
	F052_PK2 = 939,
	F053_PK2 = 940,
	F054_PK2 = 941,
	F055_PK2 = 942,
	F056_PK2 = 943,
	F057_PK2 = 944,
	F058_PK2 = 945,
	F059_PK2 = 946,
	F060_PK2 = 947,
	F061_PK2 = 948,
	F062_PK2 = 949,
	F063_PK2 = 950,
	F064_PK2 = 951,
	F065_PK2 = 952,
	F066_PK2 = 953,
	F067_PK2 = 954,
	F068_PK2 = 955,
	F069_PK2 = 956,
	F070_PK2 = 957,
	F071_PK2 = 958,
	F072_PK2 = 959,
	F073_PK2 = 960,
	F074_PK2 = 961,
	F075_PK2 = 962,
	F076_PK2 = 963,
	F077_PK2 = 964,
	F078_PK2 = 965,
	F079_PK2 = 966,
	F080_PK2 = 967,
	F081_PK2 = 968,
	F082_PK2 = 969,
	F083_PK2 = 970,
	F084_PK2 = 971,
	F085_PK2 = 972,
	F086_PK2 = 973,
	F087_PK2 = 974,
	F088_PK2 = 975,
	F089_PK2 = 976,
	F090_PK2 = 977,
	F091_PK2 = 978,
	F092_PK2 = 979,
	F093_PK2 = 980,
	F094_PK2 = 981,
	F095_PK2 = 982,
	F096_PK2 = 983,
	F097_PK2 = 984,
	F098_PK2 = 985,
	F099_PK2 = 986,
	F100_PK2 = 987,
	F101_PK2 = 988,
	F102_PK2 = 989,
	F103_PK2 = 990,
	F104_PK2 = 991,
	F105_PK2 = 992,
	F106_PK2 = 993,
	F107_PK2 = 994,
	F108_PK2 = 995,
	F109_PK2 = 996,
	F110_PK2 = 997,
	F111_PK2 = 998,
	F112_PK2 = 999,
	F113_PK2 = 1000,
	F114_PK2 = 1001,
	F115_PK2 = 1002,
	F116_PK2 = 1003,
	F117_PK2 = 1004,
	F118_PK2 = 1005,
	F119_PK2 = 1006,
	F120_PK2 = 1007,
	F121_PK2 = 1008,
	F122_PK2 = 1009,
	F123_PK2 = 1010,
	F124_PK2 = 1011,
	F125_PK2 = 1012,
	F126_PK2 = 1013,
	F127_PK2 = 1014,
	F128_PK2 = 1015,
	F129_PK2 = 1016,
	F130_PK2 = 1017,
	F131_PK2 = 1018,
	F132_PK2 = 1019,
	F133_PK2 = 1020,
	F134_PK2 = 1021,
	F135_PK2 = 1022,
	F136_PK2 = 1023,
	F137_PK2 = 1024,
	F138_PK2 = 1025,
	F139_PK2 = 1026,
	F140_PK2 = 1027,
	F141_PK2 = 1028,
	F142_PK2 = 1029,
	F143_PK2 = 1030,
	F144_PK2 = 1031,
	F145_PK2 = 1032,
	F146_PK2 = 1033,
	F147_PK2 = 1034,
	F148_PK2 = 1035,
	F149_PK2 = 1036,
	F150_PK2 = 1037,
	F151_PK2 = 1038,
	F152_PK2 = 1039,
	F153_PK2 = 1040,
	F154_PK2 = 1041,
	F155_PK2 = 1042,
	F156_PK2 = 1043,
	F157_PK2 = 1044,
	F158_PK2 = 1045,
	F159_PK2 = 1046,
	F160_PK2 = 1047,
	F161_PK2 = 1048,
	F162_PK2 = 1049,
	F163_PK2 = 1050,
	F164_PK2 = 1051,
	F165_PK2 = 1052,
	F166_PK2 = 1053,
	F167_PK2 = 1054,
	F168_PK2 = 1055,
	F169_PK2 = 1056,
	F170_PK2 = 1057,
	F171_PK2 = 1058,
	F172_PK2 = 1059,
	F173_PK2 = 1060,
	F174_PK2 = 1061,
	F175_PK2 = 1062,
	F176_PK2 = 1063,
	F177_PK2 = 1064,
	F178_PK2 = 1065,
	F179_PK2 = 1066,
	F180_PK2 = 1067,
	F181_PK2 = 1068,
	F182_PK2 = 1069,
	F183_PK2 = 1070,
	F184_PK2 = 1071,
	F185_PK2 = 1072,
	F186_PK2 = 1073,
	F187_PK2 = 1074,
	F188_PK2 = 1075,
	F189_PK2 = 1076,
	F190_PK2 = 1077,
	F191_PK2 = 1078,
	F192_PK2 = 1079,
	F193_PK2 = 1080,
	F194_PK2 = 1081,
	F195_PK2 = 1082,
	F196_PK2 = 1083,
	F197_PK2 = 1084,
	F198_PK2 = 1085,
	F199_PK2 = 1086,
	F200_PK2 = 1087,
	F201_PK2 = 1088,
	F202_PK2 = 1089,
	F203_PK2 = 1090,
	F204_PK2 = 1091,
	F205_PK2 = 1092,
	F206_PK2 = 1093,
	F207_PK2 = 1094,
	F208_PK2 = 1095,
	F209_PK2 = 1096,
	F210_PK2 = 1097,
	F211_PK2 = 1098,
	F212_PK2 = 1099,
	F213_PK2 = 1100,
	F214_PK2 = 1101,
	F215_PK2 = 1102,
	F216_PK2 = 1103,
	F217_PK2 = 1104,
	F218_PK2 = 1105,
	F219_PK2 = 1106,
	F220_PK2 = 1107,
	F221_PK2 = 1108,
	F222_PK2 = 1109,
	F223_PK2 = 1110,
	F224_PK2 = 1111,
	F225_PK2 = 1112,
	F226_PK2 = 1113,
	F227_PK2 = 1114,
	F228_PK2 = 1115,
	F229_PK2 = 1116,
	F230_PK2 = 1117,
	F231_PK2 = 1118,
	F232_PK2 = 1119,
	F233_PK2 = 1120,
	F234_PK2 = 1121,
	F235_PK2 = 1122,
	F236_PK2 = 1123,
	F237_PK2 = 1124,
	F238_PK2 = 1125,
	F239_PK2 = 1126,
	F240_PK2 = 1127,
	F241_PK2 = 1128,
	F242_PK2 = 1129,
	F243_PK2 = 1130,
	F244_PK2 = 1131,
	F245_PK2 = 1132,
	F246_PK2 = 1133,
	F247_PK2 = 1134,
	F248_PK2 = 1135,
	F249_PK2 = 1136,
	F250_PK2 = 1137,
	F251_PK2 = 1138,
	F252_PK2 = 1139,
	F253_PK2 = 1140,
	F254_PK2 = 1141,
	F255_PK2 = 1142,
	F256_PK2 = 1143,
	F257_PK2 = 1144,
	F258_PK2 = 1145,
	F259_PK2 = 1146,
	F260_PK2 = 1147,
	F261_PK2 = 1148,
	F262_PK2 = 1149,
	F263_PK2 = 1150,
	F264_PK2 = 1151,
	F265_PK2 = 1152,
	F266_PK2 = 1153,
	F267_PK2 = 1154,
	F268_PK2 = 1155,
	F269_PK2 = 1156,
	F270_PK2 = 1157,
	F271_PK2 = 1158,
	F272_PK2 = 1159,
	F273_PK2 = 1160,
	F274_PK2 = 1161,
	F275_PK2 = 1162,
	F276_PK2 = 1163,
	F277_PK2 = 1164,
	F278_PK2 = 1165,
	F279_PK2 = 1166,
	F280_PK2 = 1167,
	F281_PK2 = 1168,
	F282_PK2 = 1169,
	F283_PK2 = 1170,
	F284_PK2 = 1171,
	F285_PK2 = 1172,
	F286_PK2 = 1173,
	F287_PK2 = 1174,
	F288_PK2 = 1175,
	F289_PK2 = 1176,
	F290_PK2 = 1177,
	F291_PK2 = 1178,
	F292_PK2 = 1179,
	F293_PK2 = 1180,
	F294_PK2 = 1181,
	F295_PK2 = 1182,
	F296_PK2 = 1183,
	F297_PK2 = 1184,
	F298_PK2 = 1185,
	F299_PK2 = 1186,
	F300_PK2 = 1187,
	F301_PK2 = 1188,
	F302_PK2 = 1189,
	F303_PK2 = 1190,
	F304_PK2 = 1191,
	F305_PK2 = 1192,
	F306_PK2 = 1193,
	F307_PK2 = 1194,
	F308_PK2 = 1195,
	F309_PK2 = 1196,
	F310_PK2 = 1197,
	F311_PK2 = 1198,
	F312_PK2 = 1199,
	F313_PK2 = 1200,
	F314_PK2 = 1201,
	F315_PK2 = 1202,
	F316_PK2 = 1203,
	F317_PK2 = 1204,
	F318_PK2 = 1205,
	F319_PK2 = 1206,
	F320_PK2 = 1207,
	F321_PK2 = 1208,
	F322_PK2 = 1209,
	F323_PK2 = 1210,
	F324_PK2 = 1211,
	F325_PK2 = 1212,
	F326_PK2 = 1213,
	F327_PK2 = 1214,
	F328_PK2 = 1215,
	F329_PK2 = 1216,
	F330_PK2 = 1217,
	F331_PK2 = 1218,
	F332_PK2 = 1219,
	F333_PK2 = 1220,
	F334_PK2 = 1221,
	F335_PK2 = 1222,
	F336_PK2 = 1223,
	F337_PK2 = 1224,
	F338_PK2 = 1225,
	F339_PK2 = 1226,
	F340_PK2 = 1227,
	F341_PK2 = 1228,
	F342_PK2 = 1229,
	F343_PK2 = 1230,
	F344_PK2 = 1231,
	F345_PK2 = 1232,
	F346_PK2 = 1233,
	F347_PK2 = 1234,
	F348_PK2 = 1235,
	F349_PK2 = 1236,
	F350_PK2 = 1237,
	F351_PK2 = 1238,
	F352_PK2 = 1239,
	F353_PK2 = 1240,
	F354_PK2 = 1241,
	F355_PK2 = 1242,
	F356_PK2 = 1243,
	F357_PK2 = 1244,
	F358_PK2 = 1245,
	F359_PK2 = 1246,
	F360_PK2 = 1247,
	F361_PK2 = 1248,
	F362_PK2 = 1249,
	F363_PK2 = 1250,
	F364_PK2 = 1251,
	F365_PK2 = 1252,
	F366_PK2 = 1253,
	F367_PK2 = 1254,
	F368_PK2 = 1255,
	F369_PK2 = 1256,
	F370_PK2 = 1257,
	F371_PK2 = 1258,
	F372_PK2 = 1259,
	F373_PK2 = 1260,
	F374_PK2 = 1261,
	F375_PK2 = 1262,
	F376_PK2 = 1263,
	F377_PK2 = 1264,
	F378_PK2 = 1265,
	F379_PK2 = 1266,
	F380_PK2 = 1267,
	F381_PK2 = 1268,
	F382_PK2 = 1269,
	F383_PK2 = 1270,
	F384_PK2 = 1271,
	F385_PK2 = 1272,
	F386_PK2 = 1273,
	F387_PK2 = 1274,
	F388_PK2 = 1275,
	F389_PK2 = 1276,
	F390_PK2 = 1277,
	F391_PK2 = 1278,
	F392_PK2 = 1279,
	F393_PK2 = 1280,
	F394_PK2 = 1281,
	F395_PK2 = 1282,
	F396_PK2 = 1283,
	F397_PK2 = 1284,
	F398_PK2 = 1285,
	F399_PK2 = 1286,
	F400_PK2 = 1287,
	F401_PK2 = 1288,
	F402_PK2 = 1289,
	F403_PK2 = 1290,
	F404_PK2 = 1291,
	F405_PK2 = 1292,
	F406_PK2 = 1293,
	F407_PK2 = 1294,
	F408_PK2 = 1295,
	F409_PK2 = 1296,
	F410_PK2 = 1297,
	F411_PK2 = 1298,
	F412_PK2 = 1299,
	F413_PK2 = 1300,
	F414_PK2 = 1301,
	F415_PK2 = 1302,
	F416_PK2 = 1303,
	F417_PK2 = 1304,
	F418_PK2 = 1305,
	F419_PK2 = 1306,
	F420_PK2 = 1307,
	F421_PK2 = 1308,
	F422_PK2 = 1309,
	F423_PK2 = 1310,
	F424_PK2 = 1311,
	F425_PK2 = 1312,
	F426_PK2 = 1313,
	F427_PK2 = 1314,
	F428_PK2 = 1315,
	F429_PK2 = 1316,
	F430_PK2 = 1317,
	F431_PK2 = 1318,
	F432_PK2 = 1319,
	F433_PK2 = 1320,
	F434_PK2 = 1321,
	F435_PK2 = 1322,
	F436_PK2 = 1323,
	F437_PK2 = 1324,
	F438_PK2 = 1325,
	F439_PK2 = 1326,
	F440_PK2 = 1327,
	F441_PK2 = 1328,
	F442_PK2 = 1329,
	F443_PK2 = 1330,
	F444_PK2 = 1331,
	F445_PK2 = 1332,
	F446_PK2 = 1333,
	F447_PK2 = 1334,
	F448_PK2 = 1335,
	F449_PK2 = 1336,
	F450_PK2 = 1337,
	F451_PK2 = 1338,
	F452_PK2 = 1339,
	F453_PK2 = 1340,
	F454_PK2 = 1341,
	F455_PK2 = 1342,
	F456_PK2 = 1343,
	F457_PK2 = 1344,
	F458_PK2 = 1345,
	F459_PK2 = 1346,
	F460_PK2 = 1347,
	F461_PK2 = 1348,
	F462_PK2 = 1349,
	F463_PK2 = 1350,
	F464_PK2 = 1351,
	F465_PK2 = 1352,
	F466_PK2 = 1353,
	F467_PK2 = 1354,
	F468_PK2 = 1355,
	F469_PK2 = 1356,
	F470_PK2 = 1357,
	F471_PK2 = 1358,
	F472_PK2 = 1359,
	F473_PK2 = 1360,
	F474_PK2 = 1361,
	F475_PK2 = 1362,
	F476_PK2 = 1363,
	F477_PK2 = 1364,
	F478_PK2 = 1365,
	F479_PK2 = 1366,
	F480_PK2 = 1367,
	F481_PK2 = 1368,
	F482_PK2 = 1369,
	F483_PK2 = 1370,
	F484_PK2 = 1371,
	F485_PK2 = 1372,
	F486_PK2 = 1373,
	F487_PK2 = 1374,
	F488_PK2 = 1375,
	F489_PK2 = 1376,
	F490_PK2 = 1377,
	F491_PK2 = 1378,
	F492_PK2 = 1379,
	F493_PK2 = 1380,
	F494_PK2 = 1381,
	F495_PK2 = 1382,
	F496_PK2 = 1383,
	F497_PK2 = 1384,
	F498_PK2 = 1385,
	F499_PK2 = 1386,
	F500_PK2 = 1387,
	F501_PK2 = 1388,
	F502_PK2 = 1389,
	F503_PK2 = 1390,
	F504_PK2 = 1391,
	F505_PK2 = 1392,
	F506_PK2 = 1393,
	F507_PK2 = 1394,
	F508_PK2 = 1395,
	F509_PK2 = 1396,
	F510_PK2 = 1397,
	F511_PK2 = 1398,
	F512_PK2 = 1399,
	F513_PK2 = 1400,
	F514_PK2 = 1401,
	F515_PK2 = 1402,
	F516_PK2 = 1403,
	F517_PK2 = 1404,
	F518_PK2 = 1405,
	F519_PK2 = 1406,
	F520_PK2 = 1407,
	F521_PK2 = 1408,
	F522_PK2 = 1409,
	F523_PK2 = 1410,
	F524_PK2 = 1411,
	F525_PK2 = 1412,
	F526_PK2 = 1413,
	F527_PK2 = 1414,
	F528_PK2 = 1415,
	F529_PK2 = 1416,
	F530_PK2 = 1417,
	F531_PK2 = 1418,
	F532_PK2 = 1419,
	F533_PK2 = 1420,
	F534_PK2 = 1421,
	F535_PK2 = 1422,
	F536_PK2 = 1423,
	F537_PK2 = 1424,
	F538_PK2 = 1425,
	F539_PK2 = 1426,
	F540_PK2 = 1427,
	F541_PK2 = 1428,
	F542_PK2 = 1429,
	F543_PK2 = 1430,
	F544_PK2 = 1431,
	F545_PK2 = 1432,
	F546_PK2 = 1433,
	F547_PK2 = 1434,
	F548_PK2 = 1435,
	F549_PK2 = 1436,
	F550_PK2 = 1437,
	F551_PK2 = 1438,
	F552_PK2 = 1439,
	F553_PK2 = 1440,
	F554_PK2 = 1441,
	F555_PK2 = 1442,
	F556_PK2 = 1443,
	F557_PK2 = 1444,
	F558_PK2 = 1445,
	F559_PK2 = 1446,
	F560_PK2 = 1447,
	F561_PK2 = 1448,
	F562_PK2 = 1449,
	F563_PK2 = 1450,
	F564_PK2 = 1451,
	F565_PK2 = 1452,
	F566_PK2 = 1453,
	F567_PK2 = 1454,
	F568_PK2 = 1455,
	F569_PK2 = 1456,
	F570_PK2 = 1457,
	F571_PK2 = 1458,
	F572_PK2 = 1459,
	F573_PK2 = 1460,
	F574_PK2 = 1461,
	F575_PK2 = 1462,
	F576_PK2 = 1463,
	F577_PK2 = 1464,
	F578_PK2 = 1465,
	F579_PK2 = 1466,
	F580_PK2 = 1467,
	F581_PK2 = 1468,
	F582_PK2 = 1469,
	F583_PK2 = 1470,
	F584_PK2 = 1471,
	F585_PK2 = 1472,
	F586_PK2 = 1473,
	F587_PK2 = 1474,
	F588_PK2 = 1475,
	F589_PK2 = 1476,
	F590_PK2 = 1477,
	F591_PK2 = 1478,
	F592_PK2 = 1479,
	F593_PK2 = 1480,
	F594_PK2 = 1481,
	F595_PK2 = 1482,
	F596_PK2 = 1483,
	F597_PK2 = 1484,
	F598_PK2 = 1485,
	F599_PK2 = 1486,
	F600_PK2 = 1487,
	F601_PK2 = 1488,
	F602_PK2 = 1489,
	F603_PK2 = 1490,
	F604_PK2 = 1491,
	F605_PK2 = 1492,
	F606_PK2 = 1493,
	F607_PK2 = 1494,
	F608_PK2 = 1495,
	F609_PK2 = 1496,
	F610_PK2 = 1497,
	F611_PK2 = 1498,
	F612_PK2 = 1499,
	F613_PK2 = 1500,
	F614_PK2 = 1501,
	F615_PK2 = 1502,
	F616_PK2 = 1503,
	F617_PK2 = 1504,
	F618_PK2 = 1505,
	F619_PK2 = 1506,
	F620_PK2 = 1507,
	F621_PK2 = 1508,
	F622_PK2 = 1509,
	F623_PK2 = 1510,
	F624_PK2 = 1511,
	F625_PK2 = 1512,
	F626_PK2 = 1513,
	F627_PK2 = 1514,
	F628_PK2 = 1515,
	F629_PK2 = 1516,
	F630_PK2 = 1517,
	F631_PK2 = 1518,
	F632_PK2 = 1519,
	F633_PK2 = 1520,
	F634_PK2 = 1521,
	F635_PK2 = 1522,
	F636_PK2 = 1523,
	F637_PK2 = 1524,
	F638_PK2 = 1525,
	F639_PK2 = 1526,
	F640_PK2 = 1527,
	F641_PK2 = 1528,
	F642_PK2 = 1529,
	F643_PK2 = 1530,
	F644_PK2 = 1531,
	F645_PK2 = 1532,
	F646_PK2 = 1533,
	F647_PK2 = 1534,
	F648_PK2 = 1535,
	F649_PK2 = 1536,
	F650_PK2 = 1537,
	F651_PK2 = 1538,
	F652_PK2 = 1539,
	F653_PK2 = 1540,
	F654_PK2 = 1541,
	F655_PK2 = 1542,
	F656_PK2 = 1543,
	F657_PK2 = 1544,
	F658_PK2 = 1545,
	F659_PK2 = 1546,
	F660_PK2 = 1547,
	F661_PK2 = 1548,
	F662_PK2 = 1549,
	F663_PK2 = 1550,
	F664_PK2 = 1551,
	F665_PK2 = 1552,
	F666_PK2 = 1553,
	F667_PK2 = 1554,
	F668_PK2 = 1555,
	F669_PK2 = 1556,
	F670_PK2 = 1557,
	F671_PK2 = 1558,
	F672_PK2 = 1559,
	F673_PK2 = 1560,
	F674_PK2 = 1561,
	F675_PK2 = 1562,
	F676_PK2 = 1563,
	F677_PK2 = 1564,
	F678_PK2 = 1565,
	F679_PK2 = 1566,
	F680_PK2 = 1567,
	F681_PK2 = 1568,
	F682_PK2 = 1569,
	F683_PK2 = 1570,
	F684_PK2 = 1571,
	F685_PK2 = 1572,
	F686_PK2 = 1573,
	F687_PK2 = 1574,
	F688_PK2 = 1575,
	F689_PK2 = 1576,
	F690_PK2 = 1577,
	F691_PK2 = 1578,
	F692_PK2 = 1579,
	F693_PK2 = 1580,
	F694_PK2 = 1581,
	F695_PK2 = 1582,
	F696_PK2 = 1583,
	F697_PK2 = 1584,
	F698_PK2 = 1585,
	F699_PK2 = 1586,
	F700_PK2 = 1587,
	F701_PK2 = 1588,
	F702_PK2 = 1589,
	F703_PK2 = 1590,
	F704_PK2 = 1591,
	F705_PK2 = 1592,
	F706_PK2 = 1593,
	F707_PK2 = 1594,
	F708_PK2 = 1595,
	F709_PK2 = 1596,
	F710_PK2 = 1597,
	F711_PK2 = 1598,
	F712_PK2 = 1599,
	F713_PK2 = 1600,
	F714_PK2 = 1601,
	F715_PK2 = 1602,
	F716_PK2 = 1603,
	F717_PK2 = 1604,
	F718_PK2 = 1605,
	F719_PK2 = 1606,
	F720_PK2 = 1607,
	F721_PK2 = 1608,
	F722_PK2 = 1609,
	F723_PK2 = 1610,
	F724_PK2 = 1611,
	F725_PK2 = 1612,
	F726_PK2 = 1613,
	F727_PK2 = 1614,
	F728_PK2 = 1615,
	F729_PK2 = 1616,
	F730_PK2 = 1617,
	F731_PK2 = 1618,
	F732_PK2 = 1619,
	F733_PK2 = 1620,
	F734_PK2 = 1621,
	F735_PK2 = 1622,
	F736_PK2 = 1623,
	F737_PK2 = 1624,
	F738_PK2 = 1625,
	F739_PK2 = 1626,
	F740_PK2 = 1627,
	F741_PK2 = 1628,
	F742_PK2 = 1629,
	F743_PK2 = 1630,
	F744_PK2 = 1631,
	F745_PK2 = 1632,
	F746_PK2 = 1633,
	F747_PK2 = 1634,
	F748_PK2 = 1635,
	F749_PK2 = 1636,
	F750_PK2 = 1637,
	F751_PK2 = 1638,
	F752_PK2 = 1639,
	F753_PK2 = 1640,
	F754_PK2 = 1641,
	F755_PK2 = 1642,
	F756_PK2 = 1643,
	F757_PK2 = 1644,
	F758_PK2 = 1645,
	F759_PK2 = 1646,
	F760_PK2 = 1647,
	F761_PK2 = 1648,
	F762_PK2 = 1649,
	F763_PK2 = 1650,
	F764_PK2 = 1651,
	F765_PK2 = 1652,
	F766_PK2 = 1653,
	F767_PK2 = 1654,
	F768_PK2 = 1655,
	F769_PK2 = 1656,
	F770_PK2 = 1657,
	F771_PK2 = 1658,
	F772_PK2 = 1659,
	F773_PK2 = 1660,
	F774_PK2 = 1661,
	F775_PK2 = 1662,
	F776_PK2 = 1663,
	F777_PK2 = 1664,
	F778_PK2 = 1665,
	F779_PK2 = 1666,
	F780_PK2 = 1667,
	F781_PK2 = 1668,
	F782_PK2 = 1669,
	F783_PK2 = 1670,
	F784_PK2 = 1671,
	F785_PK2 = 1672,
	F786_PK2 = 1673,
	F787_PK2 = 1674,
	F788_PK2 = 1675,
	F789_PK2 = 1676,
	F790_PK2 = 1677,
	F791_PK2 = 1678,
	F792_PK2 = 1679,
	F793_PK2 = 1680,
	F794_PK2 = 1681,
	F795_PK2 = 1682,
	F796_PK2 = 1683,
	F797_PK2 = 1684,
	F798_PK2 = 1685,
	F799_PK2 = 1686,
	F800_PK2 = 1687,
	F801_PK2 = 1688,
	F802_PK2 = 1689,
	F803_PK2 = 1690,
	F804_PK2 = 1691,
	F805_PK2 = 1692,
	F806_PK2 = 1693,
	F807_PK2 = 1694,
	F808_PK2 = 1695,
	F809_PK2 = 1696,
	F810_PK2 = 1697,
	F811_PK2 = 1698,
	F812_PK2 = 1699,
	F813_PK2 = 1700,
	F814_PK2 = 1701,
	F815_PK2 = 1702,
	F816_PK2 = 1703,
	F817_PK2 = 1704,
	F818_PK2 = 1705,
	F819_PK2 = 1706,
	F820_PK2 = 1707,
	F821_PK2 = 1708,
	F822_PK2 = 1709,
	F823_PK2 = 1710,
	F824_PK2 = 1711,
	F825_PK2 = 1712,
	F826_PK2 = 1713,
	F827_PK2 = 1714,
	F828_PK2 = 1715,
	F829_PK2 = 1716,
	F830_PK2 = 1717,
	F831_PK2 = 1718,
	F832_PK2 = 1719,
	F833_PK2 = 1720,
	F834_PK2 = 1721,
	F835_PK2 = 1722,
	F836_PK2 = 1723,
	F837_PK2 = 1724,
	F838_PK2 = 1725,
	F839_PK2 = 1726,
	F840_PK2 = 1727,
	F841_PK2 = 1728,
	F842_PK2 = 1729,
	F843_PK2 = 1730,
	F844_PK2 = 1731,
	F845_PK2 = 1732,
	F846_PK2 = 1733,
	F847_PK2 = 1734,
	F848_PK2 = 1735,
	F849_PK2 = 1736,
	F850_PK2 = 1737,
	F851_PK2 = 1738,
	F852_PK2 = 1739,
	F853_PK2 = 1740,
	F854_PK2 = 1741,
	F855_PK2 = 1742,
	F856_PK2 = 1743,
	F857_PK2 = 1744,
	F858_PK2 = 1745,
	F859_PK2 = 1746,
	F860_PK2 = 1747,
	F861_PK2 = 1748,
	F862_PK2 = 1749,
	F863_PK2 = 1750,
	F864_PK2 = 1751,
	F865_PK2 = 1752,
	F866_PK2 = 1753,
	F867_PK2 = 1754,
	F868_PK2 = 1755,
	F869_PK2 = 1756,
	F870_PK2 = 1757,
	F871_PK2 = 1758,
	F872_PK2 = 1759,
	F873_PK2 = 1760,
	F874_PK2 = 1761,
	F875_PK2 = 1762,
	F876_PK2 = 1763,
	F877_PK2 = 1764,
	F878_PK2 = 1765,
	F879_PK2 = 1766,
	F880_PK2 = 1767,
	F881_PK2 = 1768,
	F882_PK2 = 1769,
	F883_PK2 = 1770,
	F884_PK2 = 1771,
	F885_PK2 = 1772,
	F886_PK2 = 1773,
	F887_PK2 = 1774,
	F888_PK2 = 1775,
	F889_PK2 = 1776,
	F890_PK2 = 1777,
	F891_PK2 = 1778,
	F892_PK2 = 1779,
	F893_PK2 = 1780,
	F894_PK2 = 1781,
	F895_PK2 = 1782,
	F896_PK2 = 1783,
	F897_PK2 = 1784,
	F898_PK2 = 1785,
	F899_PK2 = 1786,
	F900_PK2 = 1787,
	F901_PK2 = 1788,
	F902_PK2 = 1789,
	F903_PK2 = 1790,
	F904_PK2 = 1791,
	F905_PK2 = 1792,
	F906_PK2 = 1793,
	F907_PK2 = 1794,
	F908_PK2 = 1795,
	F909_PK2 = 1796,
	F910_PK2 = 1797,
	F911_PK2 = 1798,
	F912_PK2 = 1799,
	F913_PK2 = 1800,
	F914_PK2 = 1801,
	F915_PK2 = 1802,
	F916_PK2 = 1803,
	F917_PK2 = 1804,
	F918_PK2 = 1805,
	F919_PK2 = 1806,
	F920_PK2 = 1807,
	F921_PK2 = 1808,
	F922_PK2 = 1809,
	F923_PK2 = 1810,
	F924_PK2 = 1811,
	F925_PK2 = 1812,
	F926_PK2 = 1813,
	F927_PK2 = 1814,
	F928_PK2 = 1815,
	F929_PK2 = 1816,
	F930_PK2 = 1817,
	F931_PK2 = 1818,
	F932_PK2 = 1819,
	F933_PK2 = 1820,
	F934_PK2 = 1821,
	F935_PK2 = 1822,
	F936_PK2 = 1823,
	F937_PK2 = 1824,
	F938_PK2 = 1825,
	F939_PK2 = 1826,
	F940_PK2 = 1827,
	F941_PK2 = 1828,
	F942_PK2 = 1829,
	F943_PK2 = 1830,
	F944_PK2 = 1831,
	F945_PK2 = 1832,
	F946_PK2 = 1833,
	F947_PK2 = 1834,
	F948_PK2 = 1835,
	F949_PK2 = 1836,
	F950_PK2 = 1837,
	F951_PK2 = 1838,
	F952_PK2 = 1839,
	F953_PK2 = 1840,
	F954_PK2 = 1841,
	F955_PK2 = 1842,
	F956_PK2 = 1843,
	F957_PK2 = 1844,
	F958_PK2 = 1845,
	F959_PK2 = 1846,
	F960_PK2 = 1847,
	F961_PK2 = 1848,
	F962_PK2 = 1849,
	F963_PK2 = 1850,
	F964_PK2 = 1851,
	F965_PK2 = 1852,
	F966_PK2 = 1853,
	F967_PK2 = 1854,
	F968_PK2 = 1855,
	F969_PK2 = 1856,
	F970_PK2 = 1857,
	F971_PK2 = 1858,
	F972_PK2 = 1859,
	F973_PK2 = 1860,
	F974_PK2 = 1861,
	F975_PK2 = 1862,
	F976_PK2 = 1863,
	F977_PK2 = 1864,
	F978_PK2 = 1865,
	F979_PK2 = 1866,
	F980_PK2 = 1867,
	F981_PK2 = 1868,
	F982_PK2 = 1869,
	F983_PK2 = 1870,
	F984_PK2 = 1871,
	F985_PK2 = 1872,
	F986_PK2 = 1873,
	F987_PK2 = 1874,
	F988_PK2 = 1875,
	F989_PK2 = 1876,
	F990_PK2 = 1877,
	F991_PK2 = 1878,
	F992_PK2 = 1879,
	F993_PK2 = 1880,
	F994_PK2 = 1881,
	F995_PK2 = 1882,
	F996_PK2 = 1883,
	F997_PK2 = 1884,
	F998_PK2 = 1885,
	F999_PK2 = 1886,
	D000_PK2 = 1887,
	D001_PK2 = 1888,
	D002_PK2 = 1889,
	D003_PK2 = 1890,
	D004_PK2 = 1891,
	D005_PK2 = 1892,
	D006_PK2 = 1893,
	D007_PK2 = 1894,
	D008_PK2 = 1895,
	D009_PK2 = 1896,
	D010_PK2 = 1897,
	D100_PK2 = 1898,
	D101_PK2 = 1899,
	D102_PK2 = 1900,
	D103_PK2 = 1901,
	D104_PK2 = 1902,
	D105_PK2 = 1903,
	D106_PK2 = 1904,
	D107_PK2 = 1905,
	D108_PK2 = 1906,
	D109_PK2 = 1907,
	D110_PK2 = 1908,
	D111_PK2 = 1909,
	D112_PK2 = 1910,
	D113_PK2 = 1911,
	D114_PK2 = 1912,
	D115_PK2 = 1913,
	D116_PK2 = 1914,
	D117_PK2 = 1915,
	D118_PK2 = 1916,
	D119_PK2 = 1917,
	D120_PK2 = 1918,
	D121_PK2 = 1919,
	D122_PK2 = 1920,
	D123_PK2 = 1921,
	D124_PK2 = 1922,
	D125_PK2 = 1923,
	D126_PK2 = 1924,
	D127_PK2 = 1925,
	D128_PK2 = 1926,
	D129_PK2 = 1927,
	D130_PK2 = 1928,
	D200_PK2 = 1929,
	D201_PK2 = 1930,
	D202_PK2 = 1931,
	D203_PK2 = 1932,
	D204_PK2 = 1933,
	D205_PK2 = 1934,
	D206_PK2 = 1935,
	D207_PK2 = 1936,
	D208_PK2 = 1937,
	D209_PK2 = 1938,
	D210_PK2 = 1939,
	D211_PK2 = 1940,
	D212_PK2 = 1941,
	D213_PK2 = 1942,
	D214_PK2 = 1943,
	D215_PK2 = 1944,
	D216_PK2 = 1945,
	D217_PK2 = 1946,
	D218_PK2 = 1947,
	D219_PK2 = 1948,
	D220_PK2 = 1949,
	D221_PK2 = 1950,
	D222_PK2 = 1951,
	D223_PK2 = 1952,
	D224_PK2 = 1953,
	D225_PK2 = 1954,
	D226_PK2 = 1955,
	D227_PK2 = 1956,
	D228_PK2 = 1957,
	D229_PK2 = 1958,
	D230_PK2 = 1959,
	D231_PK2 = 1960,
	D232_PK2 = 1961,
	D300_PK2 = 1962,
	D301_PK2 = 1963,
	D302_PK2 = 1964,
	D303_PK2 = 1965,
	D304_PK2 = 1966,
	D305_PK2 = 1967,
	D306_PK2 = 1968,
	D307_PK2 = 1969,
	D308_PK2 = 1970,
	D309_PK2 = 1971,
	D310_PK2 = 1972,
	D311_PK2 = 1973,
	D312_PK2 = 1974,
	D313_PK2 = 1975,
	D314_PK2 = 1976,
	D315_PK2 = 1977,
	D316_PK2 = 1978,
	D317_PK2 = 1979,
	D318_PK2 = 1980,
	D319_PK2 = 1981,
	D320_PK2 = 1982,
	D321_PK2 = 1983,
	D322_PK2 = 1984,
	D323_PK2 = 1985,
	D324_PK2 = 1986,
	D325_PK2 = 1987,
	D326_PK2 = 1988,
	D327_PK2 = 1989,
	D328_PK2 = 1990,
	D329_PK2 = 1991,
	D330_PK2 = 1992,
	D331_PK2 = 1993,
	D332_PK2 = 1994,
	D333_PK2 = 1995,
	D334_PK2 = 1996,
	D335_PK2 = 1997,
	D336_PK2 = 1998,
	D337_PK2 = 1999,
	D338_PK2 = 2000,
	D339_PK2 = 2001,
	D340_PK2 = 2002,
	D400_PK2 = 2003,
	D800_PK2 = 2004,
	D801_PK2 = 2005,
	D802_PK2 = 2006,
	D803_PK2 = 2007,
	D804_PK2 = 2008,
	D805_PK2 = 2009,
	D806_PK2 = 2010,
	D807_PK2 = 2011,
	D808_PK2 = 2012,
	D809_PK2 = 2013,
	D810_PK2 = 2014,
	I000_PLAY_CAMERA_PK2 = 2015,
	I001_PLAY_LIGHT_PK2 = 2016,
	I002_NOTE_PK2 = 2017,
	I003_GYAKUSATU_PK2 = 2018,
	I004_DUMMY_PK2 = 2019,
	I005_KEY_PK2 = 2020,
	I006_MEGANE_PK2 = 2021,
	I007_MEGANE_PK2 = 2022,
	I008_GANTAI_PK2 = 2023,
	BGM_START_DMY = 2024,
	DANMATU_MALE_HXD = 2025,
	DANMATU_MALE_STR = 2026,
	DANMATU_FEMALE_HXD = 2027,
	DANMATU_FEMALE_STR = 2028,
	ESE_KUSAKI_ZAWAMEKI_HXD = 2029,
	ESE_KUSAKI_ZAWAMEKI_STR = 2030,
	ESE_KODOMO_HASIRIMAWARI_HXD = 2031,
	ESE_KODOMO_HASIRIMAWARI_STR = 2032,
	KAN043_RAKURAI_HXD = 2033,
	KAN043_RAKURAI_STR = 2034,
	KAN042_KAMINARI_HXD = 2035,
	KAN042_KAMINARI_STR = 2036,
	ESE_KAMINARI_HXD = 2037,
	ESE_KAMINARI_STR = 2038,
	ESE_HINADAN_KAGI_HXD = 2039,
	ESE_HINADAN_KAGI_STR = 2040,
	KAN020_TYOU_HXD = 2041,
	KAN020_TYOU_STR = 2042,
	KAN003_KUREHA_HXD = 2043,
	KAN003_KUREHA_STR = 2044,
	KAN002_KUTIKI_HXD = 2045,
	KAN002_KUTIKI_STR = 2046,
	VOICE_MURAREI_HXD = 2047,
	VOICE_MURAREI_STR = 2048,
	YKN25_KUSA_HXD = 2049,
	YKN25_KUSA_STR = 2050,
	YKN21_IMIBITO_HXD = 2051,
	YKN21_IMIBITO_STR = 2052,
	YKN20_GUUJIREI_HXD = 2053,
	YKN20_GUUJIREI_STR = 2054,
	YKN19_SUISHI_HXD = 2055,
	YKN19_SUISHI_STR = 2056,
	YKN15_KARAKURISHI_HXD = 2057,
	YKN15_KARAKURISHI_STR = 2058,
	YKN14_KUBIORE_HXD = 2059,
	YKN14_KUBIORE_STR = 2060,
	YKN07_KUSABI3_HXD = 2061,
	YKN07_KUSABI3_STR = 2062,
	YKN06_KUSABI2_HXD = 2063,
	YKN06_KUSABI2_STR = 2064,
	YKN05_KUSABI1_HXD = 2065,
	YKN05_KUSABI1_STR = 2066,
	SCENE0240_HXD = 2067,
	SCENE0240_STR = 2068,
	SCENE0210_HXD = 2069,
	SCENE0210_STR = 2070,
	SCENE0190_HXD = 2071,
	SCENE0190_STR = 2072,
	SCENE0170_HXD = 2073,
	SCENE0170_STR = 2074,
	SCENE0160_HXD = 2075,
	SCENE0160_STR = 2076,
	SCENE0150_HXD = 2077,
	SCENE0150_STR = 2078,
	SCENE0133_HXD = 2079,
	SCENE0133_STR = 2080,
	SCENE0132_HXD = 2081,
	SCENE0132_STR = 2082,
	SCENE0130_HXD = 2083,
	SCENE0130_STR = 2084,
	YKN12_HAHAOYAREI_HXD = 2085,
	YKN12_HAHAOYAREI_STR = 2086,
	YKN10_WANINNGYOU_HXD = 2087,
	YKN10_WANINNGYOU_STR = 2088,
	FLASHOUT_HXD = 2089,
	FLASHOUT_STR = 2090,
	FLASHIN_HXD = 2091,
	FLASHIN_STR = 2092,
	YKN16_ONIKODOMO_HXD = 2093,
	YKN16_ONIKODOMO_STR = 2094,
	YKN08_CHITOSE_HXD = 2095,
	YKN08_CHITOSE_STR = 2096,
	YKN31_SAEREI3_HXD = 2097,
	YKN31_SAEREI3_STR = 2098,
	YKN03_SAEREI2_HXD = 2099,
	YKN03_SAEREI2_STR = 2100,
	YKN02_SAEREI1_HXD = 2101,
	YKN02_SAEREI1_STR = 2102,
	BGM010_PRM90_HXD = 2103,
	BGM010_PRM90_STR = 2104,
	ESE_DOOR_HUUINDOOR_HXD = 2105,
	ESE_DOOR_HUUINDOOR_STR = 2106,
	MENYU_HXD = 2107,
	MENYU_STR = 2108,
	ANE_YARARE_HXD = 2109,
	ANE_YARARE_STR = 2110,
	KAN033_NAZO_HXD = 2111,
	KAN033_NAZO_STR = 2112,
	KAN032_OKYOU_HXD = 2113,
	KAN032_OKYOU_STR = 2114,
	YKN13_HAKO_HXD = 2115,
	YKN13_HAKO_STR = 2116,
	RT002_NER_HXD = 2117,
	RT002_NER_STR = 2118,
	MIYAKO_AG_10_HXD = 2119,
	MIYAKO_AG_10_STR = 2120,
	MIYAKO_AG_09_HXD = 2121,
	MIYAKO_AG_09_STR = 2122,
	MIYAKO_AG_08_HXD = 2123,
	MIYAKO_AG_08_STR = 2124,
	MIYAKO_AG_07_HXD = 2125,
	MIYAKO_AG_07_STR = 2126,
	MIYAKO_AG_06_HXD = 2127,
	MIYAKO_AG_06_STR = 2128,
	MIYAKO_AG_05_HXD = 2129,
	MIYAKO_AG_05_STR = 2130,
	MIYAKO_AG_04_HXD = 2131,
	MIYAKO_AG_04_STR = 2132,
	MIYAKO_AG_03_HXD = 2133,
	MIYAKO_AG_03_STR = 2134,
	MIYAKO_AG_02_HXD = 2135,
	MIYAKO_AG_02_STR = 2136,
	MIYAKO_AG_01_HXD = 2137,
	MIYAKO_AG_01_STR = 2138,
	MIYAKO_AG_00_HXD = 2139,
	MIYAKO_AG_00_STR = 2140,
	ESE_DOOR_MON_SIME_HXD = 2141,
	ESE_DOOR_MON_SIME_STR = 2142,
	ESE_DOOR_MON_OPEN_HXD = 2143,
	ESE_DOOR_MON_OPEN_STR = 2144,
	ESE_DOOR_FUSUMA_SIME_HXD = 2145,
	ESE_DOOR_FUSUMA_SIME_STR = 2146,
	ITSUKI_TALK_05_HXD = 2147,
	ITSUKI_TALK_05_STR = 2148,
	ITSUKI_TALK_04_HXD = 2149,
	ITSUKI_TALK_04_STR = 2150,
	ITSUKI_TALK_03_HXD = 2151,
	ITSUKI_TALK_03_STR = 2152,
	ITSUKI_TALK_02_HXD = 2153,
	ITSUKI_TALK_02_STR = 2154,
	MAYU_TALK_36_HXD = 2155,
	MAYU_TALK_36_STR = 2156,
	MAYU_TALK_35_HXD = 2157,
	MAYU_TALK_35_STR = 2158,
	MAYU_TALK_34_HXD = 2159,
	MAYU_TALK_34_STR = 2160,
	MAYU_TALK_33_HXD = 2161,
	MAYU_TALK_33_STR = 2162,
	MAYU_TALK_32_HXD = 2163,
	MAYU_TALK_32_STR = 2164,
	MAYU_TALK_31_HXD = 2165,
	MAYU_TALK_31_STR = 2166,
	MAYU_TALK_30_HXD = 2167,
	MAYU_TALK_30_STR = 2168,
	MAYU_TALK_29_HXD = 2169,
	MAYU_TALK_29_STR = 2170,
	MAYU_TALK_28_HXD = 2171,
	MAYU_TALK_28_STR = 2172,
	MAYU_TALK_27_HXD = 2173,
	MAYU_TALK_27_STR = 2174,
	MAYU_TALK_26_HXD = 2175,
	MAYU_TALK_26_STR = 2176,
	MAYU_TALK_25_HXD = 2177,
	MAYU_TALK_25_STR = 2178,
	MAYU_TALK_24_HXD = 2179,
	MAYU_TALK_24_STR = 2180,
	MAYU_TALK_23_HXD = 2181,
	MAYU_TALK_23_STR = 2182,
	MAYU_TALK_21_HXD = 2183,
	MAYU_TALK_21_STR = 2184,
	MAYU_TALK_20_HXD = 2185,
	MAYU_TALK_20_STR = 2186,
	MAYU_TALK_19_HXD = 2187,
	MAYU_TALK_19_STR = 2188,
	MAYU_TALK_18_HXD = 2189,
	MAYU_TALK_18_STR = 2190,
	MAYU_TALK_17_HXD = 2191,
	MAYU_TALK_17_STR = 2192,
	MAYU_TALK_16_HXD = 2193,
	MAYU_TALK_16_STR = 2194,
	MAYU_TALK_15_HXD = 2195,
	MAYU_TALK_15_STR = 2196,
	MAYU_TALK_14_HXD = 2197,
	MAYU_TALK_14_STR = 2198,
	MAYU_TALK_13_HXD = 2199,
	MAYU_TALK_13_STR = 2200,
	MAYU_TALK_12_HXD = 2201,
	MAYU_TALK_12_STR = 2202,
	MAYU_TALK_11_HXD = 2203,
	MAYU_TALK_11_STR = 2204,
	MAYU_TALK_10_HXD = 2205,
	MAYU_TALK_10_STR = 2206,
	MAYU_TALK_09_HXD = 2207,
	MAYU_TALK_09_STR = 2208,
	MAYU_TALK_08_HXD = 2209,
	MAYU_TALK_08_STR = 2210,
	MAYU_TALK_07_HXD = 2211,
	MAYU_TALK_07_STR = 2212,
	MAYU_TALK_06_HXD = 2213,
	MAYU_TALK_06_STR = 2214,
	MAYU_TALK_05_HXD = 2215,
	MAYU_TALK_05_STR = 2216,
	MAYU_TALK_04_HXD = 2217,
	MAYU_TALK_04_STR = 2218,
	MAYU_TALK_03_HXD = 2219,
	MAYU_TALK_03_STR = 2220,
	MAYU_TALK_02_HXD = 2221,
	MAYU_TALK_02_STR = 2222,
	MAYU_TALK_01_HXD = 2223,
	MAYU_TALK_01_STR = 2224,
	MAYU_TALK_00_HXD = 2225,
	MAYU_TALK_00_STR = 2226,
	ITSUKI_TALK_01_HXD = 2227,
	ITSUKI_TALK_01_STR = 2228,
	ESE_DOOR_FUSUMA_OPEN_HXD = 2229,
	ESE_DOOR_FUSUMA_OPEN_STR = 2230,
	ITSUKI_TALK_00_HXD = 2231,
	ITSUKI_TALK_00_STR = 2232,
	YKN09_RAKKA_HXD = 2233,
	YKN09_RAKKA_STR = 2234,
	BGM004_MENU1_HXD = 2235,
	BGM004_MENU1_STR = 2236,
	BGM000_TITLE_HXD = 2237,
	BGM000_TITLE_STR = 2238,
	YKN30_MAKIREI_HXD = 2239,
	YKN30_MAKIREI_STR = 2240,
	YKN22_MURAREI_HXD = 2241,
	YKN22_MURAREI_STR = 2242,
	YKN00_YAMI_HXD = 2243,
	YKN00_YAMI_STR = 2244,
	SHOWTITLE_HXD = 2245,
	SHOWTITLE_STR = 2246,
	KAN037_CONTE_HXD = 2247,
	KAN037_CONTE_STR = 2248,
	KAN036_NANIKA_HXD = 2249,
	KAN036_NANIKA_STR = 2250,
	KAN035_MENNIWA_HXD = 2251,
	KAN035_MENNIWA_STR = 2252,
	KAN029_SANDOU_HXD = 2253,
	KAN029_SANDOU_STR = 2254,
	KAN028_MURA1_HXD = 2255,
	KAN028_MURA1_STR = 2256,
	KAN025_MISONO_HXD = 2257,
	KAN025_MISONO_STR = 2258,
	KAN023_OKUNAI1_HXD = 2259,
	KAN023_OKUNAI1_STR = 2260,
	KAN022_HOSOI_HXD = 2261,
	KAN022_HOSOI_STR = 2262,
	KAN021_HIROI_HXD = 2263,
	KAN021_HIROI_STR = 2264,
	KAN018_SAE_HXD = 2265,
	KAN018_SAE_STR = 2266,
	KAN017_RHYTHM_HXD = 2267,
	KAN017_RHYTHM_STR = 2268,
	KAN007_KUROSAWA_HXD = 2269,
	KAN007_KUROSAWA_STR = 2270,
	KAN006_TACHIBANA_HXD = 2271,
	KAN006_TACHIBANA_STR = 2272,
	KAN005_KIRYUU_HXD = 2273,
	KAN005_KIRYUU_STR = 2274,
	ESE001_KNOCKDOOR_HXD = 2275,
	ESE001_KNOCKDOOR_STR = 2276,
	KAN004_OUSAKA_HXD = 2277,
	KAN004_OUSAKA_STR = 2278,
	SCENE0120_HXD = 2279,
	SCENE0120_STR = 2280,
	SCENE0121_HXD = 2281,
	SCENE0121_STR = 2282,
	SCENE0122_HXD = 2283,
	SCENE0122_STR = 2284,
	SCENE0140_HXD = 2285,
	SCENE0140_STR = 2286,
	KAN010_HASINO_UE_HXD = 2287,
	KAN010_HASINO_UE_STR = 2288,
	YKN26_KUSA2_HXD = 2289,
	YKN26_KUSA2_STR = 2290,
	SCENE0230_HXD = 2291,
	SCENE0230_STR = 2292,
	SCENE0231_HXD = 2293,
	SCENE0231_STR = 2294,
	SCENE0350_HXD = 2295,
	SCENE0350_STR = 2296,
	SCENE0352_HXD = 2297,
	SCENE0352_STR = 2298,
	SCENE9001_HXD = 2299,
	SCENE9001_STR = 2300,
	YKN23_MURAREI_B_HXD = 2301,
	YKN23_MURAREI_B_STR = 2302,
	YKN24_MURAREI_C_HXD = 2303,
	YKN24_MURAREI_C_STR = 2304,
	ESE_TOUSYUTALK_HXD = 2305,
	ESE_TOUSYUTALK_STR = 2306,
	GUUJI_AG_00_HXD = 2307,
	GUUJI_AG_00_STR = 2308,
	MAKABE_AG_00_HXD = 2309,
	MAKABE_AG_00_STR = 2310,
	MURA_AG_00_HXD = 2311,
	MURA_AG_00_STR = 2312,
	MURA_AG_01_HXD = 2313,
	MURA_AG_01_STR = 2314,
	MURA_AG_02_HXD = 2315,
	MURA_AG_02_STR = 2316,
	TOUSYU_AG_00_HXD = 2317,
	TOUSYU_AG_00_STR = 2318,
	TOUSYU_AG_01_HXD = 2319,
	TOUSYU_AG_01_STR = 2320,
	TOUSYU_AG_02_HXD = 2321,
	TOUSYU_AG_02_STR = 2322,
	ESE_GUUJITALK_HXD = 2323,
	ESE_GUUJITALK_STR = 2324,
	SCENE0410_HXD = 2325,
	SCENE0410_STR = 2326,
	SCENE9002_HXD = 2327,
	SCENE9002_STR = 2328,
	SCENE0330_HXD = 2329,
	SCENE0330_STR = 2330,
	SCENE0340_HXD = 2331,
	SCENE0340_STR = 2332,
	SCENE9302_HXD = 2333,
	SCENE9302_STR = 2334,
	SCENE9501_HXD = 2335,
	SCENE9501_STR = 2336,
	ESE_WASAN_01_HXD = 2337,
	ESE_WASAN_01_STR = 2338,
	ESE_WASAN_00_HXD = 2339,
	ESE_WASAN_00_STR = 2340,
	ITSUKI_TALK_06_HXD = 2341,
	ITSUKI_TALK_06_STR = 2342,
	ITSUKI_TALK_07_HXD = 2343,
	ITSUKI_TALK_07_STR = 2344,
	ITSUKI_TALK_08_HXD = 2345,
	ITSUKI_TALK_08_STR = 2346,
	ITSUKI_TALK_09_HXD = 2347,
	ITSUKI_TALK_09_STR = 2348,
	ITSUKI_TALK_10_HXD = 2349,
	ITSUKI_TALK_10_STR = 2350,
	MAYU_TALK_37_HXD = 2351,
	MAYU_TALK_37_STR = 2352,
	MAYU_TALK_38_HXD = 2353,
	MAYU_TALK_38_STR = 2354,
	MAYU_TALK_39_HXD = 2355,
	MAYU_TALK_39_STR = 2356,
	MAYU_TALK_40_HXD = 2357,
	MAYU_TALK_40_STR = 2358,
	MAYU_TALK_41_HXD = 2359,
	MAYU_TALK_41_STR = 2360,
	ESE_HASHIGO_HXD = 2361,
	ESE_HASHIGO_BD = 2362,
	ESE_HASHIGO_STR = 2363,
	ESE_HIKIDO_HXD = 2364,
	ESE_HIKIDO_STR = 2365,
	ESE_OSHIIRE_GOTO_HXD = 2366,
	ESE_OSHIIRE_GOTO_STR = 2367,
	ESE_OSHIIRE_SUZU_HXD = 2368,
	ESE_OSHIIRE_SUZU_STR = 2369,
	ESE_TOBIRATATAKI_HXD = 2370,
	ESE_TOBIRATATAKI_STR = 2371,
	ESE_YUKASHITA_HXD = 2372,
	ESE_YUKASHITA_STR = 2373,
	KAN_AME_00_HXD = 2374,
	KAN_AME_00_STR = 2375,
	KAN_WASAN_00_HXD = 2376,
	KAN_WASAN_00_STR = 2377,
	KAN_WASAN_01_HXD = 2378,
	KAN_WASAN_01_STR = 2379,
	KAN_WASAN_02_HXD = 2380,
	KAN_WASAN_02_STR = 2381,
	ESE_ONECHAN00_HXD = 2382,
	ESE_ONECHAN00_STR = 2383,
	ESE_ONECHAN01_HXD = 2384,
	ESE_ONECHAN01_STR = 2385,
	ESE_ONECHAN02_HXD = 2386,
	ESE_ONECHAN02_STR = 2387,
	ESE_ONECHAN03_HXD = 2388,
	ESE_ONECHAN03_STR = 2389,
	NINGYOU_AG_01_HXD = 2390,
	NINGYOU_AG_01_STR = 2391,
	NINGYOU_AG_02_HXD = 2392,
	NINGYOU_AG_02_STR = 2393,
	TOUSYU_AG_03_HXD = 2394,
	TOUSYU_AG_03_STR = 2395,
	GD042_HXD = 2396,
	GD042_STR = 2397,
	GD053_HXD = 2398,
	GD053_STR = 2399,
	REISEKI_VOISE_00_HXD = 2400,
	REISEKI_VOISE_00_STR = 2401,
	REISEKI_VOISE_01_HXD = 2402,
	REISEKI_VOISE_01_STR = 2403,
	REISEKI_VOISE_02_HXD = 2404,
	REISEKI_VOISE_02_STR = 2405,
	REISEKI_VOISE_03_HXD = 2406,
	REISEKI_VOISE_03_STR = 2407,
	REISEKI_VOISE_04_HXD = 2408,
	REISEKI_VOISE_04_STR = 2409,
	REISEKI_VOISE_05_HXD = 2410,
	REISEKI_VOISE_05_STR = 2411,
	REISEKI_VOISE_06_HXD = 2412,
	REISEKI_VOISE_06_STR = 2413,
	REISEKI_VOISE_07_HXD = 2414,
	REISEKI_VOISE_07_STR = 2415,
	REISEKI_VOISE_08_HXD = 2416,
	REISEKI_VOISE_08_STR = 2417,
	REISEKI_VOISE_09_HXD = 2418,
	REISEKI_VOISE_09_STR = 2419,
	REISEKI_VOISE_10_HXD = 2420,
	REISEKI_VOISE_10_STR = 2421,
	REISEKI_VOISE_11_HXD = 2422,
	REISEKI_VOISE_11_STR = 2423,
	ITSUKI_TALK_11_HXD = 2424,
	ITSUKI_TALK_11_STR = 2425,
	ITSUKI_TALK_12_HXD = 2426,
	ITSUKI_TALK_12_STR = 2427,
	ITSUKI_TALK_13_HXD = 2428,
	ITSUKI_TALK_13_STR = 2429,
	ITSUKI_TALK_14_HXD = 2430,
	ITSUKI_TALK_14_STR = 2431,
	ITSUKI_TALK_15_HXD = 2432,
	ITSUKI_TALK_15_STR = 2433,
	ITSUKI_TALK_16_HXD = 2434,
	ITSUKI_TALK_16_STR = 2435,
	ITSUKI_TALK_17_HXD = 2436,
	ITSUKI_TALK_17_STR = 2437,
	ITSUKI_TALK_18_HXD = 2438,
	ITSUKI_TALK_18_STR = 2439,
	ITSUKI_TALK_19_HXD = 2440,
	ITSUKI_TALK_19_STR = 2441,
	ITSUKI_TALK_20_HXD = 2442,
	ITSUKI_TALK_20_STR = 2443,
	ITSUKI_TALK_21_HXD = 2444,
	ITSUKI_TALK_21_STR = 2445,
	ITSUKI_TALK_22_HXD = 2446,
	ITSUKI_TALK_22_STR = 2447,
	ITSUKI_TALK_23_HXD = 2448,
	ITSUKI_TALK_23_STR = 2449,
	MAYU_TALK_42_HXD = 2450,
	MAYU_TALK_42_STR = 2451,
	MAYU_TALK_43_HXD = 2452,
	MAYU_TALK_43_STR = 2453,
	MAYU_TALK_44_HXD = 2454,
	MAYU_TALK_44_STR = 2455,
	MAYU_TALK_45_HXD = 2456,
	MAYU_TALK_45_STR = 2457,
	MAYU_TALK_46_HXD = 2458,
	MAYU_TALK_46_STR = 2459,
	MAYU_TALK_47_HXD = 2460,
	MAYU_TALK_47_STR = 2461,
	MAYU_TALK_48_HXD = 2462,
	MAYU_TALK_48_STR = 2463,
	MAYU_TALK_49_HXD = 2464,
	MAYU_TALK_49_STR = 2465,
	MAYU_TALK_50_HXD = 2466,
	MAYU_TALK_50_STR = 2467,
	MAYU_TALK_51_HXD = 2468,
	MAYU_TALK_51_STR = 2469,
	MAYU_TALK_52_HXD = 2470,
	MAYU_TALK_52_STR = 2471,
	MAYU_TALK_53_HXD = 2472,
	MAYU_TALK_53_STR = 2473,
	MAYU_TALK_54_HXD = 2474,
	MAYU_TALK_54_STR = 2475,
	MAYU_TALK_55_HXD = 2476,
	MAYU_TALK_55_STR = 2477,
	MAYU_TALK_56_HXD = 2478,
	MAYU_TALK_56_STR = 2479,
	MAYU_TALK_57_HXD = 2480,
	MAYU_TALK_57_STR = 2481,
	MAYU_TALK_58_HXD = 2482,
	MAYU_TALK_58_STR = 2483,
	MAYU_TALK_59_HXD = 2484,
	MAYU_TALK_59_STR = 2485,
	MAYU_TALK_60_HXD = 2486,
	MAYU_TALK_60_STR = 2487,
	MAYU_TALK_61_HXD = 2488,
	MAYU_TALK_61_STR = 2489,
	MAYU_TALK_62_HXD = 2490,
	MAYU_TALK_62_STR = 2491,
	MAYU_TALK_63_HXD = 2492,
	MAYU_TALK_63_STR = 2493,
	YKN04_MASUMI_HXD = 2494,
	YKN04_MASUMI_STR = 2495,
	ESE_SHIKAKE_HXD = 2496,
	ESE_SHIKAKE_STR = 2497,
	SCENE0110_HXD = 2498,
	SCENE0110_STR = 2499,
	SCENE0510_HXD = 2500,
	SCENE0510_STR = 2501,
	SCENE0520_HXD = 2502,
	SCENE0520_STR = 2503,
	YKN11_FUTAGOREI_HXD = 2504,
	YKN11_FUTAGOREI_STR = 2505,
	YKN17_ONIKODOMO_B_HXD = 2506,
	YKN17_ONIKODOMO_B_STR = 2507,
	YKN18_ONIKODOMO_C_HXD = 2508,
	YKN18_ONIKODOMO_C_STR = 2509,
	YKN27_TOUSYU_HXD = 2510,
	YKN27_TOUSYU_STR = 2511,
	KAN044_CHIKA_HXD = 2512,
	KAN044_CHIKA_STR = 2513,
	BGM005_MENU2_HXD = 2514,
	BGM005_MENU2_STR = 2515,
	BGM006_CLEAR_HXD = 2516,
	BGM006_CLEAR_STR = 2517,
	BGM007_WIN_HXD = 2518,
	BGM007_WIN_STR = 2519,
	BGM008_LOSE_HXD = 2520,
	BGM008_LOSE_STR = 2521,
	BGM009_START_HXD = 2522,
	BGM009_START_STR = 2523,
	MAKABE_AG_01_HXD = 2524,
	MAKABE_AG_01_STR = 2525,
	MAKABE_AG_02_HXD = 2526,
	MAKABE_AG_02_STR = 2527,
	ESE_CHITOSE_RUN_HXD = 2528,
	ESE_CHITOSE_RUN_STR = 2529,
	ESE_CHITOSE_RUN_FO_HXD = 2530,
	ESE_CHITOSE_RUN_FO_STR = 2531,
	CHITOSE_AG_00_HXD = 2532,
	CHITOSE_AG_00_STR = 2533,
	KDM_BY_AG_00_HXD = 2534,
	KDM_BY_AG_00_STR = 2535,
	KDM_BY_AG_01_HXD = 2536,
	KDM_BY_AG_01_STR = 2537,
	KDM_BY_AG_02_HXD = 2538,
	KDM_BY_AG_02_STR = 2539,
	KDM_BY_AG_03_HXD = 2540,
	KDM_BY_AG_03_STR = 2541,
	KDM_BY_AG_04_HXD = 2542,
	KDM_BY_AG_04_STR = 2543,
	KDM_GL_AG_00_HXD = 2544,
	KDM_GL_AG_00_STR = 2545,
	KDM_GL_AG_01_HXD = 2546,
	KDM_GL_AG_01_STR = 2547,
	KDM_GL_AG_02_HXD = 2548,
	KDM_GL_AG_02_STR = 2549,
	KDM_GL_AG_03_HXD = 2550,
	KDM_GL_AG_03_STR = 2551,
	KDM_GL_AG_04_HXD = 2552,
	KDM_GL_AG_04_STR = 2553,
	SCENE0610_HXD = 2554,
	SCENE0610_STR = 2555,
	SCENE0620_HXD = 2556,
	SCENE0620_STR = 2557,
	SCENE0720_HXD = 2558,
	SCENE0720_STR = 2559,
	SCENE0730_HXD = 2560,
	SCENE0730_STR = 2561,
	SCENE9101_HXD = 2562,
	SCENE9101_STR = 2563,
	SCENE9203_HXD = 2564,
	SCENE9203_STR = 2565,
	SCENE9204_HXD = 2566,
	SCENE9204_STR = 2567,
	SCENE9205_HXD = 2568,
	SCENE9205_STR = 2569,
	SCENE9303_HXD = 2570,
	SCENE9303_STR = 2571,
	SCENE0820_HXD = 2572,
	SCENE0820_STR = 2573,
	RT_KOKONIITE_STR_HXD = 2574,
	RT_KOKONIITE_STR_STR = 2575,
	GD210_CHAKUMI_STR_HXD = 2576,
	GD210_CHAKUMI_STR_STR = 2577,
	BGM010_OMAKE_HXD = 2578,
	BGM010_OMAKE_STR = 2579,
	CHITOSE_AG_01_HXD = 2580,
	CHITOSE_AG_01_STR = 2581,
	FUTAGO_AG_00_HXD = 2582,
	FUTAGO_AG_00_STR = 2583,
	FUTAGO_AG_01_HXD = 2584,
	FUTAGO_AG_01_STR = 2585,
	FUTAGO_AG_02_HXD = 2586,
	FUTAGO_AG_02_STR = 2587,
	KDM_HSHS_AG_HXD = 2588,
	KDM_HSHS_AG_STR = 2589,
	SAE_LAUGH_01_HXD = 2590,
	SAE_LAUGH_01_STR = 2591,
	SAE_LAUGH_02_HXD = 2592,
	SAE_LAUGH_02_STR = 2593,
	SAE_LAUGH_03_HXD = 2594,
	SAE_LAUGH_03_STR = 2595,
	ESE_GHOST_VOICE_STR_HXD = 2596,
	ESE_GHOST_VOICE_STR_STR = 2597,
	ESE_MIYAKO_DOKONANO_HXD = 2598,
	ESE_MIYAKO_DOKONANO_STR = 2599,
	ESE_MIYAKO_OKAERI_HXD = 2600,
	ESE_MIYAKO_OKAERI_STR = 2601,
	ESE_MIYAKO_SUSURINAKI_HXD = 2602,
	ESE_MIYAKO_SUSURINAKI_STR = 2603,
	ESE_MIYAKO_UMEKI_HXD = 2604,
	ESE_MIYAKO_UMEKI_STR = 2605,
	ESE_MIYAKO_YURUSITE_HXD = 2606,
	ESE_MIYAKO_YURUSITE_STR = 2607,
	ESE_SUZUNONE_FO_HXD = 2608,
	ESE_SUZUNONE_FO_STR = 2609,
	GD105_CHITOSE_HXD = 2610,
	GD105_CHITOSE_STR = 2611,
	KAN_36_NANIKA2_HXD = 2612,
	KAN_36_NANIKA2_STR = 2613,
	KAN_FUKAMITI_WASAN_HXD = 2614,
	KAN_FUKAMITI_WASAN_STR = 2615,
	KAN_NIEZA_HXD = 2616,
	KAN_NIEZA_STR = 2617,
	KAN_UTURO_HXD = 2618,
	KAN_UTURO_STR = 2619,
	SCENE0721_HXD = 2620,
	SCENE0721_STR = 2621,
	ESE_OHUDA_HXD = 2622,
	ESE_OHUDA_STR = 2623,
	REISEKI_VOISE_12_HXD = 2624,
	REISEKI_VOISE_12_STR = 2625,
	REISEKI_VOISE_13_HXD = 2626,
	REISEKI_VOISE_13_STR = 2627,
	REISEKI_VOISE_14_HXD = 2628,
	REISEKI_VOISE_14_STR = 2629,
	REISEKI_VOISE_15_HXD = 2630,
	REISEKI_VOISE_15_STR = 2631,
	REISEKI_VOISE_16_HXD = 2632,
	REISEKI_VOISE_16_STR = 2633,
	REISEKI_VOISE_17_HXD = 2634,
	REISEKI_VOISE_17_STR = 2635,
	REISEKI_VOISE_18_HXD = 2636,
	REISEKI_VOISE_18_STR = 2637,
	REISEKI_VOISE_19_HXD = 2638,
	REISEKI_VOISE_19_STR = 2639,
	REISEKI_VOISE_20_HXD = 2640,
	REISEKI_VOISE_20_STR = 2641,
	REISEKI_VOISE_21_HXD = 2642,
	REISEKI_VOISE_21_STR = 2643,
	REISEKI_VOISE_22_HXD = 2644,
	REISEKI_VOISE_22_STR = 2645,
	REISEKI_VOISE_23_HXD = 2646,
	REISEKI_VOISE_23_STR = 2647,
	REISEKI_VOISE_24_HXD = 2648,
	REISEKI_VOISE_24_STR = 2649,
	REISEKI_VOISE_25_HXD = 2650,
	REISEKI_VOISE_25_STR = 2651,
	REISEKI_VOISE_26_HXD = 2652,
	REISEKI_VOISE_26_STR = 2653,
	REISEKI_VOISE_26_1_HXD = 2654,
	REISEKI_VOISE_26_1_STR = 2655,
	REISEKI_VOISE_27_HXD = 2656,
	REISEKI_VOISE_27_STR = 2657,
	REISEKI_VOISE_28_HXD = 2658,
	REISEKI_VOISE_28_STR = 2659,
	REISEKI_VOISE_29_HXD = 2660,
	REISEKI_VOISE_29_STR = 2661,
	REISEKI_VOISE_30_HXD = 2662,
	REISEKI_VOISE_30_STR = 2663,
	REISEKI_VOISE_31_HXD = 2664,
	REISEKI_VOISE_31_STR = 2665,
	REISEKI_VOISE_32_HXD = 2666,
	REISEKI_VOISE_32_STR = 2667,
	REISEKI_VOISE_33_HXD = 2668,
	REISEKI_VOISE_33_STR = 2669,
	REISEKI_VOISE_34_HXD = 2670,
	REISEKI_VOISE_34_STR = 2671,
	MAKABE_AG_03_HXD = 2672,
	MAKABE_AG_03_STR = 2673,
	MAKABE_AG_04_HXD = 2674,
	MAKABE_AG_04_STR = 2675,
	MAKABE_AG_05_HXD = 2676,
	MAKABE_AG_05_STR = 2677,
	MAKABE_AG_06_HXD = 2678,
	MAKABE_AG_06_STR = 2679,
	MAKABE_AG_07_HXD = 2680,
	MAKABE_AG_07_STR = 2681,
	MAKABE_AG_08_HXD = 2682,
	MAKABE_AG_08_STR = 2683,
	MAKABE_AG_09_HXD = 2684,
	MAKABE_AG_09_STR = 2685,
	MAKABE_AG_10_HXD = 2686,
	MAKABE_AG_10_STR = 2687,
	MAKABE_AG_11_HXD = 2688,
	MAKABE_AG_11_STR = 2689,
	MAKABE_AG_12_HXD = 2690,
	MAKABE_AG_12_STR = 2691,
	MAKABE_AG_13_HXD = 2692,
	MAKABE_AG_13_STR = 2693,
	MAKABE_AG_14_HXD = 2694,
	MAKABE_AG_14_STR = 2695,
	MAKABE_AG_15_HXD = 2696,
	MAKABE_AG_15_STR = 2697,
	MAYU_TALK_100_HXD = 2698,
	MAYU_TALK_100_STR = 2699,
	MAYU_TALK_101_HXD = 2700,
	MAYU_TALK_101_STR = 2701,
	MAYU_TALK_102_HXD = 2702,
	MAYU_TALK_102_STR = 2703,
	MAYU_TALK_103_HXD = 2704,
	MAYU_TALK_103_STR = 2705,
	MAYU_TALK_104_HXD = 2706,
	MAYU_TALK_104_STR = 2707,
	MAYU_TALK_105_HXD = 2708,
	MAYU_TALK_105_STR = 2709,
	MAYU_TALK_106_HXD = 2710,
	MAYU_TALK_106_STR = 2711,
	MAYU_TALK_107_HXD = 2712,
	MAYU_TALK_107_STR = 2713,
	MAYU_TALK_108_HXD = 2714,
	MAYU_TALK_108_STR = 2715,
	MAYU_TALK_109_HXD = 2716,
	MAYU_TALK_109_STR = 2717,
	MAYU_TALK_110_HXD = 2718,
	MAYU_TALK_110_STR = 2719,
	MAYU_TALK_111_HXD = 2720,
	MAYU_TALK_111_STR = 2721,
	MAYU_TALK_112_HXD = 2722,
	MAYU_TALK_112_STR = 2723,
	MAYU_TALK_113_HXD = 2724,
	MAYU_TALK_113_STR = 2725,
	MAYU_TALK_114_HXD = 2726,
	MAYU_TALK_114_STR = 2727,
	MAYU_TALK_115_HXD = 2728,
	MAYU_TALK_115_STR = 2729,
	MAYU_TALK_116_HXD = 2730,
	MAYU_TALK_116_STR = 2731,
	MAYU_TALK_117_HXD = 2732,
	MAYU_TALK_117_STR = 2733,
	MAYU_TALK_118_HXD = 2734,
	MAYU_TALK_118_STR = 2735,
	MAYU_TALK_119_HXD = 2736,
	MAYU_TALK_119_STR = 2737,
	MAYU_TALK_120_HXD = 2738,
	MAYU_TALK_120_STR = 2739,
	MAYU_TALK_121_HXD = 2740,
	MAYU_TALK_121_STR = 2741,
	MAYU_TALK_122_HXD = 2742,
	MAYU_TALK_122_STR = 2743,
	MAYU_TALK_123_HXD = 2744,
	MAYU_TALK_123_STR = 2745,
	MAYU_TALK_124_HXD = 2746,
	MAYU_TALK_124_STR = 2747,
	MAYU_TALK_125_HXD = 2748,
	MAYU_TALK_125_STR = 2749,
	MAYU_TALK_126_HXD = 2750,
	MAYU_TALK_126_STR = 2751,
	MAYU_TALK_127_HXD = 2752,
	MAYU_TALK_127_STR = 2753,
	MAYU_TALK_128_HXD = 2754,
	MAYU_TALK_128_STR = 2755,
	MAYU_TALK_129_HXD = 2756,
	MAYU_TALK_129_STR = 2757,
	MAYU_TALK_130_HXD = 2758,
	MAYU_TALK_130_STR = 2759,
	MAYU_TALK_131_HXD = 2760,
	MAYU_TALK_131_STR = 2761,
	MAYU_TALK_132_HXD = 2762,
	MAYU_TALK_132_STR = 2763,
	MAYU_TALK_133_HXD = 2764,
	MAYU_TALK_133_STR = 2765,
	MAYU_TALK_134_HXD = 2766,
	MAYU_TALK_134_STR = 2767,
	MAYU_TALK_135_HXD = 2768,
	MAYU_TALK_135_STR = 2769,
	MAYU_TALK_136_HXD = 2770,
	MAYU_TALK_136_STR = 2771,
	MAYU_TALK_137_HXD = 2772,
	MAYU_TALK_137_STR = 2773,
	MAYU_TALK_138_HXD = 2774,
	MAYU_TALK_138_STR = 2775,
	MAYU_TALK_139_HXD = 2776,
	MAYU_TALK_139_STR = 2777,
	MAYU_TALK_140_HXD = 2778,
	MAYU_TALK_140_STR = 2779,
	MAYU_TALK_141_HXD = 2780,
	MAYU_TALK_141_STR = 2781,
	MAYU_TALK_142_HXD = 2782,
	MAYU_TALK_142_STR = 2783,
	MAYU_TALK_143_HXD = 2784,
	MAYU_TALK_143_STR = 2785,
	MAYU_TALK_144_HXD = 2786,
	MAYU_TALK_144_STR = 2787,
	MAYU_TALK_145_HXD = 2788,
	MAYU_TALK_145_STR = 2789,
	MAYU_TALK_146_HXD = 2790,
	MAYU_TALK_146_STR = 2791,
	MAYU_TALK_147_HXD = 2792,
	MAYU_TALK_147_STR = 2793,
	MAYU_TALK_148_HXD = 2794,
	MAYU_TALK_148_STR = 2795,
	MAYU_TALK_149_HXD = 2796,
	MAYU_TALK_149_STR = 2797,
	MAYU_TALK_150_HXD = 2798,
	MAYU_TALK_150_STR = 2799,
	MAYU_TALK_151_HXD = 2800,
	MAYU_TALK_151_STR = 2801,
	MAYU_TALK_152_HXD = 2802,
	MAYU_TALK_152_STR = 2803,
	MAYU_TALK_153_HXD = 2804,
	MAYU_TALK_153_STR = 2805,
	MAYU_TALK_154_HXD = 2806,
	MAYU_TALK_154_STR = 2807,
	MAYU_TALK_155_HXD = 2808,
	MAYU_TALK_155_STR = 2809,
	MAYU_TALK_156_HXD = 2810,
	MAYU_TALK_156_STR = 2811,
	MAYU_TALK_157_HXD = 2812,
	MAYU_TALK_157_STR = 2813,
	MAYU_TALK_158_HXD = 2814,
	MAYU_TALK_158_STR = 2815,
	MAYU_TALK_159_HXD = 2816,
	MAYU_TALK_159_STR = 2817,
	MAYU_TALK_160_HXD = 2818,
	MAYU_TALK_160_STR = 2819,
	MAYU_TALK_161_HXD = 2820,
	MAYU_TALK_161_STR = 2821,
	MAYU_TALK_162_HXD = 2822,
	MAYU_TALK_162_STR = 2823,
	MAYU_TALK_163_HXD = 2824,
	MAYU_TALK_163_STR = 2825,
	MAYU_TALK_164_HXD = 2826,
	MAYU_TALK_164_STR = 2827,
	MAYU_TALK_165_HXD = 2828,
	MAYU_TALK_165_STR = 2829,
	MAYU_TALK_166_HXD = 2830,
	MAYU_TALK_166_STR = 2831,
	MAYU_TALK_167_HXD = 2832,
	MAYU_TALK_167_STR = 2833,
	MAYU_TALK_168_HXD = 2834,
	MAYU_TALK_168_STR = 2835,
	MAYU_TALK_169_HXD = 2836,
	MAYU_TALK_169_STR = 2837,
	MAYU_TALK_170_HXD = 2838,
	MAYU_TALK_170_STR = 2839,
	MAYU_TALK_171_HXD = 2840,
	MAYU_TALK_171_STR = 2841,
	MAYU_TALK_172_HXD = 2842,
	MAYU_TALK_172_STR = 2843,
	MAYU_TALK_173_HXD = 2844,
	MAYU_TALK_173_STR = 2845,
	MAYU_TALK_174_HXD = 2846,
	MAYU_TALK_174_STR = 2847,
	MAYU_TALK_175_HXD = 2848,
	MAYU_TALK_175_STR = 2849,
	MAYU_TALK_176_HXD = 2850,
	MAYU_TALK_176_STR = 2851,
	MAYU_TALK_177_HXD = 2852,
	MAYU_TALK_177_STR = 2853,
	MAYU_TALK_178_HXD = 2854,
	MAYU_TALK_178_STR = 2855,
	MAYU_TALK_179_HXD = 2856,
	MAYU_TALK_179_STR = 2857,
	MAYU_TALK_180_HXD = 2858,
	MAYU_TALK_180_STR = 2859,
	MAYU_TALK_181_HXD = 2860,
	MAYU_TALK_181_STR = 2861,
	MAYU_TALK_182_HXD = 2862,
	MAYU_TALK_182_STR = 2863,
	MAYU_TALK_183_HXD = 2864,
	MAYU_TALK_183_STR = 2865,
	MAYU_TALK_184_HXD = 2866,
	MAYU_TALK_184_STR = 2867,
	MAYU_TALK_185_HXD = 2868,
	MAYU_TALK_185_STR = 2869,
	MAYU_TALK_186_HXD = 2870,
	MAYU_TALK_186_STR = 2871,
	MAYU_TALK_187_HXD = 2872,
	MAYU_TALK_187_STR = 2873,
	MAYU_TALK_188_HXD = 2874,
	MAYU_TALK_188_STR = 2875,
	MAYU_TALK_189_HXD = 2876,
	MAYU_TALK_189_STR = 2877,
	MAYU_TALK_190_HXD = 2878,
	MAYU_TALK_190_STR = 2879,
	MAYU_TALK_191_HXD = 2880,
	MAYU_TALK_191_STR = 2881,
	MAYU_TALK_192_HXD = 2882,
	MAYU_TALK_192_STR = 2883,
	MAYU_TALK_193_HXD = 2884,
	MAYU_TALK_193_STR = 2885,
	MAYU_TALK_194_HXD = 2886,
	MAYU_TALK_194_STR = 2887,
	MAYU_TALK_195_HXD = 2888,
	MAYU_TALK_195_STR = 2889,
	MAYU_TALK_196_HXD = 2890,
	MAYU_TALK_196_STR = 2891,
	MAYU_TALK_197_HXD = 2892,
	MAYU_TALK_197_STR = 2893,
	MAYU_TALK_198_HXD = 2894,
	MAYU_TALK_198_STR = 2895,
	MAYU_TALK_199_HXD = 2896,
	MAYU_TALK_199_STR = 2897,
	MAYU_TALK_200_HXD = 2898,
	MAYU_TALK_200_STR = 2899,
	MAYU_TALK_201_HXD = 2900,
	MAYU_TALK_201_STR = 2901,
	MAYU_TALK_202_HXD = 2902,
	MAYU_TALK_202_STR = 2903,
	MAYU_TALK_203_HXD = 2904,
	MAYU_TALK_203_STR = 2905,
	MAYU_TALK_204_HXD = 2906,
	MAYU_TALK_204_STR = 2907,
	MAYU_TALK_205_HXD = 2908,
	MAYU_TALK_205_STR = 2909,
	MAYU_TALK_206_HXD = 2910,
	MAYU_TALK_206_STR = 2911,
	MAYU_TALK_207_HXD = 2912,
	MAYU_TALK_207_STR = 2913,
	MAYU_TALK_208_HXD = 2914,
	MAYU_TALK_208_STR = 2915,
	MAYU_TALK_209_HXD = 2916,
	MAYU_TALK_209_STR = 2917,
	MAYU_TALK_210_HXD = 2918,
	MAYU_TALK_210_STR = 2919,
	MAYU_TALK_211_HXD = 2920,
	MAYU_TALK_211_STR = 2921,
	MAYU_TALK_212_HXD = 2922,
	MAYU_TALK_212_STR = 2923,
	MAYU_TALK_213_HXD = 2924,
	MAYU_TALK_213_STR = 2925,
	MAYU_TALK_214_HXD = 2926,
	MAYU_TALK_214_STR = 2927,
	MAYU_TALK_215_HXD = 2928,
	MAYU_TALK_215_STR = 2929,
	MAYU_TALK_216_HXD = 2930,
	MAYU_TALK_216_STR = 2931,
	MAYU_TALK_217_HXD = 2932,
	MAYU_TALK_217_STR = 2933,
	MAYU_TALK_64_HXD = 2934,
	MAYU_TALK_64_STR = 2935,
	MAYU_TALK_65_HXD = 2936,
	MAYU_TALK_65_STR = 2937,
	MAYU_TALK_66_HXD = 2938,
	MAYU_TALK_66_STR = 2939,
	MAYU_TALK_67_HXD = 2940,
	MAYU_TALK_67_STR = 2941,
	MAYU_TALK_68_HXD = 2942,
	MAYU_TALK_68_STR = 2943,
	MAYU_TALK_69_HXD = 2944,
	MAYU_TALK_69_STR = 2945,
	MAYU_TALK_70_HXD = 2946,
	MAYU_TALK_70_STR = 2947,
	MAYU_TALK_71_HXD = 2948,
	MAYU_TALK_71_STR = 2949,
	MAYU_TALK_72_HXD = 2950,
	MAYU_TALK_72_STR = 2951,
	MAYU_TALK_73_HXD = 2952,
	MAYU_TALK_73_STR = 2953,
	MAYU_TALK_74_HXD = 2954,
	MAYU_TALK_74_STR = 2955,
	MAYU_TALK_75_HXD = 2956,
	MAYU_TALK_75_STR = 2957,
	MAYU_TALK_76_HXD = 2958,
	MAYU_TALK_76_STR = 2959,
	MAYU_TALK_77_HXD = 2960,
	MAYU_TALK_77_STR = 2961,
	MAYU_TALK_78_HXD = 2962,
	MAYU_TALK_78_STR = 2963,
	MAYU_TALK_79_HXD = 2964,
	MAYU_TALK_79_STR = 2965,
	MAYU_TALK_80_HXD = 2966,
	MAYU_TALK_80_STR = 2967,
	MAYU_TALK_81_HXD = 2968,
	MAYU_TALK_81_STR = 2969,
	MAYU_TALK_82_HXD = 2970,
	MAYU_TALK_82_STR = 2971,
	MAYU_TALK_83_HXD = 2972,
	MAYU_TALK_83_STR = 2973,
	MAYU_TALK_84_HXD = 2974,
	MAYU_TALK_84_STR = 2975,
	MAYU_TALK_85_HXD = 2976,
	MAYU_TALK_85_STR = 2977,
	MAYU_TALK_86_HXD = 2978,
	MAYU_TALK_86_STR = 2979,
	MAYU_TALK_87_HXD = 2980,
	MAYU_TALK_87_STR = 2981,
	MAYU_TALK_88_HXD = 2982,
	MAYU_TALK_88_STR = 2983,
	MAYU_TALK_89_HXD = 2984,
	MAYU_TALK_89_STR = 2985,
	MAYU_TALK_90_HXD = 2986,
	MAYU_TALK_90_STR = 2987,
	MAYU_TALK_91_HXD = 2988,
	MAYU_TALK_91_STR = 2989,
	MAYU_TALK_92_HXD = 2990,
	MAYU_TALK_92_STR = 2991,
	MAYU_TALK_93_HXD = 2992,
	MAYU_TALK_93_STR = 2993,
	MAYU_TALK_94_HXD = 2994,
	MAYU_TALK_94_STR = 2995,
	MAYU_TALK_95_HXD = 2996,
	MAYU_TALK_95_STR = 2997,
	MAYU_TALK_96_HXD = 2998,
	MAYU_TALK_96_STR = 2999,
	MAYU_TALK_97_HXD = 3000,
	MAYU_TALK_97_STR = 3001,
	MAYU_TALK_98_HXD = 3002,
	MAYU_TALK_98_STR = 3003,
	MAYU_TALK_99_HXD = 3004,
	MAYU_TALK_99_STR = 3005,
	MURA_AG_03_HXD = 3006,
	MURA_AG_03_STR = 3007,
	MURA_AG_04_HXD = 3008,
	MURA_AG_04_STR = 3009,
	MURA_AG_05_HXD = 3010,
	MURA_AG_05_STR = 3011,
	NINGYOU_AG_03_HXD = 3012,
	NINGYOU_AG_03_STR = 3013,
	NINGYOU_AG_04_HXD = 3014,
	NINGYOU_AG_04_STR = 3015,
	NINGYOU_AG_05_HXD = 3016,
	NINGYOU_AG_05_STR = 3017,
	NINGYOU_AG_06_HXD = 3018,
	NINGYOU_AG_06_STR = 3019,
	TOUSYU_AG_04_HXD = 3020,
	TOUSYU_AG_04_STR = 3021,
	TOUSYU_AG_05_HXD = 3022,
	TOUSYU_AG_05_STR = 3023,
	TOUSYU_AG_06_HXD = 3024,
	TOUSYU_AG_06_STR = 3025,
	TOUSYU_AG_07_HXD = 3026,
	TOUSYU_AG_07_STR = 3027,
	TOUSYU_AG_08_HXD = 3028,
	TOUSYU_AG_08_STR = 3029,
	MAYU_TALK_218_HXD = 3030,
	MAYU_TALK_218_STR = 3031,
	SYNCHRO_2SYOU_HXD = 3032,
	SYNCHRO_2SYOU_STR = 3033,
	SYNCHRO_3SYOU_HXD = 3034,
	SYNCHRO_3SYOU_STR = 3035,
	SYNCHRO_5SYOU_HXD = 3036,
	SYNCHRO_5SYOU_STR = 3037,
	SYNCHRO_9SYOU_A_HXD = 3038,
	SYNCHRO_9SYOU_A_STR = 3039,
	SYNCHRO_9SYOU_B_HXD = 3040,
	SYNCHRO_9SYOU_B_STR = 3041,
	MAYU_TALK_221_HXD = 3042,
	MAYU_TALK_221_STR = 3043,
	MAYU_TALK_220_HXD = 3044,
	MAYU_TALK_220_STR = 3045,
	MAYU_TALK_219_HXD = 3046,
	MAYU_TALK_219_STR = 3047,
	SCENE9206_HXD = 3048,
	SCENE9206_STR = 3049,
	SCENE1010_HXD = 3050,
	SCENE1010_STR = 3051,
	ESE_TASUKETE_HXD = 3052,
	ESE_TASUKETE_STR = 3053,
	ESE_UTURO_FUTAGO_HXD = 3054,
	ESE_UTURO_FUTAGO_STR = 3055,
	BGM011_GAMEOVER_HXD = 3056,
	BGM011_GAMEOVER_STR = 3057,
	MAYU_TALK_222_HXD = 3058,
	MAYU_TALK_222_STR = 3059,
	GD243_YUNOMI_STR_HXD = 3060,
	GD243_YUNOMI_STR_STR = 3061,
	ESE_RT_MARI_HXD = 3062,
	ESE_RT_MARI_STR = 3063,
	ESE_RT_TANAGATA_HXD = 3064,
	ESE_RT_TANAGATA_STR = 3065,
	REISEKI_VOISE_35_HXD = 3066,
	REISEKI_VOISE_35_STR = 3067,
	REISEKI_VOISE_36_HXD = 3068,
	REISEKI_VOISE_36_STR = 3069,
	REISEKI_VOISE_37_HXD = 3070,
	REISEKI_VOISE_37_STR = 3071,
	REISEKI_VOISE_38_HXD = 3072,
	REISEKI_VOISE_38_STR = 3073,
	REISEKI_VOISE_39_HXD = 3074,
	REISEKI_VOISE_39_STR = 3075,
	RT_ESE_KATANA_HXD = 3076,
	RT_ESE_KATANA_STR = 3077,
	REISEKI_VOISE_40_HXD = 3078,
	REISEKI_VOISE_40_STR = 3079,
	REISEKI_VOISE_41_HXD = 3080,
	REISEKI_VOISE_41_STR = 3081,
	ITSUKI_TALK_24_HXD = 3082,
	ITSUKI_TALK_24_STR = 3083,
	ESE_KUSABI_TOJYO_HXD = 3084,
	ESE_KUSABI_TOJYO_STR = 3085,
	BGM_END_DMY = 3086,
	SE_START_DMY = 3087,
	YAMIB_SE_BTL_HXD = 3088,
	YAMIB_SE_BTL_BD = 3089,
	MIYA_SE_BTL_HXD = 3090,
	MIYA_SE_BTL_BD = 3091,
	KUSABI_SE_BTL_HXD = 3092,
	KUSABI_SE_BTL_BD = 3093,
	MURAC_SE_BTL_HXD = 3094,
	MURAC_SE_BTL_BD = 3095,
	TES_HXD = 3096,
	TES_BD = 3097,
	AJ_001_32_HXD = 3098,
	AJ_001_32_BD = 3099,
	AJ_002_32_HXD = 3100,
	AJ_002_32_BD = 3101,
	AJ_003_32_HXD = 3102,
	AJ_003_32_BD = 3103,
	AJ_004_32_HXD = 3104,
	AJ_004_32_BD = 3105,
	AJ_005_32_HXD = 3106,
	AJ_005_32_BD = 3107,
	AJ_006_32_HXD = 3108,
	AJ_006_32_BD = 3109,
	AJ_007_32_HXD = 3110,
	AJ_007_32_BD = 3111,
	AJ_008_32_HXD = 3112,
	AJ_008_32_BD = 3113,
	AJ_009_22_HXD = 3114,
	AJ_009_22_BD = 3115,
	AJ_011_22_HXD = 3116,
	AJ_011_22_BD = 3117,
	AJ_012_22_HXD = 3118,
	AJ_012_22_BD = 3119,
	AJ_013A_22_HXD = 3120,
	AJ_013A_22_BD = 3121,
	AJ_013B_22_HXD = 3122,
	AJ_013B_22_BD = 3123,
	AJ_013C_22_HXD = 3124,
	AJ_013C_22_BD = 3125,
	AJ_013D_22_HXD = 3126,
	AJ_013D_22_BD = 3127,
	AJ_015_32_HXD = 3128,
	AJ_015_32_BD = 3129,
	AJ_016_22_HXD = 3130,
	AJ_016_22_BD = 3131,
	DOOR009_KAGI_TYUU_HXD = 3132,
	DOOR009_KAGI_TYUU_BD = 3133,
	DOOR008_KAGI_SYOU_HXD = 3134,
	DOOR008_KAGI_SYOU_BD = 3135,
	DOOR007_DAI_AKANAI_HXD = 3136,
	DOOR007_DAI_AKANAI_BD = 3137,
	DOOR006_TYUU_AKANAI_HXD = 3138,
	DOOR006_TYUU_AKANAI_BD = 3139,
	DOOR004_KUGURI_HXD = 3140,
	DOOR004_KUGURI_BD = 3141,
	DOOR003_HIKIDO_HXD = 3142,
	DOOR003_HIKIDO_BD = 3143,
	DOOR002_OOSAKA_HXD = 3144,
	DOOR002_OOSAKA_BD = 3145,
	DOOR005_HUSUMA_AKANA_HXD = 3146,
	DOOR005_HUSUMA_AKANA_BD = 3147,
	ESE006_HUTASIMERU_HXD = 3148,
	ESE006_HUTASIMERU_BD = 3149,
	ESE007_HUTAAKERU_HXD = 3150,
	ESE007_HUTAAKERU_BD = 3151,
	ESE005_HUTAUGOKU_HXD = 3152,
	ESE005_HUTAUGOKU_BD = 3153,
	FOOT016_KUSA_HXD = 3154,
	FOOT016_KUSA_BD = 3155,
	FOOT015_TUTI_HXD = 3156,
	FOOT015_TUTI_BD = 3157,
	FOOT014_ITANOMA3_HXD = 3158,
	FOOT014_ITANOMA3_BD = 3159,
	FOOT013_DOMA1_HXD = 3160,
	FOOT013_DOMA1_BD = 3161,
	FOOT012_EXTKISIMI_HXD = 3162,
	FOOT012_EXTKISIMI_BD = 3163,
	FOOT011_OTIBAMAJIRI_HXD = 3164,
	FOOT011_OTIBAMAJIRI_BD = 3165,
	FOOT010_JYARIMAJIRI_HXD = 3166,
	FOOT010_JYARIMAJIRI_BD = 3167,
	FOOT009_WARETOUKI_HXD = 3168,
	FOOT009_WARETOUKI_BD = 3169,
	FOOT008_ITANOMA2_HXD = 3170,
	FOOT008_ITANOMA2_BD = 3171,
	FOOT007_ITANOMA_HXD = 3172,
	FOOT007_ITANOMA_BD = 3173,
	FOOT006_ITAKAIDAN_HXD = 3174,
	FOOT006_ITAKAIDAN_BD = 3175,
	FOOT005_TATAMI_HXD = 3176,
	FOOT005_TATAMI_BD = 3177,
	FOOT004_KAMOI_HXD = 3178,
	FOOT004_KAMOI_BD = 3179,
	FOOT003_DOMA2_HXD = 3180,
	FOOT003_DOMA2_BD = 3181,
	FOOT002_MOKUHEN_HXD = 3182,
	FOOT002_MOKUHEN_BD = 3183,
	FOOT001_ISIDATAMI_HXD = 3184,
	FOOT001_ISIDATAMI_BD = 3185,
	FOOT000_ISIKAIDAN_HXD = 3186,
	FOOT000_ISIKAIDAN_BD = 3187,
	ANE_SISUTEMU_HXD = 3188,
	ANE_SISUTEMU_BD = 3189,
	SJ009_117_HXD = 3190,
	SJ009_117_BD = 3191,
	SJ008_116_HXD = 3192,
	SJ008_116_BD = 3193,
	SJ007_115_HXD = 3194,
	SJ007_115_BD = 3195,
	SJ006_KOKIRIE_HXD = 3196,
	SJ006_KOKIRIE_BD = 3197,
	SJ005_110_HXD = 3198,
	SJ005_110_BD = 3199,
	SJ004_109_HXD = 3200,
	SJ004_109_BD = 3201,
	SJ003_KIRIE_HXD = 3202,
	SJ003_KIRIE_BD = 3203,
	SJ001_104_HXD = 3204,
	SJ001_104_BD = 3205,
	SJ000_102_HXD = 3206,
	SJ000_102_BD = 3207,
	HAN001_HUSUMA_HXD = 3208,
	HAN001_HUSUMA_BD = 3209,
	HAN000_TYUU_HXD = 3210,
	HAN000_TYUU_BD = 3211,
	FOOT011_ISINOUE_HXD = 3212,
	FOOT011_ISINOUE_BD = 3213,
	FOOT010_JYARI_HXD = 3214,
	FOOT010_JYARI_BD = 3215,
	FOOT009_TUTI2_HXD = 3216,
	FOOT009_TUTI2_BD = 3217,
	FOOT008_TUTI_HXD = 3218,
	FOOT008_TUTI_BD = 3219,
	FOOT007_KAMOI_HXD = 3220,
	FOOT007_KAMOI_BD = 3221,
	FOOT006_TATAMI_HXD = 3222,
	FOOT006_TATAMI_BD = 3223,
	FOOT005_ITAKAIDAN_HXD = 3224,
	FOOT005_ITAKAIDAN_BD = 3225,
	FOOT004_MOKUHEN_HXD = 3226,
	FOOT004_MOKUHEN_BD = 3227,
	FOOT003_ITANOMA2_HXD = 3228,
	FOOT003_ITANOMA2_BD = 3229,
	FOOT002_ITANOMA1_HXD = 3230,
	FOOT002_ITANOMA1_BD = 3231,
	FOOT001_DOMA2_HXD = 3232,
	FOOT001_DOMA2_BD = 3233,
	FOOT000_DOMA1_HXD = 3234,
	FOOT000_DOMA1_BD = 3235,
	DOOR001_TYUU_HXD = 3236,
	DOOR001_TYUU_BD = 3237,
	DOOR000_HUSUMA_HXD = 3238,
	DOOR000_HUSUMA_BD = 3239,
	ESE004_NAGABITUAKESI_HXD = 3240,
	ESE004_NAGABITUAKESI_BD = 3241,
	ESE000_ABARERU_HXD = 3242,
	ESE000_ABARERU_BD = 3243,
	SISUTEMU_HXD = 3244,
	SISUTEMU_BD = 3245,
	GUJI_SE_BTL_HXD = 3246,
	GUJI_SE_BTL_BD = 3247,
	HAKO_SE_BTL_HXD = 3248,
	HAKO_SE_BTL_BD = 3249,
	KUSAA_SE_BTL_HXD = 3250,
	KUSAA_SE_BTL_BD = 3251,
	KUSAB_SE_BTL_HXD = 3252,
	KUSAB_SE_BTL_BD = 3253,
	MURAA_SE_BTL_HXD = 3254,
	MURAA_SE_BTL_BD = 3255,
	MURAB_SE_BTL_HXD = 3256,
	MURAB_SE_BTL_BD = 3257,
	SUIS_SE_BTL_HXD = 3258,
	SUIS_SE_BTL_BD = 3259,
	YAMIA_SE_BTL_HXD = 3260,
	YAMIA_SE_BTL_BD = 3261,
	PZL_HINADAN_HXD = 3262,
	PZL_HINADAN_BD = 3263,
	PZL_ROKUMEN_HXD = 3264,
	PZL_ROKUMEN_BD = 3265,
	KAN_KAWA_HXD = 3266,
	KAN_KAWA_BD = 3267,
	ESE_TANAGATA_HXD = 3268,
	ESE_TANAGATA_BD = 3269,
	ESE_SUITEKI_YUKA_HXD = 3270,
	ESE_SUITEKI_YUKA_BD = 3271,
	KAN_KAGARIBI_HXD = 3272,
	KAN_KAGARIBI_BD = 3273,
	ESE_MOKUHEN_HXD = 3274,
	ESE_MOKUHEN_BD = 3275,
	ESE_MARI_HXD = 3276,
	ESE_MARI_BD = 3277,
	ESE_IKE_OTIRU_HXD = 3278,
	ESE_IKE_OTIRU_BD = 3279,
	ESE_DOOR_OPCL_HXD = 3280,
	ESE_DOOR_OPCL_BD = 3281,
	ESE_BOX_OTIRU_HXD = 3282,
	ESE_BOX_OTIRU_BD = 3283,
	ESE_SCREAM00_HXD = 3284,
	ESE_SCREAM00_BD = 3285,
	ESE_SCREAM01_HXD = 3286,
	ESE_SCREAM01_BD = 3287,
	TEST005_HXD = 3288,
	TEST005_BD = 3289,
	TEST006_HXD = 3290,
	TEST006_BD = 3291,
	TEST007_HXD = 3292,
	TEST007_BD = 3293,
	KUBI_SE_BTL_HXD = 3294,
	KUBI_SE_BTL_BD = 3295,
	MASU_SE_BTL_HXD = 3296,
	MASU_SE_BTL_BD = 3297,
	TOUSYU_SE_BTL_HXD = 3298,
	TOUSYU_SE_BTL_BD = 3299,
	NIN_SE_BTL_HXD = 3300,
	NIN_SE_BTL_BD = 3301,
	AKANE_SE_BTL_HXD = 3302,
	AKANE_SE_BTL_BD = 3303,
	AZAMI_SE_BTL_HXD = 3304,
	AZAMI_SE_BTL_BD = 3305,
	CHITOSE_SE_BTL_HXD = 3306,
	CHITOSE_SE_BTL_BD = 3307,
	IMI_SE_BTL_HXD = 3308,
	IMI_SE_BTL_BD = 3309,
	KDMA_SE_BTL_HXD = 3310,
	KDMA_SE_BTL_BD = 3311,
	KDMB_SE_BTL_HXD = 3312,
	KDMB_SE_BTL_BD = 3313,
	KDMC_SE_BTL_HXD = 3314,
	KDMC_SE_BTL_BD = 3315,
	SUIS2_SE_BTL_HXD = 3316,
	SUIS2_SE_BTL_BD = 3317,
	RAKKA_SE_BTL_HXD = 3318,
	RAKKA_SE_BTL_BD = 3319,
	BASE_SYS_BD_HXD = 3320,
	BASE_SYS_BD_BD = 3321,
	FINDER_SYS_BD_HXD = 3322,
	FINDER_SYS_BD_BD = 3323,
	MIO_SYS_BD_HXD = 3324,
	MIO_SYS_BD_BD = 3325,
	KAN_KAGARIHAZE_BD_HXD = 3326,
	KAN_KAGARIHAZE_BD_BD = 3327,
	FOOT016_SOFT_HXD = 3328,
	FOOT016_SOFT_BD = 3329,
	ESE_CHITOSESUZU_BD_HXD = 3330,
	ESE_CHITOSESUZU_BD_BD = 3331,
	KAN_MEIMETU_BD_HXD = 3332,
	KAN_MEIMETU_BD_BD = 3333,
	PZL_KAZAGURUMA_HXD = 3334,
	PZL_KAZAGURUMA_BD = 3335,
	GD130_BD_HXD = 3336,
	GD130_BD_BD = 3337,
	GD062_BD_HXD = 3338,
	GD062_BD_BD = 3339,
	ESE_RAKURAI_HXD = 3340,
	ESE_RAKURAI_BD = 3341,
	ESE_SUITEKI_SUIMEN_HXD = 3342,
	ESE_SUITEKI_SUIMEN_BD = 3343,
	KAN_KAWA_FAST_HXD = 3344,
	KAN_KAWA_FAST_BD = 3345,
	ESE_FILMREEL_HXD = 3346,
	ESE_FILMREEL_BD = 3347,
	PZL_FUTAGO_HXD = 3348,
	PZL_FUTAGO_BD = 3349,
	KAN_SCREEN_NOISE_HXD = 3350,
	KAN_SCREEN_NOISE_BD = 3351,
	KAN_RARE_NEAR_HXD = 3352,
	KAN_RARE_NEAR_BD = 3353,
	KAN_CHITEIKO_HXD = 3354,
	KAN_CHITEIKO_BD = 3355,
	ESE_SYNCHRO_LAST_HXD = 3356,
	ESE_SYNCHRO_LAST_BD = 3357,
	ESE_CHITOSESUZU_HXD = 3358,
	ESE_CHITOSESUZU_BD = 3359,
	ESE_DOOR_OPEN_MON_HXD = 3360,
	ESE_DOOR_OPEN_MON_BD = 3361,
	ESE_HASHIGO_BD_HXD = 3362,
	ESE_HASHIGO_BD_BD = 3363,
	SAE_SE_BTL_HXD = 3364,
	SAE_SE_BTL_BD = 3365,
	NINGYOU_SE_BTL_HXD = 3366,
	NINGYOU_SE_BTL_BD = 3367,
	KUSABI2_SE_BTL_HXD = 3368,
	KUSABI2_SE_BTL_BD = 3369,
	KAN_KAZE_HXD = 3370,
	KAN_KAZE_BD = 3371,
	JISIN_HXD = 3372,
	JISIN_BD = 3373,
	ESE_TANAGATA_RT_HXD = 3374,
	ESE_TANAGATA_RT_BD = 3375,
	ESE_MARI_RT_HXD = 3376,
	ESE_MARI_RT_BD = 3377,
	ESE_HASIGO2_HXD = 3378,
	ESE_HASIGO2_BD = 3379,
	SE_END_DMY = 3380,
	EVENT_OBJ = 3381,
	EVENT_50_OBJ = 3382,
	MISSION_OBJ = 3383,
	MSG_OBJ = 3384,
	MSG_F_OBJ = 3385,
	MSG_G_OBJ = 3386,
	MSG_S_OBJ = 3387,
	MSG_I_OBJ = 3388,
	TITLE_BG_PK2 = 3389,
	TITLE_LOGO_PK2 = 3390,
	TITLE_LOGO_F_PK2 = 3391,
	TITLE_LOGO_G_PK2 = 3392,
	TITLE_LOGO_S_PK2 = 3393,
	TITLE_LOGO_I_PK2 = 3394,
	MOVIE_ROOM_000_PSS = 3395,
	MOVIE_ROOM_000PAL_PSS = 3396,
	MOVIE_ROOM_001_PSS = 3397,
	MOVIE_ROOM_001PAL_PSS = 3398,
	MOVIE_ROOM_002_PSS = 3399,
	MOVIE_ROOM_002PAL_PSS = 3400,
	MOVIE_ROOM_003_PSS = 3401,
	MOVIE_ROOM_003PAL_PSS = 3402,
	MOVIE_ROOM_004_PSS = 3403,
	MOVIE_ROOM_004PAL_PSS = 3404,
	MOVIE_ROOM_005_PSS = 3405,
	MOVIE_ROOM_005PAL_PSS = 3406,
	MOVIE_ROOM_006_PSS = 3407,
	MOVIE_ROOM_006PAL_PSS = 3408,
	S0010_PSS = 3409,
	SCENE0010_MOVIE_SLT = 3410,
	SCENE0010_MOVIE_EFF = 3411,
	S0020_PSS = 3412,
	SCENE0020_MOVIE_SLT = 3413,
	SCENE0020_MOVIE_EFF = 3414,
	SCENE0110_SCN = 3415,
	SCENE0110_SLT = 3416,
	SCENE0110_EFF = 3417,
	SCENE0120_SCN = 3418,
	SCENE0120_SLT = 3419,
	SCENE0120_EFF = 3420,
	S0121_PSS = 3421,
	SCENE0121_MOVIE_SLT = 3422,
	SCENE0121_MOVIE_EFF = 3423,
	SCENE0122_SCN = 3424,
	SCENE0122_SLT = 3425,
	SCENE0122_EFF = 3426,
	SCENE0130_SCN = 3427,
	SCENE0130_SLT = 3428,
	SCENE0130_EFF = 3429,
	SCENE0132_SCN = 3430,
	SCENE0132_SLT = 3431,
	SCENE0132_EFF = 3432,
	SCENE0133_SCN = 3433,
	SCENE0133_SLT = 3434,
	SCENE0133_EFF = 3435,
	SCENE0140_SCN = 3436,
	SCENE0140_SLT = 3437,
	SCENE0140_EFF = 3438,
	S0141_PSS = 3439,
	SCENE0141_MOVIE_SLT = 3440,
	SCENE0141_MOVIE_EFF = 3441,
	SCENE0150_SCN = 3442,
	SCENE0150_SLT = 3443,
	SCENE0150_EFF = 3444,
	SCENE0160_SCN = 3445,
	SCENE0160_SLT = 3446,
	SCENE0160_EFF = 3447,
	SCENE0170_SCN = 3448,
	SCENE0170_SLT = 3449,
	SCENE0170_EFF = 3450,
	S0180_PSS = 3451,
	SCENE0180_MOVIE_SLT = 3452,
	SCENE0180_MOVIE_EFF = 3453,
	SCENE0190_SCN = 3454,
	SCENE0190_SLT = 3455,
	SCENE0190_EFF = 3456,
	S0200_PSS = 3457,
	SCENE0200_MOVIE_SLT = 3458,
	SCENE0200_MOVIE_EFF = 3459,
	SCENE0210_SCN = 3460,
	SCENE0210_SLT = 3461,
	SCENE0210_EFF = 3462,
	S0220_PSS = 3463,
	SCENE0220_MOVIE_SLT = 3464,
	SCENE0220_MOVIE_EFF = 3465,
	S0230_PSS = 3466,
	SCENE0230_MOVIE_SLT = 3467,
	SCENE0230_MOVIE_EFF = 3468,
	SCENE0231_SCN = 3469,
	SCENE0231_SLT = 3470,
	SCENE0231_EFF = 3471,
	SCENE0240_SCN = 3472,
	SCENE0240_SLT = 3473,
	SCENE0240_EFF = 3474,
	S0310_PSS = 3475,
	SCENE0310_MOVIE_SLT = 3476,
	SCENE0310_MOVIE_EFF = 3477,
	S0330_PSS = 3478,
	SCENE0330_SLT = 3479,
	SCENE0330_EFF = 3480,
	SCENE0340_SCN = 3481,
	SCENE0340_SLT = 3482,
	SCENE0340_EFF = 3483,
	SCENE0350_SCN = 3484,
	SCENE0350_SLT = 3485,
	SCENE0350_EFF = 3486,
	S0351_PSS = 3487,
	SCENE0351_MOVIE_SLT = 3488,
	SCENE0351_MOVIE_EFF = 3489,
	SCENE0352_SCN = 3490,
	SCENE0352_SLT = 3491,
	SCENE0352_EFF = 3492,
	SCENE0410_SCN = 3493,
	SCENE0410_SLT = 3494,
	SCENE0410_EFF = 3495,
	SCENE0510_SCN = 3496,
	SCENE0510_SLT = 3497,
	SCENE0510_EFF = 3498,
	SCENE0520_SCN = 3499,
	SCENE0520_SLT = 3500,
	SCENE0520_EFF = 3501,
	SCENE0610_SCN = 3502,
	SCENE0610_SLT = 3503,
	SCENE0610_EFF = 3504,
	S0611_PSS = 3505,
	SCENE0611_MOVIE_SLT = 3506,
	SCENE0611_MOVIE_EFF = 3507,
	SCENE0620_SCN = 3508,
	SCENE0620_SLT = 3509,
	SCENE0620_EFF = 3510,
	S0710_PSS = 3511,
	SCENE0710_MOVIE_SLT = 3512,
	SCENE0710_MOVIE_EFF = 3513,
	S0711_PSS = 3514,
	SCENE0711_MOVIE_SLT = 3515,
	SCENE0711_MOVIE_EFF = 3516,
	S0712_PSS = 3517,
	SCENE0712_MOVIE_SLT = 3518,
	SCENE0712_MOVIE_EFF = 3519,
	S0713_PSS = 3520,
	SCENE0713_MOVIE_SLT = 3521,
	SCENE0713_MOVIE_EFF = 3522,
	SCENE0720_SCN = 3523,
	SCENE0720_SLT = 3524,
	SCENE0720_EFF = 3525,
	SCENE0721_SCN = 3526,
	SCENE0721_SLT = 3527,
	SCENE0721_EFF = 3528,
	SCENE0730_SCN = 3529,
	SCENE0730_SLT = 3530,
	SCENE0730_EFF = 3531,
	S0731_PSS = 3532,
	SCENE0731_MOVIE_SLT = 3533,
	SCENE0731_MOVIE_EFF = 3534,
	S0740_PSS = 3535,
	SCENE0740_MOVIE_SLT = 3536,
	SCENE0740_MOVIE_EFF = 3537,
	S0810_PSS = 3538,
	SCENE0810_MOVIE_SLT = 3539,
	SCENE0810_MOVIE_EFF = 3540,
	SCENE0820_SCN = 3541,
	SCENE0820_SLT = 3542,
	SCENE0820_EFF = 3543,
	S0910_PSS = 3544,
	SCENE0910_MOVIE_SLT = 3545,
	SCENE0910_MOVIE_EFF = 3546,
	S0920_PSS = 3547,
	SCENE0920_MOVIE_SLT = 3548,
	SCENE0920_MOVIE_EFF = 3549,
	S0930_PSS = 3550,
	SCENE0930_MOVIE_SLT = 3551,
	SCENE0930_MOVIE_EFF = 3552,
	S0940_PSS = 3553,
	SCENE0940_MOVIE_SLT = 3554,
	SCENE0940_MOVIE_EFF = 3555,
	S0960_PSS = 3556,
	SCENE0960_MOVIE_SLT = 3557,
	SCENE0960_MOVIE_EFF = 3558,
	SCENE1010_SCN = 3559,
	SCENE1010_SLT = 3560,
	SCENE1010_EFF = 3561,
	S1020_PSS = 3562,
	SCENE1020_MOVIE_SLT = 3563,
	SCENE1020_MOVIE_EFF = 3564,
	S1030_PSS = 3565,
	SCENE1030_MOVIE_SLT = 3566,
	SCENE1030_MOVIE_EFF = 3567,
	S1040_PSS = 3568,
	SCENE1040_MOVIE_SLT = 3569,
	SCENE1040_MOVIE_EFF = 3570,
	SCENE9001_SCN = 3571,
	SCENE9001_SLT = 3572,
	SCENE9001_EFF = 3573,
	SCENE9002_SCN = 3574,
	SCENE9002_SLT = 3575,
	SCENE9002_EFF = 3576,
	S9005_PSS = 3577,
	SCENE9005_MOVIE_SLT = 3578,
	SCENE9005_MOVIE_EFF = 3579,
	SCENE9101_SCN = 3580,
	SCENE9101_SLT = 3581,
	SCENE9101_EFF = 3582,
	SCENE9203_SCN = 3583,
	SCENE9203_SLT = 3584,
	SCENE9203_EFF = 3585,
	SCENE9204_SCN = 3586,
	SCENE9204_SLT = 3587,
	SCENE9204_EFF = 3588,
	SCENE9205_SCN = 3589,
	SCENE9205_SLT = 3590,
	SCENE9205_EFF = 3591,
	SCENE9206_SCN = 3592,
	SCENE9206_SLT = 3593,
	SCENE9206_EFF = 3594,
	SCENE9302_SCN = 3595,
	SCENE9302_SLT = 3596,
	SCENE9302_EFF = 3597,
	SCENE9303_SCN = 3598,
	SCENE9303_SLT = 3599,
	SCENE9303_EFF = 3600,
	SCENE9501_SCN = 3601,
	SCENE9501_SLT = 3602,
	SCENE9501_EFF = 3603,
	PROMO_48_PSS = 3604,
	PROMO_48_SLT = 3605,
	PROMO_48_EFF = 3606,
	PROMO_01_PSS = 3607,
	PROMO_01_SLT = 3608,
	PROMO_01_EFF = 3609,
	PROMO_02_PSS = 3610,
	PROMO_02_SLT = 3611,
	PROMO_02_EFF = 3612,
	PROMO_03_PSS = 3613,
	PROMO_03_SLT = 3614,
	PROMO_03_EFF = 3615,
	GAME_OVER_PSS = 3616,
	GAME_OVER_SLT = 3617,
	GAME_OVER_EFF = 3618,
	UBI_ROGO_PSS = 3619,
	UBI_ROGO_SLT = 3620,
	UBI_ROGO_EFF = 3621,
	CALIBRATION_TM2 = 3622,
	VCITEST_PK2 = 3623,
	CHAPTER1_TM2 = 3624,
	CHAPTER1_F_TM2 = 3625,
	CHAPTER1_G_TM2 = 3626,
	CHAPTER1_S_TM2 = 3627,
	CHAPTER1_I_TM2 = 3628,
	CHAPTER2_TM2 = 3629,
	CHAPTER2_F_TM2 = 3630,
	CHAPTER2_G_TM2 = 3631,
	CHAPTER2_S_TM2 = 3632,
	CHAPTER2_I_TM2 = 3633,
	CHAPTER3_TM2 = 3634,
	CHAPTER3_F_TM2 = 3635,
	CHAPTER3_G_TM2 = 3636,
	CHAPTER3_S_TM2 = 3637,
	CHAPTER3_I_TM2 = 3638,
	CHAPTER4_TM2 = 3639,
	CHAPTER4_F_TM2 = 3640,
	CHAPTER4_G_TM2 = 3641,
	CHAPTER4_S_TM2 = 3642,
	CHAPTER4_I_TM2 = 3643,
	CHAPTER5_TM2 = 3644,
	CHAPTER5_F_TM2 = 3645,
	CHAPTER5_G_TM2 = 3646,
	CHAPTER5_S_TM2 = 3647,
	CHAPTER5_I_TM2 = 3648,
	CHAPTER6_TM2 = 3649,
	CHAPTER6_F_TM2 = 3650,
	CHAPTER6_G_TM2 = 3651,
	CHAPTER6_S_TM2 = 3652,
	CHAPTER6_I_TM2 = 3653,
	CHAPTER7_TM2 = 3654,
	CHAPTER7_F_TM2 = 3655,
	CHAPTER7_G_TM2 = 3656,
	CHAPTER7_S_TM2 = 3657,
	CHAPTER7_I_TM2 = 3658,
	CHAPTER8_TM2 = 3659,
	CHAPTER8_F_TM2 = 3660,
	CHAPTER8_G_TM2 = 3661,
	CHAPTER8_S_TM2 = 3662,
	CHAPTER8_I_TM2 = 3663,
	CHAPTER9_TM2 = 3664,
	CHAPTER9_F_TM2 = 3665,
	CHAPTER9_G_TM2 = 3666,
	CHAPTER9_S_TM2 = 3667,
	CHAPTER9_I_TM2 = 3668,
	CHAPTER10_TM2 = 3669,
	CHAPTER10_F_TM2 = 3670,
	CHAPTER10_G_TM2 = 3671,
	CHAPTER10_S_TM2 = 3672,
	CHAPTER10_I_TM2 = 3673,
	CHAPTER11_TM2 = 3674,
	CHAPTER11_F_TM2 = 3675,
	CHAPTER11_G_TM2 = 3676,
	CHAPTER11_S_TM2 = 3677,
	CHAPTER11_I_TM2 = 3678,
	ITEM_000_TM2 = 3679,
	ITEM_001_TM2 = 3680,
	ITEM_002_TM2 = 3681,
	ITEM_003_TM2 = 3682,
	ITEM_004_TM2 = 3683,
	ITEM_005_TM2 = 3684,
	ITEM_006_TM2 = 3685,
	ITEM_007_TM2 = 3686,
	ITEM_008_TM2 = 3687,
	ITEM_009_TM2 = 3688,
	ITEM_010_TM2 = 3689,
	ITEM_011_TM2 = 3690,
	ITEM_012_TM2 = 3691,
	ITEM_013_TM2 = 3692,
	ITEM_014_TM2 = 3693,
	ITEM_015_TM2 = 3694,
	ITEM_016_TM2 = 3695,
	ITEM_017_TM2 = 3696,
	ITEM_018_TM2 = 3697,
	ITEM_019_TM2 = 3698,
	ITEM_020_TM2 = 3699,
	ITEM_021_TM2 = 3700,
	ITEM_022_TM2 = 3701,
	ITEM_023_TM2 = 3702,
	ITEM_024_TM2 = 3703,
	ITEM_025_TM2 = 3704,
	ITEM_026_TM2 = 3705,
	ITEM_027_TM2 = 3706,
	ITEM_028_TM2 = 3707,
	ITEM_029_TM2 = 3708,
	ITEM_030_TM2 = 3709,
	ITEM_031_TM2 = 3710,
	ITEM_032_TM2 = 3711,
	ITEM_033_TM2 = 3712,
	ITEM_034_TM2 = 3713,
	ITEM_035_TM2 = 3714,
	ITEM_036_TM2 = 3715,
	ITEM_037_TM2 = 3716,
	ITEM_038_TM2 = 3717,
	ITEM_039_TM2 = 3718,
	ITEM_040_TM2 = 3719,
	ITEM_041_TM2 = 3720,
	ITEM_042_TM2 = 3721,
	ITEM_043_TM2 = 3722,
	ITEM_044_TM2 = 3723,
	ITEM_045_TM2 = 3724,
	ITEM_046_TM2 = 3725,
	ITEM_047_TM2 = 3726,
	ITEM_048_TM2 = 3727,
	ITEM_049_TM2 = 3728,
	ITEM_050_TM2 = 3729,
	ITEM_051_TM2 = 3730,
	ITEM_052_TM2 = 3731,
	ITEM_053_TM2 = 3732,
	ITEM_054_TM2 = 3733,
	ITEM_055_TM2 = 3734,
	ITEM_056_TM2 = 3735,
	ITEM_057_TM2 = 3736,
	ITEM_058_TM2 = 3737,
	ITEM_059_TM2 = 3738,
	ITEM_060_TM2 = 3739,
	ITEM_061_TM2 = 3740,
	ITEM_062_TM2 = 3741,
	ITEM_063_TM2 = 3742,
	ITEM_064_TM2 = 3743,
	ITEM_065_TM2 = 3744,
	ITEM_066_TM2 = 3745,
	ITEM_067_TM2 = 3746,
	ITEM_068_TM2 = 3747,
	ITEM_069_TM2 = 3748,
	DOC_POCKETBOOK_000_TM2 = 3749,
	DOC_POCKETBOOK_001_TM2 = 3750,
	DOC_POCKETBOOK_002_TM2 = 3751,
	DOC_POCKETBOOK_003_TM2 = 3752,
	DOC_POCKETBOOK_004_TM2 = 3753,
	DOC_POCKETBOOK_005_TM2 = 3754,
	DOC_POCKETBOOK_006_TM2 = 3755,
	DOC_POCKETBOOK_007_TM2 = 3756,
	DOC_POCKETBOOK_008_TM2 = 3757,
	DOC_POCKETBOOK_009_TM2 = 3758,
	DOC_POCKETBOOK_010_TM2 = 3759,
	DOC_POCKETBOOK_011_TM2 = 3760,
	DOC_POCKETBOOK_012_TM2 = 3761,
	DOC_POCKETBOOK_013_TM2 = 3762,
	DOC_POCKETBOOK_014_TM2 = 3763,
	DOC_POCKETBOOK_015_TM2 = 3764,
	DOC_POCKETBOOK_016_TM2 = 3765,
	DOC_POCKETBOOK_017_TM2 = 3766,
	DOC_POCKETBOOK_018_TM2 = 3767,
	DOC_POCKETBOOK_019_TM2 = 3768,
	DOC_POCKETBOOK_020_TM2 = 3769,
	DOC_POCKETBOOK_021_TM2 = 3770,
	DOC_POCKETBOOK_022_TM2 = 3771,
	DOC_POCKETBOOK_023_TM2 = 3772,
	DOC_POCKETBOOK_024_TM2 = 3773,
	DOC_POCKETBOOK_025_TM2 = 3774,
	DOC_POCKETBOOK_026_TM2 = 3775,
	DOC_POCKETBOOK_027_TM2 = 3776,
	DOC_POCKETBOOK_028_TM2 = 3777,
	DOC_POCKETBOOK_029_TM2 = 3778,
	DOC_POCKETBOOK_MASUMI04_BROKEN_TM2 = 3779,
	DOC_POCKETBOOK_MASUMI04_TM2 = 3780,
	DOC_POCKETBOOK_030_TM2 = 3781,
	DOC_POCKETBOOK_031_TM2 = 3782,
	DOC_POCKETBOOK_032_TM2 = 3783,
	DOC_POCKETBOOK_033_TM2 = 3784,
	DOC_POCKETBOOK_034_TM2 = 3785,
	DOC_POCKETBOOK_035_TM2 = 3786,
	DOC_POCKETBOOK_036_TM2 = 3787,
	DOC_POCKETBOOK_037_TM2 = 3788,
	DOC_POCKETBOOK_038_TM2 = 3789,
	DOC_POCKETBOOK_039_TM2 = 3790,
	DOC_SCRAP_000_TM2 = 3791,
	DOC_SCRAP_001_TM2 = 3792,
	DOC_SCRAP_002_TM2 = 3793,
	DOC_SCRAP_003_TM2 = 3794,
	DOC_SCRAP_004_TM2 = 3795,
	DOC_SCRAP_005_TM2 = 3796,
	DOC_SCRAP_006_TM2 = 3797,
	DOC_SCRAP_007_TM2 = 3798,
	DOC_SCRAP_008_TM2 = 3799,
	DOC_SCRAP_009_TM2 = 3800,
	DOC_SCRAP_010_TM2 = 3801,
	DOC_SCRAP_011_TM2 = 3802,
	DOC_SCRAP_012_TM2 = 3803,
	DOC_SCRAP_013_TM2 = 3804,
	DOC_SCRAP_014_TM2 = 3805,
	DOC_SCRAP_015_TM2 = 3806,
	DOC_SCRAP_016_TM2 = 3807,
	DOC_SCRAP_017_TM2 = 3808,
	DOC_SCRAP_018_TM2 = 3809,
	DOC_SCRAP_019_TM2 = 3810,
	DOC_SCRAP_020_TM2 = 3811,
	DOC_SCRAP_021_TM2 = 3812,
	DOC_SCRAP_022_TM2 = 3813,
	DOC_SCRAP_023_TM2 = 3814,
	DOC_SCRAP_024_TM2 = 3815,
	DOC_SCRAP_025_TM2 = 3816,
	DOC_SCRAP_026_TM2 = 3817,
	DOC_SCRAP_027_TM2 = 3818,
	DOC_SCRAP_028_TM2 = 3819,
	DOC_SCRAP_029_TM2 = 3820,
	DOC_SCRAP_030_TM2 = 3821,
	DOC_SCRAP_031_TM2 = 3822,
	DOC_SCRAP_032_TM2 = 3823,
	DOC_SCRAP_033_TM2 = 3824,
	DOC_SCRAP_034_TM2 = 3825,
	DOC_SCRAP_035_TM2 = 3826,
	DOC_SCRAP_036_TM2 = 3827,
	DOC_SCRAP_037_TM2 = 3828,
	DOC_SCRAP_038_TM2 = 3829,
	DOC_SCRAP_039_TM2 = 3830,
	DOC_SCRAP_040_TM2 = 3831,
	DOC_SCRAP_041_TM2 = 3832,
	DOC_OLDBOOK_000_TM2 = 3833,
	DOC_OLDBOOK_001_TM2 = 3834,
	DOC_OLDBOOK_002_TM2 = 3835,
	DOC_OLDBOOK_003_TM2 = 3836,
	DOC_OLDBOOK_004_TM2 = 3837,
	DOC_OLDBOOK_005_TM2 = 3838,
	DOC_OLDBOOK_006_TM2 = 3839,
	DOC_OLDBOOK_007_TM2 = 3840,
	DOC_OLDBOOK_008_TM2 = 3841,
	DOC_OLDBOOK_009_TM2 = 3842,
	DOC_OLDBOOK_010_TM2 = 3843,
	DOC_OLDBOOK_011_TM2 = 3844,
	DOC_OLDBOOK_012_TM2 = 3845,
	DOC_OLDBOOK_013_TM2 = 3846,
	DOC_OLDBOOK_014_TM2 = 3847,
	DOC_OLDBOOK_015_TM2 = 3848,
	DOC_OLDBOOK_016_TM2 = 3849,
	DOC_OLDBOOK_017_TM2 = 3850,
	DOC_OLDBOOK_018_TM2 = 3851,
	DOC_OLDBOOK_019_TM2 = 3852,
	DOC_OLDBOOK_020_TM2 = 3853,
	DOC_OLDBOOK_021_TM2 = 3854,
	DOC_OLDBOOK_022_TM2 = 3855,
	DOC_OLDBOOK_023_TM2 = 3856,
	DOC_OLDBOOK_024_TM2 = 3857,
	DOC_OLDBOOK_025_TM2 = 3858,
	DOC_OLDBOOK_026_TM2 = 3859,
	DOC_OLDBOOK_027_TM2 = 3860,
	DOC_OLDBOOK_028_TM2 = 3861,
	DOC_OLDBOOK_029_TM2 = 3862,
	DOC_OLDBOOK_030_TM2 = 3863,
	DOC_OLDBOOK_031_TM2 = 3864,
	DOC_OLDBOOK_032_TM2 = 3865,
	DOC_OLDBOOK_033_TM2 = 3866,
	DOC_OLDBOOK_034_TM2 = 3867,
	DOC_OLDBOOK_035_TM2 = 3868,
	DOC_OLDBOOK_036_TM2 = 3869,
	DOC_OLDBOOK_037_TM2 = 3870,
	DOC_OLDBOOK_038_TM2 = 3871,
	DOC_OLDBOOK_039_TM2 = 3872,
	PHT_DTS_PK2 = 3873,
	PHT_TOP_000_TM2 = 3874,
	PHT_TOP_001_TM2 = 3875,
	PHT_TOP_002_TM2 = 3876,
	PHT_TOP_003_TM2 = 3877,
	PHT_TOP_004_TM2 = 3878,
	PHT_TOP_005_TM2 = 3879,
	PHT_TOP_006_TM2 = 3880,
	PHT_TOP_007_TM2 = 3881,
	PHT_TOP_008_TM2 = 3882,
	PHT_TOP_009_TM2 = 3883,
	PHT_TOP_010_TM2 = 3884,
	PHT_TOP_011_TM2 = 3885,
	PHT_TOP_012_TM2 = 3886,
	PHT_TOP_013_TM2 = 3887,
	PHT_TOP_014_TM2 = 3888,
	PHT_TOP_015_TM2 = 3889,
	PHT_TOP_016_TM2 = 3890,
	PHT_TOP_017_TM2 = 3891,
	PHT_TOP_018_TM2 = 3892,
	PHT_TOP_019_TM2 = 3893,
	PHT_TOP_020_TM2 = 3894,
	PHT_TOP_021_TM2 = 3895,
	PHT_TOP_022_TM2 = 3896,
	PHT_TOP_023_TM2 = 3897,
	PHT_TOP_024_TM2 = 3898,
	PHT_TOP_025_TM2 = 3899,
	PHT_GET_000_PK2 = 3900,
	PHT_GET_001_PK2 = 3901,
	PHT_GET_002_PK2 = 3902,
	PHT_GET_003_PK2 = 3903,
	PHT_GET_004_PK2 = 3904,
	PHT_GET_005_PK2 = 3905,
	PHT_GET_006_PK2 = 3906,
	PHT_GET_007_PK2 = 3907,
	PHT_GET_008_PK2 = 3908,
	PHT_GET_009_PK2 = 3909,
	PHT_GET_010_PK2 = 3910,
	PHT_GET_011_PK2 = 3911,
	PHT_GET_012_PK2 = 3912,
	PHT_GET_013_PK2 = 3913,
	PHT_GET_014_PK2 = 3914,
	PHT_GET_015_PK2 = 3915,
	PHT_GET_016_PK2 = 3916,
	PHT_GET_017_PK2 = 3917,
	PHT_GET_018_PK2 = 3918,
	PHT_GET_019_PK2 = 3919,
	PHT_GET_020_PK2 = 3920,
	PHT_GET_021_PK2 = 3921,
	PHT_GET_022_PK2 = 3922,
	PHT_GET_023_PK2 = 3923,
	PHT_GET_024_PK2 = 3924,
	PHT_GET_025_PK2 = 3925,
	PHT_DTL_000_TM2 = 3926,
	PHT_DTL_001_TM2 = 3927,
	PHT_DTL_002_TM2 = 3928,
	PHT_DTL_003_TM2 = 3929,
	PHT_DTL_004_TM2 = 3930,
	PHT_DTL_005_TM2 = 3931,
	PHT_DTL_006_TM2 = 3932,
	PHT_DTL_007_TM2 = 3933,
	PHT_DTL_008_TM2 = 3934,
	PHT_DTL_009_TM2 = 3935,
	PHT_DTL_010_TM2 = 3936,
	PHT_DTL_011_TM2 = 3937,
	PHT_DTL_012_TM2 = 3938,
	PHT_DTL_013_TM2 = 3939,
	PHT_DTL_014_TM2 = 3940,
	PHT_DTL_015_TM2 = 3941,
	PHT_DTL_016_TM2 = 3942,
	PHT_DTL_017_TM2 = 3943,
	PHT_DTL_018_TM2 = 3944,
	PHT_DTL_019_TM2 = 3945,
	PHT_DTL_020_TM2 = 3946,
	PHT_DTL_021_TM2 = 3947,
	PHT_DTL_022_TM2 = 3948,
	PHT_DTL_023_TM2 = 3949,
	PHT_DTL_024_TM2 = 3950,
	PHT_DTL_025_TM2 = 3951,
	PIC_DTS_PK2 = 3952,
	PIC_GET_000_TM2 = 3953,
	PIC_GET_001_TM2 = 3954,
	PIC_GET_002_TM2 = 3955,
	PIC_GET_003_TM2 = 3956,
	PIC_GET_004_TM2 = 3957,
	PIC_GET_005_TM2 = 3958,
	PIC_GET_006_TM2 = 3959,
	PIC_GET_007_TM2 = 3960,
	PIC_GET_008_TM2 = 3961,
	PIC_GET_009_TM2 = 3962,
	PIC_DTL_000_TM2 = 3963,
	PIC_DTL_001_TM2 = 3964,
	PIC_DTL_002_TM2 = 3965,
	PIC_DTL_003_TM2 = 3966,
	PIC_DTL_004_TM2 = 3967,
	PIC_DTL_005_TM2 = 3968,
	PIC_DTL_006_TM2 = 3969,
	PIC_DTL_007_TM2 = 3970,
	PIC_DTL_008_TM2 = 3971,
	PIC_DTL_009_TM2 = 3972,
	RADIO_CRYSTAL_01_PK2 = 3973,
	RADIO_CRYSTAL_02_PK2 = 3974,
	RADIO_CRYSTAL_03_PK2 = 3975,
	RADIO_CRYSTAL_04_PK2 = 3976,
	RADIO_CRYSTAL_05_PK2 = 3977,
	RADIO_CRYSTAL_06_PK2 = 3978,
	RADIO_CRYSTAL_07_PK2 = 3979,
	RADIO_CRYSTAL_08_PK2 = 3980,
	RADIO_CRYSTAL_09_PK2 = 3981,
	RADIO_CRYSTAL_10_PK2 = 3982,
	RADIO_CRYSTAL_11_PK2 = 3983,
	RADIO_CRYSTAL_12_PK2 = 3984,
	RADIO_CRYSTAL_13_PK2 = 3985,
	RADIO_CRYSTAL_14_PK2 = 3986,
	RADIO_CRYSTAL_15_PK2 = 3987,
	RADIO_CRYSTAL_16_PK2 = 3988,
	RADIO_CRYSTAL_17_PK2 = 3989,
	RADIO_CRYSTAL_18_PK2 = 3990,
	RADIO_CRYSTAL_19_PK2 = 3991,
	RADIO_CRYSTAL_20_PK2 = 3992,
	RADIO_CRYSTAL_21_PK2 = 3993,
	RADIO_CRYSTAL_22_PK2 = 3994,
	RADIO_CRYSTAL_23_PK2 = 3995,
	RADIO_CRYSTAL_24_PK2 = 3996,
	RADIO_CRYSTAL_25_PK2 = 3997,
	RADIO_CRYSTAL_26_PK2 = 3998,
	RADIO_CRYSTAL_27_PK2 = 3999,
	RADIO_CRYSTAL_28_PK2 = 4000,
	RADIO_CRYSTAL_29_PK2 = 4001,
	RADIO_CRYSTAL_30_PK2 = 4002,
	RADIO_CRYSTAL_31_PK2 = 4003,
	RADIO_CRYSTAL_32_PK2 = 4004,
	RADIO_CRYSTAL_33_PK2 = 4005,
	RADIO_CRYSTAL_34_PK2 = 4006,
	RADIO_CRYSTAL_35_PK2 = 4007,
	RADIO_CRYSTAL_36_PK2 = 4008,
	RADIO_CRYSTAL_37_PK2 = 4009,
	RADIO_CRYSTAL_38_PK2 = 4010,
	RADIO_CRYSTAL_39_PK2 = 4011,
	RADIO_CRYSTAL_40_PK2 = 4012,
	CRY_001_TM2 = 4013,
	CRY_002_TM2 = 4014,
	CRY_003_TM2 = 4015,
	CRY_004_TM2 = 4016,
	CRY_005_TM2 = 4017,
	CRY_006_TM2 = 4018,
	CRY_007_TM2 = 4019,
	CRY_008_TM2 = 4020,
	CRY_009_TM2 = 4021,
	CRY_010_TM2 = 4022,
	CRY_011_TM2 = 4023,
	CRY_012_TM2 = 4024,
	CRY_013_TM2 = 4025,
	CRY_014_TM2 = 4026,
	CRY_015_TM2 = 4027,
	CRY_016_TM2 = 4028,
	CRY_017_TM2 = 4029,
	CRY_018_TM2 = 4030,
	CRY_019_TM2 = 4031,
	CRY_020_TM2 = 4032,
	CRY_021_TM2 = 4033,
	CRY_022_TM2 = 4034,
	CRY_023_TM2 = 4035,
	CRY_024_TM2 = 4036,
	CRY_025_TM2 = 4037,
	CRY_026_TM2 = 4038,
	CRY_027_TM2 = 4039,
	CRY_028_TM2 = 4040,
	CRY_029_TM2 = 4041,
	CRY_030_TM2 = 4042,
	CRY_031_TM2 = 4043,
	CRY_032_TM2 = 4044,
	CRY_033_TM2 = 4045,
	CRY_034_TM2 = 4046,
	CRY_035_TM2 = 4047,
	CRY_036_TM2 = 4048,
	CRY_037_TM2 = 4049,
	CRY_038_TM2 = 4050,
	CRY_039_TM2 = 4051,
	CRY_040_TM2 = 4052,
	REI_PHT_000_TM2 = 4053,
	REI_PHT_001_TM2 = 4054,
	REI_PHT_002_TM2 = 4055,
	REI_PHT_003_TM2 = 4056,
	REI_PHT_004_TM2 = 4057,
	REI_PHT_005_TM2 = 4058,
	REI_PHT_006_TM2 = 4059,
	REI_PHT_007_TM2 = 4060,
	REI_PHT_008_TM2 = 4061,
	REI_PHT_009_TM2 = 4062,
	REI_PHT_010_TM2 = 4063,
	REI_PHT_011_TM2 = 4064,
	REI_PHT_012_TM2 = 4065,
	REI_PHT_013_TM2 = 4066,
	REI_PHT_014_TM2 = 4067,
	REI_PHT_015_TM2 = 4068,
	REI_PHT_016_TM2 = 4069,
	REI_PHT_017_TM2 = 4070,
	REI_PHT_018_TM2 = 4071,
	REI_PHT_019_TM2 = 4072,
	REI_PHT_020_TM2 = 4073,
	REI_PHT_021_TM2 = 4074,
	REI_PHT_022_TM2 = 4075,
	REI_PHT_023_TM2 = 4076,
	REI_PHT_024_TM2 = 4077,
	REI_PHT_026_TM2 = 4078,
	REI_PHT_027_TM2 = 4079,
	REI_PHT_028_TM2 = 4080,
	REI_PHT_029_TM2 = 4081,
	REI_PHT_030_TM2 = 4082,
	REI_PHT_031_TM2 = 4083,
	REI_PHT_032_TM2 = 4084,
	REI_PHT_033_TM2 = 4085,
	REI_PHT_034_TM2 = 4086,
	REI_PHT_035_TM2 = 4087,
	REI_PHT_036_TM2 = 4088,
	REI_PHT_037_TM2 = 4089,
	REI_PHT_038_TM2 = 4090,
	REI_PHT_039_TM2 = 4091,
	REI_PHT_040_TM2 = 4092,
	REI_PHT_041_TM2 = 4093,
	REI_PHT_042_TM2 = 4094,
	REI_PHT_043_TM2 = 4095,
	REI_PHT_044_TM2 = 4096,
	REI_PHT_045_TM2 = 4097,
	REI_PHT_046_TM2 = 4098,
	REI_PHT_047_TM2 = 4099,
	REI_PHT_048_TM2 = 4100,
	REI_PHT_049_TM2 = 4101,
	REI_PHT_050_TM2 = 4102,
	REI_PHT_051_TM2 = 4103,
	REI_PHT_052_TM2 = 4104,
	REI_PHT_053_TM2 = 4105,
	REI_PHT_054_TM2 = 4106,
	REI_PHT_055_TM2 = 4107,
	REI_PHT_056_TM2 = 4108,
	REI_PHT_057_TM2 = 4109,
	REI_PHT_058_TM2 = 4110,
	REI_PHT_059_TM2 = 4111,
	REI_PHT_060_TM2 = 4112,
	REI_PHT_061_TM2 = 4113,
	REI_PHT_062_TM2 = 4114,
	REI_PHT_063_TM2 = 4115,
	REI_PHT_064_TM2 = 4116,
	REI_PHT_065_TM2 = 4117,
	REI_PHT_066_TM2 = 4118,
	REI_PHT_067_TM2 = 4119,
	REI_PHT_068_TM2 = 4120,
	REI_PHT_069_TM2 = 4121,
	REI_PHT_070_TM2 = 4122,
	REI_PHT_071_TM2 = 4123,
	REI_PHT_072_TM2 = 4124,
	REI_PHT_073_TM2 = 4125,
	REI_PHT_074_TM2 = 4126,
	REI_PHT_075_TM2 = 4127,
	REI_PHT_076_TM2 = 4128,
	REI_PHT_077_TM2 = 4129,
	REI_PHT_078_TM2 = 4130,
	REI_PHT_079_TM2 = 4131,
	REI_PHT_080_TM2 = 4132,
	REI_PHT_081_TM2 = 4133,
	REI_PHT_082_TM2 = 4134,
	REI_PHT_083_TM2 = 4135,
	REI_PHT_084_TM2 = 4136,
	REI_PHT_085_TM2 = 4137,
	REI_PHT_086_TM2 = 4138,
	REI_PHT_087_TM2 = 4139,
	REI_PHT_088_TM2 = 4140,
	REI_PHT_089_TM2 = 4141,
	REI_PHT_090_TM2 = 4142,
	REI_PHT_091_TM2 = 4143,
	REI_PHT_092_TM2 = 4144,
	REI_PHT_093_TM2 = 4145,
	REI_PHT_094_TM2 = 4146,
	REI_PHT_095_TM2 = 4147,
	REI_PHT_096_TM2 = 4148,
	REI_PHT_097_TM2 = 4149,
	REI_PHT_098_TM2 = 4150,
	REI_PHT_099_TM2 = 4151,
	REI_PHT_100_TM2 = 4152,
	REI_PHT_101_TM2 = 4153,
	REI_PHT_102_TM2 = 4154,
	REI_PHT_103_TM2 = 4155,
	REI_PHT_104_TM2 = 4156,
	REI_PHT_105_TM2 = 4157,
	REI_PHT_106_TM2 = 4158,
	REI_PHT_107_TM2 = 4159,
	REI_PHT_108_TM2 = 4160,
	REI_PHT_109_TM2 = 4161,
	REI_PHT_110_TM2 = 4162,
	REI_PHT_111_TM2 = 4163,
	REI_PHT_112_TM2 = 4164,
	REI_PHT_113_TM2 = 4165,
	REI_PHT_114_TM2 = 4166,
	REI_PHT_115_TM2 = 4167,
	REI_PHT_116_TM2 = 4168,
	REI_PHT_117_TM2 = 4169,
	REI_PHT_118_TM2 = 4170,
	REI_PHT_119_TM2 = 4171,
	REI_PHT_120_TM2 = 4172,
	REI_PHT_121_TM2 = 4173,
	REI_PHT_122_TM2 = 4174,
	REI_PHT_123_TM2 = 4175,
	REI_PHT_124_TM2 = 4176,
	REI_PHT_125_TM2 = 4177,
	REI_PHT_126_TM2 = 4178,
	REI_PHT_127_TM2 = 4179,
	REI_PHT_128_TM2 = 4180,
	REI_PHT_129_TM2 = 4181,
	REI_PHT_130_TM2 = 4182,
	REI_PHT_131_TM2 = 4183,
	REI_PHT_132_TM2 = 4184,
	REI_PHT_133_TM2 = 4185,
	REI_PHT_134_TM2 = 4186,
	REI_PHT_135_TM2 = 4187,
	REI_PHT_136_TM2 = 4188,
	REI_PHT_137_TM2 = 4189,
	REI_PHT_138_TM2 = 4190,
	REI_PHT_139_TM2 = 4191,
	REI_PHT_140_TM2 = 4192,
	REI_PHT_141_TM2 = 4193,
	REI_PHT_142_TM2 = 4194,
	REI_PHT_143_TM2 = 4195,
	REI_PHT_144_TM2 = 4196,
	REI_PHT_145_TM2 = 4197,
	REI_PHT_146_TM2 = 4198,
	REI_PHT_147_TM2 = 4199,
	REI_PHT_148_TM2 = 4200,
	REI_PHT_149_TM2 = 4201,
	REI_PHT_150_TM2 = 4202,
	REI_PHT_151_TM2 = 4203,
	REI_PHT_152_TM2 = 4204,
	REI_PHT_153_TM2 = 4205,
	REI_PHT_154_TM2 = 4206,
	REI_PHT_155_TM2 = 4207,
	REI_PHT_156_TM2 = 4208,
	REI_PHT_157_TM2 = 4209,
	REI_PHT_158_TM2 = 4210,
	REI_PHT_159_TM2 = 4211,
	REI_PHT_160_TM2 = 4212,
	REI_PHT_161_TM2 = 4213,
	REI_PHT_162_TM2 = 4214,
	REI_PHT_163_TM2 = 4215,
	REI_PHT_164_TM2 = 4216,
	REI_PHT_165_TM2 = 4217,
	REI_PHT_166_TM2 = 4218,
	REI_PHT_167_TM2 = 4219,
	REI_PHT_168_TM2 = 4220,
	REI_PHT_169_TM2 = 4221,
	REI_PHT_170_TM2 = 4222,
	REI_PHT_171_TM2 = 4223,
	REI_PHT_172_TM2 = 4224,
	REI_PHT_173_TM2 = 4225,
	REI_PHT_174_TM2 = 4226,
	REI_PHT_175_TM2 = 4227,
	REI_PHT_176_TM2 = 4228,
	REI_PHT_177_TM2 = 4229,
	REI_GET_000_PK2 = 4230,
	REI_GET_001_PK2 = 4231,
	REI_GET_002_PK2 = 4232,
	REI_GET_003_PK2 = 4233,
	REI_GET_004_PK2 = 4234,
	REI_GET_005_PK2 = 4235,
	REI_GET_006_PK2 = 4236,
	REI_GET_007_PK2 = 4237,
	REI_GET_008_PK2 = 4238,
	REI_GET_009_PK2 = 4239,
	REI_GET_010_PK2 = 4240,
	REI_GET_011_PK2 = 4241,
	REI_GET_012_PK2 = 4242,
	REI_GET_013_PK2 = 4243,
	REI_GET_014_PK2 = 4244,
	REI_GET_015_PK2 = 4245,
	REI_GET_016_PK2 = 4246,
	REI_GET_017_PK2 = 4247,
	REI_GET_018_PK2 = 4248,
	REI_GET_019_PK2 = 4249,
	REI_GET_020_PK2 = 4250,
	REI_GET_021_PK2 = 4251,
	REI_GET_022_PK2 = 4252,
	REI_GET_023_PK2 = 4253,
	REI_GET_024_PK2 = 4254,
	REI_GET_025_PK2 = 4255,
	REI_GET_026_PK2 = 4256,
	REI_GET_027_PK2 = 4257,
	REI_GET_028_PK2 = 4258,
	REI_GET_029_PK2 = 4259,
	REI_GET_030_PK2 = 4260,
	REI_GET_031_PK2 = 4261,
	REI_GET_032_PK2 = 4262,
	REI_GET_033_PK2 = 4263,
	REI_GET_034_PK2 = 4264,
	REI_GET_035_PK2 = 4265,
	KAGIANA_TM2 = 4266,
	GAME_000_TM2 = 4267,
	GAME_001_TM2 = 4268,
	GAME_002_TM2 = 4269,
	GAME_003_TM2 = 4270,
	GAME_004_TM2 = 4271,
	GAME_005_TM2 = 4272,
	GAME_006_TM2 = 4273,
	GAME_007_TM2 = 4274,
	GAME_008_TM2 = 4275,
	GAME_009_TM2 = 4276,
	GAME_010_TM2 = 4277,
	GAME_011_TM2 = 4278,
	GAME_012_TM2 = 4279,
	GAME_013_TM2 = 4280,
	GAME_014_TM2 = 4281,
	GAME_015_TM2 = 4282,
	GAME_016_TM2 = 4283,
	GAME_017_TM2 = 4284,
	GAME_018_TM2 = 4285,
	GAME_019_TM2 = 4286,
	GAME_020_TM2 = 4287,
	GAME_021_TM2 = 4288,
	GAME_022_TM2 = 4289,
	GAME_023_TM2 = 4290,
	GAME_024_TM2 = 4291,
	PUZZLE_HINA_PK2 = 4292,
	PUZZLE_HINA_F_PK2 = 4293,
	PUZZLE_HINA_G_PK2 = 4294,
	PUZZLE_HINA_S_PK2 = 4295,
	PUZZLE_HINA_I_PK2 = 4296,
	PUZZLE_ROKU_PK2 = 4297,
	PUZZLE_ROKU_F_PK2 = 4298,
	PUZZLE_ROKU_G_PK2 = 4299,
	PUZZLE_ROKU_S_PK2 = 4300,
	PUZZLE_ROKU_I_PK2 = 4301,
	PUZZLE_KAZA_PK2 = 4302,
	PUZZLE_KAZA_F_PK2 = 4303,
	PUZZLE_KAZA_G_PK2 = 4304,
	PUZZLE_KAZA_S_PK2 = 4305,
	PUZZLE_KAZA_I_PK2 = 4306,
	PUZZLE_KAZA_2_PK2 = 4307,
	PUZZLE_KAZA_2_F_PK2 = 4308,
	PUZZLE_KAZA_2_G_PK2 = 4309,
	PUZZLE_KAZA_2_S_PK2 = 4310,
	PUZZLE_KAZA_2_I_PK2 = 4311,
	ALBM_CMN_PK2 = 4312,
	ALBM_CMN_F_PK2 = 4313,
	ALBM_CMN_G_PK2 = 4314,
	ALBM_CMN_S_PK2 = 4315,
	ALBM_CMN_I_PK2 = 4316,
	ALBM_HENSYU_PK2 = 4317,
	ALBM_HENSYU_F_PK2 = 4318,
	ALBM_HENSYU_G_PK2 = 4319,
	ALBM_HENSYU_S_PK2 = 4320,
	ALBM_HENSYU_I_PK2 = 4321,
	ALBM_KKD_PAT0_PK2 = 4322,
	ALBM_KKD_PAT0_F_PK2 = 4323,
	ALBM_KKD_PAT0_G_PK2 = 4324,
	ALBM_KKD_PAT0_S_PK2 = 4325,
	ALBM_KKD_PAT0_I_PK2 = 4326,
	ALBM_KKD_PAT1_PK2 = 4327,
	ALBM_KKD_PAT1_F_PK2 = 4328,
	ALBM_KKD_PAT1_G_PK2 = 4329,
	ALBM_KKD_PAT1_S_PK2 = 4330,
	ALBM_KKD_PAT1_I_PK2 = 4331,
	ALBM_KKD_PAT2_PK2 = 4332,
	ALBM_KKD_PAT2_F_PK2 = 4333,
	ALBM_KKD_PAT2_G_PK2 = 4334,
	ALBM_KKD_PAT2_S_PK2 = 4335,
	ALBM_KKD_PAT2_I_PK2 = 4336,
	ALBM_KKD_PAT3_PK2 = 4337,
	ALBM_KKD_PAT3_F_PK2 = 4338,
	ALBM_KKD_PAT3_G_PK2 = 4339,
	ALBM_KKD_PAT3_S_PK2 = 4340,
	ALBM_KKD_PAT3_I_PK2 = 4341,
	ALBM_KKD_PAT4_PK2 = 4342,
	ALBM_KKD_PAT4_F_PK2 = 4343,
	ALBM_KKD_PAT4_G_PK2 = 4344,
	ALBM_KKD_PAT4_S_PK2 = 4345,
	ALBM_KKD_PAT4_I_PK2 = 4346,
	ALBM_KKD_PAT5_PK2 = 4347,
	ALBM_KKD_PAT5_F_PK2 = 4348,
	ALBM_KKD_PAT5_G_PK2 = 4349,
	ALBM_KKD_PAT5_S_PK2 = 4350,
	ALBM_KKD_PAT5_I_PK2 = 4351,
	ALBM_SL_PK2 = 4352,
	ALBM_SLOT_SL_PK2 = 4353,
	ALBM_SLOT_SL_F_PK2 = 4354,
	ALBM_SLOT_SL_G_PK2 = 4355,
	ALBM_SLOT_SL_S_PK2 = 4356,
	ALBM_SLOT_SL_I_PK2 = 4357,
	SETUP_BG_PK2 = 4358,
	SETUP_BG_F_PK2 = 4359,
	SETUP_BG_G_PK2 = 4360,
	SETUP_BG_S_PK2 = 4361,
	SETUP_BG_I_PK2 = 4362,
	SETUP_FONT_PK2 = 4363,
	SETUP_FONT_F_PK2 = 4364,
	SETUP_FONT_G_PK2 = 4365,
	SETUP_FONT_S_PK2 = 4366,
	SETUP_FONT_I_PK2 = 4367,
	OPTION_TOP_PK2 = 4368,
	OPTION_TOP_F_PK2 = 4369,
	OPTION_TOP_G_PK2 = 4370,
	OPTION_TOP_S_PK2 = 4371,
	OPTION_TOP_I_PK2 = 4372,
	OPTION_MEIDO_PK2 = 4373,
	OPTION_KEY_PK2 = 4374,
	OPTION_KEY_F_PK2 = 4375,
	OPTION_KEY_G_PK2 = 4376,
	OPTION_KEY_S_PK2 = 4377,
	OPTION_KEY_I_PK2 = 4378,
	MSN_SL_PK2 = 4379,
	MSN_SL_F_PK2 = 4380,
	MSN_SL_G_PK2 = 4381,
	MSN_SL_S_PK2 = 4382,
	MSN_SL_I_PK2 = 4383,
	MSN_START_PK2 = 4384,
	MSN_START_F_PK2 = 4385,
	MSN_START_G_PK2 = 4386,
	MSN_START_S_PK2 = 4387,
	MSN_START_I_PK2 = 4388,
	MSN_RESULT_PK2 = 4389,
	MSN_RESULT_F_PK2 = 4390,
	MSN_RESULT_G_PK2 = 4391,
	MSN_RESULT_S_PK2 = 4392,
	MSN_RESULT_I_PK2 = 4393,
	GALLERY_CMN_PK2 = 4394,
	GALLERY_CMN_F_PK2 = 4395,
	GALLERY_CMN_G_PK2 = 4396,
	GALLERY_CMN_S_PK2 = 4397,
	GALLERY_CMN_I_PK2 = 4398,
	GALLERY_TOP_PK2 = 4399,
	GALLERY_TOP_F_PK2 = 4400,
	GALLERY_TOP_G_PK2 = 4401,
	GALLERY_TOP_S_PK2 = 4402,
	GALLERY_TOP_I_PK2 = 4403,
	GALLERY_VIEW_PK2 = 4404,
	GALLERY_SETTEI_00_PK2 = 4405,
	GALLERY_SETTEI_01_PK2 = 4406,
	GALLERY_SETTEI_02_PK2 = 4407,
	GALLERY_SETTEI_03_PK2 = 4408,
	GALLERY_SETTEI_04_PK2 = 4409,
	GALLERY_SETTEI_05_PK2 = 4410,
	GALLERY_SETTEI_06_PK2 = 4411,
	GALLERY_SETTEI_07_PK2 = 4412,
	GALLERY_SETTEI_08_PK2 = 4413,
	GALLERY_SETTEI_09_PK2 = 4414,
	GALLERY_SETTEI_10_PK2 = 4415,
	GALLERY_SETTEI_11_PK2 = 4416,
	GALLERY_SETTEI_12_PK2 = 4417,
	GALLERY_SETTEI_13_PK2 = 4418,
	GALLERY_SETTEI_14_PK2 = 4419,
	GALLERY_SETTEI_15_PK2 = 4420,
	GALLERY_SETTEI_16_PK2 = 4421,
	GALLERY_SETTEI_17_PK2 = 4422,
	GALLERY_SETTEI_18_PK2 = 4423,
	GALLERY_SETTEI_19_PK2 = 4424,
	GALLERY_IMAGE_00_PK2 = 4425,
	GALLERY_IMAGE_01_PK2 = 4426,
	GALLERY_IMAGE_02_PK2 = 4427,
	GALLERY_IMAGE_03_PK2 = 4428,
	GALLERY_IMAGE_04_PK2 = 4429,
	GALLERY_IMAGE_05_PK2 = 4430,
	GALLERY_IMAGE_06_PK2 = 4431,
	GALLERY_IMAGE_07_PK2 = 4432,
	GALLERY_IMAGE_08_PK2 = 4433,
	GALLERY_IMAGE_09_PK2 = 4434,
	GALLERY_PROMO_00_PK2 = 4435,
	GALLERY_PROMO_01_PK2 = 4436,
	GALLERY_PROMO_02_PK2 = 4437,
	GAMECLEAR_BG_A_PK2 = 4438,
	GAMECLEAR_BG_B_PK2 = 4439,
	GAMECLEAR_CHARA_PK2 = 4440,
	GAMECLEAR_CHARA_F_PK2 = 4441,
	GAMECLEAR_CHARA_G_PK2 = 4442,
	GAMECLEAR_CHARA_S_PK2 = 4443,
	GAMECLEAR_CHARA_I_PK2 = 4444,
	CLEAR_MENU_PK2 = 4445,
	CLEAR_MENU_F_PK2 = 4446,
	CLEAR_MENU_G_PK2 = 4447,
	CLEAR_MENU_S_PK2 = 4448,
	CLEAR_MENU_I_PK2 = 4449,
	LANG_SL_PK2 = 4450,
	LANG_SL_F_PK2 = 4451,
	LANG_SL_G_PK2 = 4452,
	LANG_SL_S_PK2 = 4453,
	LANG_SL_I_PK2 = 4454,
	LOADING_PK2 = 4455,
	LOADING_F_PK2 = 4456,
	LOADING_G_PK2 = 4457,
	LOADING_S_PK2 = 4458,
	LOADING_I_PK2 = 4459,
	EF_KUSABI_PHT1_PK2 = 4460,
	EF_KUSABI_PHT2_PK2 = 4461,
	EF_KUSABI_PHT3_PK2 = 4462,
	EF_KUSABI_PHT4_PK2 = 4463,
	EF_KUSABI_PHT5_PK2 = 4464,
	SAVEPOINT_BG_PK2 = 4465,
	SAVEPOINT_MOJI_PK2 = 4466,
	SAVEPOINT_MOJI_F_PK2 = 4467,
	SAVEPOINT_MOJI_G_PK2 = 4468,
	SAVEPOINT_MOJI_S_PK2 = 4469,
	SAVEPOINT_MOJI_I_PK2 = 4470,
	SAVE_LOAD_PK2 = 4471,
	SAVE_LOAD_F_PK2 = 4472,
	SAVE_LOAD_G_PK2 = 4473,
	SAVE_LOAD_S_PK2 = 4474,
	SAVE_LOAD_I_PK2 = 4475,
	SNP_CLEAR_DATA_PK2 = 4476,
	ZERO2GAME_ICO = 4477,
	ZERO2ALBUM0_ICO = 4478,
	ZERO2ALBUM1_ICO = 4479,
	ZERO2ALBUM2_ICO = 4480,
	ZERO2ALBUM3_ICO = 4481,
	ZERO2ALBUM4_ICO = 4482,
	CANDLEPOS_PK2 = 4483,
	SUBTITLE_OBJ = 4484,
	SITAJI_PK2 = 4485,
	GRD_PK2 = 4486,
	MOYOU_PK2 = 4487,
	OVERLAY_PK2 = 4488,
	TEST_BG_PK2 = 4489,
	BRIGHTNESS_PK2 = 4490
} CD_FILE_DAT;

typedef struct { 
 u_char y[256];
 u_char cb[64];
 u_char cr[64];
} sceIpuRAW8;

typedef struct { 
 short int y[256];
 short int cb[64];
 short int cr[64];
} sceIpuRAW16;

typedef struct { 
 u_int pix[256];
} sceIpuRGB32;

typedef struct { 
 u_short pix[256];
} sceIpuRGB16;

typedef struct { 
 u_int pix[32];
} sceIpuINDX4;

typedef struct { 
 u_int d4madr;
 u_int d4tadr;
 u_int d4qwc;
 u_int d4chcr;
 u_int d3madr;
 u_int d3qwc;
 u_int d3chcr;
 u_int ipubp;
 u_int ipuctrl;
} sceIpuDmaEnv;

typedef enum {
	sceMpegStrM2V = 0,
	sceMpegStrIPU = 1,
	sceMpegStrPCM = 2,
	sceMpegStrADPCM = 3,
	sceMpegStrDATA = 4
} sceMpegStrType;

typedef enum {
	sceMpegCbError = 0,
	sceMpegCbNodata = 1,
	sceMpegCbStopDMA = 2,
	sceMpegCbRestartDMA = 3,
	sceMpegCbBackground = 4,
	sceMpegCbTimeStamp = 5,
	sceMpegCbStr = 6
} sceMpegCbType;

typedef struct { 
 sceMpegCbType type;
 char *errMessage;
} sceMpegCbDataError;

typedef struct { 
 sceMpegCbType type;
 long int pts;
 long int dts;
} sceMpegCbDataTimeStamp;

typedef struct { 
 sceMpegCbType type;
 u_char *header;
 u_char *data;
 u_int len;
 long int pts;
 long int dts;
} sceMpegCbDataStr;

typedef union { 
 sceMpegCbType type;
 sceMpegCbDataError error;
 sceMpegCbDataTimeStamp ts;
 sceMpegCbDataStr str;
} sceMpegCbData;

typedef struct { 
 int width;
 int height;
 int frameCount;
 long int pts;
 long int dts;
 u_long flags;
 long int pts2nd;
 long int dts2nd;
 u_long flags2nd;
 void *sys;
} sceMpeg;

typedef int (*sceMpegCallback)(/* parameters unknown */);

typedef struct { 
 u_char *mpegBuff;
 int mpegBuffSize;
 sceIpuRGB32 *rgb32;
 u_int *path3tag;
 void *demuxBuff;
 int demuxBuffSize;
 u_char *audioBuff;
 int audioBuffSize;
 int iopBuff;
 int iopBuffSize;
 u_char *zeroBuff;
 int iopZeroBuff;
 char *read_buf;
 int audio_vol_percent;
 int auto_dma_core;
} playPssRsrcs;

struct _PLAY_PSS_MPEG_INFO { 
 int width;
 int height;
};

typedef _PLAY_PSS_MPEG_INFO PLAY_PSS_MPEG_INFO;

struct CMovieRoom { 
 unsigned int mActFlg : 1;
 unsigned int mPreloadFlg : 1;
 int mSndId;
 int mBankNo;
 playPssRsrcs ing_rsrcs;
 float *mpaVec[4];
};

struct INGAME_WRK { 
 u_char clear_save_flg;
 int mMenuLockCnt;
 int mPauseLockCnt;
	
};

typedef struct { 
 int put_id;
 void *hdl;
 ENE_WRK *ene;
} CHR_SORT_WORK;

typedef struct { 
 int put_id;
 void *hdl;
 FLY_WRK *fly;
} CHR_SORT_FLY_WORK;


struct sce_stat { 
 unsigned int st_mode;
 unsigned int st_attr;
 unsigned int st_size;
 unsigned char st_ctime[8];
 unsigned char st_atime[8];
 unsigned char st_mtime[8];
 unsigned int st_hisize;
 unsigned int st_private[6];
};


sce_stat sce_stat;


struct sce_dirent { 
 sce_stat d_stat;
 char d_name[256];
 void *d_private;
};


struct sce_dirent { 
 sce_stat d_stat;
 char d_name[256];
 void *d_private;
};

typedef struct { 
 unsigned int epc;
 unsigned int gp;
 unsigned int sp;
 unsigned int dummy;
} sceExecData;


typedef void (*sceSifRebootNotifyHandler)(/* parameters unknown */);

typedef void (*sceSifRebootNotifyHandler)(/* parameters unknown */);


typedef struct { 
 sceSifRebootNotifyHandler func;
 void *data;
 void *gp;
 void *reserve;
} sceSifRebootNotifyData;


typedef struct { 
 sceSifRebootNotifyHandler func;
 void *data;
 void *gp;
 void *reserve;
} sceSifRebootNotifyData;

typedef struct _sif_serve_data;

struct _sif_rpc_data { 
 void *paddr;
 unsigned int pid;
 int tid;
 unsigned int mode;
};

typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data { 
 _sif_rpc_data rpcd;
 unsigned int command;
 void *buff;
 void *gp;
 sceSifEndFunc func;
 void *para;
 _sif_serve_data *serve;
};

struct _sif_receive_data { 
 _sif_rpc_data rpcd;
 void *src;
 void *dest;
 int size;
};

typedef _sif_receive_data sceSifReceiveData;

typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

typedef struct _sif_queue_data;
typedef struct _sif_serve_data;

struct _sif_serve_data { 
 unsigned int command;
 sceSifRpcFunc func;
 void *buff;
 int size;
 sceSifRpcFunc cfunc;
 void *cbuff;
 int csize;
 _sif_client_data *client;
 void *paddr;
 unsigned int fno;
 void *receive;
 int rsize;
 int rmode;
 unsigned int rid;
 _sif_serve_data *link;
 _sif_serve_data *next;
 _sif_queue_data *base;
};

struct _sif_queue_data { 
 int key;
 int active;
 _sif_serve_data *link;
 _sif_serve_data *start;
 _sif_serve_data *end;
 _sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

typedef struct _sceDmaTag;

struct _sceDmaTag { 
 u_short qwc;
 u_char mark;
 u_char id;
 _sceDmaTag *next;
 u_int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct { 
 u_char sts;
 u_char std;
 u_char mfd;
 u_char rcycle;
 u_short express;
 u_short notify;
 u_short sqwc;
 u_short tqwc;
 void *rbadr;
 u_int rbmsk;
} sceDmaEnv;

typedef struct { 
 tD_CHCR chcr;
 u_int p0[3];
 void *madr;
 u_int p1[3];
 u_int qwc;
 u_int p2[3];
 sceDmaTag *tadr;
 u_int p3[3];
 void *as0;
 u_int p4[3];
 void *as1;
 u_int p5[3];
 u_int p6[4];
 u_int p7[4];
 void *sadr;
 u_int p8[3];
} sceDmaChan;

typedef struct { 
 u_int *pCurrent;
 u_int *pBase;
 u_int *pDmaTag;
 u_int pad03;
} sceDmaPacket;

typedef struct { 
 u_int *pCurrent;
 u_int *pBase;
 u_int *pDmaTag;
 u_int *pVifCode;
 u_int numlen;
 u_int pad11;
 u_int pad12;
 u_int pad13;
} sceVif0Packet;

typedef struct { 
 u_int *pCurrent;
 u_int *pBase;
 u_int *pDmaTag;
 u_int *pVifCode;
 u_int numlen;
 u_long *pGifTag;
 u_int pad12;
 u_int pad13;
} sceVif1Packet;

typedef struct { 
 u_int *pCurrent;
 u_int *pBase;
 u_int *pDmaTag;
 u_long *pGifTag;
} sceGifPacket;

typedef struct { 
 u_int vf[32];
 u_int status;
 u_int mac;
 u_int clipping;
 u_int r;
 u_int i;
 u_int q;
 u_short vi[16];
} sceDevVu0Cnd;

typedef struct { 
 u_int vf[32];
 u_int status;
 u_int mac;
 u_int clipping;
 u_int r;
 u_int i;
 u_int q;
 u_int p;
 u_short vi[16];
} sceDevVu1Cnd;

typedef struct { 
 u_int tag;
 u_int stat;
 u_int count;
 u_int p3count;
 u_int p3tag;
 u_int pad;
} sceDevGifCnd;

typedef struct { 
 u_int row[4];
 u_int col[4];
 u_int mask;
 u_int code;
 u_int stat;
 u_short itop;
 u_short itops;
 u_short mark;
 u_short num;
 u_char error;
 u_char cl;
 u_char wl;
 u_char cmod;
 u_char pad;
} sceDevVif0Cnd;

typedef struct { 
 u_int row[4];
 u_int col[4];
 u_int mask;
 u_int code;
 u_int stat;
 u_short itop;
 u_short itops;
 u_short base;
 u_short offset;
 u_short top;
 u_short tops;
 u_short mark;
 u_short num;
 u_char error;
 u_char cl;
 u_char wl;
 u_char cmod;
 u_char pad;
} sceDevVif1Cnd;

struct _DRAW_ENV_5 { 
 long int alpha;
 long int tex1;
 long int clamp;
 long int test;
 long int zbuf;
};

typedef _DRAW_ENV_5 DRAW_ENV_5;

struct _DRAW_ENV_NOTEX { 
 long int alpha;
 long int test;
 long int zbuf;
};

typedef _DRAW_ENV_NOTEX DRAW_ENV_NOTEX;
typedef void (*LPFUNC_SETREGISTER_WITHCONTEXT)(/* parameters unknown */);
typedef void (*LPFUNC_SETREGISTER)(/* parameters unknown */);
typedef long int (*LPFUNC_GETREGISTER_WITHCONTEXT)(/* parameters unknown */);
typedef long int (*LPFUNC_GETREGISTER)(/* parameters unknown */);

typedef struct { 
 u_long tex1;
 u_long alpha;
 u_long zbuf;
 u_long test;
 u_long clamp;
 u_long prim;
} DRAW_ENV;

typedef struct { 
 u_char *str;
 int pos_x;
 int pos_y;
 int type;
 u_int r;
 u_int g;
 u_int b;
 int alpha;
 int pri;
 int x_wide;
 int y_wide;
 int brnch_num;
 int csr;
 int st;
} DISP_STR;

typedef struct { 
 u_char *str;
 int pos_x;
 int pos_y;
 int type;
 u_int r;
 u_int g;
 u_int b;
 int alpha;
 int pri;
} STR_DAT;

typedef struct { 
 u_int att;
 u_int u;
 u_int v;
 u_int w;
 u_int h;
 float crx;
 float cry;
 float csx;
 float csy;
 float x;
 float y;
 u_int z;
 float scw;
 float sch;
 float rot;
 u_long gftg;
 u_long tex0;
 u_long tex1;
 u_long texa;
 u_long alphar;
 u_long zbuf;
 u_long test;
 u_int pri;
 u_char r;
 u_char g;
 u_char b;
 u_char alpha;
 u_char col;
} DISP_SPRT;

typedef struct { 
 u_long tex0;
 u_short u;
 u_short v;
 u_short w;
 u_short h;
 int x;
 int y;
 int pri;
 u_char alpha;
 u_char flip;
 u_char bln;
} SPRT_DAT;

typedef struct { 
 u_int att;
 u_short u1;
 u_short v1;
 u_short u2;
 u_short v2;
 float w;
 float h;
 float crx;
 float cry;
 float csx;
 float csy;
 float x;
 float y;
 u_int z;
 float scw;
 float sch;
 float rot;
 u_long gftg;
 u_long tex0;
 u_long tex1;
 u_long texa;
 u_long alpreg;
 u_long zbuf;
 u_long test;
 u_long clmp;
 u_int pri;
 u_char r;
 u_char g;
 u_char b;
 u_char alp;
 u_char col;
} DISP_SPRT2;

typedef struct { 
 u_long tex0;
 float u1;
 float v1;
 float u2;
 float v2;
 float w;
 float h;
 float x;
 float y;
 int pri;
 u_char alpha;
} SPRT_DAT2;

typedef struct { 
 u_int att;
 float crx;
 float cry;
 float csx;
 float csy;
 int x[4];
 int y[4];
 u_int z;
 float scw;
 float sch;
 float rot;
 u_long texa;
 u_long alphar;
 u_long zbuf;
 u_long test;
 u_int pri;
 u_char r[4];
 u_char g[4];
 u_char b[4];
 u_char alpha;
} DISP_SQAR;

typedef struct { 
 u_int w;
 u_int h;
 int x;
 int y;
 u_int pri;
 u_char r;
 u_char g;
 u_char b;
 u_char alpha;
} SQAR_DAT;

typedef struct { 
 u_int w;
 u_int h;
 int x;
 int y;
 u_int pri;
 u_char r[4];
 u_char g[4];
 u_char b[4];
 u_char alpha;
} GSQR_DAT;

typedef struct { 
 int x[4];
 int y[4];
 u_int pri;
 u_char r;
 u_char g;
 u_char b;
 u_char alpha;
} SQR4_DAT;

typedef struct { 
 int x[4];
 int y[4];
 u_int pri;
 u_char r[4];
 u_char g[4];
 u_char b[4];
 u_char alpha;
} GSQ4_DAT;

typedef enum {
	TIM2_NONE = 0,
	TIM2_RGB16 = 1,
	TIM2_RGB24 = 2,
	TIM2_RGB32 = 3,
	TIM2_IDTEX4 = 4,
	TIM2_IDTEX8 = 5
} TIM2_gattr_type;

typedef struct { 
 u_char FileId[4];
 u_char FormatVersion;
 u_char FormatId;
 u_short Pictures;
 u_char pad[8];
} TIM2_FILEHEADER;

typedef struct { 
 u_int TotalSize;
 u_int ClutSize;
 u_int ImageSize;
 u_short HeaderSize;
 u_short ClutColors;
 u_char PictFormat;
 u_char MipMapTextures;
 u_char ClutType;
 u_char ImageType;
 u_short ImageWidth;
 u_short ImageHeight;
 u_long GsTex0;
 u_long GsTex1;
 u_int GsTexaFbaPabe;
 u_int GsTexClut;
} TIM2_PICTUREHEADER;

typedef struct { 
 u_long GsMiptbp1;
 u_long GsMiptbp2;
 u_int MMImageSize[1];
} TIM2_MIPMAPHEADER;

typedef struct { 
 u_char ExHeaderId[4];
 u_int UserSpaceSize;
 u_int UserDataSize;
 u_int Reserved;
} TIM2_EXHEADER;

typedef struct { 
 float x;
 float y;
 float w;
 float h;
} MSG_WIN_DAT;

typedef struct { 
 int x;
 int y;
} MSG_DEF_DATA;

typedef struct { 
 int msg_def_id;
 int msg_win_id;
} MSG_DISP_DATA;

struct GRA3DSCRATCHPADLAYOUT_MAPSHADOW { 
 qword qwVif1Code;
 GRA3DVU1MEMLAYOUT_MAPSHADOW Vu1Mem;
};

struct GRA3DSHADOWCREATIONDATA { 
 GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pSL;
};

struct GRA3DSHADOWDEBUG { 
 int bDrawShadowModelBB;
 int bDrawCastShadowOnBB;
 int bDrawLightDir;
 int bTextureMapEnable;
 int bFogEnable;
 int bDrawCharShadow;
 int bDrawObjectShadow;
};

typedef int (*LPFUNC_SETGSREGISTER)(/* parameters unknown */);
typedef int (*LPFUNC_SETGSREGISTERS)(/* parameters unknown */);
typedef long int& (*LPFUNC_GETGSREGISTERREF)(/* parameters unknown */);
typedef int (*LPFUNC_SETTRANSFORM)(/* parameters unknown */);
typedef float** (*LPFUNC_GETTRANSFORMREF)(/* parameters unknown */);

struct _LIGHTDATA { 
 G3DLIGHT L;
 int bEnable;
};

struct G3DGSREGISTERLAYOUT_DIRECT { 
 sceGsRgbaq gsRgbaq;
 sceGsSt gsSt;
 sceGsXyzf gsXyzf2;
 sceGsXyzf gsXyz2;
 sceGsClamp gsClamp_1;
 sceGsClamp gsClamp_2;
 sceGsFog gsFog;
 long int gsBlank0x0b;
 sceGsXyzf gsXyzf3;
 sceGsXyzf gsXyz3;
 long int gsBlank0x0e;
 long int gsBlank0x0f;
 long int gsBlank0x10;
 long int gsBlank0x11;
 long int gsBlank0x12;
 long int gsBlank0x13;
 sceGsTex1 gsTex1_1;
 sceGsTex1 gsTex1_2;
 sceGsTex2 gsTex2_1;
 sceGsTex2 gsTex2_2;
 sceGsXyoffset gsXyoffset_1;
 sceGsXyoffset gsXyoffset_2;
 long int gsBlank0x1d;
 long int gsBlank0x1e;
 long int gsBlank0x1f;
 long int gsBlank0x20;
 long int gsBlank0x21;
 long int gsBlank0x23;
 long int gsBlank0x24;
 long int gsBlank0x25;
 long int gsBlank0x26;
 long int gsBlank0x27;
 long int gsBlank0x28;
 long int gsBlank0x29;
 long int gsBlank0x2a;
 long int gsBlank0x2b;
 long int gsBlank0x2c;
 long int gsBlank0x2d;
 long int gsBlank0x2e;
 long int gsBlank0x2f;
 long int gsBlank0x30;
 long int gsBlank0x31;
 long int gsBlank0x32;
 long int gsBlank0x33;
 sceGsMiptbp1 gsMiptbp1_1;
 sceGsMiptbp1 gsMiptbp1_2;
 sceGsMiptbp2 gsMiptbp2_1;
 sceGsMiptbp2 gsMiptbp2_2;
 long int gsBlank0x38;
 long int gsBlank0x39;
 long int gsBlank0x3a;
 sceGsTexa gsTexa;
 long int gsBlank0x3c;
 sceGsFogcol gsFogcol;
 long int gsBlank0x3e;
 sceGsTexflush gsTexflush;
 sceGsScissor gsScissor_1;
 sceGsScissor gsScissor_2;
 sceGsAlpha gsAlpha_1;
 sceGsAlpha gsAlpha_2;
 sceGsFrame gsFrame_1;
 sceGsFrame gsFrame_2;
 sceGsZbuf gsZbuf_1;
 sceGsZbuf gsZbuf_2;
 sceGsBitbltbuf gsBitbltbuf;
 sceGsTrxpos gsTrxpos;
 sceGsTrxreg gsTrxreg;
 sceGsHwreg gsHwreg;
 long int gsBlank0x55;
 long int gsBlank0x56;
 long int gsBlank0x57;
 long int gsBlank0x58;
 long int gsBlank0x59;
 long int gsBlank0x5a;
 long int gsBlank0x5b;
 long int gsBlank0x5c;
 long int gsBlank0x5d;
 long int gsBlank0x5e;
 long int gsBlank0x5f;
 sceGsSignal gsSignal;
 sceGsFinish gsFinish;
 sceGsLabel gsLabel;
 long int gsBlank0x63;
 long int gsBlank0x64;
 long int gsBlank0x65;
 long int gsBlank0x66;
 long int gsBlank0x67;
 long int gsBlank0x68;
 long int gsBlank0x69;
 long int gsBlank0x6a;
 long int gsBlank0x6b;
 long int gsBlank0x6c;
 long int gsBlank0x6d;
 long int gsBlank0x6e;
 long int gsBlank0x6f;
 long int gsBlank0x70;
 long int gsBlank0x71;
 long int gsBlank0x72;
 long int gsBlank0x73;
 long int gsBlank0x74;
 long int gsBlank0x75;
 long int gsBlank0x76;
 long int gsBlank0x77;
 long int gsBlank0x78;
 long int gsBlank0x79;
 long int gsBlank0x7a;
 long int gsBlank0x7b;
 long int gsBlank0x7c;
 long int gsBlank0x7d;
 long int gsBlank0x7e;
 long int gsNop;
};

typedef long int G3DGSREGISTERLAYOUT_ARRAY[128];

typedef struct CTexture;

union G3DGSREGISTERLAYOUT { 
 G3DGSREGISTERLAYOUT_DIRECT Direct;
 G3DGSREGISTERLAYOUT_ARRAY Array;
};

struct G3DRESOURCE { 
 CTexture *apTexture[1];
};

struct G3DCOREOBJECT { 
 unsigned int auiRenderState[8];
 unsigned int auiGlobalState[2];
 _LIGHTDATA aLightData[9];
 float vAmbient[4];
 G3DMATERIAL Material;
 float amatTransform[5][4][4];
 G3DVIEWPORT Viewport;
 G3DWINDOW Window;
 G3DRESOURCE Resource;
 G3DVU1MEMLAYOUT Vu1Mem;
 G3DGSREGISTERLAYOUT GsRegister;
};

struct G3DCREATIONDATA { 
 G3DCOREOBJECT *pObj;
};

struct IG3DCompatible { 
	static LPFUNC_SETGSREGISTER s_pFuncSetGsRegister;
	static LPFUNC_SETGSREGISTERS s_pFuncSetGsRegisters;
	static LPFUNC_GETGSREGISTERREF s_pFuncGetGsRegisterRef;
	static LPFUNC_SETTRANSFORM s_pFuncSetTransform;
	static LPFUNC_GETTRANSFORMREF s_pFuncGetTransformRef;
};


typedef struct { 
 float v[4];
} SgmVERTEX;


typedef struct { 
 sceVu0FVECTOR v;
} SgmVERTEX;

typedef struct { 
 sceVu0IVECTOR n;
} SgmIDX;

typedef struct { 
 int num;
 int *e_idx;
} SgmAREA;

typedef struct { 
 int inf[4];
 int w;
 int h;
 int v_count;
 int f_count;
 float *x;
 float *z;
 SgmAREA *area;
 SgmIDX *v_idx;
 SgmVERTEX *V;
 int dmy[3];
} MhCtrl;

typedef struct { 
 short unsigned int RectID;
 short unsigned int size;
 int reg_id;
 int pad[2];
 float vec[4][4];
} MB_OUT_RECT;

typedef struct { 
 short unsigned int SecStID;
 short unsigned int size;
 unsigned int labelID;
} MB_OUT_SECTION;

typedef struct { 
 char magic[4];
 int area_id;
 int kai;
 int pad;
 int reg_vec_num;
 MB_OUT_RECT *reg_vecp;
 int reg_st_num;
 MB_OUT_SECTION *reg_stp;
 float Pos[4];
} MB_OUT_HEAD;

typedef struct { 
 MB_OUT_SECTION head;
 int type;
 float Pos[3];
 float View[3];
 float Rrg;
 float RotZ;
 float Asobi;
} MDAT_CAM;

typedef struct { 
 MB_OUT_SECTION head;
 int type;
} MDAT_EVENT;

typedef struct { 
 MB_OUT_SECTION head;
 int type;
} MDAT_MISSION;

typedef struct { 
 MB_OUT_SECTION head;
 int No;
 int Pre;
} MDAT_SE;

typedef struct { 
 float Start;
 float End;
 int Min;
 int Max;
 int Color[3];
} MDAT_FOG_ST_ONE;

typedef struct { 
 MB_OUT_SECTION head;
 MDAT_FOG_ST_ONE dat[2];
} MDAT_FOG;

typedef struct { 
 MB_OUT_SECTION head;
 MDAT_FOG_ST_ONE dat[2];
} MDAT_FOG_SW;

typedef struct { 
 MB_OUT_SECTION head;
 int MapID;
 int BgmNo;
} MDAT_MAP;

typedef struct { 
 MB_OUT_SECTION head;
 int type;
 char ModelName[36];
 float Pos[3];
 float Rot[3];
 int HitCheck;
 int PhotoAble;
 int Visible;
 int Action;
 int ActionType;
 int Weight;
 int Attribute;
} MDAT_OBJ;

typedef struct { 
 MB_OUT_SECTION head;
 char ModelName[36];
 int DatID;
 float Pos[3];
 float Rot[3];
 int HitCheck;
 int ActionType;
 int Attribute;
} MDAT_DOOR;

typedef struct { 
 MB_OUT_SECTION head;
 float Cam_Pos_X;
 float Cam_Pos_Y;
 float Cam_Pos_Z;
 float View_Pos_X;
 float View_Pos_Y;
 float View_Pos_Z;
 float Rrg;
 float RotZ;
 float Asobi;
} MDAT_CAM_BTL;

typedef struct { 
 float Cam_Pos_X;
 float Cam_Pos_Y;
 float Cam_Pos_Z;
 float View_Pos_X;
 float View_Pos_Y;
 float View_Pos_Z;
 float Proj;
 float RotZ;
} MDAT_CAM_SP_ONE;

typedef struct { 
 MB_OUT_SECTION head;
 int type;
 MDAT_CAM_SP_ONE st[4];
} MDAT_CAM_SP;

typedef struct { 
 MB_OUT_SECTION head;
 int Step_type;
 int rot;
} MDAT_FLOOR;

typedef struct { 
 MB_OUT_SECTION head;
 char ModelName[36];
 float Pos[3];
 float Rot[3];
 float Scale[3];
 int Visible;
 int Action;
 int ActionType;
 int Weight;
 int Attribute;
} MDAT_PUT;

typedef struct { 
 u_char area_no;
 u_char area_old;
 u_char room_id;
 u_char room_old;
 u_char camera_no;
 u_char camera_no_old;
 float hight;
} PROOM_INFO;

struct PLCMN_WRK { 
 MOVE_BOX mbox;
 STATUS_DAT st;
 PROOM_INFO pr_info;
 u_char mode;
 u_char atk_eneno;
 u_char atk_pos;
 u_char atk_rot;
 float near_ene_dist;
 float near_ene_dist_old;
 u_char near_ene_no;
 short int floor;
 float headpos[4];
};

struct PLYR_WRK { 
 PLCMN_WRK cmn_wrk;
 u_char modedead;
 u_char anime_no;
 u_char charge_num;
 float charge_rate;
 float charge_deg;
 float frot_x;
 short int fp[2];
 u_short no_photo_tm;
 u_short shutter_tm;
 u_short vib_time_sm;
 u_short vib_time_bg;
 float spd[4];
 float old_spd[4];
 float fhp[5][4];
 float prot;
 u_short fene_tm;
 u_short bonus_sta;
 u_short avoid_tm;
 u_short avoid_flg;
 u_short avoid_st;
 u_short avoid_sp;
 u_char door_flg;
 u_short door_no;
 float bwp[4];
 float spot_pos[4];
 float spot_rot[4];
 G3DLIGHT fl;
 G3DLIGHT fl2;
 G3DLIGHT reflectionlight;
 float maplight_scale;
 SND_3D_SET s3d;
 float fl_pow;
 int finder_tm;
 char finder_lock_cnt;
 char move_lock_cnt;
 char action_lock_cnt;
 char shutter_lock_cnt;
 char run_lock_cnt;
 int ane_curse_lock;
 float hit_rad;
 SHUTTER_CHANCE_STATE preShutterChanceState;
 SHUTTER_CHANCE_STATE nowShutterChanceState;
};

typedef enum {
	PFT_HAND = 0,
	PFT_STEP = 1,
	NUM_PLAYERFLASHLIGHTTYPE = 2
} PLAYERFLASHLIGHTTYPE;

typedef struct { 
 int labelID;
 int buff_id;
 int stat;
 char *addr;
 float pos[4];
 u_int model_addr;
 u_int reg_dat_top;
 u_int free_mem_top;
 u_int high_addr;
 u_int model_pak_addr;
 u_int lit_addr;
 u_int shadow_addr;
 u_int shadow_s_addr;
 GRA3DLIGHTDATA lit_dat;
 char reg_id[4];
} MLOAD_HEAD;

typedef enum {
	MAPMODELPK2_MODEL = 0,
	MAPMODELPK2_SOURCEMODEL = 1,
	MAPMODELPK2_SHADOWMODEL = 2
} MAPMODELPK2DATAINDEX;

typedef struct { 
 int buff_id;
 short int attr;
 short int flg;
 int size;
 char name[36];
 char *addr;
 char *model;
 char *mot;
} FURN_CTL;


typedef struct { 
 int id;
 char *addr;
} FURN_WORK_HEAD;


typedef enum {
	FILE_LOAD_OK = 0,
	FILE_LOAD_ALREADY_LOAD = 1,
	FILE_LOAD_ALREADY_ALL_LOAD = 2,
	FILE_LOAD_ID_NOT_EXIST = 3
} _FILE_LOAD_ENUM;


enum _FILE_LOAD_ENUM {
	FILE_LOAD_OK = 0,
	FILE_LOAD_ALREADY_LOAD = 1,
	FILE_LOAD_ALREADY_ALL_LOAD = 2,
	FILE_LOAD_ID_NOT_EXIST = 3
};

typedef _FILE_LOAD_ENUM FILE_LOAD_ENUM;

typedef struct { 
 char key[8];
 int label;
 int attr;
} FURN_LOAD_TBL;

typedef enum {
	SCREEN_EFFECT_NORMAL = 0,
	SCREEN_EFFECT_EMEMY_DEAD = 1,
	SCREEN_EFFECT_PUZZLE = 2,
	SCREEN_EFFECT_NOTHING = 3
} ENUM_ScreenEffectStatus;

typedef enum {
	SCREEN_EFFECT_NO_DEFAULT = 0,
	SCREEN_EFFECT_NO_01 = 1,
	SCREEN_EFFECT_NO_02 = 2,
	SCREEN_EFFECT_NO_03 = 3,
	SCREEN_EFFECT_NO_04 = 4,
	SCREEN_EFFECT_NO_SCREEN_SAVER = 5,
	SCREEN_EFFECT_NO_NUM = 6
} SCREEN_EFFECT_NO_LABEL;

typedef enum {
	EFF_FLOW_CTRL_IN = 0,
	EFF_FLOW_CTRL_KEEP = 1,
	EFF_FLOW_CTRL_OUT = 2,
	EFF_FLOW_CTRL_END = 3,
	EFF_FLOW_CTRL_STOP = 4
} EFF_FLOW_CTRL_ID;

typedef union { 
 int ui32;
 float fl32;
} U32DATA;

typedef struct { 
 Q_WORDDATA dat;
 float Pos[4];
 void *pnt[6];
 float fw[3];
 u_int z;
 u_int flow;
 u_int cnt;
 u_int in;
 u_int keep;
 u_int out;
 u_int max;
 u_char r;
 u_char g;
 u_char b;
 u_char a;
} EFFECT_CONT;

typedef struct { 
 u_char sw;
 u_char alp;
 int scl;
 int rot;
 float x;
 float y;
} BLUR_STR;

typedef struct { 
 u_char sw;
 u_char type;
 u_char col;
 u_char alp;
} CONTRAST_STR;

typedef struct { 
 u_char sw;
 u_char alp;
} FFRAME_STR;

typedef struct { 
 u_char sw;
 u_char type;
 float spd;
 float alp;
 u_char amax;
 u_char cmax;
} DITHER_STR;

typedef struct { 
 u_char sw;
 u_char type;
 u_char rate;
} DEFORM_STR;

typedef struct { 
 u_char sw;
 u_char col;
 u_char alp;
 u_char alp2;
} NEGA_STR;

typedef struct { 
 u_char sw;
} MONO_STR;

typedef struct { 
 BLUR_STR bl;
 CONTRAST_STR cn;
 FFRAME_STR ff;
 DITHER_STR dt;
 DEFORM_STR df;
 NEGA_STR ng;
 MONO_STR mn;
} SBTSET;

typedef struct { 
 int Z_Dep;
 int Dither;
 int DitherSpeed;
 int DitherAlpha;
 int DitherAlphaMax;
 int DitherColorMax;
 int Blur;
 int BlurAlpha;
 int BlurScale;
 int BlrrRot;
 int Deform;
 int DeformRate;
 int Focus;
 int ColorFilter;
 int BlackFilter;
 int Contrast;
 int ContrastColor;
 int ContrastAlpha;
 int NegaColor;
 int NegaAlpha;
 int NegaAlpha2;
 int FadeFrame;
 int FadeFrameAlpha;
 int Overlap;
} SCREEN_EFFECT_PARAMETER;

typedef struct { 
 u_int frame;
 u_int size;
 unsigned char anm[8];
} FOD_CAM_FRAME;

typedef struct { 
 float p[4];
 float i[4];
 float roll;
 float fov;
 float near;
 float far;
} FOD_FIRST_CAM;

typedef struct { 
 float vPosition[4];
 float vTarget[4];
 float fRoll;
 float fFov;
 float fNearZ;
 float fFarZ;
} FOD_CAMERA_DATA;

typedef struct { 
 u_int frame;
 u_int size;
 u_int pad[2];
} FOD_LIT_FRAME;

typedef struct { 
 int light_id;
 u_int type;
 unsigned char anm[8];
} FOD_LIT_ANM;

typedef struct { 
 u_char light_no;
 u_char light_type;
 u_char anm_flg;
 char pad;
 char light_name[28];
} FOD_LIT_SERIAL;

typedef struct { 
 u_int id;
 u_int size;
 u_int pad[2];
 float color[4];
} FOD_LIT_AMB;

typedef struct { 
 u_int id;
 u_int size;
 u_int pad[2];
 float color[4];
 float direction[4];
} FOD_LIT_INF;

typedef struct { 
 u_int id;
 u_int size;
 u_int pad[2];
 float color[4];
 float position[4];
 float interest[4];
 float cone;
 float spread;
 float fpad[2];
} FOD_LIT_SPOT;

typedef struct { 
 u_int id;
 u_int size;
 u_int pad[2];
 float color[4];
 float position[4];
} FOD_LIT_POINT;

typedef struct { 
 FOD_LIT_SERIAL lit_serial[36];
 G3DLIGHT all_lit[36];
 float amb[4][6];
 u_int *lit_top;
 u_int ilit_num;
 u_int slit_num;
 u_int plit_num;
 u_int all_lit_num;
 int hand_spot_no;
} FOD_LIGHT;

typedef struct { 
 int num;
 int shibata;
 int pad[2];
} FOD_EF_FIX_HDR;

typedef struct { 
 u_int frame_no;
 u_int size;
 u_char zdepth;
 u_char mono;
 u_char sepia;
 u_char color_change;
 u_int pad;
} FOD_EFF_FRAME;

typedef struct { 
 u_char efct_id;
 u_char type;
 u_char alpmax;
 u_char colmax;
 float speed;
 float alpha;
 u_int ipad;
} FOD_EF_DITHER;

typedef struct { 
 u_char efct_id;
 u_char blur_type;
 u_char alpha;
 u_char cpad;
 u_int scale;
 u_int rot;
 u_int ipad;
} FOD_EF_BLUR;

typedef struct { 
 u_char efct_id;
 u_char type;
 u_char volume;
 u_char cpad;
 u_int ipad[3];
} FOD_EF_DEFORM;

typedef struct { 
 u_char efct_id;
 u_char volume;
 u_char cpad[2];
 u_int ipad[3];
} FOD_EF_FOCUS;

typedef struct { 
 u_char efct_id;
 u_char color;
 u_char alpha;
 u_char cont_type;
 u_int ipad[3];
} FOD_EF_CONTRAST;

typedef struct { 
 u_char efct_id;
 u_char color;
 u_char alpha;
 u_char alpha2;
 u_char cont_type;
 u_int cpad[3];
 u_int ipad[2];
} FOD_EF_NEGA;

typedef struct { 
 u_char efct_id;
 u_char volume;
 u_char cpad[2];
 u_int ipad[3];
} FOD_EF_F_FRAME;

typedef struct { 
 u_char efct_id;
 u_char type;
 u_char cpad[2];
 float x;
 float y;
 float z;
} FOD_EF_LENZ_F;

typedef struct { 
 u_char efct_id;
 u_char volume;
 u_char cpad[2];
 u_int ipad[3];
} FOD_EF_CROSS_F;

typedef struct { 
 u_char efct_id;
 u_char cpad[3];
 u_char r;
 u_char g;
 u_char b;
 u_char a;
 u_int ipad[2];
} FOD_EF_FADE_SCR;

typedef struct { 
 u_char efct_id;
 u_char alpha;
 u_char cpad[2];
 u_char prefix[4];
 u_int mdl_id;
 u_int ipad;
} FOD_EF_FADE_MDL;

typedef struct { 
 u_char efct_id;
 u_char data_type;
 u_char type;
 u_char alpha;
 float rate;
 float trate;
 int pad;
} FOD_EF_P_DEFORM1;

typedef struct { 
 u_char efct_id;
 u_char data_type;
 u_char cpad[2];
 float posx;
 float posy;
 float posz;
} FOD_EF_P_DEFORM2;

typedef struct { 
 u_char efct_id;
 u_char data_type;
 u_char cpad[2];
 float sclx;
 float scly;
 float pad;
} FOD_EF_P_DEFORM3;

typedef struct { 
 u_char efct_id;
 u_char cpad[3];
 float posx;
 float posy;
 float posz;
} FOD_EF_FIRE;

typedef struct { 
 u_char efct_id;
 u_char cpad[3];
 float posx;
 float posy;
 float posz;
} FOD_EF_ITEM;

typedef struct { 
 u_char efct_id;
 u_char type;
 u_char cpad[2];
 float posx;
 float posy;
 float posz;
} FOD_EF_AMULET;

typedef struct { 
 u_char efct_id;
 u_char cpad[3];
 u_char prefix[4];
 u_int ipad[2];
} FOD_EF_ENEMY;

typedef struct { 
 u_char efct_id;
 u_char type;
 u_char cpad[2];
 u_int frame;
 u_int ipad[2];
} FOD_EF_VIBRATE;

typedef union { 
 FOD_EF_DITHER dither;
 FOD_EF_BLUR blur;
 FOD_EF_DEFORM deform;
 FOD_EF_FOCUS focus;
 FOD_EF_CONTRAST contrast;
 FOD_EF_NEGA nega;
 FOD_EF_F_FRAME f_frame;
 FOD_EF_LENZ_F lenz_f;
 FOD_EF_CROSS_F cross_f;
 FOD_EF_P_DEFORM1 pdf1;
 FOD_EF_P_DEFORM2 pdf2;
 FOD_EF_P_DEFORM3 pdf3;
 FOD_EF_FADE_SCR fade_scr;
 FOD_EF_FADE_MDL fade_mdl;
 FOD_EF_FIRE fire;
 FOD_EF_ITEM item;
 FOD_EF_AMULET amulet;
 FOD_EF_ENEMY enemy;
 FOD_EF_VIBRATE vibrate;
 u_char unit[16];
} FOD_EFF_DATA;

typedef struct { 
 FOD_EFF_DATA *fix[12];
 float lenz_pos[4];
 float lenz_rot[4];
 float pdf_pos[4];
 float pdf_spd;
 float pdf_rate;
 float pdf_trate;
 void *pdf_p;
 u_int fix_eff_num;
 u_int fade_mdl_cnt;
 u_int fire_num;
 u_int mono_flg;
} FOD_EFF_PARAM;

typedef struct { 
 u_int file_id;
 float version;
 u_int reso;
 u_int frame;
} FOD_FILE_HDR;

typedef struct { 
 FOD_LIGHT fod_light;
 FOD_FILE_HDR *cam_file_hdr;
 FOD_CAM_FRAME *cam_frame_top;
 FOD_CAM_FRAME *cam_frame;
 FOD_CAM_FRAME *cam_frame_next;
 FOD_FILE_HDR *lit_file_hdr;
 FOD_LIT_FRAME *lit_frame_top;
 FOD_LIT_FRAME *lit_frame;
 FOD_LIT_FRAME *lit_frame_next;
 FOD_FILE_HDR *eff_file_hdr;
 FOD_EFF_FRAME *eff_frame_top;
 FOD_EFF_FRAME *eff_frame;
 u_int now_frame;
 u_int frame_max;
 u_int now_reso;
 u_char resolution;
 u_char end_flg;
 float float_now_frame;
 int cut_timing_index;
} FOD_CTRL;

typedef struct { 
 u_int type;
 float sclx;
 float scly;
 u_int alpha;
 float rate;
 float trate;
} SCN_ENE_EF_PDF;

typedef struct { 
 u_short scene_no;
 u_short mdl_no;
 float aura_size;
 float aura_rate;
 u_int aura_rgba;
 SCN_ENE_EF_PDF pdf1;
 SCN_ENE_EF_PDF pdf2;
 float pdf_dist;
 float aura_pos_ajst;
 int mdl_alpha;
} SCN_ENE_EFCT;

typedef struct { 
 ANI_CTRL *pMdlAnm;
 SCN_ENE_EFCT *ene_efct;
 void *efct_addr[4];
 char prefix[9];
 u_int mdl_no;
 u_int mdl_alpha;
 u_int scn_mdl_no;
 u_int *mdl_addr;
 u_int *mdl_addr_db;
 u_int *mot_addr;
 u_int *mim_addr;
 u_int *mim_buf_addr;
 u_int *pk2_addr;
 u_int disp_flg;
} SCN_ANM_MDL;

typedef struct { 
 float min;
 float max;
 float near;
 float far;
 int r;
 int g;
 int b;
 int pad;
} SCENE_FOG;

typedef struct { 
 SCN_ANM_MDL man_mdl[8];
 SCN_ANM_MDL furn_mdl[14];
 SCN_ANM_MDL item_mdl[8];
 SCN_ANM_MDL door_mdl[8];
 int man_mdl_tex[8];
 FOD_CTRL fod_ctrl;
 SCENE_FOG fog;
 FOD_CAMERA_DATA CameraData;
 int man_mdl_num;
 int door_num;
 int furn_num;
 int item_num;
 u_int *scn_data_addr;
 u_int *light_rev_addr;
 u_int *effect_addr;
 u_int *pMimBuf;
 int scene_no;
 int room_no;
 int sub_room_no;
 int count_flg;
 int mirror_flg;
 int init_flg;
 float fNearZBak;
 float fFarZBak;
 int DrawAneFlg;
 int DrawImoutoFlg;
 int DoubleBufferId;
 int AreaNoBak;
 int MonotoneEnableBak;
 int *pPlayerAccessoryPk2;
 int *pSisterAccessoryPk2;
} SCENE_CTRL;

typedef struct { 
 u_int *scn_file_addr;
 u_int file_num;
 u_int *ofs_top_addr;
 u_int *hdr_addr;
 u_int *cam_fod_addr;
 u_int *lit_fod_addr;
 u_int *eff_fod_addr;
 u_int *man_mot_addr;
 u_int *man_mim_addr;
 u_int *furn_mot_addr;
 u_int *door_mot_addr;
 u_int *item_mot_addr;
} SCENE_FILE;

typedef struct { 
 u_short start;
 u_short end;
 u_short type;
} SCN_VIB_DATA;

typedef struct { 
 int time0;
 int time1;
 int val;
} SCN_VIB_TYPE;

typedef struct { 
 u_short scene_no;
 u_short movie_no;
} SCENE_MOVIE_DATA;

struct _SCENE_DATA_CMN { 
 unsigned char vol;
};

typedef _SCENE_DATA_CMN SCENE_DATA_CMN;

typedef struct { 
 u_char state;
 u_char dumy1;
 short int dumy2;
} EVENT_STATE;

typedef struct { 
 int step;
 int ev_no;
 EVENT_STATE ev_state[1931];
 u_char wait_flg;
} EV_WRK;

struct PhotoData { 
 float Top;
 float Bottom;
 float Dist;
 short unsigned int Point;
 short int image;
 short int mestype;
 short int mesnuma;
 short unsigned int f_finder : 1;
 short unsigned int f_filament : 1;
 short unsigned int f_deform : 1;
 short unsigned int f_sound : 1;
 short unsigned int f_seal_ghost : 1;
 short unsigned int f_unlock_ghost : 1;
 short int ghost_list_rel_no;
};

typedef enum {
	MAP_OBJ_EFFECT_ITEM = 0,
	MAP_OBJ_EFFECT_TORCH0 = 1,
	MAP_OBJ_EFFECT_TORCH1 = 2,
	MAP_OBJ_EFFECT_TORCH2 = 3,
	MAP_OBJ_EFFECT_TORCH3 = 4,
	MAP_OBJ_EFFECT_TORCH4 = 5,
	MAP_OBJ_EFFECT_TORCH5 = 6,
	MAP_OBJ_EFFECT_TORCH6 = 7,
	MAP_OBJ_EFFECT_BUTTERFLY0 = 8,
	MAP_OBJ_EFFECT_CANDLE = 9,
	MAP_OBJ_EFFECT_RAIN = 10,
	MAP_OBJ_EFFECT_HIKARI = 11,
	MAP_OBJ_EFFECT_MOYA = 12,
	MAP_OBJ_EFFECT_OCHIBA = 13,
	MAP_OBJ_EFFECT_MIZU = 14,
	MAP_OBJ_EFFECT_KAWA = 15,
	MAP_OBJ_EFFECT_TOUROU = 16,
	MAP_OBJ_EFFECT_CANDLE2 = 17,
	MAP_OBJ_EFFECT_SIMI = 18,
	MAP_OBJ_EFFECT_TORCH7 = 19,
	MAP_OBJ_EFFECT_MAX = 20
} _MAP_OBJ_EFFECT_ENUM;

typedef _MAP_OBJ_EFFECT_ENUM MAP_OBJ_EFFECT_ENUM;

typedef struct { 
 int stat;
 int flg;
 int *mdl_addr;
 int anim_id;
 void *obj_ptr;
 void *obj_hdl;
 void *obj_save;
} MAPOBJ_DAT;

typedef struct { 
 int *lit_addr;
 MAPOBJ_DAT dat[300];
} MAPOBJ_HEAD;

typedef struct { 
 int doorID;
 int room_no[2];
 int attribute;
 u_short type;
 u_short se;
 float player_pos[4];
 float sister_bpos[4];
 float sister_pos[4];
 float player_rot;
 float sister_brot;
 float sister_rot;
} MLOAD_DOOR_DAT;

typedef struct { 
 int draw_flg;
 int draw_hight;
 int predb_mode;
 int save;
} MH_CTL_DB_FLG;

struct _CD_DAT_TBL { 
 unsigned int cmp_flg : 1;
 unsigned int exist_flg : 1;
 unsigned int start_sector : 30;
 int size;
 int cmp_size;
};

typedef _CD_DAT_TBL CD_DAT_TBL;

typedef struct { 
 char cmp_flg;
 char path_no;
 char *name;
} FNAME_DAT;

typedef enum {
	INGAME_SCENE_STREAM_BACKUP = 0,
	INGAME_SCENE_DATA_LOAD_REQ = 1,
	INGAME_SCENE_DATA_LOAD_WAIT = 2,
	INGAME_SCENE_ROOM_LOAD = 3,
	INGAME_SCENE_PLAY = 4,
	INGAME_SCENE_PLAY_MOVIE = 5,
	INGAME_SCENE_DEBUG_SKIP = 6
} INGAME_SCENE_STATUS;

typedef enum {
	INGAME_SCENE_ROOM_LOAD_WAIT = 0,
	INGAME_SCENE_ROOM_SUB_LOAD_REQ = 1,
	INGAME_SCENE_ROOM_SUB_LOAD = 2,
	INGAME_SCENE_ROOM_MAIN_LOAD_REQ = 3,
	INGAME_SCENE_ROOM_MAIN_LOAD = 4
} INGAME_SCENE_ROOM_LOAD_STATUS;

typedef struct { 
 int SceneNo;
 u_int *pLoadAdrs;
 int Status;
 int RoomLoadStatus;
} INGAME_SCENE_CTRL;

typedef struct { 
 short int id;
 short int flg;
 u_int frame;
 u_int *mot_p;
 float *mat[4][4];
 ANI_CTRL *ctl;
 float offset[4];
 float rot[4];
 RST_DATA rst;
 void *func_dat[2];
 int (*func)(/* parameters unknown */);
} MAP_ANIM_CTL;

typedef struct MAPMANIM_MATRIX;

struct MAPMANIM_MATRIX { 
 short int flg;
 short int anim_id;
 int mat_id;
 char *mot_addr;
 MAPMANIM_MATRIX *next;
 float mat[4][4];
};

typedef struct { 
 int id;
 int buff_id;
 char *mdl_addr;
 MAPMANIM_MATRIX *mat_addr;
 int mat_num;
} MAPMANIM_HEAD;

struct DEBUG_SUB_MENU { 
 char *name;
 u_int attr;
 void *child;
 float nmin;
 float nmax;
 float nadd;
};

struct DEBUG_MENU { 
 void *parent;
 int *off_num;
 char *title;
 DEBUG_SUB_MENU submenu[20];
 int mnum;
 int kai;
 int max;
 int pos;
};

struct DEBUG_VAR { 
 int hit_disp;
 int ene_stop;
 int fog_sw;
 int near;
 int far;
 int min;
 int max;
 int fog_r;
 int fog_g;
 int fog_b;
 int hi_spd;
 int perf_count_sw;
 int move_speed;
 int cut_len;
 int muteki;
 int fl_sw;
 float fl_intens;
 float fl_range;
 float fl_py;
 float fl_pz;
 float fl_y;
 float fl_z;
 int fl_line;
 float flrf_y;
 float flrf_z;
 float flrf_range;
 float flrf_si_rate;
 float pl_amb;
 float sis_para_r;
 float sis_para_g;
 float sis_para_b;
 float fStaticDirLightColStepR;
 float fStaticDirLightColStepG;
 float fStaticDirLightColStepB;
 float fYFlashlightStep;
 float fRangeFlashlightStep;
 float fl2_range;
 int shadow_model_disp;
 int sis_tr_point;
 float dummy[4];
};

struct SISALG_WRK { 
 u_char job_no;
 u_char pos_no;
 u_char wait_time;
 float loop[2];
 P_INT comm_add;
 long int comm_add_top;
 long int data_addr;
 u_long stack_b[16];
 u_long *stack_p;
 u_char flag;
};

struct SIS_WRK { 
 PLCMN_WRK cmn_wrk;
 SISALG_WRK alg;
 u_char on;
 u_char modedead;
 u_char anime_no;
 u_char trace_dist;
 u_char trace_dist_bak;
 u_short stop_tm;
 u_short walk_tm;
 u_short run_tm;
 u_short scared_rcvr_tm;
 u_short dmg_tm;
 u_short dmg_se_num;
 u_short dmg_se_cnt;
 u_short btl_recv_tm;
 u_short push_se_tm;
 u_short se_nanika2_tm;
 int se_deadly;
 u_char se_matte;
 u_char se_konaide;
 u_short cower_tm;
 u_short se_cower_cnt;
 short int se_door_fl;
 float pl_dist;
 float wpos[4];
 float spd[4];
 float old_spd[4];
 SND_3D_SET s3d;
 float bwp[4];
 int lock_cnt;
 u_char join_flg;
};

struct SIS_ANI_TBL { 
 u_char ani_no;
 u_char frm;
 short int loop;
};

typedef struct { 
 u_char amode;
} SIS_ALG_WORK;

struct SIS_TRACE { 
 int top;
 int now;
 int num;
 int cnt;
 float trgt[4];
 int trgt_floor;
 float vwpos[4];
 int push_tm;
 int push_cnt;
 int push;
 int push_dir;
 int push_pldir;
 float push_dist;
 float push_rot;
 float push_orot;
 u_char view_hit;
 float dist;
 float wsdist;
 float wedist;
 float rsdist;
 float redist;
 float p[4][64];
 float l[64];
 unsigned char fl[64];
};

struct G3DDMACHAINTAG { 
 long unsigned int QWC;
 long unsigned int pad0 : 10;
 long unsigned int PCE : 2;
 long unsigned int ID : 3;
 long unsigned int IRQ : 1;
 long unsigned int ADDR : 31;
 long unsigned int SPR : 1;
 long unsigned int pad1;
};

struct G3DDMACREATIONDATA { 
 unsigned int uiBufferTop;
 unsigned int uiBufferSize;
};

struct OBJ_DRAW_FLG { 
 int player;
 int sister;
 int enemy;
 int effect;
 int room;
 int obj;
 int sky;
 int shadow;
 int shadow_src;
};

typedef struct { 
 int id;
 int flg;
 int stat;
 int key;
 float *rec;
} MAPHIT_HEAD;

typedef struct { 
 float *pos[4];
 float r;
 int call_work;
} MAPHIT_DAT;


typedef enum {
	AUTO_BD_ERR_OK = 0,
	AUTO_BD_ERR_NO_WRK = 1
} _AUTO_BD_ERR;


enum _AUTO_BD_ERR {
	AUTO_BD_ERR_OK = 0,
	AUTO_BD_ERR_NO_WRK = 1
};

typedef _AUTO_BD_ERR AUTO_BD_ERR;


typedef struct { 
 int buff_id[2];
 MDAT_DOOR * dat[2];
 void *hdl;
} MAPDOOR_HEAD;

typedef struct { 
 char label;
 char cRFlg;
 char anim[2];
 char type[2];
} MAPDOOR_SEL;

typedef enum {
	HAZE_ALL_VELOCITY_TYPE1 = 0,
	HAZE_ALL_VELOCITY_TYPE1_TO_2 = 1,
	HAZE_ALL_VELOCITY_TYPE2 = 2,
	HAZE_ALL_VELOCITY_TYPE2_TO_3 = 3,
	HAZE_ALL_VELOCITY_TYPE3 = 4,
	HAZE_ALL_VELOCITY_TYPE3_TO_1 = 5
} HAZE_ALL_VELOCITY_STATUS;

typedef enum {
	HAZE_PARAMETER_NORMAL = 0,
	HAZE_PARAMETER_KUSABI = 1,
	HAZE_PARAMETER_SAE = 2
} HAZE_PARAMETER_TYPE;

typedef enum {
	ITEM_EFFECT_TYPE00 = 0,
	ITEM_EFFECT_TYPE01 = 1
} ITEM_EFFECT_TYPE;

typedef struct { 
 int fl;
 u_char r;
 u_char g;
 u_char b;
 u_char a;
 float mang;
 float cnt;
 float pos[4];
 float opos[4];
 float vel[4];
 float ang[4];
} EFF_LEAF_ONE;

typedef struct { 
 int flag;
 int type;
 float bpos[4];
 EFF_LEAF_ONE lo[16];
} EFF_LEAF;

typedef struct { 
 float position[4];
 float color[4];
 float velocity[4];
 float acceleration[4];
 float alp_step;
 int lifetime;
 int BaseLifeTime;
 float Scale;
} PARTICLE;

typedef struct { 
 PARTICLE particles[200];
 int head;
 int cnt;
 short int flag;
 short int max;
 short int disp;
 short int blife;
} HEAT_HAZE;

typedef struct { 
 PARTICLE particles[30];
 float Pos[4];
 int head;
 int cnt;
 short int max;
 short int disp;
 short int blife;
 float BrakeRate;
} CLOUD_OF_DUST_CTRL;

typedef struct { 
 int AreaRadius;
 int MaxY;
 int MinY;
 int Frequency;
 int SpeedXMax;
 int SpeedXMin;
 int SpeedYMax;
 int SpeedYMin;
 int SpeedZMax;
 int SpeedZMin;
 int AllSpeedX_1;
 int AllSpeedY_1;
 int AllSpeedZ_1;
 int AllSpeedX_2;
 int AllSpeedY_2;
 int AllSpeedZ_2;
 int AllSpeedX_3;
 int AllSpeedY_3;
 int AllSpeedZ_3;
 int AllSpeedTime_1;
 int AllSpeedTime_2;
 int AllSpeedTime_3;
 int Alpha;
 int AlphaInTime;
 int AlphaKeepTime;
 int AlphaOutTime;
 int StartScale;
 int EndScale;
 int R;
 int G;
 int B;
 int RotZMax;
 int RotZMin;
 int RotZTime;
 int AlphaBlendA;
 int AlphaBlendB;
 int AlphaBlendC;
 int AlphaBlendD;
 int AlphaBlendFIX;
 int OffsetX;
 int OffsetY;
 int OffsetZ;
} HAZE_PARAMETER;

typedef struct { 
 float Position[4];
 float Velocity[4];
 int Lifetime;
 int Alpha;
 float Scale;
 float RotZ;
 float RotZSpeed;
} HAZE_PARTICLE;

typedef struct { 
 HAZE_PARTICLE Particles[64];
 float *pPos[4];
 float *pRot[4];
 float *pAlphaRate;
 int AllVelocityTime;
 int AllVelocityStatus;
 int Id;
 short int disp;
 short int Type;
} HAZE_CTRL;


typedef struct { 
 HAZE_PARTICLE Particles[64];
 sceVu0FVECTOR *pPos;
 sceVu0FVECTOR *pRot;
 float *pAlphaRate;
 int AllVelocityTime;
 int AllVelocityStatus;
 int Id;
 short int disp;
 short int Type;
} HAZE_CTRL;


typedef struct { 
 float npos[4];
 float *oposp[4];
 float *wmtxp[4][4];
 int time;
 short int top;
 short int num;
 float xp;
 float xm;
 float rot;
 float rotp;
 float x;
 float y;
 float n;
 float cnt;
} NEW_PERTICLE;


typedef struct { 
 float npos[4];
 sceVu0FVECTOR *oposp;
 float *wmtxp[4][4];
 int time;
 short int top;
 short int num;
 float xp;
 float xm;
 float rot;
 float rotp;
 float x;
 float y;
 float n;
 float cnt;
} NEW_PERTICLE;

typedef struct { 
 float Position[4];
 int Alpha;
 int FreaAlpha;
 int Count;
} MANY_CANDLE_PARTICLE;

typedef struct { 
 MANY_CANDLE_PARTICLE Particles[120];
 float CenterPos[4];
 int Id;
 int R;
 int G;
 int B;
 int DataNum;
} MANY_CANDLE_CTRL;

struct DEBUG_LIGHT { 
 int save;
 int load;
 int camera_sw;
 int line_sw;
 int bSavePrelightedMap;
 int bSavePrelightedMapAll;
};

struct FOG_WRK { 
 float min;
 float max;
 float near;
 float far;
 u_char r;
 u_char g;
 u_char b;
};

typedef struct { 
 int buf_id;
 int id_num;
 int id_list[8];
} MapRecBufCtrl;

typedef struct { 
 int id_num;
 int rec_num_list[8];
 int buf_ids[8];
 MB_OUT_RECT *rec_list[8];
} MapRecInfo;

typedef struct { 
 float hight;
 float scale_min;
 float scale_max;
 float scale_now;
 int frame_now;
 int frame;
 int fr;
 int fg;
 int fb;
 int fa;
} MAP_SKY_ST;

typedef struct { 
 float len;
 float speed;
 float offset_y;
 int offset_y2;
 int move_y;
 float scale;
 int fog_r;
 int fog_g;
 int fog_b;
 int fog_al;
 MAP_SKY_ST sky_stat[3];
} MAP_SKY_DB;

typedef struct { 
 int r;
 int g;
 int b;
 int near;
 int far;
 int min;
 int max;
} MAP_FOG_HEAD;

typedef struct { 
 int labelID;
 int cnt;
 int stat;
} MAP_LBUFF_ST;

typedef struct { 
 int max;
 int frame[4];
} MAPMEI_FRAME;

typedef struct { 
 int flg;
 G3DLIGHT *addr;
 GRA3DLIGHTSTATUS *st_addr;
 float power;
} MAP_LIGHT_SORT;

typedef struct { 
 int flg;
 G3DLIGHT ldat;
 GRA3DLIGHTSTATUS lstat;
} MAP_LIGHT_DAT;

typedef struct { 
 int iFlg;
 float fPow;
} MAP_LIGHT_HEAD;

typedef struct { 
 MAPMEI_FRAME *top_dat_p;
 MAPMEI_FRAME *now_dat_p;
 int stat;
 int frame;
} MAPMEI_HEAD;

typedef struct { 
 G3DLIGHT *lip;
 G3DLIGHT m_light;
} MAPMEI_LIGHTONE;

typedef enum {
	ENE_HIT_EFFECT_SMALL = 0,
	ENE_HIT_EFFECT_LARGE = 1,
	ENE_HIT_EFFECT_SP = 2,
	ENE_HIT_EFFECT_SLOW = 3,
	ENE_HIT_EFFECT_ZERO = 4,
	ENE_HIT_EFFECT_ZERO_SC = 5,
	ENE_HIT_EFFECT_ZERO_SP = 6,
	ENE_HIT_EFFECT_KOKU = 7,
	ENE_HIT_EFFECT_KOKU_SC = 8,
	ENE_HIT_EFFECT_KOKU_SP = 9,
	ENE_HIT_EFFECT_PARALYZE = 10,
	ENE_HIT_EFFECT_VIEW = 11,
	ENE_HIT_EFFECT_METSU = 12,
	ENE_HIT_EFFECT_METSU_SC = 13,
	ENE_HIT_EFFECT_METSU_SP = 14,
	ENE_HIT_EFFECT_REN = 15,
	ENE_HIT_EFFECT_REN_SC = 16,
	ENE_HIT_EFFECT_REN_SP = 17,
	ENE_HIT_EFFECT_TSUI = 18,
	ENE_HIT_EFFECT_FUU = 19
} ENE_HIT_EFFECT_LABEL;

typedef enum {
	ENE_DMG_LARGE_HIT_SMALL = 0,
	ENE_DMG_LARGE_HIT_LARGE = 1,
	ENE_DMG_LARGE_HIT_SP_A = 2,
	ENE_DMG_LARGE_HIT_SP_B = 3,
	ENE_DMG_LARGE_HIT_SLOW_A = 4,
	ENE_DMG_LARGE_HIT_SLOW_B = 5,
	ENE_DMG_LARGE_HIT_ZERO_A = 6,
	ENE_DMG_LARGE_HIT_ZERO_B = 7,
	ENE_DMG_LARGE_HIT_ZERO_SC_A = 8,
	ENE_DMG_LARGE_HIT_ZERO_SC_B = 9,
	ENE_DMG_LARGE_HIT_ZERO_SP_A = 10,
	ENE_DMG_LARGE_HIT_ZERO_SP_B = 11,
	ENE_DMG_LARGE_HIT_KOKU_A = 12,
	ENE_DMG_LARGE_HIT_KOKU_B = 13,
	ENE_DMG_LARGE_HIT_KOKU_SC_A = 14,
	ENE_DMG_LARGE_HIT_KOKU_SC_B = 15,
	ENE_DMG_LARGE_HIT_KOKU_SP_A = 16,
	ENE_DMG_LARGE_HIT_KOKU_SP_B = 17,
	ENE_DMG_LARGE_HIT_PARALYZE_A = 18,
	ENE_DMG_LARGE_HIT_PARALYZE_B = 19,
	ENE_DMG_LARGE_HIT_VIEW_A = 20,
	ENE_DMG_LARGE_HIT_VIEW_B = 21,
	ENE_DMG_LARGE_HIT_METSU_A = 22,
	ENE_DMG_LARGE_HIT_METSU_B = 23,
	ENE_DMG_LARGE_HIT_METSU_SC_A = 24,
	ENE_DMG_LARGE_HIT_METSU_SC_B = 25,
	ENE_DMG_LARGE_HIT_METSU_SP_A = 26,
	ENE_DMG_LARGE_HIT_METSU_SP_B = 27,
	ENE_DMG_LARGE_HIT_REN_A = 28,
	ENE_DMG_LARGE_HIT_REN_B = 29,
	ENE_DMG_LARGE_HIT_REN_SC_A = 30,
	ENE_DMG_LARGE_HIT_REN_SC_B = 31,
	ENE_DMG_LARGE_HIT_REN_SP_A = 32,
	ENE_DMG_LARGE_HIT_REN_SP_B = 33,
	ENE_DMG_LARGE_HIT_TSUI_A = 34,
	ENE_DMG_LARGE_HIT_TSUI_B = 35,
	ENE_DMG_LARGE_HIT_FUU_A = 36,
	ENE_DMG_LARGE_HIT_FUU_B = 37
} ENUM_ENE_DMG_LARGE_HIT;

typedef enum {
	ENE_DMG_PARTICLE_TYPE_HIT_DAMAGE = 0,
	ENE_DMG_PARTICLE_TYPE_EFFECT_END = 1
} ENE_DMG_PARTICLE_TYPE;

typedef enum {
	EFFECT_END_PARTICLE_SLOW = 0,
	EFFECT_END_PARTICLE_PARALYZE = 1,
	EFFECT_END_PARTICLE_VIEW = 2,
	EFFECT_END_PARTICLE_TSUI = 3,
	EFFECT_END_PARTICLE_FUU = 4,
	EFFECT_END_PARTICLE_TYPE_NUM = 5
} EFFECT_END_PARTICLE_TYPE;

typedef struct { 
 float wbpos[4][2];
 float scw[4];
 float sch[4];
 float rot_z[4];
 float alp[4];
 int cnt[4];
 int flow[4];
 int enedmg_no;
 int enedmg1_flg;
 int enedmg_chance;
 int dummy;
} ENDMG1;

typedef struct { 
 int enedmg_no;
 int enedmg2_flg;
 int enedmg_chance;
} ENDMG2;

typedef struct { 
 int CenterRgba[4];
 int OutsideRgba[4];
 int VertexNumW;
 int VertexNumH;
 int Size;
 int LastScale;
 int AllFrame;
 int MoveDist;
 int Distance;
 int RotVal;
 int CaptureInterval;
 int CaptureNumber;
 int AlphaBlendA;
 int AlphaBlendB;
 int AlphaBlendC;
 int AlphaBlendD;
 int AlphaBlendFIX;
} ENE_DMG_LARGE_HIT_PARAMETER;

typedef struct { 
 int StartFrame;
 int InTime;
 int KeepTime;
 int OutTime;
 int MinBlurScale;
 int MaxBlurScale;
 int MinBlurAlpha;
 int MaxBlurAlpha;
 int MinBlurRot;
 int MaxBlurRot;
 int BlurOnFlg;
 int MinContrastColor;
 int MaxContrastColor;
 int MinContrastAlpha;
 int MaxContrastAlpha;
 int ContrastOnFlg;
 int CameraShakeOnFlg;
 int CameraShakeFrame;
 int PadVibrateOnFlg;
 int PadVibrateFrame;
} ENE_DMG_BLUR_CONTRAST_PARAMETER;

typedef struct { 
 float CenterPos[4];
 long int AlphaBlend;
 float Scale;
 float LastScale;
 float MoveDist;
 float Distance;
 float RotVal;
 u_int VertexNumW;
 u_int VertexNumH;
 u_int NowFrame;
 u_int AllFrame;
 u_int CaptureInterval;
 u_int CaptureNumber;
 unsigned char CenterRgba[4];
 unsigned char OutsideRgba[4];
 u_int InitCenterAlpha;
 u_int InitOutsideAlpha;
 int Delay;
} ENE_DMG_LARGE_HIT;

typedef struct { 
 ENE_DMG_LARGE_HIT Work[2];
 int Status[2];
} ENE_DMG_LARGE_HIT_CTRL;

typedef struct { 
 float Center[4];
 float rpos[4];
 float rrad;
 float rrot;
 float racc;
 float rbrk;
 float ralp;
 float rrad_max;
 float cnt_f;
 float cnt_spd;
 float rot_spd;
 int anm_count;
 float AlphaRate;
} ENEDMG_PARTICLE_ONE;

typedef struct { 
 float LwMatrix[4][4][10];
 float OldPos[4][10];
 int NumMax;
 int Num;
 int Top;
} ENEDMG_P_TAIL_WRK;

typedef struct _ENEDMG_P_WRK;

struct _ENEDMG_P_WRK { 
 ENEDMG_PARTICLE_ONE particle[48];
 float StartPos[4];
 float EndPos[4];
 float *pEndPos[4];
 ENEDMG_P_TAIL_WRK *pTailWrk;
 int Num;
 int flow;
 int cnt;
 float SpeedRate;
 int SuctionFlg;
 int Type;
 int EffectType;
 _ENEDMG_P_WRK *pNext;
};

typedef _ENEDMG_P_WRK ENEDMG_P_WRK;

typedef struct { 
 float StartPos[4];
 float *pEndPos[4];
 int ParticleNum;
 float DistPE;
 int SuctionFlg;
 int EffectType;
} ENE_DMG_PARTICLE_REQ;

typedef enum {
	IG_ENE_DMG_EFFECT_NORMAL = 0,
	IG_ENE_DMG_EFFECT_SC = 1,
	IG_ENE_DMG_EFFECT_SP = 2
} IG_ENE_DMG_EFFECT_TYPE;

typedef enum {
	EFF_LIGHT_COMEIN_ALPHA_CALC_DIRECTION = 0,
	EFF_LIGHT_COMEIN_ALPHA_CALC_DISTANCE = 1
} EFF_LIGHT_COMEIN_ALPHA_MODE;

typedef enum {
	EFF_LIGHT_COMEIN_TYPE_NORMAL = 0,
	EFF_LIGHT_COMEIN_TYPE_F607 = 1,
	EFF_LIGHT_COMEIN_TYPE_F609 = 2
} EFF_LIGHT_COMEIN_TYPE;

typedef enum {
	EFF_WATER_MOVE_RIVER0 = 0,
	EFF_WATER_MOVE_RIVER1 = 1,
	EFF_WATER_MOVE_LAKE0 = 2,
	EFF_WATER_MOVE_LAKE1 = 3,
	EFF_WATER_MOVE_RIVER_MINAKAMI0 = 4,
	EFF_WATER_MOVE_RIVER_MINAKAMI1 = 5,
	EFF_WATER_MOVE_LAKE_FUKAMICHI0 = 6,
	EFF_WATER_MOVE_LAKE_FUKAMICHI1 = 7
} EFF_WATER_FLOW_MOVE_TYPE;

typedef enum {
	EFF_WATER_MOVE_TYPE_A = 0,
	EFF_WATER_MOVE_TYPE_A_TO_B = 1,
	EFF_WATER_MOVE_TYPE_B = 2,
	EFF_WATER_MOVE_TYPE_B_TO_C = 3,
	EFF_WATER_MOVE_TYPE_C = 4,
	EFF_WATER_MOVE_TYPE_C_TO_A = 5
} EFF_WATER_FLOW_MOVE_STATUS;

typedef struct { 
 int on[10];
 int flg[10];
 u_int flow;
 u_int cnt;
 u_int in;
 u_int keep;
 u_int out;
 u_int max;
 float *vol;
} EFF_PARTSBLUR;

typedef struct { 
 float r;
 float add;
 float h;
 float x;
 float y;
 float z;
 float ox;
 float oy;
 float oz;
 float lng;
} EFFPOS;

typedef struct { 
 EFFPOS ep[17][17];
 short int use;
 short int pass;
 float r;
} EFFINFO;

typedef struct { 
 EFFPOS ep[289];
 short int use;
 short int pass;
 float r;
} EFFINFO2;

typedef struct { 
 void *pSgdTop;
 float TotalS;
 float TotalT;
 int MapBuffId;
 int AlphaMax;
 int Type;
} LIGHT_COME_IN_DATA;

typedef struct { 
 void *pHandle;
 int Id;
 float ScaleX;
 float ScaleY;
 int Alpha;
 int Time;
 int Counter;
 int FlameCounter;
} TOUROU_FREA_DATA;

typedef struct { 
 sceVu0IVECTOR Color;
 void *pSgdTop;
 int Id;
 int Time;
 int Counter;
} TOUROU_BASE_DATA;

typedef struct { 
 float Position[4];
 float CenterPos[4];
 void *adr;
 int furn_id;
 int Type;
 float RotY;
 float WavePos;
} EFFRDR_RSV;

typedef struct { 
 float ligdiff[4];
 float ligpos[4];
 float fpos[4];
 void *ebuf;
 float ligpow;
 float wavew;
 float rate;
 float szw;
 float szh;
 float sw;
 float sh;
 int furn_id;
 u_char lignum;
 u_char usefl;
 u_char sta;
 u_char pat;
} BURN_FIRE;

typedef struct { 
 float bpos[4];
 float brot[4];
 float lpos[4];
 float ww;
 float hh;
 int power;
 u_char r;
 u_char g;
 u_char b;
 u_char a;
 void *adr;
} SUNSHINE;

typedef struct { 
 int LifeTime;
 int AppearNumMax;
 int AppearNumMin;
 int Range;
 int SpeedXMax;
 int SpeedXMin;
 int SpeedYMax;
 int SpeedYMin;
 int SpeedZMax;
 int SpeedZMin;
 int Scale;
 int StartScale;
 int EndScale;
 int StartAlpha;
 int EndAlpha;
 int R;
 int G;
 int B;
 int AlphaBlendA;
 int AlphaBlendB;
 int AlphaBlendC;
 int AlphaBlendD;
 int AlphaBlendFIX;
 int FreaSize;
 int FreaR;
 int FreaG;
 int FreaB;
 int FreaAlpha;
 int ParticleFollowMove;
} TORCH2_PARAMETER;

typedef struct { 
 int Range1;
 int Range2;
 int StartScale1;
 int StartScale2;
 int Frame1;
 int Frame2;
 int EndFrame;
 int IntervalMax;
 int IntervalMin;
} TORCH2_BURST_PARAMETER;

typedef struct { 
 int LifeTimeMax;
 int LifeTimeMin;
 int AppearNumMax;
 int AppearNumMin;
 int SpeedXMax;
 int SpeedXMin;
 int SpeedYMax;
 int SpeedYMin;
 int SpeedZMax;
 int SpeedZMin;
 int AccelYMax;
 int AccelYMin;
 int BrakeRate;
 int StartScale;
 int EndScale;
 int StartAlpha;
 int EndAlpha;
 int R;
 int G;
 int B;
} TORCH2_SPARK_PARAMETER;

typedef struct { 
 PARTICLE particles[200];
 float BasePos[4];
 float WindMax[4];
 int head;
 int BurstCount;
 int BurstInterval;
 int WindCount;
 int WindInterval;
 float AlphaRate;
 short int max;
 short int disp;
 short int blife;
 short int Type;
 short int SeReqFlg;
} TORCH_CTRL;

typedef struct { 
 PARTICLE particles[50];
 int head;
 int cnt;
 short int max;
 short int disp;
 short int blife;
 short int Type;
 float BrakeRate;
 float WholeScale;
 float AlphaRate;
} SPARK_CTRL;

typedef struct { 
 unsigned char sta;
 unsigned char cnt;
 unsigned char no;
} PHOTO_EXPAND;

struct _SLIDE_ENCODE_HEADER { 
 int size;
 int type;
 int pad[2];
 int sizeRGB[3];
 int quality;
};

typedef _SLIDE_ENCODE_HEADER SLIDE_ENCODE_HEADER;

struct SUBJECT_WRK { 
 u_short sp_no;
 u_short no;
 short int type;
};

struct _PICTURE_SUBJECT { 
 short int type;
 short int obj_no;
};

typedef _PICTURE_SUBJECT PICTURE_SUBJECT;

typedef struct { 
 u_char adr_no;
 u_char chp_no;
 u_char status;
 PICTURE_SUBJECT maSubject[3];
 u_int score;
 sceCdCLOCK time;
 short int room;
} PICTURE_WRK;

typedef struct { 
 u_char pic_num;
 u_char protect_num;
 u_char sort_key;
 u_char skey_bak;
 PICTURE_WRK pic[16];
 u_int padding;
} PFILE_WRK;

struct _HINT_PHOTO_REQ { 
 int no;
};

typedef _HINT_PHOTO_REQ HINT_PHOTO_REQ;

typedef enum {
	PHOTO_TYPE_HINT = 0,
	PHOTO_TYPE_HINT3D = 1,
	PHOTO_TYPE_RARE = 2,
	PHOTO_TYPE_MAYU_CURSE = 3,
	PHOTO_TYPE_INVALID = 4
} _PHOTO_TYPE;

typedef _PHOTO_TYPE PHOTO_TYPE;

struct _PHOTO_WRK_DEF { 
 float pos[4];
 HINT_PHOTO_REQ hint_pict[5];
 int hint_cnt;
 int adr_no;
 PHOTO_TYPE type;
 int msg_name;
 int msg_type;
 int unlock_ghost;
};

typedef _PHOTO_WRK_DEF PHOTO_WRK_DEF;

typedef struct { 
 char *name;
 int id;
} MAPOBJ_EFF;

typedef struct { 
 float pow;
 int cycle;
} MAPOBJ_WIND;

typedef struct MAPPUT_OBJ;

struct MAPPUT_OBJ { 
 short int buff_id;
 short int first_id;
 int flg;
 float z_num;
 float z_offset;
 u_int *addr;
 void (*func)(/* parameters unknown */);
 int work;
 float mat[4][4];
 float *mp[4][4];
 GRA3DLIGHTDATA *lit;
 float c_pos[4];
 MAPPUT_OBJ *next;
 MAPPUT_OBJ *befo;
 MAPPUT_OBJ *next_draw;
};

typedef struct { 
 int labelID;
 char HitCheck;
 char PhotoAble;
 char Visible;
 char ActionType;
 short int Action;
 short int Weight;
 int Attribute;
} MAPSAVE_HEAD;

typedef struct { 
 int AreaID;
 MAPSAVE_HEAD *head;
} MAPSAVE_JMP_TBL;

typedef void (*LPFUNC_VIEWSCREENMATRIX)(/* parameters unknown */);
typedef void (*LPFUNC_VIEWCLIPMATRIX)(/* parameters unknown */);

typedef struct { 
 float fMinSpeed;
 float fMaxSpeed;
 int iMinFrame;
 int iMaxFrame;
 float fReelSpeed;
 int iSave;
} MAPSP_KAZ_DB;

typedef struct { 
 void *pHdl;
 float fRot;
 float *pfMstRot;
 int iGroupID;
 int iType;
 float vPos[4];
} MAPSP_KAZ_HEAD;

typedef struct { 
 float fSpeed;
 float fMstSpeed;
 float fNextSpeed;
 int iFrame;
 int iNextFrame;
} MAPSP_KAZ_SPEED;

typedef struct { 
 char magic[4];
 unsigned int f_size;
 int h_num;
 int dat_offset;
} PHF_FILE_HEAD;

typedef struct { 
 char name[24];
 unsigned int offset;
 unsigned int size;
} PACK_HEAD;

typedef struct { 
 int st_num;
 MB_OUT_RECT *dat;
} RD_REG_ST_DAT;

typedef struct { 
 RD_REG_ST_DAT StPtrList[14];
 char *RegDatPtr;
 int LabVecID;
 int LabVecNum;
 MB_OUT_RECT *LabVecPtr;
 int type_id;
 int type_search_num;
 MB_OUT_SECTION *type_search_p;
} RD_REG_HEAD;

typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef long int off_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;
typedef long int fd_mask;


struct _types_fd_set { 
 fd_mask fds_bits[1];
};


_types_fd_set _types_fd_set;

typedef _types_fd_set _types_fd_set;

typedef struct _SLL_CELL;

struct _SLL_CELL { 
 _SLL_CELL *pNext;
 char BodyStart;
};

typedef _SLL_CELL SLL_CELL;

typedef struct { 
 u_int ElemSize;
 u_int RegCount;
 SLL_CELL *pBeginCell;
 SLL_CELL *pEndCell;
} SINGLE_LINK_LIST;

typedef enum {
	LOAD_PRIORITY_DUMMY = 0,
	LOAD_PRIORITY_STREAM_HEADER = 1,
	LOAD_PRIORITY_MENU = 2,
	LOAD_PRIORITY_EVENT = 3,
	LOAD_PRIORITY_LOGO = 4,
	LOAD_PRIORITY_TITLE = 5,
	LOAD_PRIORITY_NORMAL = 6,
	LOAD_PRIORITY_PRELOAD_MDL = 7
} _enum_LOAD_PRIORITY;

typedef _enum_LOAD_PRIORITY enum_LOAD_PRIORITY;

typedef enum {
	dummySTREAM_PRIORITY_START = 10,
	STREAM_PRIORITY_SETUP = 11,
	STREAM_PRIORITY_TITLE = 12,
	STREAM_PRIORITY_SCENE = 13,
	STREAM_PRIORITY_CRYSTAL = 14,
	STREAM_PRIORITY_SUBTITLE = 15,
	STREAM_PRIORITY_AUTO_GHOST = 16,
	STREAM_PRIORITY_EVENT = 17,
	STREAM_PRIORITY_GHOSTEND = 18,
	STREAM_PRIORITY_GHOST = 19,
	STREAM_PRIORITY_MENU = 20,
	STREAM_PRIORITY_MAP = 21
} _STREAM_PRIORITY;

typedef _STREAM_PRIORITY STREAM_PRIORITY;

typedef enum {
	SND_GROUP_SOUND_EFFECT = 0,
	SND_GROUP_BGM = 1
} _SND_GROUP;

typedef _SND_GROUP SND_GROUP;

typedef struct { 
 int album_type;
 PFILE_WRK album_info;
} ALBUM_INFO;

typedef struct { 
 char step;
 char mode_step;
 char mode;
 char album_init_mode;
 char current_album;
 char photo_no;
 void *album_photo_addr[2];
} ALBUM_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
} ALBUM_DISP_CTRL;

typedef struct { 
 float start_pos;
 float end_pos;
 short int start_time;
 short int end_time;
 int anim_label;
} POS_ANIM_TBL;

typedef struct { 
 float start_scl;
 float end_scl;
 short int start_time;
 short int end_time;
} SCL_ANIM_TBL;

typedef struct { 
 short int start_alpha;
 short int end_alpha;
 short int start_time;
 short int end_time;
} ALPHA_ANIM_TBL;

typedef struct { 
 short int start_rgb;
 short int end_rgb;
 short int start_time;
 short int end_time;
} RGB_ANIM_TBL;

typedef struct { 
 float start_rot;
 float end_rot;
 short int start_time;
 short int end_time;
} ROT_ANIM_TBL;

typedef struct { 
 char cap_label;
 int x[5];
} CAP_GROUP;

typedef struct { 
 char btn_label;
 int x[5];
} BTN_GROUP;

typedef struct { 
 CAP_GROUP *cap_group;
 BTN_GROUP *btn_group;
} CAP_BTN_GROUP_CTRL;

typedef struct { 
 int year;
 int month;
 int day;
} DAY_INFO;

typedef struct { 
 int hour;
 int min;
 int sec;
} TIME_INFO;

typedef struct { 
 DAY_INFO day;
 TIME_INFO time;
} DATE_INFO;

typedef struct { 
 TIME_INFO play_time;
 int score;
 int total_score;
 int photo_num;
 int buster_num;
 int max_score;
} PLAY_DATA_CTRL;

typedef struct { 
 char step;
 char sub_step;
 char mode;
 char next_mode;
 char photo_flg;
 char menu_csr;
 char sort_csr;
 char sort_flg;
 char conf_csr;
} ALBUM_EDIT_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char menu_anim_step;
 char menu_anim_timer;
 char sort_anim_step;
 char sort_anim_timer;
 char copy_csr_timer;
 char del_csr_timer;
 char album_flare_timer;
} ALBUM_EDIT_DISP;

typedef struct { 
 char album_data;
 char copy_photo_no;
 char photo_no;
 char short_cut_flg;
} ALBUM_COPY_CTRL;

typedef int _iconVu0IVECTOR[4];
typedef float _iconVu0FVECTOR[4];

typedef struct { 
 unsigned char Head[4];
 short unsigned int Reserv1;
 short unsigned int OffsLF;
 unsigned int Reserv2;
 unsigned int TransRate;
 _iconVu0IVECTOR BgColor[4];
 _iconVu0FVECTOR LightDir[3];
 _iconVu0FVECTOR LightColor[3];
 _iconVu0FVECTOR Ambient;
 unsigned char TitleName[68];
 unsigned char FnameView[64];
 unsigned char FnameCopy[64];
 unsigned char FnameDel[64];
 unsigned char Reserve3[512];
} sceMcIconSys;

typedef struct { 
 unsigned char Resv2;
 unsigned char Sec;
 unsigned char Min;
 unsigned char Hour;
 unsigned char Day;
 unsigned char Month;
 short unsigned int Year;
} sceMcStDateTime;

typedef struct { 
 char step;
 char mc_step;
 char mode;
 char dir_check_cnt;
 char slot_csr;
 char album_sel_csr;
 char conf_csr;
 char load_file_cnt;
 char album_flg[5];
} ALBUM_LOAD_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char csr_anim_timer;
 int msg_id;
} ALBUM_LOAD_DISP;

typedef struct { 
 u_int mem_size;
 char step;
 void *mem_addr;
} ALBUM_MEM_CTRL;

typedef struct { 
 char step;
 char mc_step;
 char mode;
 char dir_check_cnt;
 char slot_csr;
 char album_sel_csr;
 char conf_csr;
 char save_file_cnt;
 char format_end_cnt;
} ALBUM_SAVE_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char csr_anim_timer;
 int msg_id;
} ALBUM_SAVE_DISP;

typedef struct { 
 char step;
 char album_type;
 char photo_no_csr;
 char disp_photo_num;
 char photo_flg;
} ALBUM_VIEW_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char csr_anim_timer;
} ALBUM_VIEW_DISP;

typedef struct { 
 int mode;
 int now_place;
 int next_place;
 int anm_alpha;
 int now_tex;
 int main_step;
 int anm_step;
 int save_step;
 int vib_time;
 int test_vib_flg;
 int window;
 int yn_csr;
 int cursor;
 int next_csr;
 int old_csr;
 int old_csr2;
} OPT_CTRL;

typedef struct { 
 char step;
 char csr;
 short int move_timer;
 int msg_id;
} AUTO_LOAD_CTRL;

struct RT_EV_WRK { 
 int time;
 int cnt;
 char type;
 int sptime;
 char sptype;
};

struct BONUS_SHOT_SCORE { 
 short int mScore[9];
 short int mSP;
 short int mComboNum;
};

struct SHOT_NAME_TEX { 
 unsigned char mPreTexNo;
 unsigned char mAfterTexNo;
};

struct MyPoint { 
 short int x;
};

typedef enum {
	CAMERA_SUB_FUNC_NONE = 0,
	CAMERA_SUB_FUNC_SLOW = 1,
	CAMERA_SUB_FUNC_STOP = 2,
	CAMERA_SUB_FUNC_VIEW = 3,
	CAMERA_SUB_FUNC_TRACE = 4,
	CAMERA_SUB_FUNC_SEAL = 5,
	CAMERA_SUB_FUNC_KOKU = 6,
	CAMERA_SUB_FUNC_ZERO = 7,
	CAMERA_SUB_FUNC_METSU = 8,
	CAMERA_SUB_FUNC_REN = 9,
	SUB_FUNC_NUM = 10
} _CAMERA_SUB_FUNC_ENUM;

typedef _CAMERA_SUB_FUNC_ENUM CAMERA_SUB_FUNC_ENUM;

struct _SUB_FUNC_SI_PARAM { 
 char EffTime;
 char SearchFlg;
};

typedef _SUB_FUNC_SI_PARAM SUB_FUNC_SI_PARAM;

struct _SUB_FUNC_SUB_PARAM { 
 char EffTime;
};

typedef _SUB_FUNC_SUB_PARAM SUB_FUNC_SUB_PARAM;

struct _SUB_FUNC_MAHI_PARAM { 
 char EffTime;
 char StopTime;
 char ActTime;
};

typedef _SUB_FUNC_MAHI_PARAM SUB_FUNC_MAHI_PARAM;

struct _SUB_FUNC_SEAL_PARAM { 
 char EffTime;
};

typedef _SUB_FUNC_SEAL_PARAM SUB_FUNC_SEAL_PARAM;

struct _SUB_FUNC_KOUGEKI_PARAM { 
 float NDmgMag;
 float SDmgMag;
 int SlowHTTime;
 float SlowHTRate;
};

typedef _SUB_FUNC_KOUGEKI_PARAM SUB_FUNC_KOUGEKI_PARAM;

struct NEQUIP_FUNC_DAT { 
 int need_stock_num;
 int pk2_no;
 unsigned char r;
 unsigned char g;
 unsigned char b;
 char bHitBack;
};

typedef struct { 
 int PlayerFollowON;
 int FreeCameraON;
 int CameraDebugON;
} DEBUG_CAMERA_MENU;

typedef struct { 
 char step;
 char menu_csr;
 char chapter_csr;
 char costume_csr;
 char mio_csr;
 char mayu_csr;
 char diff_csr;
 char clear_csr;
} CHAPTER_SEL_CTRL;

typedef enum {
	BBVI_MMM = 0,
	BBVI_PMM = 1,
	BBVI_MPM = 2,
	BBVI_PPM = 3,
	BBVI_MMP = 4,
	BBVI_PMP = 5,
	BBVI_MPP = 6,
	BBVI_PPP = 7,
	BBVI_CENTER = 8,
	NUM_GRA3DBOUNDINGBOXVERTEXINDEX = 9
} GRA3DBOUNDINGBOXVERTEXINDEX;

struct CHARBBDATA { 
 float vMin[4];
 float vMax[4];
 int iProxyId;
};

typedef struct { 
 int mode;
 int cnt;
 int flow;
 float bright;
 int flg;
} FILLAMENT_WRK;

struct _PHOTO_BONUS_SHOT { 
 unsigned int triple : 1;
 unsigned int dbl : 1;
 unsigned int core : 1;
 unsigned int close : 1;
 unsigned int SP : 1;
 unsigned int chance : 1;
};

typedef _PHOTO_BONUS_SHOT PHOTO_BONUS_SHOT;

typedef struct { 
 char pocketbook[42];
 char scrap[42];
 char oldbook[40];
 char photograph[36];
 char map[10];
} PLYR_FILE;

typedef struct { 
 int tex_id;
} FILE_DAT;

typedef struct { 
 char step;
 int stream_id;
} CLEAR_MENU_CTRL;

typedef struct { 
 int fade_timer;
 int bg_anim_timer;
 int moyou1_anim_timer;
 int moyou2_anim_timer;
} CLEAR_MENU_DISP;

typedef struct { 
 char step;
 char mode;
 char csr;
 char conf_csr;
} CLEAR_MENU_TOP_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char conf_anim_step;
 char conf_anim_timer;
} CLEAR_MENU_TOP_DISP;

typedef struct { 
 char row;
 char col;
} DCT_ROOT;

typedef struct { 
 char *file;
 unsigned char mask;
 int rack;
} BIT_FILE;

typedef struct { 
 int msg_id;
 int start_frame;
 int end_frame;
} MOVIE_TITLE_DAT;

typedef enum {
	SCN_DB_EFF_Z_DEP = 0,
	SCN_DB_EFF_MONO = 1,
	SCN_DB_EFF_SEPIA = 2,
	SCN_DB_EFF_FLG_ONLY = 2,
	SCN_DB_EFF_DITHER = 3,
	SCN_DB_EFF_BLUR_N = 4,
	SCN_DB_EFF_BLUR_B = 5,
	SCN_DB_EFF_BLUR_W = 6,
	SCN_DB_EFF_DEFORM = 7,
	SCN_DB_EFF_FOCUS = 8,
	SCN_DB_EFF_CONTRAST1 = 9,
	SCN_DB_EFF_CONTRAST2 = 10,
	SCN_DB_EFF_CONTRAST3 = 11,
	SCN_DB_EFF_NEGA = 12,
	SCN_DB_EFF_FADE_FRAME = 13,
	SCN_DB_EFF_CROSS_FADE = 14,
	SCN_DB_EFF_FADE_SCR = 15,
	SCN_DB_EFF_SHIBATA = 16,
	SCN_DB_EFF_MAX = 17
} SCN_DB_EFF_TYPE;

typedef struct { 
 u_char mode;
 u_char mdl_num;
 u_char anm_num;
 char cur_id;
 u_char sel_id;
 char mot_num;
 char mim_num;
 char bg_num;
 char ani_type;
 ANI_CODE **tbl;
 u_int type;
 u_int mdl_id;
 u_int anm_id;
 u_int mimloop;
 u_int motloop;
} MOTTEST_WORK;

typedef struct { 
 u_int r;
 u_int g;
 u_int b;
 u_int pad;
} MT_RGB_WORK;

typedef struct { 
 int x;
 int y;
 int z;
 u_int pad;
} MT_IVECTOR;

typedef enum {
	BUTTERFLY_MOVE_DEFAULT = 0,
	BUTTERFLY_MOVE_TO_TARGET = 1
} BUTTERFLY_MOVE_TYPE;

typedef struct { 
 int Speed;
 int TurnMax;
 int BureLeftRight;
 int BureUpDown;
 int InTime;
 int OutTime;
 int LockOnIntervalNear;
 int LockOnIntervalMiddle;
 int LockOnIntervalFar;
 int NearDistance;
 int FarDistance;
} BUTTERFLY_TARGET_PARAMETER;

typedef struct { 
 ENE_DMG_LARGE_HIT_PARAMETER Param;
 ENE_DMG_BLUR_CONTRAST_PARAMETER BlurContParam;
 int PadR2_Req;
 int FileNo;
 int SaveSwitch;
 int SaveSwitchBlur;
} DEBUG_LARGE_HIT;

typedef struct { 
 int Speed;
 int PosX;
 int PosY;
 int PosZ;
 int ParticleScaleX;
 int ParticleScaleY;
 int ParticleR;
 int ParticleG;
 int ParticleB;
 int ParticleAlpha;
 int TailDivision;
 int TailR;
 int TailG;
 int TailB;
 int TailAlpha;
 int TailWidth;
 int BouStartScaleX;
 int BouEndScaleX;
 int BouStartScaleY;
 int BouEndScaleY;
 int BouStartAlpha;
 int BouEndAlpha;
 int BouStartRot;
 int BouEndRot;
 int WakkaStartScaleX;
 int WakkaEndScaleX;
 int WakkaStartScaleY;
 int WakkaEndScaleY;
 int WakkaStartAlpha;
 int WakkaEndAlpha;
 int AlphaBlendA;
 int AlphaBlendB;
 int AlphaBlendC;
 int AlphaBlendD;
 int AlphaBlendFIX;
 int SpreadTime;
 int StartSpeed;
 int AnimaStartTimeMin;
 int AnimaStartTimeWidth;
 int DispPositionFlg;
 int SaveSwitch;
} DEBUG_SUIKOMI;

typedef struct { 
 int WaveSpeed;
 int WaveRate;
 int Alpha;
 int R;
 int G;
 int B;
 int SaveSwitch;
} DEBUG_PARTS_DEFORM;

typedef struct { 
 int TypeCursor;
 int StartFrame;
 int InFrame;
 int KeepFrame;
 int OutFrame;
 int ParticleFrame;
 int WaveSpeed;
 int WaveRate;
 int Alpha;
 int R;
 int G;
 int B;
 int SaveSwitch;
} DEBUG_ZERO_PARTS_DEFORM;

typedef struct { 
 int ScaleX_00;
 int ScaleY_00;
 int Alpha_00;
 float fAlpha_00;
 int WaveSpeed;
 float fWaveSpeed;
 int WaveRate;
 float fWaveRate;
 int ScaleX_01;
 int ScaleY_01;
 int Alpha_01;
 float fAlpha_01;
 int SaveSwitch;
 int DeadSaveSwitch;
} DEBUG_ENEMY_PARTS_DEFORM;

typedef struct { 
 int LifeTime;
 int MoveInterval;
 int InOutTime;
 int SpeedRate;
 int Alpha;
 int FreaSizeW;
 int FreaSizeH;
 int FreaAlphaMax;
 int FreaAlphaMin;
 int BirthRate;
 int BirthMax;
 int Request;
 int SaveSwitch;
} DEBUG_BUTTERFLY_BODY;

typedef struct { 
 int LifeTime;
 int VelocityMin;
 int VelocityMax;
 int DirectionX;
 int DirectionY;
 int SpreadX;
 int SpreadY;
 int AccelY;
 int NumMin;
 int NumMax;
 int SizeW;
 int SizeH;
 int Alpha;
 int OutputRate;
 int SaveSwitch;
} DEBUG_BUTTERFLY_PARTICLE;

typedef struct { 
 BUTTERFLY_TARGET_PARAMETER Param;
 int FileNo;
 int SaveSwitch;
} DEBUG_BUTTERFLY_TARGET;

typedef struct { 
 int RainNum;
 int ColorTopR;
 int ColorTopG;
 int ColorTopB;
 int ColorTopA;
 int ColorBottomR;
 int ColorBottomG;
 int ColorBottomB;
 int ColorBottomA;
 int SpeedXMax;
 int SpeedXMin;
 int SpeedYMax;
 int SpeedYMin;
 int SpeedZMax;
 int SpeedZMin;
 int Length;
 int SaveSwitch;
} DEBUG_RAIN;

typedef struct { 
 int SprayNum;
 int LifeTime;
 int StartScale;
 int LastScaleMax;
 int LastScaleMin;
 int AppearNumMin;
 int AppearNumMax;
 int R;
 int G;
 int B;
 int Alpha;
 int SpeedXMax;
 int SpeedXMin;
 int SpeedYMax;
 int SpeedYMin;
 int SpeedZMax;
 int SpeedZMin;
 int SaveSwitch;
} DEBUG_SPRAY;

typedef struct { 
 int Frequency;
 int ScaleX;
 int ScaleY;
 int R;
 int G;
 int B;
 int Alpha;
 int SpeedXMax;
 int SpeedXMin;
 int SpeedYMax;
 int SpeedYMin;
 int SpeedZMax;
 int SpeedZMin;
 int Gravity;
 int GroundHeight;
 int SaveSwitch;
} DEBUG_DROP_OF_WATER;

typedef struct { 
 TORCH2_PARAMETER Param;
 int FileNo;
 int SaveSwitch;
} DEBUG_TORCH;

typedef struct { 
 TORCH2_BURST_PARAMETER Param;
 int FileNo;
 int SaveSwitch;
} DEBUG_TORCH_BURST;

typedef struct { 
 TORCH2_SPARK_PARAMETER Param;
 int FileNo;
 int SaveSwitch;
} DEBUG_TORCH_SPARK;

typedef struct { 
 int InTime;
 int KeepTime;
 int OutTime;
 int PowerMax;
 int PowerMin;
 int AngleMax;
 int AngleMin;
 int IntervalMax;
 int IntervalMin;
 int SaveSwitch;
} DEBUG_TORCH_WIND;

typedef struct { 
 int LifeTimeMax;
 int LifeTimeMin;
 int AppearNumMax;
 int AppearNumMin;
 int OffsetX;
 int OffsetY;
 int OffsetZ;
 int SpeedXMax;
 int SpeedXMin;
 int SpeedYMax;
 int SpeedYMin;
 int SpeedZMax;
 int SpeedZMin;
 int AccelYMax;
 int AccelYMin;
 int BrakeRate;
 int StartScale;
 int EndScale;
 int StartAlpha;
 int EndAlpha;
 int R;
 int G;
 int B;
 int AlphaBlendA;
 int AlphaBlendB;
 int AlphaBlendC;
 int AlphaBlendD;
 int AlphaBlendFIX;
 int SaveSwitch;
} DEBUG_CLOUD_OF_DUST;

typedef struct { 
 int ScrollU;
 int ScrollV;
 int AlphaMax;
 int Color00R;
 int Color00G;
 int Color00B;
 int Color01R;
 int Color01G;
 int Color01B;
 int Color02R;
 int Color02G;
 int Color02B;
 int Color03R;
 int Color03G;
 int Color03B;
 int Color04R;
 int Color04G;
 int Color04B;
 int Color05R;
 int Color05G;
 int Color05B;
 int Color06R;
 int Color06G;
 int Color06B;
 int Color07R;
 int Color07G;
 int Color07B;
 int Color08R;
 int Color08G;
 int Color08B;
 int Color09R;
 int Color09G;
 int Color09B;
 int Color10R;
 int Color10G;
 int Color10B;
 int Color11R;
 int Color11G;
 int Color11B;
 int SaveSwitch;
} DEBUG_LIGHT_COME_IN;

typedef struct { 
 int AlphaMax;
 int AlphaMin;
 int CycleFrame;
 int R;
 int G;
 int B;
 int DoubleDispFlg;
 int ScaleX;
 int ScaleY;
 int OffsetX;
 int OffsetY;
 int OffsetZ;
 int SaveSwitch;
} DEBUG_TORCH_BIGFREA;

typedef struct { 
 int Radius;
 int Speed;
 int WaveYSize;
 int WaveYSpeed;
 int OffsetX;
 int OffsetY;
 int OffsetZ;
 int SaveSwitch;
} DEBUG_TORCH_MOVE;

typedef struct { 
 HAZE_PARAMETER Param;
 int AllSpeedCall;
 int Request;
 int RequestOld;
 int SaveSwitch;
 void *pEffRet;
} DEBUG_HAZE;

typedef struct { 
 int ParticleMax;
 int Area;
 int Height;
 int AlphaInTime;
 int AlphaOutTime;
 int SpeedX;
 int SpeedY;
 int SpeedZ;
 int MoveRange;
 int R;
 int G;
 int B;
 int Alpha;
 int SaveSwitch;
 int Request;
 int RequestOld;
} DEBUG_LEAVES_FALL;

typedef struct { 
 int ScrollU[2];
 int ScrollV[2];
 int Alpha[2];
 int SaveSwitch;
} DEBUG_RIVER;

typedef struct { 
 int ScrollU_A[2];
 int ScrollV_A[2];
 int ScrollU_B[2];
 int ScrollV_B[2];
 int ScrollU_C[2];
 int ScrollV_C[2];
 int Frame_A;
 int Frame_B;
 int Frame_C;
 int Alpha[2];
 int SaveSwitch;
} DEBUG_LAKE;

typedef struct { 
 int OffsetX;
 int OffsetY;
 int OffsetZ;
 int PolygonScale;
 int StartScale;
 int EndScale;
 int R;
 int G;
 int B;
 int AlphaInTime;
 int AlphaKeepTime;
 int AlphaOutTime;
 int AlphaMaxCenter;
 int AlphaMaxEdge;
 int AlphaBlendA;
 int AlphaBlendB;
 int AlphaBlendC;
 int AlphaBlendD;
 int AlphaBlendFIX;
 int Request;
 int SaveSwitch;
} DEBUG_CAMERA_FLASH;

typedef struct { 
 int ColorR;
 int ColorG;
 int ColorB;
 int FlameScale;
 int FreaOffsetY;
 int FreaScale;
 int FreaAlphaMax;
 int FreaAlphaMin;
 int Request;
 int RequestOld;
 int SaveSwitch;
} DEBUG_MANY_CANDLE;

typedef struct { 
 int ScaleXMax;
 int ScaleXMin;
 int ScaleYMax;
 int ScaleYMin;
 int AlphaMax;
 int AlphaMin;
 int Time;
 int ColorR;
 int ColorG;
 int ColorB;
 int FlameAlpha;
 int FlameOffsetY;
 int SaveSwitch;
} DEBUG_TOUROU_FREA;

typedef struct { 
 int ColorMaxR;
 int ColorMaxG;
 int ColorMaxB;
 int ColorMinR;
 int ColorMinG;
 int ColorMinB;
 int Alpha;
 int TimeMax;
 int TimeMin;
 int SaveSwitch;
} DEBUG_TOUROU_BASE;

typedef struct { 
 int Item0_ScaleMax;
 int Item0_ScaleMin;
 int Item0_ScaleTime;
 int Item0_AlphaMax;
 int Item0_AlphaMin;
 int Item0_AlphaTime;
 int Item0_R;
 int Item0_G;
 int Item0_B;
 int Item1_ScaleMax;
 int Item1_ScaleMin;
 int Item1_ScaleTime;
 int Item1_AlphaMax;
 int Item1_AlphaMin;
 int Item1_AlphaTime;
 int Item1_R;
 int Item1_G;
 int Item1_B;
 int TotalTime;
 int CounterReset;
 int SaveSwitch;
} DEBUG_ITEM_EFFECT2;

typedef struct { 
 int DitherAlphaMax;
 int DitherAlphaMin;
 int DitherIntervalMax;
 int DitherIntervalMin;
 int DitherSpeed;
 int DitherPatternAlpha;
 int DitherPatternColor;
 int IntervalMax;
 int IntervalMin;
 int DispTimeMax;
 int DispTimeMin;
 int ShakeX;
 int ShakeY;
 int ScaleMin;
 int ScaleMax;
 int AlphaRate;
 int AlphaInMax;
 int AlphaInMin;
 int AlphaKeepMax;
 int AlphaKeepMin;
 int AlphaOutMax;
 int AlphaOutMin;
 int Request;
 int SaveSwitch;
} DEBUG_SCREEN_SAVER;

typedef struct { 
 int OffsetX;
 int OffsetY;
 int OffsetZ;
 int ColorR;
 int ColorG;
 int ColorB;
 int Alpha;
 int ScaleX;
 int ScaleY;
 int SaveSwitch;
} DEBUG_DOOR_SEAL_SOUL;

typedef struct { 
 int SoulInTime;
 int SoulKeepTime;
 int DeformInTime;
 int DeformKeepTime;
 int SoulOutTime;
 int DeformOutTime;
 int OffsetX;
 int OffsetY;
 int OffsetZ;
 int SoulColorR;
 int SoulColorG;
 int SoulColorB;
 int SoulAlpha;
 int SoulScaleX;
 int SoulScaleY;
 int DeformScaleX;
 int DeformScaleY;
 int DeformR;
 int DeformG;
 int DeformB;
 int DeformSpeed;
 int DeformWaveRate;
 int DeformAlphaMax;
 int BlurScaleX;
 int BlurScaleY;
 int BlurAlphaMax;
 int DitherType;
 int DitherAlpha;
 int DitherSpeed;
 int DitherPatternAlpha;
 int DitherPatternColor;
 int PadR2_Req;
 int Request;
 int SaveSwitch;
} DEBUG_DOOR_SEAL_DISAPPEAR;

typedef struct { 
 int ParticleNum;
 int Speed;
 int Alpha;
 int ParticleScaleX;
 int ParticleScaleY;
 int SpreadTime;
 int SlowColorR;
 int SlowColorG;
 int SlowColorB;
 int ParalyzeColorR;
 int ParalyzeColorG;
 int ParalyzeColorB;
 int ViewColorR;
 int ViewColorG;
 int ViewColorB;
 int TsuiColorR;
 int TsuiColorG;
 int TsuiColorB;
 int FuuColorR;
 int FuuColorG;
 int FuuColorB;
 int Request;
 int SaveSwitch;
} DEBUG_EFFECT_END_PARTICLE;

typedef struct { 
 SCREEN_EFFECT_PARAMETER ScreenParam;
 int PartsBlurSwitch;
 int PartsBlurAlpha;
 int PartsDeformPage;
 int PartsDeformPage1Cursor;
 int PartsDeformPage2Cursor;
 int PartsDeformPage3Cursor;
 int EnemySwitch;
 int EnemyAlpha;
 int EnemySize;
 int FileNo;
 int SaveSwitch;
 int FinderFileNo;
 int FinderSaveSwitch;
 int EnemyDeadFileNo;
 int EnemyDeadSaveSwitch;
 int RainRequest;
 int RainRequestOld;
 int RainSprayRequest;
 int RainSprayRequestOld;
 int DropOfWaterRequest;
 int DropOfWaterRequestOld;
 int TorchRequest;
 int TorchRequestOld;
 int SparkRequest;
 int WindRequest;
 int DustWalkRequest;
 int DustRunRequest;
 int EffectDisp;
 int ScreenEffectNo;
 int ScreenEffectApply;
 DEBUG_LARGE_HIT SmallHit;
 DEBUG_LARGE_HIT LargeHit;
 DEBUG_LARGE_HIT LargeHitSP_A;
 DEBUG_LARGE_HIT LargeHitSP_B;
 DEBUG_LARGE_HIT SlowHit_A;
 DEBUG_LARGE_HIT SlowHit_B;
 DEBUG_LARGE_HIT ZeroHit_A;
 DEBUG_LARGE_HIT ZeroHit_B;
 DEBUG_LARGE_HIT ZeroHitSC_A;
 DEBUG_LARGE_HIT ZeroHitSC_B;
 DEBUG_LARGE_HIT ZeroHitSP_A;
 DEBUG_LARGE_HIT ZeroHitSP_B;
 DEBUG_LARGE_HIT KokuHit_A;
 DEBUG_LARGE_HIT KokuHit_B;
 DEBUG_LARGE_HIT KokuHitSC_A;
 DEBUG_LARGE_HIT KokuHitSC_B;
 DEBUG_LARGE_HIT KokuHitSP_A;
 DEBUG_LARGE_HIT KokuHitSP_B;
 DEBUG_LARGE_HIT MetsuHit_A;
 DEBUG_LARGE_HIT MetsuHit_B;
 DEBUG_LARGE_HIT MetsuHitSC_A;
 DEBUG_LARGE_HIT MetsuHitSC_B;
 DEBUG_LARGE_HIT MetsuHitSP_A;
 DEBUG_LARGE_HIT MetsuHitSP_B;
 DEBUG_LARGE_HIT RenHit_A;
 DEBUG_LARGE_HIT RenHit_B;
 DEBUG_LARGE_HIT RenHitSC_A;
 DEBUG_LARGE_HIT RenHitSC_B;
 DEBUG_LARGE_HIT RenHitSP_A;
 DEBUG_LARGE_HIT RenHitSP_B;
 DEBUG_LARGE_HIT ParalyzeHit_A;
 DEBUG_LARGE_HIT ParalyzeHit_B;
 DEBUG_LARGE_HIT ViewHit_A;
 DEBUG_LARGE_HIT ViewHit_B;
 DEBUG_LARGE_HIT TsuiHit_A;
 DEBUG_LARGE_HIT TsuiHit_B;
 DEBUG_LARGE_HIT FuuHit_A;
 DEBUG_LARGE_HIT FuuHit_B;
 DEBUG_SUIKOMI Suikomi;
 DEBUG_PARTS_DEFORM PartsDeform;
 DEBUG_ZERO_PARTS_DEFORM ZeroPDeform;
 DEBUG_ZERO_PARTS_DEFORM SlowPDeform;
 DEBUG_ZERO_PARTS_DEFORM KokuPDeform;
 DEBUG_ZERO_PARTS_DEFORM MetsuPDeform;
 DEBUG_ZERO_PARTS_DEFORM RenPDeform;
 DEBUG_ZERO_PARTS_DEFORM ParalyzePDeform;
 DEBUG_ZERO_PARTS_DEFORM ViewPDeform;
 DEBUG_ZERO_PARTS_DEFORM TsuiPDeform;
 DEBUG_ZERO_PARTS_DEFORM FuuPDeform;
 DEBUG_ENEMY_PARTS_DEFORM EnemyPDeform;
 DEBUG_BUTTERFLY_BODY ButterflyBody;
 DEBUG_BUTTERFLY_PARTICLE ButterflyParticle;
 DEBUG_BUTTERFLY_TARGET ButterflyTarget;
 DEBUG_RAIN RainParam;
 DEBUG_SPRAY SprayParam;
 DEBUG_SPRAY SprayParam2;
 DEBUG_DROP_OF_WATER DropOfWater;
 DEBUG_TORCH Torch2;
 DEBUG_TORCH_BURST TorchBurst;
 DEBUG_TORCH_SPARK TorchSpark;
 DEBUG_TORCH_WIND TorchWind;
 DEBUG_CLOUD_OF_DUST CloudOfDustRun;
 DEBUG_LIGHT_COME_IN LightComeIn;
 DEBUG_TORCH_BIGFREA TorchBigFrea;
 DEBUG_TORCH_MOVE TorchMove;
 DEBUG_HAZE Haze;
 DEBUG_HAZE KusabiHaze;
 DEBUG_HAZE SaeHaze;
 DEBUG_LEAVES_FALL LeavesFall;
 DEBUG_RIVER River;
 DEBUG_LAKE Lake;
 DEBUG_RIVER MinaRiver;
 DEBUG_LAKE FukaLake;
 DEBUG_CAMERA_FLASH CameraFlash;
 DEBUG_CAMERA_FLASH CameraFlashTex;
 DEBUG_MANY_CANDLE ManyCandle;
 DEBUG_TOUROU_FREA TourouFrea;
 DEBUG_TOUROU_BASE TourouBase;
 DEBUG_ITEM_EFFECT2 ItemEffect2;
 DEBUG_SCREEN_SAVER ScreenSaver;
 DEBUG_DOOR_SEAL_SOUL DoorSealSoul;
 DEBUG_DOOR_SEAL_DISAPPEAR DoorSealDisappear;
 DEBUG_EFFECT_END_PARTICLE EffectEndParticle;
} DEBUG_EFFECT_MENU;

typedef enum {
	DT_HOST0 = 0,
	NUM_DEVICETYPE = 1
} DEVICETYPE;

typedef enum {
	PADCMD_UP = 0,
	PADCMD_DOWN = 1,
	PADCMD_LEFT = 2,
	PADCMD_RIGHT = 3,
	PADCMD_SANKAKU = 4,
	PADCMD_BATU = 5,
	PADCMD_SIKAKU = 6,
	PADCMD_MARU = 7,
	PADCMD_L3 = 8,
	PADCMD_R3 = 9,
	PADCMD_SELECT = 10,
	PADCMD_R1 = 11,
	PADCMD_R2 = 12,
	PADCMD_L1 = 13,
	PADCMD_L2 = 14,
	PADCMD_START = 15,
	NUM_PADCMD = 16
} MAPVIEWER_PADCOMMAND;

typedef enum {
	PHASE_EXPLORER = 0,
	PHASE_CAMERACONTROL = 1,
	PHASE_EDITCONTROL = 2,
	NUM_PHASE = 3
} PHASE;

typedef enum {
	CMD_LOADDATA = 0,
	NUM_COMMAND = 1
} COMMAND;

struct LOADDATA { 
 char strFileName[256];
};

struct CONFIG { 
 int bDisplayCameraPosition;
};

typedef struct { 
 int item_id;
 int have_num;
} PLYR_ITEM;

typedef struct { 
 int item_id;
 u_char type;
 u_char get_max;
 u_char def_use_num;
 int value;
 char item_name[32];
} ITEM_DAT;

typedef struct { 
 u_char lock_id;
} DOOR_CTRL;

typedef struct { 
 int msg_id;
 int sound_id;
} DOOR_LOCK_INFO;

typedef struct { 
 int set_event_id;
 int change_id;
 u_char change_state;
} EV_CHANGE_CTRL;

typedef struct { 
 int msg_id;
 int sound_id;
} DOOR_LOCK_STATE_CTRL;

typedef struct { 
 float x;
 float y;
 int ghost_seal_door_label;
 int room_label1;
 int room_label2;
 int door_type_label;
} MAP_DOOR_POINT;

typedef struct { 
 unsigned int data;
 unsigned int addr;
 unsigned int size;
 unsigned int mode;
} sceSifDmaData;

typedef struct { 
 unsigned int psize;
 unsigned int dsize;
 unsigned int daddr;
 unsigned int fcode;
 unsigned int opt;
} sceSifCmdHdr;


typedef void (*sceSifCmdHandler)(/* parameters unknown */);

typedef void (*sceSifCmdHandler)(/* parameters unknown */);


typedef struct { 
 sceSifCmdHandler func;
 void *data;
 void *gp;
} sceSifCmdData;


typedef struct { 
 sceSifCmdHandler func;
 void *data;
 void *gp;
} sceSifCmdData;


typedef struct { 
 sceSifCmdHdr chdr;
 void *newaddr;
} sceSifCmdCSData;


typedef struct { 
 sceSifCmdHdr chdr;
 void *newaddr;
} sceSifCmdCSData;

typedef struct { 
 sceSifCmdHdr chdr;
 int rno;
 unsigned int value;
} sceSifCmdSRData;

typedef struct { 
 sceSifCmdHdr chdr;
 int size;
 int flag;
 char arg[80];
} sceSifCmdResetData;

typedef enum {
	PS2E_INTERRUPT = 0,
	PS2E_TLB_MOD = 1,
	PS2E_TLB_LOAD_OR_IFETCH = 2,
	PS2E_TLB_STORE = 3,
	PS2E_ADDRESS_ERROR_LOAD_OR_IFETCH = 4,
	PS2E_ADDRESS_ERROR_STORE = 5,
	PS2E_BUS_ERROR_IFETCH = 6,
	PS2E_BUS_ERROR_DATAREF_LOAD_OR_STORE = 7,
	PS2E_SYSCALL = 8,
	PS2E_BREAKPOINT = 9,
	PS2E_RESERVED_INSTRUCTION = 10,
	PS2E_COP_UNUSABLE = 11,
	PS2E_ARITHMETIC_OVERFLOW = 12,
	PS2E_TRAP = 13,
	NUM_PS2EXCEPTION = 14
} PS2EXCEPTION;

struct IOPEXCEPTIONCREATIONDATA { 
 char *pModuleName;
};


struct PROFILEFUNCTION { 
 void *pThisFunction;
 void *pCallSite;
};


PROFILEFUNCTION PROFILEFUNCTION;

typedef enum {
	modeRead = 0,
	modeWrite = 1,
	modeCreate = 4096,
	RWMASK = 3,
	WRITEMASK = 4096
} OpenFlags;

typedef enum {
	begin = 0,
	current = 1,
	end = 2
} SeekPosition;

typedef struct { 
 int disp_flg;
 int monochro_mode;
 int stop_flg;
 int change_bank;
 int blur_off;
 int dith_off;
 int filament_off;
} EFF_WRK;

typedef enum {
	BUTTERFLY_TARGET_PARAMETER_TYPE00 = 0,
	BUTTERFLY_TARGET_PARAMETER_TYPE01 = 1,
	BUTTERFLY_TARGET_PARAMETER_TYPE02 = 2,
	BUTTERFLY_TARGET_PARAMETER_TYPE03 = 3,
	BUTTERFLY_TARGET_PARAMETER_TYPE04 = 4,
	BUTTERFLY_TARGET_PARAMETER_NUM = 5
} BUTTERFLY_TARGET_PARAMETER_TYPE;

struct _BUTTERFLY_DISP { 
 float Position[4];
 float OldPosition[4];
 float Target[4];
 float Rot[4];
 float Velocity[4];
 ANI_CTRL AniCtrl;
 int LifeTime;
 int MoveInterval;
 float AlphaRate;
 int MoveType;
 int InTime;
 int OutTime;
 int Count;
 int Type;
 int Id;
};

typedef _BUTTERFLY_DISP BUTTERFLY_DISP;

typedef struct { 
 SINGLE_LINK_LIST ButterflyList;
} BUTTERFLY_DISP_CTRL;

struct _BUTTERFLY_PARTICLE { 
 float Position[4];
 float Velocity[4];
 float Acceleration[4];
 int LifeTime;
 float AlphaRate;
};

typedef _BUTTERFLY_PARTICLE BUTTERFLY_PARTICLE;

typedef struct { 
 SINGLE_LINK_LIST ParticleList;
} BUTTERFLY_PARTICLE_CTRL;

typedef struct { 
 float EneMposP0[4];
 ENE_DMG_BLUR_CONTRAST_PARAMETER *pBlurContrast;
 int Flow;
 int EneWrkNo;
 int HitEffecType;
 int Counter;
 int ContrastColor;
 int ContrastAlpha;
 int BlurScale;
 int BlurRot;
 u_char BlurAlpha;
} ENE_HIT_EFFECT_CTRL;

typedef struct { 
 float wmtx[4][4][12];
 float opos[4][12];
} TAIL_DMG2_DAT;

typedef struct { 
 int sw;
 int num;
 int top;
 int dummy;
} SWORD_LINE;

typedef struct { 
 float MposP0[4];
 u_char flow;
 u_char alp;
 u_char chance;
 int scl;
 int rot;
 int cntcol;
 int cntalp;
 u_int cnt;
 float x;
 float y;
 float dist;
 int almx;
 int scmx;
 int rtmx;
 int ccmx;
 int camx;
 int DmgType;
} ENE_DMG_EFF;

typedef struct { 
 float pr11;
 float pr12;
 float pr21;
 float pr22;
} PDEFORM_PARA;

typedef struct { 
 void *pSgdTop;
 float TotalS;
 float TotalT;
 int Id;
 int MoveType;
 int Count;
 int MoveDataNo;
} WATER_FLOW_DATA;

typedef struct { 
 void *pSgdTop;
 int Id;
 int AlphaStart;
 int AlphaEnd;
 int Time;
 int Counter;
} MODEL_ALPHA_CAHNGE_DATA;

typedef struct { 
 u_int type;
 u_char rgba[4];
 float lscl;
 float tscl;
} EFRENZ;

typedef struct { 
 SINGLE_LINK_LIST LightList;
} LIGHT_COME_IN_CTRL;

typedef enum {
	CANDLE_FLAME_INIT = 0,
	CANDLE_FLAME_START1 = 1,
	CANDLE_FLAME_START2 = 2,
	CANDLE_FLAME_NORMAL = 3,
	CANDLE_FLAME_YURAMEKI = 4,
	CANDLE_FLAME_FUKKI = 5
} CANDLE_FLAME_FLOW;

typedef enum {
	CANDLE_LOAD_IDLE = 0,
	CANDLE_LOAD_WAIT = 1,
	CANDLE_LOAD_EXEC = 2,
	CANDLE_LOAD_CANCEL = 3
} MANY_CANDLE_LOAD_CTRL_STATUS;

typedef struct { 
 float Offset[4];
 u_int *pLoadBuf;
 int Status;
 int LoadId;
 int PackNum;
 void *pEffRet[5];
} MANY_CANDLE_LOAD_CTRL;

typedef struct { 
 char FileId[4];
 int DataNum;
 int Pad[2];
} MANY_CANDLE_POS_DATA_HEADER;

typedef enum {
	DOOR_SEAL_STATUS_IDLE = 0,
	DOOR_SEAL_STATUS_PRELOAD_WAIT = 1,
	DOOR_SEAL_STATUS_SOUL_IN = 2,
	DOOR_SEAL_STATUS_SOUL_KEEP = 3,
	DOOR_SEAL_STATUS_DEFORM_IN = 4,
	DOOR_SEAL_STATUS_DEFORM_KEEP = 5,
	DOOR_SEAL_STATUS_SOUL_OUT = 6,
	DOOR_SEAL_STATUS_DEFORM_OUT = 7
} DOOR_SEAL_DISAPPEAR_STATUS;

typedef struct { 
 int Counter;
 int Status;
 float AlphaRate;
 EFFECT_CONT EffectCont;
 EFFECT_CONT EffectContBlur;
 float BasePos[4];
 float DeformSpeed;
 float DeformRate;
 float DeformAlphaRate;
 int StreamId;
} DOOR_SEAL_DISAPPEAR_CTRL;

typedef struct { 
 float Position[4];
 int Flow;
 float Rot;
 float fCounter;
 int ScaleCounter0;
 int ScaleCounter1;
 int AlphaCounter0;
 int AlphaCounter1;
 int ItemNo;
 int Type;
} ITEM_EFFECT_DATA;

typedef struct { 
 float LightningDirection[4];
 float ThunderPosition[4];
 int LightningStatus;
 int LightningTime;
 int LightningFlg;
 int ThunderStatus;
 int ThunderTime;
} THUNDER_LIGHT_CTRL;

typedef struct { 
 float Position[4];
 float Target[4];
 float Fov;
 float Roll;
} DOOR_SEAL_CAMERA_BACKUP;

typedef float RectVECTOR[4][4];

typedef struct { 
 float Position[4];
 float Velocity[4];
 float Length;
 float RotX;
 float RotY;
} EFFECT_RAIN_PARTICLE;

typedef struct { 
 sceVu0IVECTOR Color0;
 sceVu0IVECTOR Color1;
 float Offset[4];
 int ParticleNum;
 EFFECT_RAIN_PARTICLE *pParticle;
} EFFECT_RAIN_CTRL;

typedef struct { 
 float Position[4];
 float Velocity[4];
 int LifeTime;
 float StartScale;
 float LastScale;
} EFFECT_SPRAY_PARTICLE;

typedef struct { 
 RectVECTOR Rect;
 int Rate;
} SPRAY_APPEAR_DATA;

typedef struct { 
 float Offset[4];
 SPRAY_APPEAR_DATA *pAppearData;
 int RectNum;
 int ParticleNum;
 int R;
 int G;
 int B;
 int Alpha;
 float SpeedXMax;
 float SpeedXMin;
 float SpeedYMax;
 float SpeedYMin;
 float SpeedZMax;
 float SpeedZMin;
 int AppearNumMin;
 int AppearNumMax;
 int InitLifeTime;
 float StartScale;
 float LastScaleMax;
 float LastScaleMin;
 EFFECT_SPRAY_PARTICLE *pParticle;
} EFFECT_SPRAY_CTRL;

typedef struct { 
 float Max[4];
 float Min[4];
} RAIN_HIT_BOX;

struct _EFFECT_DROP_PARTICLE { 
 float Position[4];
 float Velocity[4];
 float Gravity;
 float GroundHeight;
};

typedef _EFFECT_DROP_PARTICLE EFFECT_DROP_PARTICLE;

typedef struct { 
 float Offset[4];
 SINGLE_LINK_LIST *pList;
 float *pAppearPos[4];
 int AppearPosNum;
 float ScaleX;
 float ScaleY;
 int R;
 int G;
 int B;
 int Alpha;
} EFFECT_DROP_CTRL;

typedef enum {
	MCD_HOKAN_LINE = 0,
	MCD_HOKAN_BEZIER = 1,
	MCD_HOKAN_HERMITE = 2,
	MCD_HOKAN_NUM = 3
} MAP_CAM_HOKAN_TYPE;

typedef enum {
	MAP_CAM_MODE_NORMAL = 0,
	MAP_CAM_MODE_FINDER_IN = 1,
	MAP_CAM_MODE_FINDER = 2,
	MAP_CAM_MODE_APPROACH = 3
} MAP_CAM_MODE;

typedef enum {
	PLYR_SHOULDER_CAMERA_TYPE_DEFAULT = 0,
	PLYR_SHOULDER_CAMERA_TYPE_TWINS = 1,
	PLYR_SHOULDER_CAMERA_TYPE_ONIKODOMO = 2
} PLYR_SHOULDER_CAMERA_TYPE;

typedef struct { 
 int mode;
 int crossfade;
 float cnt;
 int flow;
 float offy;
 float dist;
 float offy2;
 float ipos[4];
 float pmv[4];
 float npos[4];
 float imv[4];
 float inpos[4];
 float trot[4];
 float NeckInitVector[4];
 float PosInitVector[4];
 ENE_WRK *pEneWrk;
} APPROACH_CAMERA;

typedef enum {
	SCREEN_SAVER_LOAD_IDLE = 0,
	SCREEN_SAVER_LOAD_WAIT = 1,
	SCREEN_SAVER_LOAD_END = 2
} SCREEN_SAVER_LOAD_STATUS;

struct EFF_BLUR { 
 u_int flow;
 u_int cnt;
 u_int in;
 u_int keep;
 u_int out;
 u_int alp;
 float scl;
 float rot;
 float cx;
 float cy;
};

struct EFF_FOCUS { 
 u_int flow;
 u_int cnt;
 u_int in;
 u_int keep;
 u_int out;
 u_int max;
};

struct EFF_DEFORM { 
 u_char type;
 u_char otype;
 u_char init;
 u_char pass;
};

typedef struct { 
 u_char OldAlpha;
 u_char OldColor;
 u_char MakeFlg;
} MAKE_DITHER_PATTERN_CTRL;

typedef struct { 
 float Scale;
 int BasePosX;
 int BasePosY;
 int PosX;
 int PosY;
 int AlphaInTime;
 int AlphaKeepTime;
 int AlphaOutTime;
 int DispTime;
 int DispTimeAll;
 int Alpha;
} SCREEN_SAVER_TEX;

typedef struct { 
 SCREEN_SAVER_TEX TexData[1];
 u_int *pTexBuf;
 int Counter;
 int IntervalTime;
 int DispTime;
 int LoadStatus;
 int LoadId;
 int ScreenEffectNo;
 int DitherInterval;
 float DitherAlpha;
 int DitherChangeTime;
 int PlayId;
} SCREEN_SAVER_CTRL;

typedef struct { 
 float rrr;
 float lll;
 float mm1;
 float mm2;
 float sss;
 float ccc;
} DEFWORK;

typedef struct { 
 float stq[4];
 float vtw[4];
} SCRDEF;

typedef struct { 
 int screen_flag;
 int time;
 int cnt;
 u_char col_r;
 u_char col_g;
 u_char col_b;
 u_char now_alpha;
} SCRCTRL;

typedef struct { 
 float Position[4];
 float Aim[4];
 float Accel[4];
 float Rots[4];
 short int at_ground;
 short int rgba[4];
 short int InCount;
} LEAVES_PARTICLE;

typedef struct { 
 LEAVES_PARTICLE *pLeavesParticle;
 float FallSpeed[4];
 float CenterPos[4];
 int ParticleMax;
 int ParticleNum;
 float AppearRate;
 float AppearRateCount;
 short int FallDistance;
 int StopTime;
 int Id;
 short int Area;
 short int Color[4];
} LEAVES_FALL_CTRL;

typedef struct { 
 int FileNo;
 int BankNo;
 int IsReady;
} EFFECT_SOUNDFILE_DATA;

typedef struct { 
 int FileNo;
} EFFECT_FILEDEL_DATA;

typedef struct { 
 float Position[4];
 int SetPositionFlg;
 int FileNo;
 int No;
 int Effect;
 int FadeTime;
 int PlayId;
 u_int DeleteKey;
} EFFECT_SOUNDPLAY_DATA;

typedef struct { 
 SINGLE_LINK_LIST FileReadyList;
 SINGLE_LINK_LIST FileDeleteList;
 SINGLE_LINK_LIST PlayList;
} EFFECT_SOUND_CTRL;

typedef struct { 
 float Position[4];
 short int Count;
 short int Cycle;
 short int ExecFlg;
} TORCH2_BIGFREA_CTRL;

struct ENE_MOT_CTRL { 
 short int old_mot;
 short int old_frm;
};

struct ENE_MOT_WRK { 
 u_int attr;
 short int frm;
 short int sub;
};

typedef struct { 
 int event_id;
 u_int stop_timer;
 u_char *event_addr;
 u_char if_state;
 u_char process;
} EV_EXE_CTRL;

typedef struct { 
 int obj1_id;
 int obj2_id;
} MORPH_DAT;

struct DEFORM_TYPE { 
 u_char no;
 u_char alp;
 float spd;
 float wave;
};

struct DITHER_TYPE { 
 u_char type;
 u_short alp;
 u_short spd;
 u_short amax;
 u_short cmax;
 u_short in;
 u_short keep;
 u_short out;
};

struct _NEAREST_ENE_MANAGE { 
 int wrk_no;
 int in_circle;
 float dist;
};

typedef _NEAREST_ENE_MANAGE NEAREST_ENE_MANAGE;

typedef enum {
	MOVIE_PROJECTER_STATE_NONE = 0,
	MOVIE_PROJECTER_STATE_PRELOAD = 1,
	MOVIE_PROJECTER_STATE_PLAY = 2
} _MOVIE_PROJECTER_STATE;

typedef _MOVIE_PROJECTER_STATE MOVIE_PROJECTER_STATE;

struct _ENE_DAT_SAVE { 
 char release_type;
};

typedef _ENE_DAT_SAVE ENE_DAT_SAVE;

typedef struct { 
 short int condition;
 short int event_id;
 u_char *exe_addr;
} EV_CTRL_CENTER;

typedef struct { 
 u_char obj_type;
 int obj_id;
} EV_PHOTO_OBJ;

typedef enum {
	SUB_EVENT_OPEN_TBL = 0,
	EV_DAT_INIT_TBL = 1,
	EV_DAT_MAIN_TBL = 2,
	EV_DAT_IS_DESTRCT_TBL = 3,
	EV_DAT_DESTRCT_TBL = 4,
	EV_DAT_PARENT_TBL = 5,
	EV_DAT_SUBEVENT_TBL_TBL = 6
} EV_TBL_TYPE;

typedef struct { 
 u_char step;
 u_char anim_step;
 u_char disp_flg;
 u_char win_flg;
 int file_label;
 int fade_time;
 int timer;
 SPRT_DAT sprt;
} EV_DISP2D_CTRL;

typedef struct { 
 u_char step;
 u_char chapter_num;
 u_char disp_flg;
 u_char anim_step;
 int timer;
} EV_CHAPTER_DISP;

typedef struct { 
 u_char anim_step;
 u_char disp_flg;
 int msg_type;
 int msg_id;
 int fade_time;
 int timer;
} EV_ITEM_NAME_DISP;

struct _ENE_DATS { 
 int ene_type;
 int dat_no;
};

typedef _ENE_DATS ENE_DATS;

struct _ENE_LOAD_DATS { 
 ENE_DATS dats;
};

typedef _ENE_LOAD_DATS ENE_LOAD_DATS;

typedef struct { 
 int msg_id;
 int subtitle_label;
} TALK_DATA;

typedef struct { 
 char data_num;
 char data_pos;
 u_char cam_flg;
 int talk_type;
 TALK_DATA data[16];
} TALK_TBL;

typedef struct { 
 int event_id;
 u_int timer;
 int req_event_id;
 u_char req_state;
} REGIST_TIMER;

typedef struct { 
 u_int event_timer;
 REGIST_TIMER regist_timer[30];
} EV_TIMER_CTRL;

typedef int (*sceSdTransIntrHandler)(/* parameters unknown */);
typedef int (*sceSdSpu2IntrHandler)(/* parameters unknown */);

typedef struct { 
 short unsigned int func;
 short unsigned int entry;
 unsigned int value;
} sceSdBatch;

typedef struct { 
 int core;
 int mode;
 short int depth_L;
 short int depth_R;
 int delay;
 int feedback;
} sceSdEffectAttr;

struct _HXD_HEADER { 
 int name;
 int version;
 int num;
 int type;
 int size;
 int interleave_byte;
 int padding[2];
};

typedef _HXD_HEADER HXD_HEADER;

typedef enum {
	VOICE_ATTRIBUTE_GROUP_A = 0,
	VOICE_ATTRIBUTE_GROUP_B = 1,
	VOICE_ATTRIBUTE_GROUP_C = 2,
	VOICE_ATTRIBUTE_GROUP_D = 3,
	VOICE_ATTRIBUTE_GROUP_E = 4,
	VOICE_TYPE_NUM = 5
} _VOICE_TYPE_ENUM;

enum _VOICE_TYPE_ENUM {
	VOICE_ATTRIBUTE_GROUP_A = 0,
	VOICE_ATTRIBUTE_GROUP_B = 1,
	VOICE_ATTRIBUTE_GROUP_C = 2,
	VOICE_ATTRIBUTE_GROUP_D = 3,
	VOICE_ATTRIBUTE_GROUP_E = 4,
	VOICE_TYPE_NUM = 5
};

typedef _VOICE_TYPE_ENUM VOICE_TYPE_ENUM;

struct _VOICE_ATTR { 
 short unsigned int effect : 1;
 short unsigned int type : 3;
 short unsigned int s3d : 1;
 short unsigned int loop : 1;
 short unsigned int core : 1;
 short unsigned int male : 1;
 short unsigned int dummy;
};

typedef _VOICE_ATTR VOICE_ATTR;

struct _SOUND_INFO { 
 int smpl_rate;
 int offset;
 short int pitch;
 short int vol;
 short unsigned int adsr1;
 short unsigned int adsr2;
 VOICE_ATTR attr;
 short int pan;
 int loopstart;
 int loopend;
};

typedef _SOUND_INFO SOUND_INFO;

struct _EEIOP_DEF { 
 void* (*malloc64)(/* parameters unknown */);
 void (*free64)(/* parameters unknown */);
 int command_send_buffer_size;
 char *iop_def_module;
 char *hil_file_name;
 char *dil_file_name;
 int media;
 int file_load_wrk_num;
 int snd_bank_wrk_num;
 int stream_auto_wrk_num;
 int auto_bd_wrk_num;
 int snd_stream_load_priority;
 int snd_bank_load_priority;
 int cmp_use_flg;
 int rom_boot;
};

typedef _EEIOP_DEF EEIOP_DEF;


typedef enum {
	ST_STREAM_NO_USE = 0,
	ST_STREAM_HEADER_LOAD = 1,
	ST_STREAM_PRE_LOAD = 2,
	ST_STREAM_PLAYING = 3,
	ST_STREAM_WAIT_END = 4,
	ST_STREAM_END = 5,
	ST_STREAM_START = 6,
	ST_STREAM_PRE_NO_USE = 7,
	ST_STREAM_FORCE_DWORD = -1
} _EEIOP_STREAM_STATUS;


enum _EEIOP_STREAM_STATUS {
	ST_STREAM_NO_USE = 0,
	ST_STREAM_HEADER_LOAD = 1,
	ST_STREAM_PRE_LOAD = 2,
	ST_STREAM_PLAYING = 3,
	ST_STREAM_WAIT_END = 4,
	ST_STREAM_END = 5,
	ST_STREAM_START = 6,
	ST_STREAM_PRE_NO_USE = 7,
	ST_STREAM_FORCE_DWORD = -1
};

typedef _EEIOP_STREAM_STATUS EEIOP_STREAM_STATUS;

struct _IOP_STREAM_RET { 
 EEIOP_STREAM_STATUS status;
 int offset;
};

typedef _IOP_STREAM_RET IOP_STREAM_RET;

struct _IOP_RET_STATUS { 
 int voice_end[2];
 IOP_STREAM_RET stream_ret[2];
 IOP_STREAM_RET pcm_stream_ret[2];
 int mpLoopAdrs[2][24];
 int mpNowAdrs[2][24];
};

typedef _IOP_RET_STATUS IOP_RET_STATUS;

struct _SPU_BLOCK_HEADER { 
 unsigned char decode_param;
 unsigned char loop;
};

typedef _SPU_BLOCK_HEADER SPU_BLOCK_HEADER;

struct _SPU_BLOCK_DATA { 
 SPU_BLOCK_HEADER header;
 short unsigned int data[7];
};

typedef _SPU_BLOCK_DATA SPU_BLOCK_DATA;


typedef enum {
	SPU_LOOP_NON = 0,
	SPU_LOOP = 2,
	SPU_LOOP_START = 6,
	SPU_LOOP_END = 3,
	SPU_END = 1,
	SPU_STOP_BLOCK = 7
} _enumSPU_LOOP;


enum _enumSPU_LOOP {
	SPU_LOOP_NON = 0,
	SPU_LOOP = 2,
	SPU_LOOP_START = 6,
	SPU_LOOP_END = 3,
	SPU_END = 1,
	SPU_STOP_BLOCK = 7
};

typedef _enumSPU_LOOP enumSPU_LOOP;


typedef enum {
	REQ_FILE_SIZE = 0,
	REQ_Q_LOAD_CANCEL = 1,
	REQ_SPU_TRANS_CORE_GET = 2,
	REQ_SPU_TRANS_CORE_RELEASE = 3
} _IOP_COMMAND_QUERY_ENUM;


enum _IOP_COMMAND_QUERY_ENUM {
	REQ_FILE_SIZE = 0,
	REQ_Q_LOAD_CANCEL = 1,
	REQ_SPU_TRANS_CORE_GET = 2,
	REQ_SPU_TRANS_CORE_RELEASE = 3
};

typedef _IOP_COMMAND_QUERY_ENUM IOP_COMMAND_QUERY_ENUM;


typedef enum {
	IOP_COM_END = 0,
	REQ_IOP_REBOOT = 1,
	REQ_CDVD_INIT = 2,
	REQ_SET_CD_DAT = 3,
	REQ_CD_READ_MODE_CHANGE = 4,
	REQ_IOP_SND_INIT = 5,
	REQ_SET_SND_EFFECT = 6,
	REQ_VOICE_STOP = 7,
	REQ_VOICE_LOOP_SET = 8,
	REQ_STREAM_CREATE = 9,
	REQ_STREAM_RELEASE = 10,
	REQ_STREAM_START = 11,
	REQ_STREAM_PLAY = 12,
	REQ_STREAM_STOP = 13,
	REQ_STREAM_ABORT = 14,
	REQ_STREAM_PAUSE = 15,
	REQ_STREAM_RESTART = 16,
	REQ_STREAM_SETVOL = 17,
	REQ_STREAM_SETPITCH = 18,
	REQ_SB_INIT = 19,
	REQ_SB_PLAY = 20,
	REQ_SB_STOP = 21,
	REQ_SB_PAUSE = 22,
	REQ_SB_RESTART = 23,
	REQ_SB_SETVOL = 24,
	REQ_SB_SETPITCH = 25,
	REQ_PCM_STREAMCREATE = 26,
	REQ_PCM_STREAMINIT = 27,
	REQ_PCM_STREAMSTART = 28,
	REQ_PCM_STREAMPLAY = 29,
	REQ_PCM_STREAMSTOP = 30,
	REQ_PCM_STREAMPAUSE = 31,
	REQ_PCM_STREAMRESTART = 32,
	REQ_PCM_STREAMSETVOL = 33,
	IOP_COMMAND_ENUM_FORCE_DWORD = -1
} _IOP_COMMAND_ENUM;


enum _IOP_COMMAND_ENUM {
	IOP_COM_END = 0,
	REQ_IOP_REBOOT = 1,
	REQ_CDVD_INIT = 2,
	REQ_SET_CD_DAT = 3,
	REQ_CD_READ_MODE_CHANGE = 4,
	REQ_IOP_SND_INIT = 5,
	REQ_SET_SND_EFFECT = 6,
	REQ_VOICE_STOP = 7,
	REQ_VOICE_LOOP_SET = 8,
	REQ_STREAM_CREATE = 9,
	REQ_STREAM_RELEASE = 10,
	REQ_STREAM_START = 11,
	REQ_STREAM_PLAY = 12,
	REQ_STREAM_STOP = 13,
	REQ_STREAM_ABORT = 14,
	REQ_STREAM_PAUSE = 15,
	REQ_STREAM_RESTART = 16,
	REQ_STREAM_SETVOL = 17,
	REQ_STREAM_SETPITCH = 18,
	REQ_SB_INIT = 19,
	REQ_SB_PLAY = 20,
	REQ_SB_STOP = 21,
	REQ_SB_PAUSE = 22,
	REQ_SB_RESTART = 23,
	REQ_SB_SETVOL = 24,
	REQ_SB_SETPITCH = 25,
	REQ_PCM_STREAMCREATE = 26,
	REQ_PCM_STREAMINIT = 27,
	REQ_PCM_STREAMSTART = 28,
	REQ_PCM_STREAMPLAY = 29,
	REQ_PCM_STREAMSTOP = 30,
	REQ_PCM_STREAMPAUSE = 31,
	REQ_PCM_STREAMRESTART = 32,
	REQ_PCM_STREAMSETVOL = 33,
	IOP_COMMAND_ENUM_FORCE_DWORD = -1
};

typedef _IOP_COMMAND_ENUM IOP_COMMAND_ENUM;

struct _IOP_SND_INIT { 
 int media;
 int mvol;
 void *stop_block;
};

typedef _IOP_SND_INIT IOP_SND_INIT;

struct _SET_SND_EFFECT { 
 int core;
 int end_adrs;
 sceSdEffectAttr r_attr;
};

typedef _SET_SND_EFFECT SET_SND_EFFECT;

struct _VOICE_STOP { 
 short int voice_no;
 short int core;
};

typedef _VOICE_STOP VOICE_STOP;

struct _CD_READ_MODE_CHANGE { 
 int mode;
};

typedef _CD_READ_MODE_CHANGE CD_READ_MODE_CHANGE;

struct _SOUND_BUF_PLAY { 
 VOLSET vol;
 unsigned int adrs;
 short int pitch;
 short int adsr1;
 short int adsr2;
 VOICE_ATTR attr;
 int voice_no;
};

typedef _SOUND_BUF_PLAY SOUND_BUF_PLAY;

struct _VOICE_LOOP_SET { 
 short int core;
 short int voice_no;
 int loop_adrs;
};

typedef _VOICE_LOOP_SET VOICE_LOOP_SET;

struct _SOUND_BUF_SETVOL { 
 VOLSET vol;
 char voice_no;
 char core;
 char padding[2];
};

typedef _SOUND_BUF_SETVOL SOUND_BUF_SETVOL;

struct _SOUND_BUF_SETPITCH { 
 short int pitch;
 char voice_no;
 char core;
};

typedef _SOUND_BUF_SETPITCH SOUND_BUF_SETPITCH;

struct _SOUND_BUF_STOP { 
 char voice_no;
 char core;
 char padding[2];
};

typedef _SOUND_BUF_STOP SOUND_BUF_STOP;

struct _SOUND_BUF_PAUSE { 
 char voice_no;
 char core;
 char padding[2];
};

typedef _SOUND_BUF_PAUSE SOUND_BUF_PAUSE;

struct _SOUND_BUF_RESTART { 
 char voice_no;
 char core;
 char padding[2];
};

typedef _SOUND_BUF_RESTART SOUND_BUF_RESTART;

struct _STREAM_RELEASE { 
 int wrk_id;
};

typedef _STREAM_RELEASE STREAM_RELEASE;

struct _STREAM_START { 
 int start_sector;
 int size;
 unsigned int spu_packet[2][2];
 short int nchannel;
 char irq_core;
 char wrk_id;
 int interleave_byte;
 int loop_start_block;
 int loop_end_block;
 int loop_start_fraction;
 int loop_end_fraction;
 unsigned int spu_loop_packet[2];
 int offset;
 char file_name[256];
};

typedef _STREAM_START STREAM_START;

struct _STREAM_PLAY { 
 VOLSET vol[2];
 VOICE_ATTR attr[2];
 short int adsr1[2];
 short int adsr2[2];
 char voice[2];
 short int pitch;
 short int irq_core;
 short int wrk_id;
};

typedef _STREAM_PLAY STREAM_PLAY;

struct _STREAM_STOP { 
 int wrk_id;
};

typedef _STREAM_STOP STREAM_STOP;

struct _STREAM_ABORT { 
 int wrk_id;
};

typedef _STREAM_ABORT STREAM_ABORT;

struct _STREAM_PAUSE { 
 int wrk_id;
};

typedef _STREAM_PAUSE STREAM_PAUSE;

struct _STREAM_RESTART { 
 int wrk_id;
};

typedef _STREAM_RESTART STREAM_RESTART;

struct _STREAM_SETVOL { 
 VOLSET vol[2];
 int wrk_id;
};

typedef _STREAM_SETVOL STREAM_SETVOL;

struct _STREAM_SETPITCH { 
 short int wrk_id;
 short int pitch;
};

typedef _STREAM_SETPITCH STREAM_SETPITCH;

struct _PCM_STREAM_INIT { 
 int wrk_id;
};

typedef _PCM_STREAM_INIT PCM_STREAM_INIT;

struct _PCM_STREAM_START { 
 int start_sector;
 int size;
 short int nchannel;
 short int wrk_id;
 int offset;
 char file_name[256];
};

typedef _PCM_STREAM_START PCM_STREAM_START;

struct _PCM_STREAM_PLAY { 
 short int wrk_id;
 short int vol;
};

typedef _PCM_STREAM_PLAY PCM_STREAM_PLAY;

struct _PCM_STREAM_STOP { 
 int wrk_id;
};

typedef _PCM_STREAM_STOP PCM_STREAM_STOP;

struct _PCM_STREAM_PAUSE { 
 int wrk_id;
};

typedef _PCM_STREAM_PAUSE PCM_STREAM_PAUSE;

struct _PCM_STREAM_RESTART { 
 int wrk_id;
};

typedef _PCM_STREAM_RESTART PCM_STREAM_RESTART;

struct _PCM_STREAM_SETVOL { 
 short int wrk_id;
 short int vol;
};

typedef _PCM_STREAM_SETVOL PCM_STREAM_SETVOL;

struct _SET_CD_DAT { 
 char file_name[16];
};

typedef _SET_CD_DAT SET_CD_DAT;

struct _LOAD_DEF_STRUCT { 
 int one_buf_size;
 int ring_buf_num;
 int start_sector;
 int size;
 char file_name[256];
};

typedef _LOAD_DEF_STRUCT LOAD_DEF_STRUCT;

typedef struct { 
 char FileId[4];
 u_short Frame;
 u_short DataNum;
 u_short HokanType;
 u_short AccelTime;
 u_short EqualTime;
 u_short BrakeTime;
} VCI_CAMERA_HEADER;

typedef struct { 
 float LocalPosition[4];
 float LocalTarget[4];
 float Roll;
 float Proj;
} VCI_CAMERA_POINT;

typedef struct { 
 char info;
} ROOM_IN_INFO;

typedef struct { 
 u_char event_label;
 int (*event_func)(/* parameters unknown */);
 int ev_dat_size;
 char label_name[32];
} EV_EXE_WRK;

typedef struct { 
 u_char if_label;
 u_char (*ev_if_func)(/* parameters unknown */);
 char if_name[32];
} IF_COND_WRK;

typedef struct { 
 char csr;
 char sel_num;
} EV_CHOICE_CTRL;

typedef struct { 
 int sound_id;
 int file_label;
 int pos;
} EV_SOUND_CTRL;

typedef struct { 
 int stream_id;
 int file_label;
} EV_STREAM_CTRL;

typedef struct { 
 int ghost_label;
 u_char ghost_type;
 int wrk_id;
} EV_GHOST_CTRL;

typedef struct { 
 void *dither_id;
} EV_EFF_CTRL;

typedef struct { 
 u_char set_flg;
 int stream_id;
 int file_label;
 int volume;
} EV_SAVE_STREAM;

typedef struct { 
 u_char set_flg;
 int obj_type;
 int obj_id;
 int stream_id;
 int file_label;
 int volume;
} EV_SAVE_OBJ_STREAM;

typedef struct { 
 u_char set_flg;
 int stream_id;
 int file_label;
 int volume;
 float pos[4];
} EV_SAVE_POS_STREAM;

typedef struct { 
 u_char set_flg;
 u_char type;
 u_char speed;
 u_char alpha;
 u_char alpha_max;
 u_char col_max;
} EV_SAVE_EFF_DITHER;

typedef struct { 
 int eff_number;
} EV_SAVE_SCREEN_EFFECT;

typedef struct { 
 u_char cond_label;
 int (*judge_func)(/* parameters unknown */);
 int cond_size;
 u_char label_name[32];
} EV_COND_WRK;

typedef struct { 
 int event_id;
 u_char priority;
} EV_PRI_CTRL;

typedef struct { 
 u_char open_switch;
 u_char end_switch;
} EV_COND_CTRL;

typedef struct { 
 u_char talk_step;
 int stream_id;
 int data_pos;
 int pad_accept_counter;
} TALK_EXE_CTRL;

typedef enum {
	EVECAM_POINT_POSITION = 0,
	EVECAM_POINT_TARGET = 1
} EVENT_CAMERA_POINT_TYPE;

typedef struct { 
 u_int *pDataTop;
 int NowFrame;
} VCI_CAMERA_CTRL;

typedef struct { 
 float EventPosition[4];
 float EventTarget[4];
 float EventPositionOffset[4];
 float EventTargetOffset[4];
 int EventPositonObjType;
 int EventPositonObjId;
 int EventTargetObjType;
 int EventTargetObjId;
 float EventFov;
 float EventRoll;
 float EventMargin;
 u_int *pEventCamData;
 u_int WorldFlg;
} EVENT_CAMERA_CTRL;

typedef struct { 
 u_char fade_state;
 u_char alpha;
 u_char change_alp;
 u_char r;
 u_char g;
 u_char b;
 int timer;
} FADE_MODE_CTRL;

typedef struct { 
 int cnt;
 int flow;
} CTRL_STR;

typedef struct { 
 CTRL_STR ctrl;
} PLYR_HP_WRK;

typedef struct { 
 u_char ene_no;
 u_char flg;
} ENE_HP_WRK;

typedef struct { 
 int cnt;
 int flow;
} SHOT_ENABLE;

typedef struct { 
 int cnt;
 int flow;
} CHARGE_GUAGE_ONE;

typedef struct { 
 int flow;
 int bg_flow;
 u_char old_ch_num;
 CHARGE_GUAGE_ONE cgo[12];
} CHARGE_GUAGE;

typedef struct { 
 int flow_num;
 int cnt_num;
 int flow_sp;
 int cnt_sp;
 int score;
 int mes_alp;
 int num_alp;
} DISPFMES;

typedef struct { 
 u_char phot_shot;
 u_char disp_pause;
 short int alp_battle;
 u_char alp_finder;
 u_char alp_hpbar;
 char fade_finder;
 char fade_hpbar;
 u_char sw_finder;
 u_char sw_hpbar;
 u_char sw_filament;
 u_int cnt_finder;
 u_int cnt_hpbar;
 u_short time_hpbar;
 u_char film_num;
 SHOT_ENABLE sena;
 CHARGE_GUAGE cg;
 DISPFMES dispfmes;
 u_char alp;
} INFO_WRK;

typedef struct { 
 float sclw;
 float sclh;
 float rot;
 float dist;
} ENEDMGLINE_SUB;

typedef struct { 
 ENEDMGLINE_SUB edl_sub[60];
 int flow;
 int cnt;
 u_char alp;
 u_char dummy08[3];
 int col;
} ENEDMGLINE_WRK;

typedef enum {
	SP_CHANCE_NONE = 0,
	SP_CHANCE_IN = 1,
	SP_CHANCE_OUT = 2,
	SP_CHANCE_END = 3
} _SP_CHANCE_MODE;

typedef _SP_CHANCE_MODE SP_CHANCE_MODE;

struct _FOOT_SE_MANAGE { 
 int bank_id;
};

typedef _FOOT_SE_MANAGE FOOT_SE_MANAGE;

typedef struct { 
 int frq_flow;
 int frq_cnt;
 int fov_flow;
 int fov_cnt;
 float fov_bak;
} FREQ_CAM;

struct PK2D_WRK { 
 Q_WORDDATA *idx_top;
 Q_WORDDATA *idx_now;
 Q_WORDDATA *buf_top;
 Q_WORDDATA *buf_now;
};

typedef struct { 
 int stbp;
 int sfbw;
 int stw;
 int sth;
 int dtbp;
 int dfbw;
 int dw;
 int dh;
 int du;
 int dv;
} SCREEN_COPY_WRK;

typedef struct { 
 Q_WORDDATA *pp0;
 Q_WORDDATA *pp1;
} VIF1_GS_PACKET_CTRL;

typedef struct { 
 u_char menu_step;
 u_char top_cursor;
 u_char step;
 u_char menu_out_flg;
 u_char menu_sys_flg;
 char next_menu_step;
 int cursor;
 int stream_id;
} MENU_WRK;

struct G2D_WRK { 
 int init;
 int flow;
};

typedef enum {
	BVT_BOX = 0,
	BVT_SPHERE = 1,
	BVT_ELLIPSE = 2,
	BVT_COLUMN = 3
} G3DBOUNINGVOLUMETYPE;

struct BOUNDINGVOLUMEDATA { 
 G3DBOUNINGVOLUMETYPE Type;
 float matCoord[4][4];
};

typedef enum {
	G3DRTYPE_TEXTURE = 1,
	G3DRTYPE_VERTEXBUFFER = 2,
	G3DRTYPE_INDEXBUFFER = 3,
	INVALID_G3DRESOURCETYPE = 2147483647,
	G3DRTYPE_FORCE_DWORD = 2147483647
} G3DRESOURCETYPE;

struct G3DTEXTUREDATA_LONG { 
 long int lTex0;
 long int lTex1;
};

struct G3DTEXTUREDATA_GS { 
 sceGsTex1 gsTex1;
};

union G3DTEXTUREDATA { 
 G3DTEXTUREDATA_LONG l;
 G3DTEXTUREDATA_GS gs;
};

typedef void (*LPFUNC_CALCCOLORDATA)(/* parameters unknown */);
typedef void (*LPFUNC_LOADMATERIAL)(/* parameters unknown */);
typedef void (*LPFUNC_LOADCOLOR)(/* parameters unknown */);
typedef void (*LPFUNC_LOADCOLORCOEFF)(/* parameters unknown */);
typedef void (*LPFUNC_CALCVERTEXCOLOR)(/* parameters unknown */);

struct _PACKET { 
 qword qwVif1Code;
 sceGifTag gt;
 sceGifPackAd aGPA[1];
};

typedef enum {
	VPS_IDLE = 0,
	VPS_WAITINGFORDATA = 1,
	VPS_DECODE = 2,
	VPS_PROCESSING = 3
} VIF1_STAT_VPS;

typedef enum {
	VEW_NOTWAIT = 0,
	VEW_WAIT = 1
} VIF1_STAT_VEW;

typedef enum {
	VGW_NOTWAIT = 0,
	VGW_WAIT = 1
} VIF1_STAT_VGW;

typedef enum {
	MRK_NOTDETECT = 0,
	MRK_DETECT = 1
} VIF1_STAT_MRK;

typedef enum {
	DBF_BASE = 0,
	DBF_BASEplusOFFSET = 1
} VIF1_STAT_DBF;

typedef enum {
	VSS_NOTSTALL = 0,
	VSS_STALL = 1
} VIF1_STAT_VSS;

typedef enum {
	VFS_NOTSTALL = 0,
	VFS_STALL = 1
} VIF1_STAT_VFS;

typedef enum {
	VIS_NOTSTALL = 0,
	VIS_STALL = 1
} VIF1_STAT_VIS;

typedef enum {
	INT_NOTDETECT = 0,
	INT_DETECT = 1
} VIF1_STAT_INT;

typedef enum {
	ERO_NOERROR = 0,
	ERO_ERROR = 1
} VIF1_STAT_ERO;

typedef enum {
	ER1_NOTDETECT = 0,
	ER1_DETECT = 1
} VIF1_STAT_ER1;

typedef enum {
	FDR_MEMtoVIF1 = 0,
	FDR_VIF1toMEM = 1
} VIF1_STAT_FDR;

struct _PACKET_SETGSREGISTER { 
 qword qwVif1Code;
 sceGifTag GT;
 sceGifPackAd gpa;
};

typedef int (*LPFUNC_ISBBLIGHTINGUP)(/* parameters unknown */);

struct RENDERTARGETCREATIONDATA { 
 G3DCOLOR ClearColor;
 float fZMax;
};

struct G3DSPRITEDATA { 
 G3DFRECT Rect;
 G3DCOLOR Color;
 float fZ;
 sceGsSt StLT;
 sceGsSt StRB;
};

struct VIFPACKET_SETTEXTURE { 
 qword qwVifCode;
 sceGifTag Gt;
};

struct PACKETHEADER { 
 qword qwVifCode;
 sceGifTag Gt;
};

struct GIFPACKET_WITHTEXTURE { 
 sceGifPackRgbaq Rgbaq;
 sceGifPackSt StLT;
 sceGifPackXyzf XyzfLT;
 sceGifPackSt StRB;
 sceGifPackXyzf XyzfRB;
};

struct GIFPACKET_WITHOUTTEXTURE { 
 sceGifPackRgbaq Rgbaq;
 sceGifPackXyzf XyzfLT;
 sceGifPackXyzf XyzfRB;
};

struct _VIF1CMDINFO { 
 unsigned int uiCmd;
 qword *pqwSubstantialRegister;
 int iLengthSubPacket;
 int *apiLocalRegister[4];
};

typedef struct { 
 int setup_pic_flg;
 int game_clear_flg;
 int ending1_mov_flg;
 int ending2_mov_flg;
 int movie_no;
 int end1_mov_cnt;
 int main_step;
 int now_place;
 int next_place;
 int now_tex;
 int csr_map[8];
 int cursor;
 int next_csr;
 int old_csr;
 int anm_step;
 int anm_alpha;
 int pic_mode;
 int pic_step;
 int pic_no;
 int next_pic_no;
 int pic_max;
 int file_no;
 int pic_anm_alpha;
} GAL_CTRL;

typedef struct { 
 int map_label;
 int map_tex_id;
} MAP_INFO_DAT;

typedef struct { 
 int map_label;
 int room_label;
 int room_group_label;
 int snap_tex_label;
 int room_tex_label;
} ROOM_INFO_DAT;

typedef struct { 
 int room_label;
 int house_tex_label;
 int start_room_label;
 int end_room_label;
} HOUSE_INFO_DAT;

typedef struct { 
 int area_label;
 int floor_label;
 int map_label;
} AREA_MAP_TBL;

typedef struct { 
 char step;
 char mc_step;
 char csr;
 char conf_csr;
 char save_exe_label;
 char format_end_cnt;
 int save_file_cnt;
} GAME_DATA_SAVE_CTRL;

typedef struct { 
 int msg_id;
 char anim_step;
 char anim_timer;
 char csr_timer;
} GAME_DATA_SAVE_DISP;

typedef struct { 
 int anim_timer;
 char step;
} GAME_RESULT_CTRL;

typedef struct { 
 int flg_msg_id[7];
 char flg_msg_num;
 char step;
 char rank;
} GAME_RESULT_TOP_CTRL;

typedef struct { 
 char rank_anim_step;
 char rank_anim_timer;
 char flg_anim_step[7];
 char flg_anim_timer[7];
 char line_anim_step;
 char line_anim_timer;
} GAME_RESULT_TOP_DISP;

typedef struct { 
 short int fade_timer;
} GAMEOVER_FADE_CTRL;

typedef struct { 
 int stream_id;
 char step;
} GAMEOVER_MENU_CTRL;

typedef struct { 
 int fade_timer;
 int bg_anim_timer;
 int moyou1_anim_timer;
 int moyou2_anim_timer;
} GAMEOVER_MENU_DISP;

typedef struct { 
 char step;
 char mc_step;
 short int wait_timer;
 char csr;
 char conf_csr;
 char csr_timer;
} GAMEOVER_LOAD_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char csr_timer;
 int msg_id;
} GAMEOVER_LOAD_DISP;

typedef struct { 
 char step;
 char mode;
 char csr;
 char conf_csr;
} GAMEOVER_MENU_TOP_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char conf_anim_step;
 char conf_anim_timer;
} GAMEOVER_MENU_TOP_DISP;

typedef struct { 
 int end_room_label;
 float pos_x;
 float pos_y;
} GHOST_SEAL_DOOR_DATA;

struct _GPHASE_DAT { 
 int layer;
 int superID;
 int son_ID;
 int son_num;
};

typedef _GPHASE_DAT GPHASE_DAT;

struct _GPHASE_SYS { 
 GPHASE_ID_ENUM now[6];
 GPHASE_ID_ENUM next[6];
 int ini_flg[6];
};

typedef _GPHASE_SYS GPHASE_SYS;

struct SETREGISTERPAIR { 
 long int lAddress;
 LPFUNC_SETREGISTER_WITHCONTEXT pFuncWithContext;
 LPFUNC_SETREGISTER pFunc;
};

struct GETREGISTERPAIR { 
 long int lAddress;
 LPFUNC_GETREGISTER_WITHCONTEXT pFuncWithContext;
 LPFUNC_GETREGISTER pFunc;
};

struct ___ { 
 GRA3DSCRATCHPADLAYOUT gra3dSL;
 GRA3DSCRATCHPADLAYOUT_MAPSHADOW gra3dshadowSL;
 G3DCREATIONDATA g3dSL;
};

struct _PACKET_DRAWSPRITE { 
 qword qwVifCode;
 sceGifTag Gt;
 sceGifPackRgbaq Rgbaq;
 sceGifPackXyzf aXyzf2[2];
};

struct TRI2SIZEDATA { 
 unsigned int uiMaxAddress;
 unsigned int uiMinAddress;
 unsigned int uiVRAMTexSize;
 unsigned int uiMaxTbp;
 unsigned int uiPageSize;
};

struct _SGDVUVNDATA_WEIGHTED_2 { 
 float *pVertex[4];
 float *pNormal[4];
};

struct _SGDVUVNDATA_WEIGHTEDVERTEX_3 { 
 float vVertex[4];
 unsigned int aui[3];
 unsigned char ucBoneId0;
 unsigned char ucBoneId1;
 unsigned char auc[2];
};

struct _SGDVUVNDATA_WEIGHTED_3 { 
 _SGDVUVNDATA_WEIGHTEDVERTEX_3 *pWeightedVertex;
 float *pNormal[4];
};

typedef void (*LPFUNC_CALCWEIGHTEDVECTORBUFFER)(/* parameters unknown */);

struct _LIGHTCOMPAREDATA { 
 float fMaxPower;
 int iIndex;
};

struct SGDVUMESHTEXGIFTAG { 
 unsigned int auiVifCode[2];
 unsigned int auiGifTag[4];
 long unsigned int aulData[2];
};

struct SGDVUMESHPOINTNUMREGSET { 
 unsigned int auiVifCode[2];
};

struct SGDVUMESHPOINTNUM { 
 G3DVIF1CODE_UNPACK VifUnpack;
 unsigned int uiPointNum;
};

struct SGDVUMESHSTREGSET { 
 unsigned int auiVifCode[3];
};

struct SGDVUMESHST { 
 float fS;
 float fT;
};

struct SGDVUMESHSTDATA { 
 G3DVIF1CODE_UNPACK VifUnpack;
 SGDVUMESHST astData[1];
};

typedef struct { 
 int s;
 int e;
} BoundLine;

typedef struct { 
 char step;
 char sub_step;
 char next_sub_step;
 char csr_tate;
 char csr_yoko;
 char clear_flg;
 char exit_csr;
 int timer;
 int hina_pos[4][4];
 char in_anim_flg;
 int snd_id;
} HINA_PZL_CTRL;

typedef struct { 
 char anim_step;
 short int anim_timer;
 char sub_anim_step;
 short int sub_anim_timer;
 short int csr_anim_timer;
 short int smoke_anim_timer;
 short int stand_anim_timer;
} HINA_PZL_DISP;

typedef struct { 
 short int anim_timer;
} HINA_PZL_CROSS_DISP;

typedef struct { 
 short unsigned int mission : 1;
} PHASE_CANGE_REQ_OUTGAME;

struct _PHASE_CHANGE_REQS { 
 short unsigned int event_load : 1;
 short unsigned int game_over : 1;
 short unsigned int game_over_pre : 1;
 short unsigned int ending_normal : 1;
 short unsigned int ending_hard : 1;
 short unsigned int plyr_damage : 1;
 short unsigned int plyr_door : 1;
 short unsigned int pause : 1;
 short unsigned int menu : 1;
 short unsigned int map : 1;
 short unsigned int dbg_menu : 1;
 short unsigned int ene_dead : 1;
 short unsigned int photo : 1;
 short unsigned int movie_room_menu : 1;
 short int scene_no;
 short int effect_mode_time;
 short int event_stop_cnt;
};

typedef _PHASE_CHANGE_REQS PHASE_CHANGE_REQS;

typedef enum {
	PDEFORM_TYPE_ZERO = 0,
	PDEFORM_TYPE_SLOW = 1,
	PDEFORM_TYPE_KOKU = 2,
	PDEFORM_TYPE_PARALYZE = 3,
	PDEFORM_TYPE_VIEW = 4,
	PDEFORM_TYPE_METSU = 5,
	PDEFORM_TYPE_REN = 6,
	PDEFORM_TYPE_TSUI = 7,
	PDEFORM_TYPE_FUU = 8,
	PDEFORM_TYPE_FREQ = 9
} SUBFUNC_PDEFORM_TYPE;

typedef enum {
	SUBFUNC_PDEFORM_STATUS_NOT_USE = 0,
	SUBFUNC_PDEFORM_STATUS_USE = 1,
	SUBFUNC_PDEFORM_STATUS_WAIT = 2
} SUBFUNC_PDEFORM_STATUS;

typedef struct { 
 int EneWrkNo;
 int Count;
 int Type;
 int StartFrame;
 void *pEffRet;
 int Status;
} SUBFUNC_PDEFORM_CTRL;

typedef struct { 
 int EneWrkNo;
 int Count;
} ZERO_PARTICLE_CTRL;

typedef struct { 
 int mode;
 int (*func)(/* parameters unknown */);
} KAIPZL_MODE;

typedef struct { 
 int iInit;
 int iRotL;
 int iRotR;
 int iClear;
} KAIPZL_ROT;

typedef struct { 
 char step;
 char mode;
 char next_mode;
 char clear_flg;
 int snd_id;
 char csr_yoko;
 char csr_tate;
 char exit_csr;
 char rot_anim_flg;
 int rot_num[5];
 char remainder_frequency;
} KAZA_PZL_CTRL;

typedef struct { 
 char anim_step;
 char sub_anim_step;
 char rot_anim_step;
 short int flare_anim_timer;
 short int rot_anim_timer;
 short int anim_timer;
 short int sub_anim_timer;
 float panel_rot[5];
} KAZA_PZL_DISP;

typedef struct { 
 char step;
 short int move_timer;
 int msg_id;
} LANG_CHECK_CTRL;

typedef struct { 
 int anim_timer;
 char step;
 char csr;
} LANG_SEL_CTRL;

typedef struct { 
 char step;
 char csr;
 char conf_csr;
 char csr_timer;
 int msg_id;
 short int wait_timer;
} LOAD_GAME_CTRL;

typedef struct { 
 char step;
 char anim_step;
 short int anim_timer;
 short int fade_timer;
} LOADING_CTRL;

struct LOGO_WRK { 
 char step;
 int cnt;
 int mode;
};

struct MAN_DATA { 
 int man_data_draw_lock_cnt;
 ANI_CTRL *mpAniCtrl;
 ANI_CTRL *mpShadowAniCtrl;
 int mpAcsMdl;
 int mMdlNo;
 int mSMdlNo;
 int mAnmNo;
 int mBDNo;
 int mAcsNo;
 int man_data_bank_no;
 unsigned int man_ready_anm_init : 1;
 unsigned int man_ready_req_mdl : 1;
 unsigned int man_ready_req_smdl : 1;
 unsigned int man_ready_req_anm : 1;
 unsigned int man_ready_req_bd : 1;
 unsigned int man_ready_collision : 1;
 __vtbl_ptr_type *CCC_VTABLE;

};

typedef struct { 
 char map_label;
 char area_label;
 short int room_label;
 float pos[4][2];
} MAP_AREA_DAT;

struct _MAP_BGM_DAT { 
 int str_file;
};

typedef _MAP_BGM_DAT MAP_BGM_DAT;

struct _MAP_BGM_SAVE { 
 int aMapWrkBGMTbl[240];
 int disable_cnt;
};

typedef _MAP_BGM_SAVE MAP_BGM_SAVE;

typedef enum {
	APPROACH_CAMERA_FLOW_INIT = 0,
	APPROACH_CAMERA_FLOW_MOVE = 1,
	APPROACH_CAMERA_FLOW_KEEP = 2,
	APPROACH_CAMERA_FLOW_SHOULDER = 3,
	APPROACH_CAMERA_FLOW_TALK_INIT = 10,
	APPROACH_CAMERA_FLOW_TALK_KEEP = 11,
	APPROACH_CAMERA_FLOW_DEAD_INIT = 20,
	APPROACH_CAMERA_FLOW_DEAD_KEEP = 21
} APPROACH_CAMERA_FLOW;

typedef struct { 
 int EventCamFlg;
 int SpecialCamFlg;
 int RoomNo;
 float *pFinCamTarget[4];
 void *pRectStat;
 int CamDataType;
 int BattleCamAccept;
 int RectCamLastTime;
 int CamTarget;
} MAP_CAMERA_CTRL;

typedef struct { 
 float Power[2];
 int Counter;
 int AllTime;
 short int RequestFlg;
 short int LoopNum;
} QUAKE_CAMERA_CTRL;

struct _MAP_REVERB_DAT { 
 short int depth;
};

typedef _MAP_REVERB_DAT MAP_REVERB_DAT;

typedef struct { 
 float x;
 float y;
} MAP_WORLD_POINT;

typedef struct { 
 int w;
 int h;
} MAP_SIZE_DAT;

typedef struct { 
 float normal;
 float big;
} MAP_SCALL_DAT;

typedef struct { 
 char step;
 int port;
 int slot;
 char name[55];
} MC_CHECK_CTRL;

typedef struct { 
 int port;
 int slot;
 int type;
 int free;
 int format;
} MC_INFO;

typedef struct { 
 char step;
 char retry_cnt;
 char unformat_flg;
 int port;
 int slot;
} MC_CHECK_CARD_CTRL;

typedef struct { 
 int port;
 int slot;
} MC_CHECK_CARD_EVERY_FRAME;

typedef struct { 
 short int get_filenum;
} MC_DIR_INFO;

typedef struct { 
 char step;
 char retry_cnt;
 int port;
 int slot;
 char name[55];
} MC_CHECK_DIR_CTRL;

typedef struct { 
 char step;
 char retry_cnt;
 int fd;
} MC_FILE_CLOSE_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int dir_label;
 int del_file_cnt;
} MC_DEL_ALL_FILE_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int dir_label;
} MC_DIR_DEL_CTRL;

typedef struct { 
 char step;
 char retry_cnt;
 int port;
 int slot;
 char name[55];
} MC_FILE_DEL_CTRL;

typedef struct { 
 char step;
 char retry_cnt;
 int port;
 int slot;
} MC_FORMAT_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int dir_label;
 int icon_type;
} MC_ICON_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int dir_label;
 sceMcIconSys icon_sys;
} MC_ICON_SYS_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int size;
 int fd;
 void *data_addr;
 char name[55];
} MC_LOAD_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int dir_label;
 void *buff_addr;
 int buff_size;
} MC_NEW_MAKE_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int dir_label;
 int data_file_num;
 int make_data_file_num;
 void *buff_addr;
 int buff_size;
} MC_MAKE_ALL_FILE_CTRL;

typedef struct { 
 char step;
 char retry_cnt;
 int port;
 int slot;
 char name[21];
} MC_MAKE_DIR_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int size;
 int fd;
 void *data_addr;
 char name[55];
} MC_MAKE_FILE_CTRL;

typedef struct { 
 char step;
 char retry_cnt;
 int port;
 int slot;
 int mode;
 char *name;
} MC_FILE_OPEN_CTRL;

typedef struct { 
 char step;
 char retry_cnt;
 int fd;
 int size;
 int error;
 void *data_addr;
} MC_FILE_READ_CTRL;

typedef struct { 
 char step;
 int port;
 int slot;
 int size;
 int fd;
 void *data_addr;
 char name[55];
} MC_SAVE_CTRL;

typedef struct { 
 int chapter[5];
 int clear_num[5];
 int room_label[5];
 TIME_INFO play_time[5];
 char clear_data_flg[5];
 char data_flg[5];
} MC_PLAY_DATA_HEAD;

typedef struct { 
 char step;
 char retry_cnt;
 int fd;
 int size;
 int error;
 void *data_addr;
} MC_FILE_WRITE_CTRL;

typedef struct { 
 int state;
 int msg_step;
} PLYR_MEMO;

typedef struct { 
 char csr;
} MENU_YES_NO_CTRL;

typedef struct { 
 int disp_start_pos;
 int data_pos;
 int data_num;
} MENU_REF_CTRL;

typedef struct { 
 void (*menu_func)(/* parameters unknown */);
 void (*menu_disp)(/* parameters unknown */);
} MENU_CTRL;

typedef struct { 
 short int anim_step;
 short int menu_bg_anim;
 short int bg_anim_timer;
 short int bg_anim_out_timer;
 char tourou_anim_step;
 char tourou_out_timer;
 short int tourou_anim_timer;
 short int moyou1_anim_timer;
 short int moyou2_anim_timer;
 char bganim_in_to_out;
} MENU_DISP_CTRL;

typedef struct { 
 char mode;
 char step;
 char menu_csr;
 char equip_pos_csr;
 char lens_csr;
 char edit_sel_csr;
 char conf_csr;
 char sp_equip_init_flg;
 char edit_init_flg;
 char gem_anim_flg;
 MENU_REF_CTRL ref_ctrl;
} MENU_CAM_EDIT_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char csr_anim_timer;
 char scroll_anim_timer;
 short int gem_anim_timer;
} MENU_CAM_EDIT_DISP;

typedef struct { 
 int lens_label;
} DISP_LENS_DATA;

typedef struct { 
 char data_pos;
 char lv;
 short int timer;
} GEM_ANIM_CTRL;

typedef struct { 
 char sub_step;
 char step;
 char mode;
 char next_mode;
 char exit_flg;
 char init_type;
} MENU_CAM_MAIN_CTRL;

typedef struct { 
 char mode;
 char step;
 char csr_yoko;
 char csr_tate;
 char add_csr;
 char equip_csr;
 char csr_yoko_backup;
} MENU_CAM_TOP_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char csr_anim_timer;
} MENU_CAM_TOP_DISP;

typedef struct { 
 char load_step;
 char anim_step;
 char anim_timer;
 int tex_label;
 void *data_addr;
} MENU_CROSS_FADE;

typedef struct { 
 u_char dbuff_flg;
 void *data_addr_1;
 void *data_addr_2;
} MENU_DBUFF_CTRL;

typedef struct { 
 char sub_step;
 char mode;
 char next_mode;
 u_char cross_fade_flg;
 int tag_csr;
 int top_csr[5];
} MENU_FILE_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 u_char rgb;
 char scroll_timer;
 char sub_anim_step;
 char sub_anim_timer;
} MENU_FILE_DISP;

typedef struct { 
 int file_id;
 char state;
} MENU_FILE_DATA;

typedef struct { 
 MENU_FILE_DATA pocketbook[42];
 MENU_FILE_DATA scrap[42];
 MENU_FILE_DATA oldbook[40];
 MENU_FILE_DATA photograph[26];
 MENU_FILE_DATA map[10];
} DISP_FILE_DATA;

typedef struct { 
 u_char sub_step;
 u_char cross_fade_flg;
 u_char conf_csr;
 MENU_REF_CTRL ref_ctrl;
} MENU_ITEM_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 u_char rgb;
 char scroll_timer;
} MENU_ITEM_DISP;

typedef struct { 
 int item_id;
 int have_num;
} DISP_ITEM_DATA;

typedef struct { 
 float x;
 float y;
 int map_label;
 int room_label;
} MAP_SAVE_POINT;

typedef struct { 
 char step;
 int tex_label;
} MENU_MAP_LOAD_CTRL;

typedef struct { 
 char plyr_map;
 char cross_fade_flg;
 MENU_MAP_LOAD_CTRL snap_load;
 int hit_room;
 int map_area_id;
} MENU_MAP_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char tri_pad_flg[4];
 char tri_anim_step;
 u_char tri_alpha;
 char tri_timer;
 float map_off_x;
 float map_off_y;
 u_char map_scall_flg;
 char disp_map_label;
 char before_disp_map;
} MENU_MAP_DISP;

typedef struct { 
 u_char mode;
 u_char next_mode;
 u_char sub_step;
 MENU_REF_CTRL ref_ctrl;
} MENU_MEMO_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 u_char rgb;
 char scroll_timer;
 char sub_anim_step;
 char sub_anim_timer;
} MENU_MEMO_DISP;

typedef struct { 
 int memo_label;
 u_char state;
 u_char msg_step;
} DISP_MEMO_DATA;

typedef struct { 
 char step;
 char csr_yoko;
 char csr_tate;
 char sub_csr;
 char sort_csr;
 char photo_flg;
 char sort_flg;
 char sub_anim_step;
 char sub_anim_timer;
 char csr_timer;
 u_char rgb;
} MENU_PHOTO_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
} MENU_PHOTO_DISP;

typedef struct { 
 u_char sub_step;
 u_char cross_fade_flg;
 MENU_REF_CTRL ref_ctrl;
 int stream_id;
} MENU_RADIO_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char crystal_anim_step;
 char crystal_anim_timer;
 char crystal_alpha;
 char crystal_flare_alpha;
 u_char rgb;
 char scroll_timer;
 int title_timer;
} MENU_RADIO_DISP;

typedef struct { 
 int crystal_id;
 int state;
} DISP_CRYSTAL_DATA;

typedef struct { 
 char mode;
 char cross_fade_flg;
 MENU_REF_CTRL ref_ctrl;
 int before_list_data_pos;
 int max_score_order[3];
} MENU_SOUL_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 u_char rgb;
 char scroll_timer;
 int disp_msg_id[2];
} MENU_SOUL_DISP;

typedef struct { 
 int ghost_list_label;
 int state;
} DISP_SOUL_LIST_DATA;

typedef struct { 
 u_char anim_step;
 char anim_timer;
 u_char move_flg;
 int now_time_cnt;
 DATE_INFO now_time;
} MENU_TOP_DISP;

typedef struct { 
 u_char r;
 u_char g;
 u_char b;
} MSG_COLOR;

typedef struct { 
 int pri;
 int bx;
 int by;
 u_char r;
 u_char g;
 u_char b;
 u_char alp;
 u_char *str;
 u_char *stp;
 int sta;
 int flg;
 int pass;
 int csr;
 int decide;
 int mes_is_end;
 int cnt;
 int retst;
 int disptype;
 int fntmcnt;
 int fntcnt;
 int fntwait;
 u_char usrgb[4];
 u_char vib;
 u_char bx_pass;
 u_char bx_pass_old;
 u_char bx_pass_st;
} MES_DAT;

typedef struct { 
 u_short dummy;
 u_char pass;
 u_char pass_flg;
 u_char *old_adr;
 int cnt;
 u_char mes_alps[16][48];
} MESV22;

struct MES_WRK { 
 u_char texbank;
};

typedef struct { 
 char pass_btn_wait;
 u_char disp_state;
 u_char init_flg;
 int cnt;
} MSG_DISP_CTRL;

typedef struct { 
 u_char disp_type;
 int now_bank;
 int start_x;
 int start_y;
 u_char font_pos;
 u_char font_w;
 u_char font_h;
 u_char arrange;
} MSG_EXE_CTRL;

typedef struct { 
 short int sType;
 u_short usPlyrHp;
 u_short usSisHp;
 char cManyouNum;
 char cFilm[5];
 int iPrize;
 int iRank[5];
} MISSION_TBL;

typedef struct { 
 char step;
 char before_step;
 char csr;
 char title_csr;
 int vib_csr;
 int vib_time;
} PAUSE_CTRL;

typedef struct { 
 char step;
 char next_phase;
 int stream_id;
} MISSION_SEL_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
} MISSION_SEL_DISP;

typedef struct { 
 MC_SAVE_DATA aMC;
 void *pAddr;
} MIS_SAVE_DATA;

typedef struct { 
 MORPH_CODE *code;
 float cnt;
 int target;
 int value;
 int sta;
} MORPH_CODE_CTRL;

typedef struct { 
 ANI_CTRL *ani_ctrl;
 MORPH_CODE_CTRL morph;
 float rate;
 int model_no;
 int old_anm;
 int obj1_id;
 int obj2_id;
 int flg;
 PHEAD ph1;
 PHEAD ph2;
 float *morph_buf[4];
} MORPH_CTRL;

typedef int (*sceSdrUserCommandFunction)(/* parameters unknown */);

typedef struct { 
 char id[4];
 int size;
 int type;
 int rate;
 int ch;
 int interSize;
 int loopStart;
 int loopEnd;
} SpuStreamHeader;

typedef struct { 
 char id[4];
 int size;
} SpuStreamBody;

typedef struct { 
 int state;
 SpuStreamHeader sshd;
 SpuStreamBody ssbd;
 int hdrCount;
 u_char *data;
 int put;
 int count;
 int size;
 int totalBytes;
 int iopBuff;
 int iopBuffSize;
 int iopLastPos;
 int iopPausePos;
 int totalBytesSent;
 int iopZero;
 int iopZeroSize;
} AudioDec;

typedef struct { 
 int isOnCD;
 int size;
 sceCdlFILE fp;
 u_char *iopBuf;
 int fd;
} StrFile;

typedef struct { 
 u_char step;
 u_char mode;
 u_char cursor;
 u_char next_cursor;
 u_char conf_csr;
 u_char play_flg;
 u_char have_num;
} MOVIE_ROOM_MENU_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char cursor_timer;
 char move_anim_step;
 short int move_anim_timer;
 char move_rot;
} MOVIE_ROOM_MENU_DISP;

typedef struct { 
 int item_label;
 int tex_label;
 void *data_addr;
} DISP_FILM_REEL;

typedef struct { 
 int scene_no;
} MOVIE_TITLE_CTRL;

typedef struct { 
 char mode;
 char cursor;
 short int wait_timer;
} NEW_GAME_CTRL;

typedef struct { 
 int pack_num;
 int pad[3];
 int offset[1];
} PK2_HEAD;

typedef struct { 
 int analog_timer[4];
 char rpt_flg[4];
} ANALOG_PAD_CTRL;

struct PHOTO_WRK { 
 int mode;
 u_int sta;
 u_char adr_no;
 u_char cnt;
 unsigned char furn_flg : 1;
 unsigned char bGradual : 1;
 unsigned char b3DDraw : 1;
 unsigned char bRareEne : 1;
};

struct _PHOTO_DAT_OBJ_WRK { 
 MDAT_OBJ *p_obj;
 void *p_deform;
 float pos[4];
};

typedef _PHOTO_DAT_OBJ_WRK PHOTO_DAT_OBJ_WRK;
typedef void (*LPFUNC_SETFLASHLIGHT)(/* parameters unknown */);

struct MDL_REQ_SAVE { 
 int mMdlNo;
 int mAnmNo;
 int mBdNo;
 int mSmdlNo;
};

typedef enum {
	LTD_MODE_NORMAL = 0,
	LTD_MODE_TIRED = 1
} _LTD_MODE;

typedef _LTD_MODE LTD_MODE;

struct _GAME_COSTUME { 
 int mPlyrMdlNo;
 int mSisterMdlNo;
 int mPlyrAcsNo;
 int mSisterAcsNo;
};

typedef _GAME_COSTUME GAME_COSTUME;

struct PLYR_PLYR_DATA { 
 int plyr_cam_mdl_p;
 int plyr_light_mdl_p;
 u_char plyr_cam_alpha;
 u_char plyr_light_alpha;
 unsigned int plyr_req_other_mdl : 1;
 unsigned int plyr_init_ok : 1;
};

typedef struct { 
 char step;
 char conf_csr;
 short int fade_timer;
 int puzzle_id;
 int con_color;
 int con_alpha;
 int snd_id;
 int snd_bank_id;
} PZL_EXE_CTRL;

typedef struct { 
 char step;
 char sub_step;
 char next_sub_step;
 char clear_flg;
 char book_sel_csr;
 char next_book_csr;
 char book_shelf_csr;
 char exit_csr;
 int snd_id;
 int have_book[5];
 int book_shelf[5];
 int order_enter_book[5];
} SIX_PZL_CTRL;

typedef struct { 
 char anim_step;
 char sub_anim_step;
 short int anim_timer;
 short int sub_anim_timer;
 char move_anim_step;
 char move_rot;
 char msg_anim_step;
 char cap_win_anim_flg;
 short int move_anim_timer;
 short int msg_anim_timer;
 short int shelf_anim_timer;
} SIX_PZL_DISP;

typedef struct { 
 char step;
 int fade_timer;
} SAVE_POINT_FADE_IN_CTRL;

typedef struct { 
 int stream_id;
 char step;
} SAVEPOINT_MAIN_CTRL;

typedef struct { 
 int fade_timer;
 int bg_anim_timer;
 int moyou1_anim_timer;
 int moyou2_anim_timer;
} SAVEPOINT_MAIN_DISP;

typedef struct { 
 char step;
 char mode;
 char csr;
 char conf_csr;
} SAVEPOINT_TOP_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char conf_anim_step;
 char conf_anim_timer;
} SAVEPOINT_TOP_DISP;

typedef enum {
	EXT_LABEL_PKS = 0,
	EXT_LABEL_CMP = 1,
	EXT_LABEL_PK2 = 2,
	EXT_LABEL_TM2 = 3,
	EXT_LABEL_PAK = 4,
	EXT_LABEL_OBJ = 5,
	EXT_LABEL_MDL = 6,
	EXT_LABEL_ANM = 7,
	EXT_LABEL_MOT = 8,
	EXT_LABEL_DMY = 9,
	EXT_LABEL_ZLD = 10,
	EXT_LABEL_MH = 11,
	EXT_LABEL_HXD = 12,
	EXT_LABEL_STR = 13,
	EXT_LABEL_BD = 14,
	EXT_LABEL_PSS = 15,
	EXT_LABEL_SLT = 16,
	EXT_LABEL_EFF = 17,
	EXT_LABEL_SCN = 18,
	EXT_LABEL_ICO = 19
} _EXTENSION_LABEL;

typedef _EXTENSION_LABEL EXT_LABEL;

typedef struct { 
 int buf_id;
 int status;
 int id[3];
 int file_num;
 int adpcm_id;
} SCENE_LOAD_CTRL;

typedef struct { 
 char *prefix;
 int top_no;
} AREA_PREFIX_TO_NO;

typedef struct { 
 u_int SceneNo;
 char RoomName[6];
 char SubRoomName[6];
 short int MirrorFlg;
 short int BoneModelNum;
 short int DoorModelNum;
 short int FurnModelNum;
 short int ItemModelNum;
 short int PadShort;
 int PadInt[1];
} SCENE_DATA_HEADER;

typedef struct { 
 int TableNum;
 u_int TimingTableOffset;
 u_int VibrationDataOffset;
} SCENE_EFFECT_HEADER;

typedef struct { 
 int Frame;
 int Offset;
} SCENE_EFFECT_TABLE;

typedef struct _SCENE_EFFECT_CTRL_DATA;

struct _SCENE_EFFECT_CTRL_DATA { 
 void *pRet;
 int EffectId;
 int StartFrame;
 int EndFrame;
 _SCENE_EFFECT_CTRL_DATA *pNext;
 char ChangeData;
};

typedef _SCENE_EFFECT_CTRL_DATA SCENE_EFFECT_CTRL_DATA;

typedef struct { 
 SCENE_EFFECT_CTRL_DATA *pDataTop;
 SCENE_EFFECT_CTRL_DATA *pDataLast;
 int LenzFlareFlg;
 float SpotLightPos[4];
 float SpotLightRot[4];
 int ExecutedFrame;
} SCENE_EFFECT_CTRL;

typedef struct _SCENE_FADE_MODEL_DATA;

struct _SCENE_FADE_MODEL_DATA { 
 int ModelType;
 int ModelId;
 int StartFrame;
 int EndFrame;
 int StartAlpha;
 int EndAlpha;
 _SCENE_FADE_MODEL_DATA *pNext;
};

typedef _SCENE_FADE_MODEL_DATA SCENE_FADE_MODEL_DATA;

typedef struct { 
 SCENE_FADE_MODEL_DATA *pDataTop;
 SCENE_FADE_MODEL_DATA *pDataLast;
} SCENE_FADE_MODEL_CTRL;

typedef struct { 
 short int FuncNo;
 short int ModelType;
 short int ModelId;
 short int StartAlpha;
 short int EndAlpha;
 short int Frame;
} SCENE_EFFECT_MODELFADE;

typedef struct { 
 short int FuncNo;
 short int ModelId;
 short int Type;
 short int StartScaleX;
 short int EndScaleX;
 short int StartScaleY;
 short int EndScaleY;
 short int StartAlpha;
 short int EndAlpha;
 short int StartWaveRate;
 short int EndWaveRate;
 short int StartTexRate;
 short int EndTexRate;
 short int StartWaveSpeed;
 short int EndWaveSpeed;
 short int Distance;
 short int Time;
 short int Pad;
} SCENE_EFFECT_PDEFORM;

struct _SCENE_PDEFORM_DATA { 
 float Position[4];
 SCENE_EFFECT_PDEFORM Param;
 float WaveSpeed;
 float WaveRate;
 float TexRate;
 int StartFrame;
 int EndFrame;
};

typedef _SCENE_PDEFORM_DATA SCENE_PDEFORM_DATA;

typedef struct { 
 SCENE_PDEFORM_DATA *pDataTop;
 SCENE_PDEFORM_DATA *pDataLast;
} SCENE_PDEFORM_CTRL;

typedef struct _SCENE_ENE_AURA_DATA;

struct _SCENE_ENE_AURA_DATA { 
 float Position[4];
 int ModelId;
 u_int Rgba;
 float Size;
 float AlphaRate;
 float Adjust;
 void *pRet;
 _SCENE_ENE_AURA_DATA *pNext;
};

typedef _SCENE_ENE_AURA_DATA SCENE_ENE_AURA_DATA;

typedef struct { 
 SCENE_ENE_AURA_DATA *pDataTop;
 SCENE_ENE_AURA_DATA *pDataLast;
} SCENE_ENE_AURA_CTRL;

typedef struct { 
 short int FuncNo;
 short int ModelId;
 short int Size;
 short int AlphaRate;
 short int R;
 short int G;
 short int B;
 short int A;
 short int Adjust;
 short int Pad;
} SCENE_EFFECT_ENE_AURA;

struct _SCENE_HAZE_DATA { 
 float Position[4];
 float HipPosition[4];
 float OldHipPosition[4];
 float Rot[4];
 int ModelId;
 void *pEffRet;
};

typedef _SCENE_HAZE_DATA SCENE_HAZE_DATA;

typedef struct { 
 short int FuncNo;
 short int ModelId;
} SCENE_EFFECT_HAZE;

typedef struct { 
 short int FuncNo;
 short int ModelId;
} SCENE_EFFECT_HAZE_OFF;

typedef struct _SCENE_VIBRATION_DATA;

struct _SCENE_VIBRATION_DATA { 
 short int StartFrame;
 short int EndFrame;
 short int BlankTime;
 short int VibrateTime;
 short int Power;
 short int ActuaterNo;
 int BlankCount;
 int VibrateCount;
 _SCENE_VIBRATION_DATA *pNext;
};

typedef _SCENE_VIBRATION_DATA SCENE_VIBRATION_DATA;

typedef struct { 
 SCENE_VIBRATION_DATA *pDataTop;
 SCENE_VIBRATION_DATA *pDataLast;
} SCENE_VIBRATION_CTRL;

typedef struct { 
 short int FuncNo;
 short int BlankTime;
 short int VibrateTime;
 short int Power;
 short int TotalTime;
 short int ActuaterNo;
} SCENE_EFFECT_VIBRATION;

typedef struct { 
 short int FuncNo;
 short int StartTime;
 short int EndTime;
 short int BlankTime;
 short int VibrateTime;
 short int Power;
 short int ActuaterNo;
} SCENE_EFFECT_VIBRATION2;

typedef struct { 
 float Position[4];
 void *pEffectRet;
 ANI_CTRL *pMdlAnm;
} SCENE_EFFECT_TORCH_DATA;

typedef struct { 
 short int FuncNo;
 short int ModelId;
 short int TorchType;
 short int Pad;
} SCENE_EFFECT_TORCH;

typedef struct { 
 short int FuncNo;
 short int Type;
 short int StartSpeed;
 short int EndSpeed;
 short int StartAlpha;
 short int EndAlpha;
 short int AlphaMax;
 short int ColorMax;
 short int Time;
 short int Pad;
} SCENE_EFFECT_DITHER;

typedef struct { 
 short int FuncNo;
 short int Type;
 short int StartAlpha;
 short int EndAlpha;
 short int StartScale;
 short int EndScale;
 short int StartRot;
 short int EndRot;
 short int Time;
 short int Pad;
} SCENE_EFFECT_BLUR;

typedef struct { 
 short int FuncNo;
 short int Type;
 short int StartRate;
 short int EndRate;
 short int Time;
 short int Pad;
} SCENE_EFFECT_DEFORM;

typedef struct { 
 short int FuncNo;
 short int StartRate;
 short int EndRate;
 short int Time;
} SCENE_EFFECT_FOCUS;

typedef struct { 
 short int FuncNo;
 short int Type;
 short int StartColor;
 short int EndColor;
 short int StartAlpha;
 short int EndAlpha;
 short int Time;
 short int Pad;
} SCENE_EFFECT_CONTRAST;

typedef struct { 
 short int FuncNo;
 short int StartColor;
 short int EndColor;
 short int StartAlpha;
 short int EndAlpha;
 short int StartAlpha2;
 short int EndAlpha2;
 short int Time;
} SCENE_EFFECT_NEGA;

typedef struct { 
 short int FuncNo;
 short int StartAlpha;
 short int EndAlpha;
 short int Time;
} SCENE_EFFECT_FADEFRAME;

typedef struct { 
 short int FuncNo;
 short int EffectId;
} SCENE_EFFECT_OFF;

typedef struct { 
 short int FuncNo;
 short int Type;
} SCENE_EFFECT_FOCUSDEPTH;

typedef struct { 
 short int FuncNo;
 short int Frame;
} SCENE_EFFECT_OVERLAP;

typedef struct { 
 short int FuncNo;
 short int Pad;
} SCENE_EFFECT_LENZ_FLARE;

typedef struct { 
 short int FuncNo;
 short int ModelType;
 short int ModelId;
 short int LightNo;
 short int R;
 short int G;
 short int B;
 short int Power;
} SCENE_EFFECT_POINTLIGHT;

typedef struct { 
 short int FuncNo;
 short int ModelType;
 short int ModelId;
 short int LightNo;
 short int R;
 short int G;
 short int B;
 short int Power;
 short int Cone;
 short int Pad;
} SCENE_EFFECT_SPOTLIGHT;

typedef struct { 
 short int FuncNo;
 short int R;
 short int G;
 short int B;
 short int Power;
 short int Cone;
} SCENE_EFFECT_HANDSPOTLIGHT;

typedef struct { 
 short int FuncNo;
 short int ModelId;
} SCENE_EFFECT_PDEFORM_OFF;

typedef struct { 
 short int FuncNo;
 short int OnFlg;
} SCENE_EFFECT_MONOCHRO_ONOFF;

typedef struct { 
 short int FuncNo;
 short int InFlg;
 short int ColorType;
 short int Time;
} SCENE_EFFECT_FADE_IN_OUT;

typedef struct { 
 short int FuncNo;
 short int ColorR;
 short int ColorG;
 short int ColorB;
 short int Alpha;
 short int Pad;
} SCENE_EFFECT_FADE_SCREEN;

typedef struct { 
 short int FuncNo;
 short int Pad;
} SCENE_EFFECT_FADE_SCREEN_OFF;

typedef enum {
	SCN_TEST_SLCT = 0,
	SCN_TEST_PLAY = 1,
	SCN_TEST_PLAY_MOVIE = 2,
	SCN_TEST_MENU = 3
} SCN_TEST_MODE;

typedef struct { 
 G3DLIGHT light_tmp[36];
 SCENE_FOG fog_tmp;
 float amb_tmp[6][4];
 u_int mode;
 int select_stat;
 int scene_no;
 u_int init;
 u_int load_status;
 int debug_flg;
 int main_menu_csr;
 int menu_csr;
 int now_menu;
 int loop_flg;
 int light_no;
 int l_menu_csr;
 int effect_id;
 int effect_csr;
 int ene_mdl_no;
 u_int *load_adrs;
 int LightAllDispFlg;
 int LightDispFlg[36];
 int LightDispNum;
 u_int *pMovieEffect;
} SCN_TEST_WRK;

typedef struct { 
 FOD_EFF_DATA eff_data;
 u_int eff_flg;
 int eff_no;
 int param_num;
 char *eff_name;
} SCN_EFF_CTRL;

typedef struct { 
 SCN_ENE_EF_PDF Param;
 float Position[4];
 float Distance;
 float WaveSpeed;
 int ModelId;
 void *pEffRet;
} SCN_TEST_PDEFORM;

typedef struct { 
 char step;
 int stream_id;
} SETUP_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
} SETUP_DISP_CTRL;

typedef struct { 
 char step;
 char mode;
 char conf_csr;
 char menu_csr;
 char setup_csr;
 char costume_csr;
 char mio_csr;
 char mayu_csr;
 char difficulty_csr;
 char next_place;
 int stream_id;
} SETUP_MENU_CTRL;

typedef struct { 
 char anim_step;
 char anim_timer;
 char csr_timer;
 char menu_csr_timer;
 char sel_anim_timer;
 int fade_anim_timer;
} SETUP_MENU_DISP;

struct _COSTUME_TWIN_TBL { 
 short int mMioMdl;
 short int mMayuMdl;
 short int mMioAcsMdl;
 short int mMayuAcsMdl;
};

typedef _COSTUME_TWIN_TBL COSTUME_TWIN_TBL;

typedef struct { 
 int loop_cnt;
 unsigned char hit;
 long unsigned int ghost_erase_tm;
} SIS_LOCAL_ALG;

struct SIS_DATA { 
 unsigned int plyr_ready_sort : 1;
 unsigned int ane_alg_req : 1;
 int ane_alg_adrs;
};

struct SIS_SEARCH { 
 char start;
 char end;
 char flg;
};

struct SIS_MOTION { 
 char mot_loop;
 char mot_end;
 char now_tbl;
 SIS_ANI_TBL *sat;
};

struct SIS_AREA_CHG_SUB { 
 int now;
 float pos[4];
};

struct SIS_AREA_CHG { 
 int old;
 SIS_AREA_CHG_SUB *target;
};

typedef struct { 
 char state;
 int max_score;
} PLYR_SOUL_LIST;

typedef enum {
	SUBTITLE_STATUS_IDLE = 0,
	SUBTITLE_STATUS_PRELOAD = 1,
	SUBTITLE_STATUS_EXEC = 2
} SUBTITLE_STATUS;

typedef struct { 
 short int MsgId;
 short int Frame;
} SUBTITLE_MSG_DATA;

typedef struct { 
 short int StreamFile;
 short int CharId;
 SUBTITLE_MSG_DATA MsgData[1];
} SUBTITLE_DATA;

typedef struct { 
 SUBTITLE_DATA *pSubTitleData;
 int StreamId;
 int Status;
 int Counter;
 int MsgDataNo;
 int ObjType;
 int ObjId;
} SUBTITLE_CTRL;

typedef struct { 
 char step;
 char mc_step;
 char conf_csr;
 char exit_state;
 char format_end_cnt;
} SYSTEM_DATA_SAVE_CTRL;

typedef struct { 
 int msg_id;
 char anim_step;
 char anim_timer;
} SYSTEM_DATA_SAVE_DISP;

typedef struct { 
 u_char title_step;
 u_char wait_timer;
 int stream_id;
 int snd_id;
 int snd_bank_id;
 int iOriginSndBankLoadPriority;
} TITLE_WRK;

typedef struct { 
 u_char rgb;
 char start_timer;
 int timer;
} TITLE_DISP_CTRL;

typedef struct { 
 char csr;
} TITLE_MENU_CTRL;

typedef struct { 
 short int move_movie_timer;
 char title_movie_flg;
 char play_demo_cnt;
 char movie_lock_flg;
} TITLE_MOVIE_WRK;

struct _reent { 
 int _errno;
 __sFILE *_stdin;
 __sFILE *_stdout;
 __sFILE *_stderr;
 int _inc;
 char _emergency[25];
 int _current_category;
 char *_current_locale;
 int __sdidinit;
 void (*__cleanup)(/* parameters unknown */);
 _Bigint *_result;
 int _result_k;
 _Bigint *_p5s;
 _Bigint **_freelist;
 int _cvtlen;
 char *_cvtbuf;
 union { 
	 struct { 
		 unsigned int _unused_rand;
		 char *_strtok_last;
		 char _asctime_buf[26];
		 tm _localtime_buf;
		 int _gamma_signgam;
		 long long unsigned int _rand_next;
		} _reent;
	 struct { 
		 unsigned char *_nextf[30];
		 unsigned int _nmalloc[30];
		} _unused;
	} _new;
 _atexit *_atexit;
 _atexit _atexit0;
 void (**_sig_func)(/* parameters unknown */);
 _glue __sglue;
 __sFILE __sf[3];
};

enum _ENCODE_TYPE {
	ENCODE_TYPE_NONE = 0,
	ENCODE_TYPE_SLIDE = 1,
	ENCODE_TYPE_FORCE_WORD = 65535
};

typedef _ENCODE_TYPE ENCODE_TYPE;

struct _ENCODE_DIV_SECTION { 
 short int type;
 short unsigned int size;
};

typedef _ENCODE_DIV_SECTION ENCODE_DIV_SECTION;

struct _CMP_HEADER { 
 int size;
 int ext;
 int div_size;
 int div_num;
 int data_offset;
 ENCODE_DIV_SECTION *div_p;
 int mapping;
 int cmp_size;
};

typedef _CMP_HEADER CMP_HEADER;

enum _FILE_LOAD_TYPE {
	FILE_LOAD_TYPE_EE = 0,
	FILE_LOAD_TYPE_SPU = 1,
	FILE_LOAD_TYPE_DECODE_EE = 2,
	FILE_LOAD_TYPE_DECODE_IOP = 3,
	FILE_LOAD_TYPE_FORCE_DWORD = -1
};

typedef _FILE_LOAD_TYPE FILE_LOAD_TYPE;

struct _LOAD_REQ_NEW { 
 FILE_LOAD_TYPE type;
 int tmp_ee_adrs;
 int adrs;
 LOAD_DEF_STRUCT ld;
};

typedef _LOAD_REQ_NEW LOAD_REQ_NEW;

struct _FILE_LOAD_RET { 
 int read_size;
 int cancel_flg;
};

typedef _FILE_LOAD_RET FILE_LOAD_RET;

enum _CMP_EEIOP_DECODE_STATE {
	DECODE_STATE_HEADER_LOAD = 1025,
	DECODE_STATE_END = 1026
};

typedef _CMP_EEIOP_DECODE_STATE CMP_EEIOP_DECODE_STATE;

enum _LOAD_CANCEL_TYPE {
	LOAD_CANCEL_NONE = 0,
	LOAD_CANCEL_STORE = 1,
	LOAD_CANCEL_NORMAL = 2,
	LOAD_CANCEL_WAIT = 3
};

typedef _LOAD_CANCEL_TYPE LOAD_CANCEL_TYPE;

struct _FILE_LOAD_SYS { 
 int yet_files;
 LOAD_CANCEL_TYPE cancel_type;
 void (*cancel_func)(/* parameters unknown */);
 void *cancel_arg;
 int master_thread_id;
 int ring_buf_num;
 int one_buf_size;
 int file_load_wrk_max;
 int load_th_priority;
 int decode_th_priority;
};

typedef _FILE_LOAD_SYS FILE_LOAD_SYS;

struct _FILE_LOAD_WRK { 
 int file_no;
 int start_sector;
 char *buffer;
 void (*func)(/* parameters unknown */);
 FILE_LOAD_TYPE type;
 int priority;
 void *arg;
 int read_size;
 int size;
 short unsigned int temp_id;
 short int id;
};

typedef _FILE_LOAD_WRK FILE_LOAD_WRK;

typedef struct _SPU_BUF;

struct _SPU_BUF { 
 int use;
 int adrs;
 int end_adrs;
 int size;
 int next_buf_len;
 _SPU_BUF *next;
};

typedef _SPU_BUF SPU_BUF;

struct _SND_BUF_PLAYER { 
 SOUND_BUF_PLAY p;
 void *s3d;
 short int play_id;
 short int vol;
 short int target_vol;
 short int bvol;
 short int spd;
 short int pitch;
 short int bpitch;
 short int target_pitch;
 short int pspd;
 unsigned char use : 1;
 unsigned char s3d_free : 1;
 unsigned char pause : 1;
 char fadestop;
 short int pan;
 short int cnt;
 int loopend_next;
};

typedef _SND_BUF_PLAYER SND_BUF_PLAYER;

struct _HIL_ONE_FORMAT { 
 char irx_name[8];
 int offset;
 int size;
};

typedef _HIL_ONE_FORMAT HIL_ONE_FORMAT;

struct _HIL_FORMAT { 
 int num;
 int dil_size;
 int padding[2];
};

typedef _HIL_FORMAT HIL_FORMAT;

enum _SND_STREAM_ERR {
	SND_STREAM_OK = 0,
	SND_STREAM_ERR_IOPSEND = 1,
	SND_STREAM_ERR_HEADER = 2,
	SND_STREAM_ERR_NOT_USE = 3,
	SND_STREAM_ERR_IN_USE = 4,
	SND_STREAM_ERR_VOICE = 5,
	SND_STREAM_ERR_SPU_MEM = 6,
	SND_STREAM_ERR_WAIT_QUEUE = 7
};

typedef _SND_STREAM_ERR SND_STREAM_ERR;

enum _SND_STREAM_RET {
	SND_STREAM_RET_NOT_USE = 0,
	SND_STREAM_RET_PLAYING = 1,
	SND_STREAM_RET_PRELOADING = 0,
	SND_STREAM_RET_PRELOAD_OK = 1
};

typedef _SND_STREAM_RET SND_STREAM_RET;

struct _STREAM_QUEUE { 
 sceVu0FVECTOR pos;
 sceVu0FVECTOR vel;
 sceVu0FVECTOR dir;
 int status;
 int priority;
 unsigned int s3d : 1;
 unsigned int effect : 1;
 unsigned int loop : 1;
 unsigned int use : 1;
 unsigned int playing : 1;
 unsigned int end : 1;
 unsigned int resume : 1;
 unsigned int pause : 1;
 unsigned int reset_flg : 1;
 unsigned int first_flg : 1;
 unsigned int vel_flg : 1;
 unsigned int dir_flg : 1;
 int reset_in_time;
 int in_time;
 int vol;
 int file_no;
 int header_file_no;
 int id;
 int offset;
 float play_spd;
};

typedef _STREAM_QUEUE STREAM_QUEUE;

struct _SND_BANK_FILE { 
 short int m_Ready;
 short int m_RefCnt;
 int m_FileNo;
 void *m_pAdrs;
 int m_Size;
};

typedef _SND_BANK_FILE SND_BANK_FILE;

struct _SND_BANK { 
 unsigned int use : 1;
 void *s3d;
 SND_BANK_FILE *pSndBDFile;
 SND_BANK_FILE *pSndHXDFile;
 int id;
};

typedef _SND_BANK SND_BANK;


struct exception { 
 int type;
 char *name;
 double arg1;
 double arg2;
 double retval;
 int err;
};

struct _SND_3D_WRK { 
 sceVu0FVECTOR pos;
 sceVu0FVECTOR velocity;
 int status;
 int voll;
 int volr;
 int pitch;
};

typedef _SND_3D_WRK SND_3D_WRK;

struct _SND_3D_LISTENER { 
 sceVu0FVECTOR pos;
 sceVu0FVECTOR velocity;
 sceVu0FVECTOR dir;
 sceVu0FVECTOR top;
 int defer;
};

typedef _SND_3D_LISTENER SND_3D_LISTENER;

enum _SND_PCM_STREAM_ERR {
	SND_PCM_STREAM_OK = 0,
	SND_PCM_STREAM_ERR_IOPSEND = 1,
	SND_PCM_STREAM_ERR_HEADER = 2,
	SND_PCM_STREAM_ERR_NOT_USE = 3,
	SND_PCM_STREAM_ERR_IN_USE = 4,
	SND_PCM_STREAM_ERR_WAIT_QUEUE = 5
};

typedef _SND_PCM_STREAM_ERR SND_PCM_STREAM_ERR;

enum _SND_PCM_STREAM_RET {
	SND_PCM_STREAM_RET_NOT_USE = 0,
	SND_PCM_STREAM_RET_PLAYING = 1,
	SND_PCM_STREAM_RET_PRELOADING = 0,
	SND_PCM_STREAM_RET_PRELOAD_OK = 1
};

typedef _SND_PCM_STREAM_RET SND_PCM_STREAM_RET;

struct _SOUND_SYS { 
 char mono;
 int type_vol[5];
};

typedef _SOUND_SYS SOUND_SYS;

struct _SND_PCM_STREAM_WRK { 
 PCM_STREAM_PLAY p;
 PCM_STREAM_START s;
 EEIOP_STREAM_STATUS status;
 unsigned int pre_load_ok : 1;
 unsigned int play_flg : 1;
 unsigned int pause : 1;
 int file_no;
 short int vol;
 short int target_vol;
 short int spd;
};

typedef _SND_PCM_STREAM_WRK SND_PCM_STREAM_WRK;

enum _AUTO_BD_MODE {
	AUTO_BD_MODE_NO_USE = 0,
	AUTO_BD_MODE_MEM_WAIT = 1,
	AUTO_BD_MODE_LOAD_WAIT = 2,
	AUTO_BD_MODE_PLAYEND_WAIT = 3
};

typedef _AUTO_BD_MODE AUTO_BD_MODE;

struct _AUTO_BD_WRK { 
 int mode;
 int file_no;
 int header_file_no;
 int bank_no;
 int play_id;
 short int pitch;
 short int vol;
 sceVu0FVECTOR pos;
 sceVu0FVECTOR vel;
 sceVu0FVECTOR dir;
 int in_time;
 unsigned int s3d : 1;
 unsigned int effect : 1;
 unsigned int loop : 1;
 unsigned int use : 1;
 unsigned int start : 1;
 unsigned int playing : 1;
 unsigned int end : 1;
 unsigned int resume : 1;
 unsigned int pause : 1;
};

typedef _AUTO_BD_WRK AUTO_BD_WRK;

enum _FILE_STREAM_REQ_ENUM {
	REQ_STM_START = 0,
	REQ_STM_READ = 1,
	REQ_STM_STOP = 2
};

typedef _FILE_STREAM_REQ_ENUM FILE_STREAM_REQ_ENUM;

struct _strSTM_START { 
 LOAD_DEF_STRUCT ld;
};

typedef _strSTM_START strSTM_START;

struct _strSTM_READ { 
 int read_size;
 void *ee_buf;
};

typedef _strSTM_READ strSTM_READ;

struct _SND_STREAM_WRK { 
 STREAM_PLAY p;
 STREAM_START s;
 SOUND_INFO info[2];
 EEIOP_STREAM_STATUS status;
 unsigned int header_ready : 1;
 unsigned int pre_load_ok : 1;
 unsigned int play_flg : 1;
 unsigned int fade_stop : 1;
 unsigned int stop : 1;
 int header_id;
 void *s3dhndl;
 void *header_buf;
 short int vol;
 short int target_vol;
 short int spd;
 short int pitch;
 short int target_pitch;
 short int pspd;
 short int abort_cnt;
 char s3d[2];
 int offset;
 float play_spd;
 int file_no;
};

typedef _SND_STREAM_WRK SND_STREAM_WRK;

struct _PLAY_PSS_FLAGS { 
 short int sStopPhase;
 short unsigned int bStarted : 1;
 short unsigned int bPauseFlg : 1;
 short unsigned int bNtsc2Pal : 1;
 short unsigned int bSendImage : 1;
 short unsigned int bErrorCallback : 1;
};

typedef _PLAY_PSS_FLAGS PLAY_PSS_FLAGS;
typedef __uint32_t ULong;

struct rqueue { 
 int top;
 int btm;
 struct { 
	 u_char type;
	 u_char id;
	} que[512];
};

typedef struct { 
 void *cpbuffer;
 void *sbuffer;
 void *obuffer;
 sceSifCmdData *sysdata;
 int ssize;
 sceSifCmdData *userdata;
 int usize;
 unsigned int *sreg;
 int evflag;
} sceSifCmdDataTable;

typedef struct { 
 unsigned int request;
 unsigned int opt0;
 unsigned int opt1;
 unsigned int opt2;
 unsigned int opt3;
} _enddata;

typedef struct { 
 unsigned int command;
} _binddata;

typedef struct { 
 void *src;
 void *dest;
 int size;
} _rdata;

typedef struct { 
 unsigned int fno;
 int ssize;
 void *receive;
 int rsize;
 int mode;
} _calldata;

typedef struct { 
 unsigned int fno;
} _canceldata;

typedef struct { 
 sceSifCmdHdr chdr;
 unsigned int status;
 void *paddr;
 unsigned int pid;
 union { 
	 unsigned int dummy[8];
	 _enddata end;
	 _binddata bind;
	 _calldata call;
	 _canceldata cancel;
	 _rdata rdata;
	} type;
} _sceRpcPacket;

typedef struct { 
 unsigned int idkey;
 _sceRpcPacket *sys_buffer;
 int ssize;
 _sceRpcPacket *user_buffer;
 int usize;
 _sceRpcPacket *free_buffer;
 int fsize;
 _sceRpcPacket *free_buffer2;
 int fsize2;
 int findex;
 sceSifQueueData *qdata;
} _sceRpcDataTable;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int flag;
 unsigned int mode;
 char name[1024];
 int ee_fds;
} _sceFsOpenData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int fd;
 int ee_fds;
} _sceFsCloseData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int fd;
 int offset;
 int how;
 int ee_fds;
} _sceFsLseekData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int fd;
 unsigned int addr;
 int size;
 unsigned int intr_addr;
 int ee_fds;
} _sceFsReadData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int fd;
 unsigned int addr;
 int size;
 int psize;
 unsigned char pdata[16];
 int ee_fds;
} _sceFsWriteData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int fd;
 int cmd;
 unsigned char arg[1024];
 void *ret_argadr;
 int ret_argsiz;
 int arglen;
} _sceFsIoctlData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 char name[1024];
} _sceFsNameData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 void *addr;
} _sceFsAddrData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 void *addr;
 unsigned char name[1024];
} _sceFsGStatData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 unsigned int cbit;
 sce_stat stat;
 unsigned char name[1024];
} _sceFsCStatData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 char path[1024];
 char blkdevname[1024];
 unsigned char arg[1024];
 int arglen;
} _sceFsFormatData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 char oldpath[1024];
 char newpath[1024];
} _sceFsRenameData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int fd;
 int flag;
 char path[1024];
} _sceFsSyncData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int flag;
 char name[1024];
} _sceFsMkdirData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 char fsdevname[1024];
 char blkdevname[1024];
 unsigned char arg[1024];
 int flag;
 int arglen;
} _sceFsMountData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int fd;
 long int offset;
 int how;
 int ee_fds;
} _sceFsLseek64Data;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 char path[1024];
 unsigned char arg_buf[1024];
 int cmd;
 int arglen;
 void *ret_argadr;
 int ret_arglen;
} _sceFsDevctlData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 char existing[1024];
 char new[1024];
} _sceFsSymlinkData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 u_int bufsize;
 u_int bufaddr;
 char path[1024];
} _sceFsReadlinkData;

typedef struct { 
 int psize;
 int ssize;
 unsigned int paddr;
 unsigned int saddr;
 unsigned char pdata[64];
 unsigned char sdata[64];
} _sceFsReadIntrData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retmod;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int data_top[4];
} _sceFsIntrRcvData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retmod;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int ee_ret;
 unsigned int ee_dentadr;
 sce_dirent dent;
} _sceFsIntrRcvDirData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retmod;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int ee_ret;
 unsigned int ee_readladr;
 unsigned int ee_readlsiz;
 char linkname[1024];
} _sceFsIntrRcvReadLData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retmod;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int ee_ret;
 unsigned int ret_argadr;
 unsigned int ret_argsiz;
 unsigned char arg[1024];
} _sceFsIntrRcvIoctlData;

typedef struct { 
 int ee_semid;
 unsigned int ee_retmod;
 unsigned int ee_retadr;
 unsigned int ee_retsiz;
 int ee_ret;
 unsigned int ret_argadr;
 unsigned int ret_argsiz;
 unsigned char arg[1024];
} _sceFsIntrRcvDevctlData;

typedef struct { 
 int i_fd;
 unsigned int i_flag;
 int i_errno;
 void *i_private;
} _sceFsIob;

typedef struct { 
 void (*sceFsPoffCbfunc)(/* parameters unknown */);
 void *sceFsPoffCbdata;
} _sceFsPoffData;

typedef struct { 
 void *load_addr;
 char name[252];
} _sceLoadIHData;

typedef struct { 
 unsigned int heap_size;
} _sceAllocIHData;

typedef struct { 
 void *heap_addr;
} _sceFreeIHData;

typedef struct { 
 unsigned int heap_size;
 int alloc_type;
 void *addr;
} _sceAllocSMData;

typedef struct { 
 unsigned int code0;
 unsigned int code1;
 char data0[252];
 char data1[252];
} _sceLoadFileData;

struct TLBEntry { 
 u_int pageMask;
 u_int entryHi;
 u_int entryLo0;
 u_int entryLo1;
};

struct TLB { 
 int numKernel;
 int numFix;
 int numUnfix;
 int wired;
 TLBEntry *kernelTLB;
 TLBEntry *fixTLB;
 TLBEntry *unfixTLB;
};

typedef struct { 
 int num;
 void *func;
} SysEntry;

typedef struct { 
 u_int Spdif : 1;
 u_int Aspct : 2;
 u_int Video : 1;
 u_int oldLang : 1;
 u_int Compval : 8;
 u_int pad0 : 3;
 u_int Language : 5;
 int TimeZone : 11;
} OsdConfigParam;

typedef struct { 
 unsigned int GS : 1;
 unsigned int SBUS : 1;
 unsigned int VBON : 1;
 unsigned int VBOF : 1;
 unsigned int VIF0 : 1;
 unsigned int VIF1 : 1;
 unsigned int VU0 : 1;
 unsigned int VU1 : 1;
 unsigned int IPU : 1;
 unsigned int TIM0 : 1;
 unsigned int TIM1 : 1;
 unsigned int TIM2 : 1;
 unsigned int TIM3 : 1;
 unsigned int SFIF0 : 1;
 unsigned int VU0WD : 1;
 unsigned int PGPU : 1;
 unsigned int p0;
} tI_STAT;

typedef struct { 
 unsigned int GS : 1;
 unsigned int SBUS : 1;
 unsigned int VBON : 1;
 unsigned int VBOF : 1;
 unsigned int VIF0 : 1;
 unsigned int VIF1 : 1;
 unsigned int VU0 : 1;
 unsigned int VU1 : 1;
 unsigned int IPU : 1;
 unsigned int TIM0 : 1;
 unsigned int TIM1 : 1;
 unsigned int TIM2 : 1;
 unsigned int TIM3 : 1;
 unsigned int SFIF0 : 1;
 unsigned int VU0WD : 1;
 unsigned int PGPU : 1;
 unsigned int p0;
} tI_MASK;

typedef struct { 
 unsigned int UMOD : 2;
 unsigned int USBL : 1;
 unsigned int UPEN : 1;
 unsigned int UEPS : 1;
 unsigned int SCS : 2;
 unsigned int p0 : 1;
 unsigned int HSE : 1;
 unsigned int p1 : 4;
 unsigned int UODE : 1;
 unsigned int TWUB : 1;
 unsigned int RWUB : 1;
 unsigned int p2;
} tS_LCR;

typedef struct { 
 unsigned int DATA0;
 unsigned int DATA1;
 unsigned int DATA2;
 unsigned int DATA3;
} tSB_MSCOM;

typedef struct { 
 unsigned int DATA0;
 unsigned int DATA1;
 unsigned int DATA2;
 unsigned int DATA3;
} tSB_SMCOM;

typedef struct { 
 unsigned int FLAG;
} tSB_MSFLG;

typedef struct { 
 unsigned int FLAG;
} tSB_SMFLG;

typedef struct { 
 unsigned int MRQM : 1;
 unsigned int MDE : 3;
 unsigned int SRQM : 1;
 unsigned int SDE : 3;
 unsigned int MSOK : 1;
 unsigned int STOP : 1;
 unsigned int p0 : 1;
 unsigned int DIR : 1;
 unsigned int DMAS : 2;
 unsigned int ACH : 2;
 unsigned int DBSY : 1;
 unsigned int LOCK : 1;
 unsigned int SINT : 1;
 unsigned int SRST : 1;
 unsigned int MSBE : 4;
 unsigned int SMBE : 4;
 unsigned int FIFO : 4;
} tSB_STAT;

typedef struct { 
 unsigned int MRQM : 1;
 unsigned int p0 : 7;
 unsigned int MSOK : 1;
 unsigned int STOP : 1;
 unsigned int p1 : 3;
 unsigned int DMAS : 1;
 unsigned int p2 : 3;
 unsigned int LOCK : 1;
 unsigned int SINT : 1;
 unsigned int SRST : 1;
 unsigned int p3 : 12;
} tSB_MCNT;

typedef struct { 
 unsigned int IOER : 1;
 unsigned int DSER : 1;
 unsigned int DMER : 1;
 unsigned int DMIS : 1;
 unsigned int MDIR : 1;
 unsigned int FDST : 1;
 unsigned int p0 : 27;
} tSB_ERR;

typedef struct { 
 unsigned int TBX : 4;
 unsigned int TBY : 1;
 unsigned int ABR : 2;
 unsigned int TPF : 2;
 unsigned int DTD : 1;
 unsigned int DFE : 1;
 unsigned int PBW : 1;
 unsigned int PBC : 1;
 unsigned int p0 : 3;
 unsigned int HDS2 : 1;
 unsigned int HDS : 2;
 unsigned int VDS : 1;
 unsigned int NPB : 1;
 unsigned int LBS : 1;
 unsigned int IRS : 1;
 unsigned int DMSK : 1;
 unsigned int IRQ : 1;
 unsigned int DREQ : 1;
 unsigned int IDLE : 1;
 unsigned int RFFL : 1;
 unsigned int WFEP : 1;
 unsigned int DMD : 2;
 unsigned int ODE : 1;
} tPG_STAT;

typedef struct { 
 unsigned int PARAMETER : 4;
} tPG_PA0;

typedef struct { 
 unsigned int PARAMETER : 4;
} tPG_PA1;

typedef struct { 
 unsigned int PARAMETER : 4;
} tPG_PA2;

typedef struct { 
 unsigned int PARAMETER : 4;
} tPG_PA3;

typedef struct { 
 unsigned int DATA : 4;
} tPG_MSCOM;

typedef struct { 
 unsigned int DATA : 4;
} tPG_SMCOM;

typedef struct { 
 unsigned int IDMA : 1;
 unsigned int IFIF : 1;
 unsigned int ICOM : 1;
 unsigned int DRON : 1;
 unsigned int DMOD : 2;
 unsigned int MSE : 1;
 unsigned int SME : 1;
 unsigned int VGF : 5;
 unsigned int p0 : 3;
 unsigned int VSF : 3;
 unsigned int p1 : 1;
 unsigned int PMOD : 1;
 unsigned int p2 : 3;
 unsigned int IDMAF : 1;
 unsigned int IFIFF : 1;
 unsigned int ICOMF : 1;
 unsigned int p3 : 5;
} tPG_IF;

typedef struct { 
 unsigned int EN : 1;
 unsigned int p0 : 31;
} tPM_CNT;

typedef struct { 
 unsigned int TMOUT;
 unsigned int p0 : 15;
 unsigned int EN : 1;
} tVU0WD_CTRL;

typedef struct { 
 unsigned int RC : 3;
 unsigned int LC : 7;
 unsigned int T1248 : 2;
 unsigned int SCLK : 1;
 unsigned int CMOD : 2;
 unsigned int EX : 1;
 unsigned int PRST : 1;
 unsigned int SINT : 1;
 unsigned int XPCK : 1;
 unsigned int PCK2 : 2;
 unsigned int SPML : 4;
 unsigned int GCONT : 1;
 unsigned int PHS : 1;
 unsigned int PVS : 1;
 unsigned int PEHS : 1;
 unsigned int PEVS : 1;
 unsigned int CLKSEL : 2;
 unsigned int NVCK : 1;
 unsigned int SLCK2 : 1;
 unsigned int VCKSEL : 2;
 unsigned int VHP : 1;
 unsigned int COFF : 1;
 unsigned int p0 : 26;
} tGS_SMODE1;

typedef struct { 
 unsigned int RFSH : 6;
 unsigned int p0 : 26;
} tGS_SRFSH;

typedef struct { 
 unsigned int HFP : 11;
 unsigned int HBP : 11;
 unsigned int HSEQ : 10;
 unsigned int HSVS : 11;
 unsigned int HS : 10;
 unsigned int p0 : 11;
} tGS_SYNCH1;

typedef struct { 
 unsigned int HF : 11;
 unsigned int HB : 11;
 unsigned int p0 : 20;
 unsigned int p1;
} tGS_SYNCH2;

typedef struct { 
 unsigned int VFP : 10;
 unsigned int VFPE : 10;
 unsigned int VBP : 10;
 unsigned int p0 : 2;
 unsigned int VBPE : 10;
 unsigned int VDP : 11;
 unsigned int VS : 10;
 unsigned int p1 : 1;
} tGS_SYNCV;

typedef struct { 
 unsigned int ID;
 unsigned int p0;
} tGS_SIGID;

typedef struct { 
 unsigned int ID;
 unsigned int p0;
} tGS_LABELID;

typedef struct { 
 unsigned int AFMODE : 1;
 unsigned int p0 : 31;
 unsigned int p1;
} tGS_SYSCNT;

typedef struct { 
 unsigned int DISPLAY : 2;
 unsigned int p0 : 30;
 unsigned int MAGV;
 unsigned int MAGH;
} tGS_SIMU_DISPLAY;

typedef struct COUNTER;

struct COUNTER { 
 COUNTER *pNext;
 COUNTER *pPrev;
 u_int uiKey;
 u_int uiMode;
 u_long ulBaseTime;
 u_long ulBaseCount;
 u_long ulSchedule;
 u_long (*cbHandler)(/* parameters unknown */);
 void *gp_value;
 void *arg;
 u_int pad[3];
};

typedef struct ALARM;

struct ALARM { 
 ALARM *pNext;
 int counterid;
 u_long (*cbHandler)(/* parameters unknown */);
 void *arg;
};

struct stat { 
 dev_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 uid_t st_uid;
 gid_t st_gid;
 dev_t st_rdev;
 off_t st_size;
 time_t st_atime;
 long int st_spare1;
 time_t st_mtime;
 long int st_spare2;
 time_t st_ctime;
 long int st_spare3;
 long int st_blksize;
 long int st_blocks;
 long int st_spare4[2];
};

typedef struct { 
 short unsigned int len;
 short unsigned int rsvd;
 short unsigned int proto;
 unsigned char src;
 unsigned char dest;
} sceDeci2Hdr;

typedef struct { 
 u_char type;
 u_char code;
 u_short unused;
} sceDcmpHdr;

typedef struct { 
 int num;
 int count;
 void *rp;
 void *wp;
 char buf[256];
} CHQUEUE;

typedef struct { 
 int s;
 u_int wlen;
 u_int rlen;
 u_int isSending;
 char *wptr;
 char *rptr;
 CHQUEUE *rq;
} TTYINFO;

typedef union { 
 double value;
 struct { 
	 __uint32_t lsw;
	 __uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union { 
 float value;
 __uint32_t word;
} ieee_float_shape_type;


enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};


typedef enum {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
} cmp_type;


enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};


typedef enum {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
} delay_type;


enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};


typedef enum {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
} processor_type;


enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};


typedef enum {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
} mips_abicalls_type;


enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};


typedef enum {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
} block_move_type;


enum reg_class {
	NO_REGS = 0,
	ARGP_REGS = 1,
	M16_NA_REGS = 2,
	M16_REGS = 3,
	T_REG = 4,
	M16_T_REGS = 5,
	GR_REGS = 6,
	FP_REGS = 7,
	HI_REG = 8,
	LO_REG = 9,
	HILO_REG = 10,
	MD_REGS = 11,
	AP_AND_GR_REGS = 12,
	HI_AND_GR_REGS = 13,
	LO_AND_GR_REGS = 14,
	HILO_AND_GR_REGS = 15,
	HI1_REG = 16,
	LO1_REG = 17,
	HILO1_REG = 18,
	MD1_REGS = 19,
	HI1_AND_GR_REGS = 20,
	LO1_AND_GR_REGS = 21,
	HILO1_AND_GR_REGS = 22,
	HI01_REG = 23,
	LO01_REG = 24,
	HILO01_REG = 25,
	MD01_REGS = 26,
	HI01_AND_GR_REGS = 27,
	LO01_AND_GR_REGS = 28,
	HILO01_AND_GR_REGS = 29,
	ST_REGS = 30,
	ALL_REGS = 31,
	LIM_REG_CLASSES = 32
};


typedef enum {
	NO_REGS = 0,
	ARGP_REGS = 1,
	M16_NA_REGS = 2,
	M16_REGS = 3,
	T_REG = 4,
	M16_T_REGS = 5,
	GR_REGS = 6,
	FP_REGS = 7,
	HI_REG = 8,
	LO_REG = 9,
	HILO_REG = 10,
	MD_REGS = 11,
	AP_AND_GR_REGS = 12,
	HI_AND_GR_REGS = 13,
	LO_AND_GR_REGS = 14,
	HILO_AND_GR_REGS = 15,
	HI1_REG = 16,
	LO1_REG = 17,
	HILO1_REG = 18,
	MD1_REGS = 19,
	HI1_AND_GR_REGS = 20,
	LO1_AND_GR_REGS = 21,
	HILO1_AND_GR_REGS = 22,
	HI01_REG = 23,
	LO01_REG = 24,
	HILO01_REG = 25,
	MD01_REGS = 26,
	HI01_AND_GR_REGS = 27,
	LO01_AND_GR_REGS = 28,
	HILO01_AND_GR_REGS = 29,
	ST_REGS = 30,
	ALL_REGS = 31,
	LIM_REG_CLASSES = 32
} reg_class;


enum frameinfo_state {
	fi_blank = 0,
	fi_partially_initialized = 1,
	fi_modes_known = 2,
	fi_initialized = 3
};


typedef enum {
	fi_blank = 0,
	fi_partially_initialized = 1,
	fi_modes_known = 2,
	fi_initialized = 3
} frameinfo_state;

struct mips_frame_info { 
 long int total_size;
 long int var_size;
 long int args_size;
 long int extra_size;
 int gp_reg_size;
 int fp_reg_size;
 int gp_quad_size;
 long int mask;
 long int fmask;
 long int gp_save_offset;
 long int fp_save_offset;
 long int gp_sp_offset;
 long int rap_offset;
 long int fp_sp_offset;
 frameinfo_state state;
 int num_gp;
 int num_fp;
 long int insns_len;
};

struct mips_args { 
 int gp_reg_found;
 unsigned int arg_number;
 unsigned int arg_words;
 unsigned int fp_arg_words;
 int last_arg_fp;
 int fp_code;
 unsigned int num_adjusts;
};

typedef mips_args CUMULATIVE_ARGS;


enum mips_builtins {
	MIPS5900_BUILTIN_PABSH = 0,
	MIPS5900_BUILTIN_PABSW = 1,
	MIPS5900_BUILTIN_PADDB = 2,
	MIPS5900_BUILTIN_PADDH = 3,
	MIPS5900_BUILTIN_PADDSB = 4,
	MIPS5900_BUILTIN_PADDSH = 5,
	MIPS5900_BUILTIN_PADDSW = 6,
	MIPS5900_BUILTIN_PADDUB = 7,
	MIPS5900_BUILTIN_PADDUH = 8,
	MIPS5900_BUILTIN_PADDUW = 9,
	MIPS5900_BUILTIN_PADDW = 10,
	MIPS5900_BUILTIN_PADSBH = 11,
	MIPS5900_BUILTIN_PAND = 12,
	MIPS5900_BUILTIN_PCEQB = 13,
	MIPS5900_BUILTIN_PCEQH = 14,
	MIPS5900_BUILTIN_PCEQW = 15,
	MIPS5900_BUILTIN_PCGTB = 16,
	MIPS5900_BUILTIN_PCGTH = 17,
	MIPS5900_BUILTIN_PCGTW = 18,
	MIPS5900_BUILTIN_PCPYH = 19,
	MIPS5900_BUILTIN_PCPYLD = 20,
	MIPS5900_BUILTIN_PCPYUD = 21,
	MIPS5900_BUILTIN_PDIVBW = 22,
	MIPS5900_BUILTIN_PDIVUW = 23,
	MIPS5900_BUILTIN_PDIVW = 24,
	MIPS5900_BUILTIN_PHMADH = 25,
	MIPS5900_BUILTIN_PHMSBH = 26,
	MIPS5900_BUILTIN_PMADDH = 27,
	MIPS5900_BUILTIN_PMADDUW = 28,
	MIPS5900_BUILTIN_PMADDW = 29,
	MIPS5900_BUILTIN_PMSUBH = 30,
	MIPS5900_BUILTIN_PMSUBW = 31,
	MIPS5900_BUILTIN_PMTHI = 32,
	MIPS5900_BUILTIN_PMTLO = 33,
	MIPS5900_BUILTIN_PMTHL_LW = 34,
	MIPS5900_BUILTIN_PMULTH = 35,
	MIPS5900_BUILTIN_PMULTUW = 36,
	MIPS5900_BUILTIN_PMULTW = 37,
	MIPS5900_BUILTIN_PEXCH = 38,
	MIPS5900_BUILTIN_PEXCW = 39,
	MIPS5900_BUILTIN_PEXEH = 40,
	MIPS5900_BUILTIN_PEXEW = 41,
	MIPS5900_BUILTIN_PEXT5 = 42,
	MIPS5900_BUILTIN_PEXTLB = 43,
	MIPS5900_BUILTIN_PEXTLH = 44,
	MIPS5900_BUILTIN_PEXTLW = 45,
	MIPS5900_BUILTIN_PEXTUB = 46,
	MIPS5900_BUILTIN_PEXTUH = 47,
	MIPS5900_BUILTIN_PEXTUW = 48,
	MIPS5900_BUILTIN_PINTH = 49,
	MIPS5900_BUILTIN_PINTEH = 50,
	MIPS5900_BUILTIN_PLZCW = 51,
	MIPS5900_BUILTIN_PMAXH = 52,
	MIPS5900_BUILTIN_PMAXW = 53,
	MIPS5900_BUILTIN_PMINH = 54,
	MIPS5900_BUILTIN_PMINW = 55,
	MIPS5900_BUILTIN_PNOR = 56,
	MIPS5900_BUILTIN_POR = 57,
	MIPS5900_BUILTIN_PPAC5 = 58,
	MIPS5900_BUILTIN_PPACB = 59,
	MIPS5900_BUILTIN_PPACH = 60,
	MIPS5900_BUILTIN_PPACW = 61,
	MIPS5900_BUILTIN_PREVH = 62,
	MIPS5900_BUILTIN_PROT3W = 63,
	MIPS5900_BUILTIN_PSLLH = 64,
	MIPS5900_BUILTIN_PSLLVW = 65,
	MIPS5900_BUILTIN_PSLLW = 66,
	MIPS5900_BUILTIN_PSRAH = 67,
	MIPS5900_BUILTIN_PSRAVW = 68,
	MIPS5900_BUILTIN_PSRAW = 69,
	MIPS5900_BUILTIN_PSRLH = 70,
	MIPS5900_BUILTIN_PSRLVW = 71,
	MIPS5900_BUILTIN_PSRLW = 72,
	MIPS5900_BUILTIN_PSUBB = 73,
	MIPS5900_BUILTIN_PSUBH = 74,
	MIPS5900_BUILTIN_PSUBSB = 75,
	MIPS5900_BUILTIN_PSUBSH = 76,
	MIPS5900_BUILTIN_PSUBSW = 77,
	MIPS5900_BUILTIN_PSUBUB = 78,
	MIPS5900_BUILTIN_PSUBUH = 79,
	MIPS5900_BUILTIN_PSUBUW = 80,
	MIPS5900_BUILTIN_PSUBW = 81,
	MIPS5900_BUILTIN_PXOR = 82,
	MIPS5900_BUILTIN_MFSA = 83,
	MIPS5900_BUILTIN_MTSA = 84,
	MIPS5900_BUILTIN_MTSAB = 85,
	MIPS5900_BUILTIN_MTSAH = 86,
	MIPS5900_BUILTIN_QFSRV = 87,
	MIPS5900_BUILTIN_PMFHI = 88,
	MIPS5900_BUILTIN_PMFLO = 89,
	MIPS5900_BUILTIN_PMFHL_LW = 90,
	MIPS5900_BUILTIN_PMFHL_UW = 91,
	MIPS5900_BUILTIN_PMFHL_SLW = 92,
	MIPS5900_BUILTIN_PMFHL_LH = 93,
	MIPS5900_BUILTIN_PMFHL_SH = 94,
	MIPS_BUILTIN_MAX = 95
};


typedef enum {
	MIPS5900_BUILTIN_PABSH = 0,
	MIPS5900_BUILTIN_PABSW = 1,
	MIPS5900_BUILTIN_PADDB = 2,
	MIPS5900_BUILTIN_PADDH = 3,
	MIPS5900_BUILTIN_PADDSB = 4,
	MIPS5900_BUILTIN_PADDSH = 5,
	MIPS5900_BUILTIN_PADDSW = 6,
	MIPS5900_BUILTIN_PADDUB = 7,
	MIPS5900_BUILTIN_PADDUH = 8,
	MIPS5900_BUILTIN_PADDUW = 9,
	MIPS5900_BUILTIN_PADDW = 10,
	MIPS5900_BUILTIN_PADSBH = 11,
	MIPS5900_BUILTIN_PAND = 12,
	MIPS5900_BUILTIN_PCEQB = 13,
	MIPS5900_BUILTIN_PCEQH = 14,
	MIPS5900_BUILTIN_PCEQW = 15,
	MIPS5900_BUILTIN_PCGTB = 16,
	MIPS5900_BUILTIN_PCGTH = 17,
	MIPS5900_BUILTIN_PCGTW = 18,
	MIPS5900_BUILTIN_PCPYH = 19,
	MIPS5900_BUILTIN_PCPYLD = 20,
	MIPS5900_BUILTIN_PCPYUD = 21,
	MIPS5900_BUILTIN_PDIVBW = 22,
	MIPS5900_BUILTIN_PDIVUW = 23,
	MIPS5900_BUILTIN_PDIVW = 24,
	MIPS5900_BUILTIN_PHMADH = 25,
	MIPS5900_BUILTIN_PHMSBH = 26,
	MIPS5900_BUILTIN_PMADDH = 27,
	MIPS5900_BUILTIN_PMADDUW = 28,
	MIPS5900_BUILTIN_PMADDW = 29,
	MIPS5900_BUILTIN_PMSUBH = 30,
	MIPS5900_BUILTIN_PMSUBW = 31,
	MIPS5900_BUILTIN_PMTHI = 32,
	MIPS5900_BUILTIN_PMTLO = 33,
	MIPS5900_BUILTIN_PMTHL_LW = 34,
	MIPS5900_BUILTIN_PMULTH = 35,
	MIPS5900_BUILTIN_PMULTUW = 36,
	MIPS5900_BUILTIN_PMULTW = 37,
	MIPS5900_BUILTIN_PEXCH = 38,
	MIPS5900_BUILTIN_PEXCW = 39,
	MIPS5900_BUILTIN_PEXEH = 40,
	MIPS5900_BUILTIN_PEXEW = 41,
	MIPS5900_BUILTIN_PEXT5 = 42,
	MIPS5900_BUILTIN_PEXTLB = 43,
	MIPS5900_BUILTIN_PEXTLH = 44,
	MIPS5900_BUILTIN_PEXTLW = 45,
	MIPS5900_BUILTIN_PEXTUB = 46,
	MIPS5900_BUILTIN_PEXTUH = 47,
	MIPS5900_BUILTIN_PEXTUW = 48,
	MIPS5900_BUILTIN_PINTH = 49,
	MIPS5900_BUILTIN_PINTEH = 50,
	MIPS5900_BUILTIN_PLZCW = 51,
	MIPS5900_BUILTIN_PMAXH = 52,
	MIPS5900_BUILTIN_PMAXW = 53,
	MIPS5900_BUILTIN_PMINH = 54,
	MIPS5900_BUILTIN_PMINW = 55,
	MIPS5900_BUILTIN_PNOR = 56,
	MIPS5900_BUILTIN_POR = 57,
	MIPS5900_BUILTIN_PPAC5 = 58,
	MIPS5900_BUILTIN_PPACB = 59,
	MIPS5900_BUILTIN_PPACH = 60,
	MIPS5900_BUILTIN_PPACW = 61,
	MIPS5900_BUILTIN_PREVH = 62,
	MIPS5900_BUILTIN_PROT3W = 63,
	MIPS5900_BUILTIN_PSLLH = 64,
	MIPS5900_BUILTIN_PSLLVW = 65,
	MIPS5900_BUILTIN_PSLLW = 66,
	MIPS5900_BUILTIN_PSRAH = 67,
	MIPS5900_BUILTIN_PSRAVW = 68,
	MIPS5900_BUILTIN_PSRAW = 69,
	MIPS5900_BUILTIN_PSRLH = 70,
	MIPS5900_BUILTIN_PSRLVW = 71,
	MIPS5900_BUILTIN_PSRLW = 72,
	MIPS5900_BUILTIN_PSUBB = 73,
	MIPS5900_BUILTIN_PSUBH = 74,
	MIPS5900_BUILTIN_PSUBSB = 75,
	MIPS5900_BUILTIN_PSUBSH = 76,
	MIPS5900_BUILTIN_PSUBSW = 77,
	MIPS5900_BUILTIN_PSUBUB = 78,
	MIPS5900_BUILTIN_PSUBUH = 79,
	MIPS5900_BUILTIN_PSUBUW = 80,
	MIPS5900_BUILTIN_PSUBW = 81,
	MIPS5900_BUILTIN_PXOR = 82,
	MIPS5900_BUILTIN_MFSA = 83,
	MIPS5900_BUILTIN_MTSA = 84,
	MIPS5900_BUILTIN_MTSAB = 85,
	MIPS5900_BUILTIN_MTSAH = 86,
	MIPS5900_BUILTIN_QFSRV = 87,
	MIPS5900_BUILTIN_PMFHI = 88,
	MIPS5900_BUILTIN_PMFLO = 89,
	MIPS5900_BUILTIN_PMFHL_LW = 90,
	MIPS5900_BUILTIN_PMFHL_UW = 91,
	MIPS5900_BUILTIN_PMFHL_SLW = 92,
	MIPS5900_BUILTIN_PMFHL_LH = 93,
	MIPS5900_BUILTIN_PMFHL_SH = 94,
	MIPS_BUILTIN_MAX = 95
} mips_builtins;

enum machine_mode {
	VOIDmode = 0,
	BImode = 1,
	QImode = 2,
	HImode = 3,
	SImode = 4,
	DImode = 5,
	TImode = 6,
	OImode = 7,
	PQImode = 8,
	PHImode = 9,
	PSImode = 10,
	PDImode = 11,
	QFmode = 12,
	HFmode = 13,
	TQFmode = 14,
	SFmode = 15,
	DFmode = 16,
	XFmode = 17,
	TFmode = 18,
	QCmode = 19,
	HCmode = 20,
	SCmode = 21,
	DCmode = 22,
	XCmode = 23,
	TCmode = 24,
	CQImode = 25,
	CHImode = 26,
	CSImode = 27,
	CDImode = 28,
	CTImode = 29,
	COImode = 30,
	V2QImode = 31,
	V2HImode = 32,
	V2SImode = 33,
	V2DImode = 34,
	V4QImode = 35,
	V4HImode = 36,
	V4SImode = 37,
	V4DImode = 38,
	V8QImode = 39,
	V8HImode = 40,
	V8SImode = 41,
	V8DImode = 42,
	V16QImode = 43,
	V2SFmode = 44,
	V2DFmode = 45,
	V4SFmode = 46,
	V4DFmode = 47,
	V8SFmode = 48,
	V8DFmode = 49,
	BLKmode = 50,
	CCmode = 51,
	MAX_MACHINE_MODE = 52
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MODE_VECTOR_INT = 7,
	MODE_VECTOR_FLOAT = 8,
	MAX_MODE_CLASS = 9
};

typedef signed char QItype;
typedef unsigned char UQItype;
typedef short int HItype;
typedef short unsigned int UHItype;
typedef int SItype;
typedef unsigned int USItype;
typedef long int DItype;
typedef long unsigned int UDItype;
typedef float SFtype;
typedef double DFtype;
typedef long int word_type;

struct DWstruct { 
 SItype low;
 SItype high;
};

typedef union { 
 DWstruct s;
 DItype ll;
} DWunion;

typedef void (*func_ptr)(/* parameters unknown */);


struct frame_state { 
 void *cfa;
 void *eh_ptr;
 long int cfa_offset;
 long int base_offset;
 long int args_size;
 long int reg_or_offset[123];
 short unsigned int cfa_reg;
 short unsigned int retaddr_column;
 char saved[123];
 char indirect;
};


typedef frame_state frame_state;

typedef int __gthread_key_t;
typedef int __gthread_once_t;
typedef int __gthread_mutex_t;

struct eh_context { 
 void *handler_label;
 void **dynamic_handler_chain;
 void *info;
 void *table_index;
 char alloc_buffer[192];
 unsigned int alloc_mask;
};


struct old_exception_table { 
 void *start_region;
 void *end_region;
 void *exception_handler;
};


typedef old_exception_table old_exception_table;


struct exception_table { 
 void *start_region;
 void *end_region;
 void *exception_handler;
 void *match_info;
};


typedef exception_table exception_table;


struct exception_lang_info { 
 short int language;
 short int version;
};


typedef exception_lang_info exception_lang_info;


struct exception_descriptor { 
 void *runtime_id_field;
 exception_lang_info lang;
 exception_table table[1];
};


typedef exception_descriptor exception_descriptor;
typedef void* (*__eh_matcher)(/* parameters unknown */);


struct __eh_info { 
 __eh_matcher match_function;
 short int language;
 short int version;
};


typedef __eh_info __eh_info;


enum exception_source_language {
	EH_LANG_C89 = 1,
	EH_LANG_C = 2,
	EH_LANG_Ada83 = 3,
	EH_LANG_C_plus_plus = 4,
	EH_LANG_Cobol74 = 5,
	EH_LANG_Cobol85 = 6,
	EH_LANG_Fortran77 = 7,
	EH_LANG_Fortran90 = 8,
	EH_LANG_Pascal83 = 9,
	EH_LANG_Modula2 = 10,
	EH_LANG_Java = 11,
	EH_LANG_Mips_Assembler = 32769
};


typedef enum {
	EH_LANG_C89 = 1,
	EH_LANG_C = 2,
	EH_LANG_Ada83 = 3,
	EH_LANG_C_plus_plus = 4,
	EH_LANG_Cobol74 = 5,
	EH_LANG_Cobol85 = 6,
	EH_LANG_Fortran77 = 7,
	EH_LANG_Fortran90 = 8,
	EH_LANG_Pascal83 = 9,
	EH_LANG_Modula2 = 10,
	EH_LANG_Java = 11,
	EH_LANG_Mips_Assembler = 32769
} exception_source_language;

struct eh_full_context { 
 eh_context c;
 void *top_elt[2];
};

typedef int ptr_type;

typedef USItype fractype;

typedef UDItype fractype;

typedef UHItype halffractype;

typedef USItype halffractype;

typedef SFtype FLO_type;

typedef DFtype FLO_type;

typedef SItype intfrac;

typedef DItype intfrac;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;


typedef struct { 
 fp_class_type class;
 unsigned int sign;
 int normal_exp;
 union { 
	 fractype ll;
	 halffractype l[2];
	} fraction;
} fp_number_type;


typedef struct { 
 fp_class_type class;
 unsigned int sign;
 int normal_exp;
 union { 
	 fractype ll;
	 halffractype l[2];
	} fraction;
} fp_number_type;


typedef union { 
 FLO_type value;
 fractype value_raw;
 struct { 
	 fractype fraction : 23;
	 unsigned int exp : 8;
	 unsigned int sign : 1;
	} bits;
} FLO_union_type;


typedef union { 
 FLO_type value;
 fractype value_raw;
 halffractype words[2];
 struct { 
	 fractype fraction : 52;
	 unsigned int exp : 11;
	 unsigned int sign : 1;
	} bits;
} FLO_union_type;

enum dwarf_tag {
	DW_TAG_padding = 0,
	DW_TAG_array_type = 1,
	DW_TAG_class_type = 2,
	DW_TAG_entry_point = 3,
	DW_TAG_enumeration_type = 4,
	DW_TAG_formal_parameter = 5,
	DW_TAG_imported_declaration = 8,
	DW_TAG_label = 10,
	DW_TAG_lexical_block = 11,
	DW_TAG_member = 13,
	DW_TAG_pointer_type = 15,
	DW_TAG_reference_type = 16,
	DW_TAG_compile_unit = 17,
	DW_TAG_string_type = 18,
	DW_TAG_structure_type = 19,
	DW_TAG_subroutine_type = 21,
	DW_TAG_typedef = 22,
	DW_TAG_union_type = 23,
	DW_TAG_unspecified_parameters = 24,
	DW_TAG_variant = 25,
	DW_TAG_common_block = 26,
	DW_TAG_common_inclusion = 27,
	DW_TAG_inheritance = 28,
	DW_TAG_inlined_subroutine = 29,
	DW_TAG_module = 30,
	DW_TAG_ptr_to_member_type = 31,
	DW_TAG_set_type = 32,
	DW_TAG_subrange_type = 33,
	DW_TAG_with_stmt = 34,
	DW_TAG_access_declaration = 35,
	DW_TAG_base_type = 36,
	DW_TAG_catch_block = 37,
	DW_TAG_const_type = 38,
	DW_TAG_constant = 39,
	DW_TAG_enumerator = 40,
	DW_TAG_file_type = 41,
	DW_TAG_friend = 42,
	DW_TAG_namelist = 43,
	DW_TAG_namelist_item = 44,
	DW_TAG_packed_type = 45,
	DW_TAG_subprogram = 46,
	DW_TAG_template_type_param = 47,
	DW_TAG_template_value_param = 48,
	DW_TAG_thrown_type = 49,
	DW_TAG_try_block = 50,
	DW_TAG_variant_part = 51,
	DW_TAG_variable = 52,
	DW_TAG_volatile_type = 53,
	DW_TAG_MIPS_loop = 16513,
	DW_TAG_format_label = 16641,
	DW_TAG_function_template = 16642,
	DW_TAG_class_template = 16643
};

enum dwarf_form {
	DW_FORM_addr = 1,
	DW_FORM_block2 = 3,
	DW_FORM_block4 = 4,
	DW_FORM_data2 = 5,
	DW_FORM_data4 = 6,
	DW_FORM_data8 = 7,
	DW_FORM_string = 8,
	DW_FORM_block = 9,
	DW_FORM_block1 = 10,
	DW_FORM_data1 = 11,
	DW_FORM_flag = 12,
	DW_FORM_sdata = 13,
	DW_FORM_strp = 14,
	DW_FORM_udata = 15,
	DW_FORM_ref_addr = 16,
	DW_FORM_ref1 = 17,
	DW_FORM_ref2 = 18,
	DW_FORM_ref4 = 19,
	DW_FORM_ref8 = 20,
	DW_FORM_ref_udata = 21,
	DW_FORM_indirect = 22
};

enum dwarf_attribute {
	DW_AT_sibling = 1,
	DW_AT_location = 2,
	DW_AT_name = 3,
	DW_AT_ordering = 9,
	DW_AT_subscr_data = 10,
	DW_AT_byte_size = 11,
	DW_AT_bit_offset = 12,
	DW_AT_bit_size = 13,
	DW_AT_element_list = 15,
	DW_AT_stmt_list = 16,
	DW_AT_low_pc = 17,
	DW_AT_high_pc = 18,
	DW_AT_language = 19,
	DW_AT_member = 20,
	DW_AT_discr = 21,
	DW_AT_discr_value = 22,
	DW_AT_visibility = 23,
	DW_AT_import = 24,
	DW_AT_string_length = 25,
	DW_AT_common_reference = 26,
	DW_AT_comp_dir = 27,
	DW_AT_const_value = 28,
	DW_AT_containing_type = 29,
	DW_AT_default_value = 30,
	DW_AT_inline = 32,
	DW_AT_is_optional = 33,
	DW_AT_lower_bound = 34,
	DW_AT_producer = 37,
	DW_AT_prototyped = 39,
	DW_AT_return_addr = 42,
	DW_AT_start_scope = 44,
	DW_AT_stride_size = 46,
	DW_AT_upper_bound = 47,
	DW_AT_abstract_origin = 49,
	DW_AT_accessibility = 50,
	DW_AT_address_class = 51,
	DW_AT_artificial = 52,
	DW_AT_base_types = 53,
	DW_AT_calling_convention = 54,
	DW_AT_count = 55,
	DW_AT_data_member_location = 56,
	DW_AT_decl_column = 57,
	DW_AT_decl_file = 58,
	DW_AT_decl_line = 59,
	DW_AT_declaration = 60,
	DW_AT_discr_list = 61,
	DW_AT_encoding = 62,
	DW_AT_external = 63,
	DW_AT_frame_base = 64,
	DW_AT_friend = 65,
	DW_AT_identifier_case = 66,
	DW_AT_macro_info = 67,
	DW_AT_namelist_items = 68,
	DW_AT_priority = 69,
	DW_AT_segment = 70,
	DW_AT_specification = 71,
	DW_AT_static_link = 72,
	DW_AT_type = 73,
	DW_AT_use_location = 74,
	DW_AT_variable_parameter = 75,
	DW_AT_virtuality = 76,
	DW_AT_vtable_elem_location = 77,
	DW_AT_MIPS_fde = 8193,
	DW_AT_MIPS_loop_begin = 8194,
	DW_AT_MIPS_tail_loop_begin = 8195,
	DW_AT_MIPS_epilog_begin = 8196,
	DW_AT_MIPS_loop_unroll_factor = 8197,
	DW_AT_MIPS_software_pipeline_depth = 8198,
	DW_AT_MIPS_linkage_name = 8199,
	DW_AT_MIPS_stride = 8200,
	DW_AT_MIPS_abstract_name = 8201,
	DW_AT_MIPS_clone_origin = 8202,
	DW_AT_MIPS_has_inlines = 8203,
	DW_AT_sf_names = 8449,
	DW_AT_src_info = 8450,
	DW_AT_mac_info = 8451,
	DW_AT_src_coords = 8452,
	DW_AT_body_begin = 8453,
	DW_AT_body_end = 8454
};

enum dwarf_location_atom {
	DW_OP_addr = 3,
	DW_OP_deref = 6,
	DW_OP_const1u = 8,
	DW_OP_const1s = 9,
	DW_OP_const2u = 10,
	DW_OP_const2s = 11,
	DW_OP_const4u = 12,
	DW_OP_const4s = 13,
	DW_OP_const8u = 14,
	DW_OP_const8s = 15,
	DW_OP_constu = 16,
	DW_OP_consts = 17,
	DW_OP_dup = 18,
	DW_OP_drop = 19,
	DW_OP_over = 20,
	DW_OP_pick = 21,
	DW_OP_swap = 22,
	DW_OP_rot = 23,
	DW_OP_xderef = 24,
	DW_OP_abs = 25,
	DW_OP_and = 26,
	DW_OP_div = 27,
	DW_OP_minus = 28,
	DW_OP_mod = 29,
	DW_OP_mul = 30,
	DW_OP_neg = 31,
	DW_OP_not = 32,
	DW_OP_or = 33,
	DW_OP_plus = 34,
	DW_OP_plus_uconst = 35,
	DW_OP_shl = 36,
	DW_OP_shr = 37,
	DW_OP_shra = 38,
	DW_OP_xor = 39,
	DW_OP_bra = 40,
	DW_OP_eq = 41,
	DW_OP_ge = 42,
	DW_OP_gt = 43,
	DW_OP_le = 44,
	DW_OP_lt = 45,
	DW_OP_ne = 46,
	DW_OP_skip = 47,
	DW_OP_lit0 = 48,
	DW_OP_lit1 = 49,
	DW_OP_lit2 = 50,
	DW_OP_lit3 = 51,
	DW_OP_lit4 = 52,
	DW_OP_lit5 = 53,
	DW_OP_lit6 = 54,
	DW_OP_lit7 = 55,
	DW_OP_lit8 = 56,
	DW_OP_lit9 = 57,
	DW_OP_lit10 = 58,
	DW_OP_lit11 = 59,
	DW_OP_lit12 = 60,
	DW_OP_lit13 = 61,
	DW_OP_lit14 = 62,
	DW_OP_lit15 = 63,
	DW_OP_lit16 = 64,
	DW_OP_lit17 = 65,
	DW_OP_lit18 = 66,
	DW_OP_lit19 = 67,
	DW_OP_lit20 = 68,
	DW_OP_lit21 = 69,
	DW_OP_lit22 = 70,
	DW_OP_lit23 = 71,
	DW_OP_lit24 = 72,
	DW_OP_lit25 = 73,
	DW_OP_lit26 = 74,
	DW_OP_lit27 = 75,
	DW_OP_lit28 = 76,
	DW_OP_lit29 = 77,
	DW_OP_lit30 = 78,
	DW_OP_lit31 = 79,
	DW_OP_reg0 = 80,
	DW_OP_reg1 = 81,
	DW_OP_reg2 = 82,
	DW_OP_reg3 = 83,
	DW_OP_reg4 = 84,
	DW_OP_reg5 = 85,
	DW_OP_reg6 = 86,
	DW_OP_reg7 = 87,
	DW_OP_reg8 = 88,
	DW_OP_reg9 = 89,
	DW_OP_reg10 = 90,
	DW_OP_reg11 = 91,
	DW_OP_reg12 = 92,
	DW_OP_reg13 = 93,
	DW_OP_reg14 = 94,
	DW_OP_reg15 = 95,
	DW_OP_reg16 = 96,
	DW_OP_reg17 = 97,
	DW_OP_reg18 = 98,
	DW_OP_reg19 = 99,
	DW_OP_reg20 = 100,
	DW_OP_reg21 = 101,
	DW_OP_reg22 = 102,
	DW_OP_reg23 = 103,
	DW_OP_reg24 = 104,
	DW_OP_reg25 = 105,
	DW_OP_reg26 = 106,
	DW_OP_reg27 = 107,
	DW_OP_reg28 = 108,
	DW_OP_reg29 = 109,
	DW_OP_reg30 = 110,
	DW_OP_reg31 = 111,
	DW_OP_breg0 = 112,
	DW_OP_breg1 = 113,
	DW_OP_breg2 = 114,
	DW_OP_breg3 = 115,
	DW_OP_breg4 = 116,
	DW_OP_breg5 = 117,
	DW_OP_breg6 = 118,
	DW_OP_breg7 = 119,
	DW_OP_breg8 = 120,
	DW_OP_breg9 = 121,
	DW_OP_breg10 = 122,
	DW_OP_breg11 = 123,
	DW_OP_breg12 = 124,
	DW_OP_breg13 = 125,
	DW_OP_breg14 = 126,
	DW_OP_breg15 = 127,
	DW_OP_breg16 = 128,
	DW_OP_breg17 = 129,
	DW_OP_breg18 = 130,
	DW_OP_breg19 = 131,
	DW_OP_breg20 = 132,
	DW_OP_breg21 = 133,
	DW_OP_breg22 = 134,
	DW_OP_breg23 = 135,
	DW_OP_breg24 = 136,
	DW_OP_breg25 = 137,
	DW_OP_breg26 = 138,
	DW_OP_breg27 = 139,
	DW_OP_breg28 = 140,
	DW_OP_breg29 = 141,
	DW_OP_breg30 = 142,
	DW_OP_breg31 = 143,
	DW_OP_regx = 144,
	DW_OP_fbreg = 145,
	DW_OP_bregx = 146,
	DW_OP_piece = 147,
	DW_OP_deref_size = 148,
	DW_OP_xderef_size = 149,
	DW_OP_nop = 150
};

enum dwarf_type {
	DW_ATE_void = 0,
	DW_ATE_address = 1,
	DW_ATE_boolean = 2,
	DW_ATE_complex_float = 3,
	DW_ATE_float = 4,
	DW_ATE_signed = 5,
	DW_ATE_signed_char = 6,
	DW_ATE_unsigned = 7,
	DW_ATE_unsigned_char = 8
};

enum dwarf_array_dim_ordering {
	DW_ORD_row_major = 0,
	DW_ORD_col_major = 1
};

enum dwarf_access_attribute {
	DW_ACCESS_public = 1,
	DW_ACCESS_protected = 2,
	DW_ACCESS_private = 3
};

enum dwarf_visibility_attribute {
	DW_VIS_local = 1,
	DW_VIS_exported = 2,
	DW_VIS_qualified = 3
};

enum dwarf_virtuality_attribute {
	DW_VIRTUALITY_none = 0,
	DW_VIRTUALITY_virtual = 1,
	DW_VIRTUALITY_pure_virtual = 2
};

enum dwarf_id_case {
	DW_ID_case_sensitive = 0,
	DW_ID_up_case = 1,
	DW_ID_down_case = 2,
	DW_ID_case_insensitive = 3
};

enum dwarf_calling_convention {
	DW_CC_normal = 1,
	DW_CC_program = 2,
	DW_CC_nocall = 3
};

enum dwarf_inline_attribute {
	DW_INL_not_inlined = 0,
	DW_INL_inlined = 1,
	DW_INL_declared_not_inlined = 2,
	DW_INL_declared_inlined = 3
};

enum dwarf_discrim_list {
	DW_DSC_label = 0,
	DW_DSC_range = 1
};

enum dwarf_line_number_ops {
	DW_LNS_extended_op = 0,
	DW_LNS_copy = 1,
	DW_LNS_advance_pc = 2,
	DW_LNS_advance_line = 3,
	DW_LNS_set_file = 4,
	DW_LNS_set_column = 5,
	DW_LNS_negate_stmt = 6,
	DW_LNS_set_basic_block = 7,
	DW_LNS_const_add_pc = 8,
	DW_LNS_fixed_advance_pc = 9
};

enum dwarf_line_number_x_ops {
	DW_LNE_end_sequence = 1,
	DW_LNE_set_address = 2,
	DW_LNE_define_file = 3
};

enum dwarf_call_frame_info {
	DW_CFA_advance_loc = 64,
	DW_CFA_offset = 128,
	DW_CFA_restore = 192,
	DW_CFA_nop = 0,
	DW_CFA_set_loc = 1,
	DW_CFA_advance_loc1 = 2,
	DW_CFA_advance_loc2 = 3,
	DW_CFA_advance_loc4 = 4,
	DW_CFA_offset_extended = 5,
	DW_CFA_restore_extended = 6,
	DW_CFA_undefined = 7,
	DW_CFA_same_value = 8,
	DW_CFA_register = 9,
	DW_CFA_remember_state = 10,
	DW_CFA_restore_state = 11,
	DW_CFA_def_cfa = 12,
	DW_CFA_def_cfa_register = 13,
	DW_CFA_def_cfa_offset = 14,
	DW_CFA_def_cfa_expression = 15,
	DW_CFA_expression = 16,
	DW_CFA_MIPS_advance_loc8 = 29,
	DW_CFA_GNU_window_save = 45,
	DW_CFA_GNU_args_size = 46,
	DW_CFA_GNU_negative_offset_extended = 47
};

enum dwarf_source_language {
	DW_LANG_C89 = 1,
	DW_LANG_C = 2,
	DW_LANG_Ada83 = 3,
	DW_LANG_C_plus_plus = 4,
	DW_LANG_Cobol74 = 5,
	DW_LANG_Cobol85 = 6,
	DW_LANG_Fortran77 = 7,
	DW_LANG_Fortran90 = 8,
	DW_LANG_Pascal83 = 9,
	DW_LANG_Modula2 = 10,
	DW_LANG_Java = 11,
	DW_LANG_Mips_Assembler = 32769
};

enum dwarf_macinfo_record_type {
	DW_MACINFO_define = 1,
	DW_MACINFO_undef = 2,
	DW_MACINFO_start_file = 3,
	DW_MACINFO_end_file = 4,
	DW_MACINFO_vendor_ext = 255
};

typedef int sword;
typedef unsigned int uword;
typedef unsigned int uaddr;
typedef int saddr;
typedef unsigned char ubyte;

struct dwarf_cie { 
 uword length;
 sword CIE_id;
 ubyte version;
 char augmentation[1];
};

struct dwarf_fde { 
 uword length;
 sword CIE_delta;
 void *pc_begin;
 uaddr pc_range;
};

typedef dwarf_fde fde;

struct cie_info { 
 char *augmentation;
 void *eh_ptr;
 int code_align;
 int data_align;
 unsigned int ra_regno;
};

typedef struct frame_state_internal;

struct frame_state_internal { 
 frame_state s;
 frame_state_internal *saved_state;
};

union unaligned { 
 void *p;
 short unsigned int b2;
 unsigned int b4;
 long unsigned int b8;
};


struct fde_vector { 
 fde **array;
 size_t count;
};

struct fde_accumulator { 
 fde_vector linear;
 fde_vector erratic;
};

typedef enum {
	unknown = 0,
	not_contained = 1,
	contained_ambig = 2,
	contained_mask = 4,
	contained_virtual_mask = 1,
	contained_public_mask = 2,
	contained_private = 4,
	contained_public = 6
} sub_kind;


struct upcast_result { 
 void *target_obj;
 sub_kind whole2target;
};

struct dyncast_result { 
 void *target_obj;
 sub_kind whole2target;
 sub_kind whole2sub;
 sub_kind target2sub;
};

typedef int myint32;

typedef enum {
	PUBLIC = 1,
	PROTECTED = 2,
	PRIVATE = 3
} access;

struct base_info { 
 myint32 offset : 29;
 bool is_virtual : 1;
 access access : 2;
};

typedef void (*cleanup_fn)(/* parameters unknown */);

typedef struct cp_eh_info;

struct cp_eh_info { 
 __eh_info eh_info;
 void *value;
 void *type;
 cleanup_fn cleanup;
 bool caught;
 cp_eh_info *next;
 long int handlers;
 void *original_value;
};

typedef long unsigned int sigset_t;

struct sigaction { 
 void (*sa_handler)(/* parameters unknown */);
 sigset_t sa_mask;
 int sa_flags;
};

typedef int sig_atomic_t;
typedef void (*_sig_func_ptr)(/* parameters unknown */);
typedef long int _off_t;
typedef long int _ssize_t;

struct mallinfo { 
 int arena;
 int ordblks;
 int smblks;
 int hblks;
 int hblkhd;
 int usmblks;
 int fsmblks;
 int uordblks;
 int fordblks;
 int keepcost;
};

typedef struct malloc_chunk;

struct malloc_chunk { 
 size_t prev_size;
 size_t size;
 malloc_chunk *fd;
 malloc_chunk *bk;
};

typedef malloc_chunk *mchunkptr;
typedef malloc_chunk *mbinptr;

struct __siov { 
 void *iov_base;
 size_t iov_len;
};

struct __suio { 
 __siov *uio_iov;
 int uio_iovcnt;
 int uio_resid;
};

typedef union { 
 double value;
 struct { 
	 unsigned int fraction1;
	 unsigned int fraction0 : 20;
	 unsigned int exponent : 11;
	 unsigned int sign : 1;
	} number;
 struct { 
	 unsigned int function1;
	 unsigned int function0 : 19;
	 unsigned int quiet : 1;
	 unsigned int exponent : 11;
	 unsigned int sign : 1;
	} nan;
 struct { 
	 long unsigned int lsw;
	 long unsigned int msw;
	} parts;
 long int aslong[2];
} __ieee_double_shape_type;

typedef union { 
 float value;
 struct { 
	 unsigned int fraction0 : 7;
	 unsigned int fraction1 : 16;
	 unsigned int exponent : 8;
	 unsigned int sign : 1;
	} number;
 struct { 
	 unsigned int function1;
	 unsigned int function0 : 6;
	 unsigned int quiet : 1;
	 unsigned int exponent : 8;
	 unsigned int sign : 1;
	} nan;
 long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union { 
 double d;
 __uint32_t i[2];
};

struct lconv { 
 char *decimal_point;
 char *thousands_sep;
 char *grouping;
 char *int_curr_symbol;
 char *currency_symbol;
 char *mon_decimal_point;
 char *mon_thousands_sep;
 char *mon_grouping;
 char *positive_sign;
 char *negative_sign;
 char int_frac_digits;
 char frac_digits;
 char p_cs_precedes;
 char p_sep_by_space;
 char n_cs_precedes;
 char n_sep_by_space;
 char p_sign_posn;
 char n_sign_posn;
};

struct flock { 
 short int l_type;
 short int l_whence;
 long int l_start;
 long int l_len;
 short int l_pid;
 short int l_xxx;
};

struct eflock { 
 short int l_type;
 short int l_whence;
 long int l_start;
 long int l_len;
 short int l_pid;
 short int l_xxx;
 long int l_rpid;
 long int l_rsys;
};
