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
	int i,j,n=4;

	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("* ");
		}
		printf("\n");
	}
	//   * * * *
	//	 * * *
	//	 * *
	//	 *
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}


//int main(void) {
//	int i,j,n=7;
//
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//		    printf("* ");
//		}
//
//		printf("\n");
//	}
////	*
////	* *
////	* * *
////	* * * *
//
//	return EXIT_SUCCESS;
//}
