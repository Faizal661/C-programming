/*
 ============================================================================
 Name        : string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	setbuf(stdout,NULL);
	printf("Enter your name:");
	scanf("%s",name);
	printf("Youre name is %s",name);
	return EXIT_SUCCESS;
}
