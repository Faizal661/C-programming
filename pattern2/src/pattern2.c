/*
 ============================================================================
 Name        : pattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Butterfly pattern in c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n,space;
	setbuf(stdout,NULL);
	printf("Enter number of lines :");
	scanf("%d",&n);
	space=(n*2)-2;

	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		for(k=1;k<=space;k++){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
		space=space-2;
	}
	space=2;

	for(i=1;i<=n;i++){
		for(j=i;j<n;j++){
			printf("*");
		}
		for(k=1;k<=space;k++){
			printf(" ");
		}
		for(j=i;j<n;j++){
			printf("*");
		}
		printf("\n");
		space=space+2;
	}
	return EXIT_SUCCESS;
}
