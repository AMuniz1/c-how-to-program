/*(Find the Largest Number) The process of finding the largest number 
(i.e., the maximum of a group of numbers) is used frequently in computer
applications. For example, a program that determines the winner of a 
sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. Write a 
pseudocode program and then a program that inputs a series of 10 
non-negative numbers and determines and prints the largest of 
the numbers.*/

#include <stdio.h>

int main(void){

	unsigned int counter, number, largest;
	
	counter = 1;
	largest = number = 1;
	while(counter <= 10){
		puts("Enter the number: ");
		scanf("%d", &number);
		if (number > largest){
			largest = number;
		}
		counter++;

	}
	
	printf("The largest number entered was %d\n", largest);

}
