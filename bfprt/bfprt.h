#ifndef __BFPRT_H__
#define __BFPRT_H__

#include "../swap/swap.h"

template<typename T> int partitionBFPRT(T*, int, int, T);
template<typename T> T findMedian(T *, int);
template<typename T> T kthOrderStatistic(T*, int, int, int);

#include "bfprt.cpp"

#endif