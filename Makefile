all: main.c data_structures.o
	gcc -o main main.c data_structures.o
data_structures.o: data_structures.c
	gcc -c data_structures.c
clean:
	rm main; rm data_structures.o
