/*
 ============================================================================
 Name        : assignment-day3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your mark:");
	scanf("%f",&mark);
	if(mark<50){
		printf("FAILED");

	}
	else if(mark>=50 && mark<=100){
		printf("PASSED");

	}
	else{
		printf("Enter correct mark");

	}
	return EXIT_SUCCESS;
}
