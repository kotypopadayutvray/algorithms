#include <iostream>

int swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void partition(int *array, int li, int hi, int *liM, int *hiM) {
  int lt = li;
  int gt = hi;
  int i = li + 1;
  int pivotVal = array[li];

  while (i <= gt) {
    if (array[i] <  pivotVal) {
      swap(&array[i++], &array[lt++]);
    } else if (pivotVal < array[i]) {
      swap(&array[i], &array[gt--]);
    } else {
      i++;
    }
  }
  *liM = lt - 1;
  *hiM = gt + 1;
}

void quickSort(int *array, int lowBound, int highBound) {
  if (highBound <= lowBound) {
    return;
  }
  int gt = highBound;
  int lt = lowBound;
  partition(array, lowBound, highBound, &lt, &gt);
  quickSort(array, lowBound, lt);
  quickSort(array, gt, highBound);
}

int main() {

  int array[] = { 5, -10, 5, 3, 6, 8, 0 };
  quickSort(array, 0, 6);
  for (int i = 0; i < 7; i++) {
    std::cout << array[i] << std::endl;
  }
  return 0;
}
