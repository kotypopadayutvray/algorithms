template<typename T> void partitionMQS(T *array, int li, int hi, int *liM, int *hiM) {
  int lt = li;
  int gt = hi;
  int i = li + 1;
  T pivotVal = array[li];

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

template<typename T> T modifiedQuickSort(T *array, int lowBound, int highBound, int k) {
  if (highBound <= lowBound) {
    return array[lowBound];
  }
  int gt = highBound;
  int lt = lowBound;
  partitionMQS(array, lowBound, highBound, &lt, &gt);
  if (k >= lowBound && k <= lt) {
    return modifiedQuickSort(array, lowBound, lt, k);
  } else if (k >= (lt + 1) && k <= (gt - 1)) {
    return array[lt + 1];
  } else {
    return modifiedQuickSort(array, gt, highBound, k);
  }
}
