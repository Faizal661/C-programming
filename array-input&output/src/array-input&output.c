/*
 ============================================================================
 Name        : array-input&output.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,limit;
	setbuf(stdout,NULL);
	printf("Enter limit of the array");
	scanf("%d",&limit);
	printf("Enter %d numbers:\n",limit);
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Array values are:\n");
	for(i=0;i<limit;i++){
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}
