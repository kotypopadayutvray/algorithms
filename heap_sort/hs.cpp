#include <iostream>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int *array, int size, int index) {
	int largest = index;
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	if (left < size && array[left] > array[largest])
		largest = left;
	if (right < size && array[right] > array[largest])
		largest = right;
	if (largest != index) {
		swap(&array[index], &array[largest]);
		heapify(array, size, largest);
	}
}

void heapSort(int *array, int size) {
	for (int i = (size / 2) - 1; i >= 0; i--)
		heapify(array, size, i);
	for (int i = size - 1; i >= 0; i--) {
		swap(&array[0], &array[i]);
		heapify(array, i, 0);
	}
}

int main() {
	int array[] = { -1, 0, -99, 100, 12, 85, -2, 5, 3, 4 };
	int size = sizeof(array) / sizeof(int);
	heapSort(array, size);
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}
}