#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int LENGTH=10000;
void printArray(int *array,int length);
void bubbleSort(int*array,int length);
void fastSort(int*array,int length);
void selectSort(int *array,int length);

int main(int argc,char**argv){
	if(argc>1){
		LENGTH=atoi(argv[1]);
	}
	printf("%d个数:\n",LENGTH);
	int array[LENGTH];
	srand((unsigned int)time(NULL));
	for(int i=0;i<LENGTH;i++){
		array[i]=rand();
	}
	int *sort=(int*)malloc(sizeof(int)*LENGTH);
	long t;
	memcpy(sort,array,sizeof(int)*LENGTH);
	t=(long)clock();
	bubbleSort(sort,LENGTH);
	t=(long)clock()-t;
	printf("冒泡排序:%1d.%061d秒\n",t/CLOCKS_PER_SEC,t%CLOCKS_PER_SEC);
	memcpy(sort,array,sizeof(int)*LENGTH);
	t=(long)clock();
	fastSort(sort,LENGTH);
	printf("快速排序：%1d.%061d秒\n",t/CLOCKS_PER_SEC,t%CLOCKS_PER_SEC);

	memcpy(sort,array,sizeof(int)*LENGTH);
	t=(long)clock();
	selectSort(sort,LENGTH);
	t=(long)clock()-t;
	printf("选择排序：%1d.%061d秒\n",t/CLOCKS_PER_SEC,t%CLOCKS_PER_SEC);
	free(sort);
	return 0;
}

void printArray(int *array,int length){
	for(int i=0;i<length;i++){
		printf("%d",array[i]);
		if(i%30==29){
			printf("\n");
		}
	}
	printf("\n");
}

