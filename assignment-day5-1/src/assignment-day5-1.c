/*
 ============================================================================
 Name        : assignment-day5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,array1[100],array2[100],temp[100];
	setbuf(stdout,NULL);
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter Array 1 :\n");
	for(i=0;i<size;i++){
		scanf("%d",&array1[i]);

	}
	printf("Enter Array 2 :\n");
	for(i=0;i<size;i++){
		scanf("%d",&array2[i]);

	}



//	printf("Array 1 :\n");
//	for(i=0;i<size;i++){
//		printf("%d\n",array1[i]);
//
//	}
//
//	printf("Array 2 :\n");
//	for(i=0;i<size;i++){
//		printf("%d\n",array2[i]);
//
//	}

	printf("Array After swapping :\n");

	for(i=0;i<size;i++){
		temp[i]=array1[i];
		array1[i]=array2[i];
		array2[i]=temp[i];
	}
	printf("Array 1 :\n");
	for(i=0;i<size;i++){
		printf("%d\n",array1[i]);

	}

	printf("Array 2 :\n");
	for(i=0;i<size;i++){
		printf("%d\n",array2[i]);

	}

	return EXIT_SUCCESS;
}
