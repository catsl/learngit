#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
void printLoop(char*);
int printNum=100;

int main(int argc,char** argv){
	if(argc>1){
		printNum=atoi(argv[1]);
	}
	if(fork()==0){
		printLoop("First Child");
	}
	else if(fork()==0){
		printLoop("Second Child");
	}else{
		printLoop("Main");
	}
	return 0;
}

void printLoop(char* process){
	for(int i=0;i<printNum;i++){
		printf("(%s=>%d)\n",process,i);
	}
}
