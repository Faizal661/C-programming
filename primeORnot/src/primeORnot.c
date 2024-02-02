/*
 ============================================================================
 Name        : primeORnot.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//int main() {
//	int i,num=9,flag=0;
//	for(i=2;i<num;i++){
//		if(num%i==0){
//			flag=1;
//			break;
//		}
//	}
//	if(flag==0){
//		printf("Prime number");
//	}
//	else{
//		printf("Not a prime number");
//
//	}
//	return 0;
//}

int main() {
	int i,j,limit,prime;
	setbuf(stdout,NULL);
	printf("Enter limit :\n");
	scanf("%d",&limit);
	printf("Prime numbers are :\n");
	for(i=2;i<=limit;i++){
		prime=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				prime=0;
				break;
			}

		}
		if(prime){
			printf(" %d \n",i);
		}


	}


	return 0;
}
