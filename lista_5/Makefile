COMP=gcc

#### Descomente para ativar o módulo dois####
MODU=matriz_um
# MODU=matriz_dois


all: main

main: main.o $(MODU).o
	$(COMP) -o main main.o $(MODU).o

main.o: main.c
	$(COMP) -c main.c	

$(MODU).o: $(MODU).c
	$(COMP) -c $(MODU).c

clean:
	rm *.o