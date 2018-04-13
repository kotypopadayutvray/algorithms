#ifndef __MQS_3WAY_H__
#define __MQS_3WAY_H__

#include "../swap/swap.h"

template<typename T> void partitionMQS(T*, int, int, int*, int*);
template<typename T> T modifiedQuickSort(T*, int, int, int);

#include "./mqs_3way.cpp"

#endif