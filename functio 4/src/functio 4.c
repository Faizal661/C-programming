/*
 ============================================================================
 Name        : functio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
  FUNCTION WITHOUT ARG AND WITH RETURN

 */


#include <stdio.h>
#include <stdlib.h>
int sum();

int main(void) {
	int result;
	result=sum();
	printf("Result :%d",result);
	return EXIT_SUCCESS;

}

int sum(){
		int a,b,c;
		setbuf(stdout,NULL);
		printf("FUNCTION WITHOUT ARG AND WITH RETURN\n");
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		c=a+b;
		return c;

}
