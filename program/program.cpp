#include <string>
#include <fstream>
#include <iostream>
#include "../mqs_3way/mqs_3way.h"
#include "../sorted_type/sorted_type.h"

int processFile(SortedType **array, char *filePath) {
  std::ifstream file(filePath);
  std::string line;
  std::getline(file, line);
  int countElements = std::stoi(line);
  (*array) = new SortedType[countElements];
  int processedElements = 0;
  while (std::getline(file, line) && processedElements < countElements) {
    (*array)[processedElements].key = std::stoi(line.substr(0, line.find(" ")));
    processedElements++;
  }
  file.close();
  return processedElements;
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "Program must have command line argument!" << std::endl;
    std::cout << "1st command line argument is path to the file with data." << std::endl;
    return -1;
	}
  SortedType *array = nullptr;
  int countElements = processFile(&array, argv[1]);
  if (!array) {
    std::cout << "Something was wrong." << std::endl;
    return -1;
  }
  int k = -1;
  while (k < 0 || k > countElements - 1) {
    std::cout << "Enter k (value must be between 0 and " << countElements - 1 << "): ";
    std::cin >> k;
  }
  SortedType res = modifiedQuickSort(array, 0, countElements - 1, k);
  std::cout << "Result is " << res.key << std::endl;
  delete [] array;
  return 0;
}
