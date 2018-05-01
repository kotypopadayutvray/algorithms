template<typename T> int partitionQS(T *array, int li, int hi) {
  T pivot = array[hi];
  int i = (li - 1);
  for (int j = li; j <= hi- 1; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[hi]);
  return (i + 1);
}

template<typename T> void quickSort(T *array, int lowBound, int highBound) {
  if (lowBound < highBound) {
    int pi = partitionQS(array, lowBound, highBound);
    quickSort(array, lowBound, pi - 1);
    quickSort(array, pi + 1, highBound);
  }
}
