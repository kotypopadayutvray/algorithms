all: compare clean
compare: bfprt.o qs.o qs_3way.o heap_sort.o mqs_3way.o swap.o random_generator.o sorted_type.o
	g++ bfprt.o qs.o qs_3way.o heap_sort.o mqs_3way.o swap.o random_generator.o sorted_type.o compare_algorithms.cpp -O2 -o compare_algorithms
bfprt.o:
	g++ -c ../bfprt/bfprt.h ../bfprt/bfprt.cpp
qs.o:
	g++ -c ../qs/qs.h ../qs/qs.cpp
qs_3way.o:
	g++ -c ../qs_3way/qs_3way.h ../qs_3way/qs_3way.cpp
heap_sort.o:
	g++ -c ../heap_sort/heap_sort.h ../heap_sort/heap_sort.cpp
mqs_3way.o:
	g++ -c ../mqs_3way/mqs_3way.h ../mqs_3way/mqs_3way.cpp
swap.o:
	g++ -c ../swap/swap.h ../swap/swap.cpp
sorted_type.o:
	g++ -c ../sorted_type/sorted_type.h ../sorted_type/sorted_type.cpp
random_generator.o:
	g++ -c ../random_generator/random_generator.h ../random_generator/random_generator.cpp
clean:
	rm -rf *.o
clean_all:
	rm -rf *.o compare_algorithms
