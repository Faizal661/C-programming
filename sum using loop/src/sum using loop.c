/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum,n,i;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("Sum is %d",sum);
	return EXIT_SUCCESS;
}
