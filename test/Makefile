all: test clean
test: bfprt.o qs.o qs_3way.o heap_sort.o mqs_3way.o swap.o
	g++ bfprt.o qs.o qs_3way.o heap_sort.o mqs_3way.o swap.o test_algorithms.cpp -o test
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
clean:
	rm -rf *.o
clean_all:
	rm -rf *.o test
