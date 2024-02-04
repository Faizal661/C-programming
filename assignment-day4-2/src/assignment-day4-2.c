/*
 ============================================================================
 Name        : assignment-day4-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a limit\n");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	printf(" \n Sum of odd numbers = %d",sum);


	return EXIT_SUCCESS;
}
