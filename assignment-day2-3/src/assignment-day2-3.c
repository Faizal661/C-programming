
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	setbuf(stdout,NULL);
	printf("Please enter the Principle Amount :");
	scanf("%d",&P);
	printf("please enter the interest rate :");
	scanf("%f",&R);
	printf("please enter the no of years you want calculate interest :");
	scanf("%f",&n);
	SI=(P*R*n)/100;
	printf("The Simple Interest for the %f year is :%f",n,SI);
	return EXIT_SUCCESS;
}
