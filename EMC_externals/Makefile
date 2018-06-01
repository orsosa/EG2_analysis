.PHONY: all clean

all: test_emc


test_emc: F1F209.o C_F1F209.o
	g++  -o test `root-config --libs` F1F209.o C_F1F209.o

F1F209.o: F1F209.f
	gfortran -c F1F209.f

C_F1F209.o: C_F1F209.cxx
	g++ -c `root-config --cflags` C_F1F209.cxx 

clean:
	rm *.o test_emc