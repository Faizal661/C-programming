/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,array[100],sum=0;
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
	printf("sum of array \n");
	for(i=0;i<limit;i++){
		sum=sum+array[i];
	}
	printf("%d",sum);

	return EXIT_SUCCESS;
}
