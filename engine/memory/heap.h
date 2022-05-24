#include <iostream>
#include "memory.h"

template<class T>
class Heap
{
 private:
  T *root;
  T *left;
  T *right;


 public:
  void push(T data);
  void pop(T data);
  // Make Heap?
  T heapCrlsMalloc(Memory *param1, int param2);
  T my_mallocMalloc();
};