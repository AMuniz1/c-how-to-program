/*3.43 (Sides of a Triangle) Write a program that reads three 
 * nonzero integer values and deter-
mines and prints whether they could represent the sides of a triangle. */

#include <stdio.h>

int main(void){

	int side1, side2, side3;
	
	side1 = side2 = side3 = 0;
	while(side1 == 0){
		puts("Please input a non-zero value for the first side: ");
		scanf("%d", &side1);
	
	}
	while(side2 == 0){
		puts("Please input a non-zero value for the second side: ");
		scanf("%d", &side2);
	
	}
	while(side3 == 0){
		puts("Please input a non-zero value for the third side: ");
		scanf("%d", &side3);
	
	}
	int sum1, sum2, sum3;
	sum1 = side1 + side2;
	sum2 = side1 + side3;
	sum3 = side2 + side3;
	
	if ((sum1 > side3)&& (sum2 > side2)&& (sum3 > side1)){
		printf("%d %d %d represent sides of a triangle.\n", side1, side2, side3);
	}
	else{
		printf("%d %d %d not represent sides of a triangle.\n", side1, side2, side3);
	}


}
