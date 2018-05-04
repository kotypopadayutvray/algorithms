all: program clean
program: mqs_3way.o sorted_type.o
	g++ -std=c++14 mqs_3way.o sorted_type.o program.cpp -O2 -o program
mqs_3way.o:
	g++ -c ../mqs_3way/mqs_3way.h ../mqs_3way/mqs_3way.cpp
sorted_type.o:
	g++ -c ../sorted_type/sorted_type.h ../sorted_type/sorted_type.cpp
clean:
	rm -rf *.o
clean_all:
	rm -rf *.o program
