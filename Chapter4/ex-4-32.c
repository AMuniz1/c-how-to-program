/*4.32 (Modified Diamond-Printing Program) Modify the program you wrote 
 * in Exercise 4.31 to read an odd number in the range 1 to 19 to 
 * specify the number of rows in the diamond. Your program should then 
 * display a diamond of the appropriate size. */

#include <stdio.h>


int main(){
	
	int line, space, asterisk, number, odd;
	
	printf("Enter a number between 1 to 9: \n");
	scanf("%d", &number);
	
	odd = 2*number + 1;
	
	for(line = 1; line <= odd; line += 2){
		for(space = (odd - line)/2; space > 0; space--){
			printf(" ");
		
		}
		for(asterisk = 1; asterisk <= line; asterisk++){
			printf("*");
		
		}
		printf("\n");
	
	}
	for(line = odd - 2; line >= 0; line -=2){
		for(space = (odd - line)/2; space > 0; space--){
			printf(" ");
		}
		for(asterisk = 1; asterisk <= line; asterisk++){
			printf("*");
		}
		puts("");	
	}
	

	return 0;
}
