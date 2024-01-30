/*
 ============================================================================
 Name        : if-positive@negative.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1;
	setbuf(stdout,NULL);
	puts("Enter a number:\n");
	scanf("%d",&number1);
	if(number1<0){
		printf("negative number");
	}else{
		printf("positive number");
	}

	return EXIT_SUCCESS;
}
