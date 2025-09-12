main.exe: main.o secondary.o
	gcc secondary.o main.o -o main.exe
main.o: main.c
	gcc -c main.c -o main.o
secondary.o: secondary.c
	gcc -c secondary.c -o secondary.o

clean:
	rm -f *.o main.exe