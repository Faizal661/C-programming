/*
 ============================================================================
 Name        : arraysearch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,array[100],flag=0,search;
	
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
	printf("Enter search value\n");
	scanf("%d",&search);

	for(i=0;i<limit;i++){
		if(search==array[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("value found at position %d",i+1);
	}else{
		printf("value not found");
	}


	return EXIT_SUCCESS;
}
