/*5.15 (Hypotenuse Calculations) Define a function called hypotenuse 
 * that calculates the length of the hypotenuse of a right triangle 
 * when the other two sides are given. The function should take two 
 * arguments of type double and return the hypotenuse as a double. 
 * Test your program with the side values specified in Fig. 5.22.*/

#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);

int main(void){

	printf("%.1lf\n%.1lf\n%.1lf\n", hypotenuse(3.0, 4.0), hypotenuse(5.0, 12.0), hypotenuse(8.0, 15.0));

	return 0;
}

double hypotenuse(double side1, double side2){
	
	
	double hyp = sqrt(side1*side1 + side2*side2);
	
	return hyp;


}
