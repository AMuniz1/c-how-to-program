/*4.10 (Average a Sequence of Integers) Write a program that calculates 
 * and prints the average of several integers. Assume the last value 
 * read with scanf is the sentinel 9999. A typical input sequence
 * might be 10 8 11 7 9 9999 indicating that the average of all the 
 * values preceding 9999 is to be calculated. */

#include <stdio.h>

int main(){

	unsigned int counter = 0;
	float average;
	unsigned int total = 0;
	int number;
	
	do{
	
	puts("Enter a number: ");
	scanf("%d", &number);
	
	if (number != 9999){
	++counter;
	total = total + number;
	}
	
	
	}while(number != 9999);

	if (counter != 0){
		average = total / counter;
		printf("The average number is %.2f \n", average);
	}
	else{
		printf("The average number is 0.\n");
	
	}
	
	return 0;
}
