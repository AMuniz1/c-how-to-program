/*5.20 (Displaying a Square of Any Character) Modify the function 
 * created in Exercise 5.19 to form the square out of whatever character
 * is contained in character parameter fillCharacter. Thus if side is 5
 * and fillCharacter is “#”, then this function should print: */

#include <stdio.h>

void squareChar(int side, char fillCharacter);

int main(void){
	
	int n;
	char Char;
	scanf("%d %c", &n, &Char);
	squareChar(n, Char);
	

	return 0;
}

void squareChar(int side, char fillCharacter){

	int a, b;
	
	for(a = 1; a <=side; a++){
		for(b = 1; b<=side; b++){
			printf("%c", fillCharacter);
		
		}
		printf("\n");
	
	}



}
