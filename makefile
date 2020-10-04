.PHONY : clean all

all: main.o euler.o
	gcc -o euler euler.o main.o

main.o: main.c euler.h
	gcc -c main.c

euler.o: euler.c euler.h
	gcc -c euler.c

clean: 
	rm euler.o main.o euler
