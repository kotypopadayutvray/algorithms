#include <ctime>
#include <iostream>

#include "./bfprt/bfprt.h"
#include "./heap_sort/heap_sort.h"
#include "./mqs_3way/mqs_3way.h"
#include "./qs/qs.h"
#include "./qs_3way/qs_3way.h"
#include "./random_generator/random_generator.h"
#include "./sorted_type/sorted_type.h"

void bfprtTime(int arraySize, int leftBound, int rightBound, int k) {
  SortedType *array = new SortedType[arraySize];
  randomGenerator(array, arraySize, leftBound, rightBound);
  unsigned int start_time =  clock();
  SortedType res = kthOrderStatistic(array, 0, arraySize - 1, k);
  unsigned int end_time =  clock();
  std::cout << "Time (BFPRT) (ms): " << (double)(end_time - start_time) / CLOCKS_PER_SEC << std::endl;
  delete [] array;
}

void qsTime(int arraySize, int leftBound, int rightBound, int k) {
  SortedType *array = new SortedType[arraySize];
  randomGenerator(array, arraySize, leftBound, rightBound);
  unsigned int start_time =  clock();
  quickSort(array, 0, arraySize - 1);
  unsigned int end_time =  clock();
  std::cout << "Time (quick sort) (ms): " << (double)(end_time - start_time) / CLOCKS_PER_SEC << std::endl;
}


void qs3WayTime(int arraySize, int leftBound, int rightBound, int k) {
  SortedType *array = new SortedType[arraySize];
  randomGenerator(array, arraySize, leftBound, rightBound);
  unsigned int start_time =  clock();
  quickSort3Way(array, 0, arraySize - 1);
  unsigned int end_time =  clock();
  std::cout << "Time (quick sort 3 way) (ms): " << (double)(end_time - start_time) / CLOCKS_PER_SEC << std::endl;
}

void hsTime(int arraySize, int leftBound, int rightBound, int k) {
  SortedType *array = new SortedType[arraySize];
  randomGenerator(array, arraySize, leftBound, rightBound);
  unsigned int start_time =  clock();
  heapSort(array, arraySize);
  unsigned int end_time =  clock();
  std::cout << "Time (heap sort) (ms): " << (double)(end_time - start_time) / CLOCKS_PER_SEC << std::endl;
}

void mqsTime(int arraySize, int leftBound, int rightBound, int k) {
  SortedType *array = new SortedType[arraySize];
  randomGenerator(array, arraySize, leftBound, rightBound);
  unsigned int start_time =  clock();
  SortedType res = modifiedQuickSort(array, 0, arraySize - 1, k - 1);
  unsigned int end_time =  clock();
  std::cout << "Time (modified quick sort 3 way) (ms): " << (double)(end_time - start_time) / CLOCKS_PER_SEC << std::endl;
}

int main() {
  int arraySize;
  int leftBound;
  int rightBound;
  int k;
  std::cout << "Enter array size: ";
  std::cin >> arraySize;
  std::cout << "Enter left bound: ";
  std::cin >> leftBound;
  std::cout << "Enter right bound: ";
  std::cin >> rightBound;
  std::cout << "Enter k: ";
  std::cin >> k;
  bfprtTime(arraySize, leftBound, rightBound, k);
  qsTime(arraySize, leftBound, rightBound, k);
  qs3WayTime(arraySize, leftBound, rightBound, k);
  hsTime(arraySize, leftBound, rightBound, k);
  mqsTime(arraySize, leftBound, rightBound, k);
  return 0;
}

