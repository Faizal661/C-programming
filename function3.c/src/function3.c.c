/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
  FUNCTION WITH ARG AND WITH RETURN

 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);

int main(void) {
	int a,b,result;
	setbuf(stdout,NULL);
	printf("FUNCTION WITH ARG AND WITH RETURN\n");
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	result=sum(a,b);
	printf("Sum is :%d",result);
	return EXIT_SUCCESS;

}

int sum(int num1,int num2){
	int c;
	c=num1+num2;
	return c;
}
