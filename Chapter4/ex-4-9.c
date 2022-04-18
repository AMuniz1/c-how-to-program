/*4.9 (Sum a Sequence of Integers) Write a program that sums a sequence 
of integers. Assume that the first integer read with scanf specifies 
the number of values remaining to be entered. Your program should 
read only one value each time scanf is executed. A typical input 
sequence might be 5 100 200 300 400 500
where the 5 indicates that the subsequent five values are to be summed.*/

#include <stdio.h>

int main(){

	unsigned int number_integers, numbers;
	
	puts("Enter the number of integers to be added: ");
	scanf("%u", &number_integers);
	
	int total = 0;
	
	for(int i = 1; i <= number_integers; i++){
		printf("\nEnter the number %u: ", i);
		scanf("%u", &numbers);
		
		total = total + numbers;
	}
	
	printf("\nThe sum is %u\n", total);



	return 0;
}
