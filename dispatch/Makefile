all:main.o FCFS.o SJF.o HPF.o RR.o job.o
	g++ -o processTest.bin main.o FCFS.o SJF.o HPF.o RR.o job.o

main.o:main.c
	g++ -c main.c

FCFS.o:FCFS.c
	g++ -c FCFS.c

SJF.o:SJF.c
	g++ -c SJF.c

HPF.o:HPF.c
	g++ -c HPF.c

RR.o:RR.c
	g++ -c RR.c


job.o:job.c
	g++ -c job.c

.PHONY:clean

clean:
	re -rf main.o FPFS.o SJF.o HPF.o RR.o linklist.o job.o



