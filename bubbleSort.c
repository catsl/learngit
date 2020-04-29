#include<stdio.h>
void bubbleSort(int * array,int length){
	int flag;
	for(int i=0;i<length-1;i++){
		flag=1;		
		for(int j=length-1;j>i;j--){
			if(array[j]<array[j-1]){
				flag=array[j-1];
				array[j-1]=array[j];
				array[j]=flag;
			}	
		}	
	}
}
