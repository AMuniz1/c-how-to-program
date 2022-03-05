/*(Arithmetic) Write a program that asks the user to enter two numbers, 
 obtains them from 
 the user and prints their sum, product, difference, quotient and remainder. */

#include <stdio.h>

int main(void){
	int integer1, integer2; //two numbers entered by the user
	int sum, sub, mul, rem; //the four operations to be made
	float div; // plus the DIVision
	printf("Enter the two integers, separated by one space: \n");
	scanf("%d %d", &integer1, &integer2);
	while(integer2 == 0){
		printf("Please, re-enter the second number. Must be different than zero!\n");
		scanf("%d", &integer2);
	}
	sum = integer1 + integer2;
	div = (integer1)/(integer2);
	rem = (integer1)%(integer2);
	sub = integer1 - integer2;
	mul = (integer1)*(integer2);
	printf("%d + %d = %d \n%d - %d = %d \n", integer1, integer2, sum, integer1, integer2, sub);
	printf("%d * %d = %d \n%d / %d = %f \n", integer1, integer2, mul, integer1, integer2, div);
	printf("remainder of %d / %d  is %d\n", integer1, integer2, rem);
	
}
