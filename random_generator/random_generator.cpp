#include "./random_generator.h"

void randomGenerator(SortedType *array, int elementCount, int leftBound, int rightBound) {
	std::srand(unsigned(std::time(0)));
	for (int i = 0; i < elementCount; i++) {
		array[i].key = leftBound + std::rand() % (rightBound - leftBound);
	}
}

