/*5.10 (Rounding Numbers) An application of function floor is rounding
 * a value to the nearest integer. The statement
y = floor(x + .5);
will round the number x to the nearest integer and assign the result to y.
*  Write a program that reads several numbers and uses the preceding 
* statement to round each of these numbers to the nearest integer. For 
* each number processed, print both the original number and the 
* rounded number. */

#include <stdio.h>
#include <math.h>

double z(double x);

int main(){
	
	double x;
	for(int i = 1; i <=5; i++){
		puts("Enter an integer: ");
		scanf("%lf", &x);
		printf("x: %lf  y: %.1lf\n", x, z(x));
	}
	return 0;
}

double z(double x){

	double y;
	
	y = floor(x + 0.5);
	
	
	return y;
}
