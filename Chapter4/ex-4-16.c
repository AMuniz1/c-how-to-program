/*4.16 (Triangle-Printing Program) Write a program that prints the 
 * following patterns separately, one below the other. Use for loops 
 * to generate the patterns. All asterisks (*) should be printed by a
 * single printf statement of the form printf("%s", "*"); 
 * (this causes the asterisks to print side by side). [Hint: The last 
 * two patterns require that each line begin with an appropriate 
 * number of blanks.] */

#include <stdio.h>

int main(){
	int i, j, k;
	for(i = 1; i<= 10; i++){
		for(j = 1; j<= i; j++){
			printf("*");
		
		}
		printf("\n");
	
	}
	printf("\n");
	
	for(i = 10; i>= 1; i--){
		for(j = 1; j<= i; j++){
			printf("*");
		
		}
		printf("\n");
	
	}
	printf("\n");
	
	for(i = 10; i>= 1; i--){
		for(k = 1; k<= 10 - i; k++){
			printf(" ");
		
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	
	}
	printf("\n");
	
	for(i = 1; i <= 10; i++){
		for(k = 1; k<= 10 - i; k++){
			printf(" ");
		
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	
	}
	printf("\n");




	return 0;
}
