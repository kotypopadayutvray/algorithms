#ifndef __HEAP_SORT_H__
#define __HEAP_SORT_H__

#include "../swap/swap.h"

template<typename T> void heapify(T*, int, int);
template<typename T> void heapSort(T*, int);

#include "heap_sort.cpp"

#endif