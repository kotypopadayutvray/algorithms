#include <iostream>

int partition(int *array, int li, int hi) {
  int i = li;
  int j = hi + 1;
  int pi = i;

  while (true) {
    while (array[++i] <  array[pi]) {
      if (i == hi)
        break;
    }
    while (array[pi] < array[--j]) {
      if (j == li)
        break;
    }
    if (i >= j)
      break;
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
  }
  int tmp = array[pi];
  array[pi] = array[j];
  array[j] = tmp;
  return j;
}

void quickSort(int *array, int lowBound, int highBound) {
  if (highBound <= lowBound) {
    return;
  }
  int partIndex = partition(array, lowBound, highBound);
  quickSort(array, lowBound, partIndex);
  quickSort(array, partIndex + 1, highBound);
}

int main() {

  int array[] = { 5, -10, 5, 3, 6, 8, 0 };
  quickSort(array, 0, 6);
  for (int i = 0; i < 7; i++) {
    std::cout << array[i] << std::endl;
  }
  return 0;
}
