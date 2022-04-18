/*4.18 (Bar-Chart Printing Program) One interesting application of 
 * computers is drawing graphs and bar charts. Write a program that 
 * reads five numbers (each between 1 and 30). For each number read, 
 * your program should print a line containing that number of 
 * adjacent asterisks. For example, if your program reads the number 
 * seven, it should print *******. */

#include <stdio.h>

int main(){
	printf("Enter five numbers from 1 to 30.\n");
	for (int number = 1; number <= 5; number++){
		int max_number;
		scanf("%d", &max_number);
		for (int i = 1; i <= max_number; i++){
			printf("*");
		
		}
		printf("\n");
	}


	return 0;
}
