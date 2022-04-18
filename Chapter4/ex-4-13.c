/*4.13 (Calculating the Product of Odd Integers) Write a program that 
 * calculates and prints the product of the odd integers from 1 to 15.*/

#include <stdio.h>

int main(){
	
	int i;
	int product = 1;
	
	for(i = 1; i <= 15; i++){
		
		if(i%2 != 0){
			product = product * i;
		}
	
	}
	printf("The product of odd integers from 1 to 15 is %d.\n", product);

	return 0;
}
