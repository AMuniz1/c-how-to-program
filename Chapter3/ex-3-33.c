/*3.33 (Hollow Square of Asterisks) Modify the program you wrote in 
 * Exercise 3.32 so that it
prints a hollow square. For example, if your program reads a size of 5, 
* it should print
*****
*   *
*   *
*	*
*   *
*   *
*   *
*****
* */
#include <stdio.h>

int main(void){

	int line, size, number;
	
	puts("Enter the square's size (1-20): ");
	scanf("%d", &number);
	
	line = 1;
	while(line <= number){
		size = 1;//we need to this back to 1 to make multiple lines
		while(size <= number){
			if((size == 1)||(line == 1)||(line == number)||(size == number)){
				//if size or line is equal to 1 or number
				printf("*");
			}
			else{
				//else print empty space
				printf(" ");
				
			}
			size++; //increment size here, if on another place, I got errors
			
		
		}
		printf("\n");
		line++;
	
	}


}
