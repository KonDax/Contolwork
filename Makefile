
all : main.o Func.o sorts.o
	g++ main.o Func.o sorts.o

main.o : main.c
	g++ -c main.c

Func.o : Func.c
	g++ -c Func.c

sorts.o : sorts.c
	g++ -c sorts.c

clean :
	rm -rf *.o a.out