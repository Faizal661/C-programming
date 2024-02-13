/*
 ============================================================================
 Name        : assignment-day3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your total percentage:");
	scanf("%f",&mark);
	if(mark>=90&&mark<=100){
		printf("GRADE: A");
	}
	else if(mark>=80 && mark<90){
		printf("GRADE: B");
	}
	else if(mark>=70 && mark<80){
		printf("GRADE: C");
		}
	else if(mark>=60 && mark<70){
		printf("GRADE: D");
		}
	else if(mark>=50 && mark<60){
		printf("GRADE: E");
		}
	else if(mark<50){
		printf("GRADE: FAILED");
		}
	else{
		printf("Enter correct percentage");

	}	return EXIT_SUCCESS;
}
