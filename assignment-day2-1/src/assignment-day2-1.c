/*
 ============================================================================
 Name        : assignment-day2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char input;
	setbuf(stdout,NULL);
	printf("Enter a char:\n");
	scanf("%c",&input);
	printf("You have entered %c",input);
	return EXIT_SUCCESS;
}
