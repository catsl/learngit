#include<stdio.h>
void selectSort(int *array,int length){
	int min;
	int x;
	for(int i=0;i<length-1;i++){
		min=i;
		for(int j=i+1;j<length;j++){
			if(array[j]<array[min]){
				min=j;
			}
		}
		if(i!=min){
			x=array[i];
			array[i]=array[min];
			array[min]=x;
		}
	}
}
