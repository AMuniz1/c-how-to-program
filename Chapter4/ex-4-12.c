/*4.12 (Calculating the Sum of Even Integers) Write a program that 
 * calculates and prints the sum of the even integers from 2 to 30.*/

#include <stdio.h>

int main(){
	
	int i;
	
	int sum = 0;
	
	for(i = 1; i <= 30; i++){
	
		if(i%2 == 0){
			sum = sum + i;
		} 
	}
	printf("The sum of even integers from 2 to 30 is %d.\n", sum);


	return 0;
}
