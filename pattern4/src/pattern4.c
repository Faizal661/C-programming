/*
 ============================================================================
 Name        : pattern4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=7;

	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
		    printf("*");
		}

		printf("\n");
	}

	return EXIT_SUCCESS;
}
