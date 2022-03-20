//(Multiples) Write a program that reads in two integers 
//and determines and prints whether the first is a multiple of the second.

#include <stdio.h>

int main(void){
	
	int integer1, integer2;
	printf("Please, enter two integers. Format:x y.\n");
	scanf("%d %d", &integer1, &integer2);
	if (integer1 % integer2 == 0){
		
		printf("%d is a multiple of %d", integer1, integer2);
		
	}
	if (integer1 % integer2 != 0){
		
		printf("%d is not a multiple of %d", integer1, integer2);
	}
	

}
