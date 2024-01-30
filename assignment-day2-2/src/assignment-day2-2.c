/*
 ============================================================================
 Name        : assignment-day2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Number1;
	float Number2,Sum;
	setbuf(stdout,NULL);
	printf("Enter two numbers:\n");
	scanf("%d%f",&Number1,&Number2);
	Sum=Number1+Number2;
	printf("Sum of %d and %f is %f",Number1,Number2,Sum);
	return EXIT_SUCCESS;
}
