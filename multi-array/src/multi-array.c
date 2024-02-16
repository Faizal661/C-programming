/*
 ============================================================================
 Name        : multi-array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,array[3][3];
	setbuf(stdout,NULL);
	printf("Enter array elements:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&array[i][j]);
		}
	}
	printf("Array is:\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",array[i][j]);
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
