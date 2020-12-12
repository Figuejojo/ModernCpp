CC=gcc
CXX=g++
RM=rm -f
#CPPFLAGS=-g $(shell root-config --cflags)
#LDFLAGS=-g $(shell root-config --ldflags)
#LDLIBS=$(shell root-config --libs)

cnst: Ass1_cnst.cpp
	$(CXX) -o Ass1_cnst.o Ass1_cnst.cpp
	./Ass1_cnst.o

ptrs: Ass1_ptrs.cpp
	$(CXX) -o Ass1_ptrs.o Ass1_ptrs.cpp
	./Ass1_ptrs.o

refs: Ass1_refs.cpp
	$(CXX) -o Ass1_refs.o Ass1_refs.cpp
	./Ass1_refs.o

clean: 
	rm -f *.o