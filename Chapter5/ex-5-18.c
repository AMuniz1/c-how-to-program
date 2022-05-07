/*5.18 (Even or Odd) Write a program that inputs a series of integers 
 * and passes them one at a time to function isEven, which uses the 
 * remainder operator to determine whether an integer is even. The 
 * function should take an integer argument and return 1 if the integer 
 * is even and 0 otherwise. */

#include <stdio.h>

int isEven(int number);

int main(void){
	int integer;
	puts("Enter a number: ");
	scanf("%d", &integer);
	printf("%d\n", isEven(integer));

	return 0;
}

int isEven(int number){

	if(number % 2 == 0){
		return 1;
	
	}
	else{
		return 0;
	
	}
	
}
