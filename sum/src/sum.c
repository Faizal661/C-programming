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


int main(void) {
	int a,b,sum;
	setbuf(stdout,NULL);
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum of %d and %d is %d",a,b,sum);
	return 0;
}
