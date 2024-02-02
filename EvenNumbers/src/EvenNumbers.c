/*
 ============================================================================
 Name        : EvenNumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number;
	setbuf(stdout,NULL);
	printf("Enter limit :\n");
	scanf("%d",&number);
	printf("\nEven numbers are :\n");
	for(i=1;i<=number;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	return EXIT_SUCCESS;
}
