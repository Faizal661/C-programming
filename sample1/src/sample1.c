/*
 ============================================================================
 Name        : sample1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int b;
	setbuf(stdout,NULL);
	//printf("!!!mohammed faizal T \n Thottungal house \n mannengode po \n!!!"); /* prints !!!Hello World!!! */
	printf("Enter a number:\n");
	scanf("%d",&b);
	printf("You have entered %d",b);
	return EXIT_SUCCESS;
}
