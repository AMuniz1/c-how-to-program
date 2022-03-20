//(Table of Squares and Cubes) Using only the techniques you learned in this chapter, write
//a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print
//the following table of values:

#include <stdio.h>
#include <math.h>

int main(void){

	printf("number        square       cube\n");
	int i, square, cube;
	for(i = 0; i <= 10; i++){
	square = pow(i, 2);
	cube = pow(i, 3);
	printf("%d              %d           %d\n", i, square, cube);
	
	}



}
