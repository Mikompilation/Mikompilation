#pragma once

typedef int sceVu0IVECTOR[4];
typedef float sceVu0FVECTOR[4];
typedef float sceVu0FMATRIX[4][4];

typedef void (*sceSifEndFunc)(/* parameters unknown */);
typedef void *(*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_rpc_data
{
  void *paddr;
  unsigned int pid;
  int tid;
  unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;

struct _sif_client_data
{
  _sif_rpc_data rpcd;
  unsigned int command;
  void *buff;
  void *gp;
  sceSifEndFunc func;
  void *para;

  /// _sif_serve_data
  void *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_serve_data
{
  unsigned int command;
  sceSifRpcFunc func;
  void *buff;
  int size;
  sceSifRpcFunc cfunc;
  void *cbuff;
  int csize;
  sceSifClientData *client;
  void *paddr;
  unsigned int fno;
  void *receive;
  int rsize;
  int rmode;
  unsigned int rid;
  _sif_serve_data *link;
  _sif_serve_data *next;

  /// _sif_queue_data
  void *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data
{
  int key;
  int active;

  /// _sif_serve_data
  void *link;

  /// _sif_serve_data
  void *start;
  _sif_serve_data *end;
  _sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;