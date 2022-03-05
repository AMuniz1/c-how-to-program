//(Arithmetic, Largest Value and Smallest Value) Write a program that inputs 
//three different integers from the keyboard, then prints the sum, 
//the average, the product, the smallest and the largest of these numbers. 
//Use only the single-selection form of the if statement you learned in this chapter. 
//The screen dialogue should appear as follows:

#include <stdio.h>

int main(void){
	int integer1, integer2, integer3;
	int smallest, largest, product, sum;
	float average;
	printf("Enter three different integers:x y z\n");
	scanf("%d %d %d", &integer1, &integer2, &integer3);
	product = integer1 * integer2 * integer3;
	sum = integer1+ integer2 + integer3;
	average = (float)(sum)/3;
	if (integer1 < integer2){
		if (integer1 < integer3){
			smallest = integer1;
		}
	}
	if (integer2 < integer1){
		if (integer2 < integer3){
			smallest = integer2;
		}
	}
	if (integer3 < integer1){
		if (integer3 < integer2){
			smallest = integer3;
		}
	}
	if (integer1 > integer2){
		if (integer1 > integer3){
			largest = integer1;
		}
	}
	if (integer2 > integer1){
		if (integer2 > integer3){
			largest = integer2;
		}
	}
	if (integer3 > integer1){
		if (integer3 > integer2){
			largest = integer3;
		}
	}
	printf("Sum is %d\n", sum);
	printf("Average is %.2f\n", average);
	printf("Product is %d\n", product);
	printf("Smallest is %d\n", smallest);
	printf("Largest is %d\n", largest);
		
}
