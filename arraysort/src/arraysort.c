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
	setbuf(stdout,NULL);
	printf("Enter a limit\n");
	scanf("%d",&limit);
	printf("Enter values:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&array[i]);
	}
	printf("Values are :");
	for(i=0;i<limit;i++){
		printf("%d ",array[i]);
	}
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(array[j]<array[i]){
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;


			}
		}
	}
	printf("\nSorted array:");
		for(i=0;i<limit;i++){
			printf("%d ",array[i]);
		}
	return EXIT_SUCCESS;
}
