/*
 ============================================================================
 Name        : pre&post.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=10,b;
	//b=a++;  //This line print 'a' as 11 and 'b' as 10.

	b=++a;  //This line print 'a' and 'b' as 11.

	printf("a=%d   b=%d",a,b);/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
