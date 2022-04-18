/*4.11 (Find the Smallest) Write a program that finds the smallest 
 * of several integers. Assume that the first value 
 * read specifies the number of values remaining. */

#include <stdio.h>

int main(){

	int smallest, number_of_integers, number;
	puts("Enter the number of integers: ");
	scanf("%d", &number_of_integers);
	
	for(int i = 1; i <= number_of_integers; i++){
		printf("Enter the %dº number: ", i);
		scanf("%d", &number);
		
		if (i == 1){
			smallest = number;
		}
		else{
			if (number < smallest){
				smallest = number;
			}
		}
		
	} 
	printf("The smallest number in %d numbers is %d.\n", number_of_integers, smallest);


}
