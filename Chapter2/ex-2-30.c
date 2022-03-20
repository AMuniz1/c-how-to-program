//(Separating Digits in an Integer) Write a program that inputs one five-digit number, separates 
//the number into its individual digits and prints the digits separated from one another by three
//spaces each.

#include <stdio.h>
#include <math.h>

int main(void){
	
	int i , number, digit;
	printf("Please, input a five-digit number.\n");
	scanf("%d", &number);
	for (i = 4; i >= 0; i--){
		int exp = pow(10,i);
		//printf("\n%d\n", i);
		digit = number/exp;
		number = number%exp;
		printf("%d ", digit);
		
	}
	

}
