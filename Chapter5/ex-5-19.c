/*5.19 (Square of Asterisks) Write a function that displays a solid 
 * square of asterisks whose side is specified in integer parameter 
 * side. For example, if side is 4, the function displays: */

#include <stdio.h>

void squareAsterisk(int side);

int main(void){

	int side;
	scanf("%d", &side);
	squareAsterisk(side);

	return 0;
}

void squareAsterisk(int side){
	
	int a, b;
	
	for(a = 1; a <= side; a++){
		for(b = 1; b <= side; b++){
			printf("*");
		
		}
		printf("\n");
	
	}


}
