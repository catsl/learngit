all:main.o 
	gcc -o main.bin main.o

main.o:main.c
	gcc -c main.c

.PHONY:clean

clean:
	re -rf main.o
