#include <climits>
#include <algorithm>

// Разбиение массива относительно элемента x
template<typename T> int partitionBFPRT(T *array, int left, int right, T x) {
  // Поиск позиции, на которой стоит разделитель
  for (int i = left; i < right; i++) {
    if (array[i] == x) {
      swap(&array[i], &array[right]);
      break;
    }
  }
  int i = left;
  for (int j = left; j <= right - 1; j++) {
    if (array[j] <= x) {
      swap(&array[i], &array[j]);
      i++;
    }
  }
  swap(&array[i], &array[right]);
  // Элемент разделитель будет находиться на позиции i
  return i;
}

template<typename T> T findMedian(T *array, int n) {
    std::sort(array, array + n);
    return array[n / 2];
}

template<typename T> T kthOrderStatistic(T *array, int left, int right, int k) {
  const int ELEMENTS_COUNT = 5;
  int length = right - left + 1;
  int countOfMedians = length / ELEMENTS_COUNT + (length % ELEMENTS_COUNT == 0 ? 0 : 1);
  T *median = new T[countOfMedians];
  int median_index = 0;
  for (median_index = 0; median_index < length / ELEMENTS_COUNT; median_index++) {
    // Находим смещение левой границы границы
    median[median_index] = findMedian(array + left + median_index * ELEMENTS_COUNT, ELEMENTS_COUNT);
  }
  if (length % ELEMENTS_COUNT) {
    median[median_index] = findMedian(array + left + median_index * ELEMENTS_COUNT, length % ELEMENTS_COUNT);
    median_index++;
  }
  T medianOfMedian = findMedian(median, countOfMedians);
  delete [] median;
  int pos = partitionBFPRT(array, left, right, medianOfMedian);
  if (pos - left == k - 1) {
    return array[pos];
  }
  if (pos - left > k - 1) {
    return kthOrderStatistic(array, left, pos - 1, k);
  }
  return kthOrderStatistic(array, pos + 1, right, k - pos + left - 1);
}
