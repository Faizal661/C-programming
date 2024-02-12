/*
 ============================================================================
 Name        : assignment-day5-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,array[100],j,temp;
	setbuf(stdout,NULL);
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter Array elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);

	}
	printf("sorted array in DESC order:\n");
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
			printf("%d ",array[i]);

		}

	return EXIT_SUCCESS;
}
