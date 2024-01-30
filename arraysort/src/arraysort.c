/*
 ============================================================================
 Name        : arraysort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,array[100],temp;
	printf("Enter a limit\n");
	scanf("%d",&limit);
	printf("Enter values:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&array[i]);
	}
	printf("Values are \n");
	for(i=0;i<limit;i++){
		printf("%d ",array[i]);
	}
	printf("Sorted array:\n");
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(array[j]<array[i]){
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;


			}
		}
	}
	printf("Sorted array:\n");
		for(i=0;i<limit;i++){
			printf("%d ",array[i]);
		}
	return EXIT_SUCCESS;
}
