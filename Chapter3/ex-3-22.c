/*(Printing Numbers from a Loop) Write a program that utilizes looping 
to print the numbers from 1 to 10 side by side on the same line with 
three spaces between numbers.*/

#include <stdio.h>

int main(void){

	int counter;//initialize counter
	counter = 1; // counter equal 1
	
	while(counter <=10){
		printf("%d   ", counter);//tab between the numbers
		counter++;
	}

}
