/*
 ============================================================================
 Name        : assignment-day5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,array[100],count=0;
		setbuf(stdout,NULL);
		printf("Enter the size of array:");
		scanf("%d",&size);
		printf("Enter Array elements :\n");
		for(i=0;i<size;i++){
			scanf("%d",&array[i]);

		}

		for(i=0;i<size;i++){
			if(array[i]%2==0){
				count++;
			}
		}
		printf("Number of even numbers in the array is : %d ",count);
	return EXIT_SUCCESS;
}
