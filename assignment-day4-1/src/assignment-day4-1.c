/*
 ============================================================================
 Name        : assignment-day4-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input,i,output;
	setbuf(stdout,NULL);
	printf("Enter a input\n");
	scanf("%d",&input);
	for(i=1;i<=10;i++){
		output=i*input;
		printf(" %d x %d =%d  \n",i,input,output);
	}

	return EXIT_SUCCESS;
}
