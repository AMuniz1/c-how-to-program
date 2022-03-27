/*3.32 (Square of Asterisks) Write a program that reads in the side of 
 * a square and then prints that square out of asterisks. Your program 
 * should work for squares of all side sizes between 1 and 20.*/

#include <stdio.h>

int main(void){

	int line, size, number;
	
	puts("Enter the square's size (1-20): ");
	scanf("%d", &number);
	
	line = 1;
	while(line <= number){
		size = 1;//we need to this back to 1 to make multiple lines
		while(size <= number){
			printf("*");
			size++;
		
		}
		printf("\n");
		line++;
	
	}
	


}
