all:main.o FPFS.o SJF.o HPF.o RR.o linklist.o job.o
	g++ -o processTest.bin main.o FPFS.o SJF.o HPF.o RR.o linklist.o job.o

main.o:main.c
	g++ -c main.c

FPFS.o:FPFS.c
	gcc -c FPFS.c

SJF.o:SJF.c
	gcc -c SJF.c

HPF.o:HPF.c
	gcc -c HPF.c

RR.o:RR.c
	gcc -c RR.c

linklist.o:linklist.c
	gcc -c linklist.c

job.o:job.c
	g++ -c job.c

.PHONY:clean

clean:
	re -rf main.o FPFS.o SJF.o HPF.o RR.o linklist.o job.o



