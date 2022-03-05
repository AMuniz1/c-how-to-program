//(Odd or Even) Write a program that reads an integer and 
//determines and prints whether it’s odd or even.

#include <stdio.h>

int main(void){

	int integer;
	printf("Enter an integer, please: \n");
	scanf("%d", &integer);
	
	if (integer%2 == 0){ // if is multiple of 2
		printf("%d is an even number.\n", integer); // then is even
	
	}
	if (integer%2 != 0){ // if not multiple of 2
		printf("%d is an odd number.\n"); // then is odd
	
	}

}
