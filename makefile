all: main.o musicLibrary.o linkedSongs.o
	gcc -o program main.o functions.o

main.o: main.c musicLibrary.h linkedSongs.h
	gcc -c main.c

musicLibrary.o: musicLibrary.c musicLibrary.h
	gcc -c musicLibrary.c

linkedSongs.o: linkedSongs.c linkedSongs.h
	gcc -c linkedSongs.c

run:
	./program

clean:
	rm *.o
	rm program
