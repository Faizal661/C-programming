/*
 ============================================================================
 Name        : pattern1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n=10;
	for(i=1;i<=n;i++){
		for(j=1;j<=(i*2)-1;j++){
			if(j==1){
			for(k=i;k<=n;k++){

				printf(" ");
			}
			}
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
