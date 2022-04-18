/*4.31 (Diamond-Printing Program) Write a program that prints the 
 * following diamond shape. You may use printf statements that print 
 * either a single asterisk (*) or a single blank. Maximize your use of 
 * iteration (with nested for statements) and minimize the number of 
 * printf statements. */

#include <stdio.h>

int main(){

	for(int line = 1; line <= 9; line +=2){
		for(int spaces = (9  - line)/2; spaces > 0; spaces--){
			printf(" ");
		
		}
		for(int asterisks = 1; asterisks <= line; asterisks++){
			printf("*");
		
		}
		printf("\n");
	}
	for(int line = 7; line>= 0; line -=2){
		for(int space = (9 - line)/2; space > 0; space--){
			printf(" ");
		
		}
		for(int asterisks= 1; asterisks <= line; asterisks++){
			printf("*");
		
		}
		printf("\n");
	}



	return 0;
}
