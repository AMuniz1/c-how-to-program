//(Largest and Smallest Integers) Write a program that reads in three integers 
//and then determines and prints the largest and the smallest 
//integers in the group. Use only the programming techniques you 
//have learned in this chapter.

#include <stdio.h>

int main(void){

	int integer1, integer2, integer3;
	int smallest, largest;
	printf("Enter three integers, separated by space as 'x y z'\n");
	scanf("%d %d %d", &integer1, &integer2, &integer3);
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
	printf("Smallest is %d.\nLargest is %d\n", smallest, largest);
	

}
