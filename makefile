CC=gcc
CXX=g++
MAP = -Xlinker -Map=output.map 
RM=rm -f
#CPPFLAGS=-g $(shell root-config --cflags)
#LDFLAGS=-g $(shell root-config --ldflags)
#LDLIBS=$(shell root-config --libs)

cnst: Ass1_cnst.cpp
	$(CXX) -o Ass1_cnst.o Ass1_cnst.cpp $(MAP)
	./Ass1_cnst.o

ptrs: Ass1_ptrs.cpp
	$(CXX) -o Ass1_ptrs.o Ass1_ptrs.cpp $(MAP)
	./Ass1_ptrs.o

refs: Ass1_refs.cpp
	$(CXX) -o Ass1_refs.o Ass1_refs.cpp $(MAP) 
	./Ass1_refs.o

list:
	$(info Use "make (one of the following)")
	$(info cnst)
	$(info ptrs)
	$(info refs)
	
clean: 
	rm -f *.o
	

#Liner Doc:
# https://interrupt.memfault.com/blog/get-the-most-out-of-the-linker-map-file
