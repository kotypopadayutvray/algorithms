template<typename T> void partitionQS3W(T *array, int li, int hi, int *liM, int *hiM) {
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

template<typename T> void quickSort3Way(T *array, int lowBound, int highBound) {
  if (highBound <= lowBound) {
    return;
  }
  int gt = highBound;
  int lt = lowBound;
  partitionQS3W(array, lowBound, highBound, &lt, &gt);
  quickSort3Way(array, lowBound, lt);
  quickSort3Way(array, gt, highBound);
}
