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
	//scanf("%d",&n);
	n=7;
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

	for(i=n-1;i>0;i--){
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
			space=space+2;
		}
	return EXIT_SUCCESS;
}
