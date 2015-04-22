COMP=gcc

all: main

main: main.o matriz_um.o
	$(COMP) -o main main.o matriz_um.o

main.o: main.c
	$(COMP) -c main.c	

matriz_um.o: matriz_um.c
	$(COMP) -c matriz_um.c

clean:
	rm *.o