/*
 ============================================================================
 Name        : funtion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 FUNCTION WITHOUT ARG AND WITHOUT RETURN

 */



#include <stdio.h>
#include <stdlib.h>
void sum();

int main(void) {
	sum();
	return EXIT_SUCCESS;

}

void sum(){
		int a,b,c;
		setbuf(stdout,NULL);
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("Sum :%d",c);


}
