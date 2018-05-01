#ifndef SORTED_TYPE_H
#define SORTED_TYPE_H

struct SortedType {
	int key;
	char smth[196];
	SortedType();
	SortedType(int);
	bool operator > (const SortedType&);
	bool operator < (const SortedType&);
	bool operator == (const SortedType&);
	bool operator != (const SortedType&);
	bool operator >= (const SortedType&);
	bool operator <= (const SortedType&);
};
 
#endif

