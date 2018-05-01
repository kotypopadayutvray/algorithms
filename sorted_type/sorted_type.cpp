#include "sorted_type.h"

SortedType::SortedType() {
	this->key = 0;
}

SortedType::SortedType(int key = 0) {
	this->key = key;
}

bool SortedType::operator > (const SortedType &other) {
	return this->key > other.key;
}

bool SortedType::operator < (const SortedType &other) {
	return this->key < other.key;
}

bool SortedType::operator == (const SortedType &other) {
	return this->key == other.key;
}

bool SortedType::operator != (const SortedType &other) {
	return !(*this == other);
}

bool SortedType::operator >= (const SortedType &other) {
	return (*this > other) || (*this == other);
}

bool SortedType::operator <= (const SortedType &other) {
	return (*this < other) || (*this == other);
}

