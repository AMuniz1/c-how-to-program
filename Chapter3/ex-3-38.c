/*3.38 (Counting 7s) Write a program that reads an integer 
 * (5 digits or fewer) and determines and prints how many 
 * digits in the integer are 7s. */

#include <stdio.h>

int main(void){

	int number, sevens, remainders, original;
	
	puts("Enter a integer: ");
	scanf("%d", &number);
	
	sevens = 0;
	original = number;
	
	while(number != 0){
		remainders = number % 10;
		if(remainders == 7){
			sevens++;
		
		}
		number = number / 10;
	
	}
	if(sevens == 1){
		printf("There is %d 7s in %d\n", sevens, original);
	}
	else{
		printf("There are %d 7s in %d\n", sevens, original);
	}

}
