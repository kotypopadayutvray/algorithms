#ifndef __QS_3WAY_H__
#define __QS_3WAY_H__

#include "../swap/swap.h"

template<typename T> void partitionQS3W(T*, int, int, int*, int*);
template<typename T> void quickSort3Way(T*, int, int);

#include "./qs_3way.cpp"

#endif