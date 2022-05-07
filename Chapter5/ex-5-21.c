/*5.21 (Project: Drawing Shapes with Characters) Use techniques similar 
 * to those developed in Exercises 5.19––5.20 to produce a program that 
 * graphs a wide range of shapes.*/

#include <stdio.h>
#include <math.h>

void squareChar(int side, char fillCharacter);
void diamondChar(int size, char fillCharacter);
void triangleChar(int size, char fillCharacter);
void circleChar(int radius, char fillCharacter);

int main(void){
	
	int size;
	char character;
	int shape;
	
	printf("Enter a character: \n");
	scanf("%c", &character);
	printf("Enter a size: \n");
	scanf("%d", &size);
	printf("Choose a shape:\n 1 for Square;\n 2 for Diamond;\n 3 for Triangle;\n 4 for Circle;\nEnter a choice : \n");
	scanf("%d", &shape);
	
	
	switch(shape){
	
	case 1:
		squareChar(size, character);
		break;
	case 2:
		diamondChar(size,character);
		break;
	case 3:
		triangleChar(size, character);
		break;
	case 4:
		circleChar(size, character);
		break;
	default:
		squareChar(size, character);
		break;
	}
	puts("");

	return 0;
}

void squareChar(int side, char fillCharacter){
	int row, columns;
	
	for( row = 1;  row <= side; row++){
		for(columns = 1; columns <= side; columns++){
			printf("%c", fillCharacter);
		
		}
		printf("\n");
	
	
	}
	printf("\n");

}

void diamondChar(int size, char fillCharacter){

	int row, space, chars;
	
	for(row = 1; row <= size -2; row += 2){
	
		for(space = (size - row)/2; space> 0; space--){
			printf(" ");
		
		}
		for(chars = 1; chars <= row; chars++){
		
			printf("%c", fillCharacter);	
		}
		printf("\n");
	
	
	}
	
	for(row = size; row >  0; row -= 2){
	
		for(space = (size - row)/2; space> 0; space--){
			printf(" ");
		
		}
		for(chars = 1; chars <= row; chars++){
			printf("%c", fillCharacter);
		
		}
		printf("\n");
	
	}
	printf("\n");

}

void triangleChar(int size, char fillCharacter){

	int row, space, chars;
	
	for( row = 1;  row <= size; row++){
		
		for(space = size - row; space > 0; space--){
			printf(" ");
		
		}
		
		for(chars = 1; chars < 2*row; chars++){
			printf("%c", fillCharacter);
		
		}
		printf("\n");
	
	}
	printf("\n");


}

void circleChar(int radius, char fillCharacter){

	double dist, vert, horiz;
	int row, col;
	
	for(row = 0; row <= 2*radius+1; row++){
		
		for(col = 0; col <= 2*radius+1; col++){
			vert = radius - row;
			horiz = radius - col;
			dist = sqrt(vert*vert+horiz*horiz);
			
			if (dist <= radius){
				printf("%c", fillCharacter);
			
			}
			else{
				printf(" ");
			}
			
		}
		puts("");
	
	
	}
	puts("");


}
