/*5.25 (Find the Minimum) Write a function that returns the smallest 
 * of three floating-point numbers. */

#include <stdio.h>

float smallest(float a, float b, float c);

int main(void){
	float a, b, c, d;
	puts("Enter three floating-point numbers: ");
	scanf("%f %f %f", &a, &b, &c);
	d = smallest(a, b, c);
	printf("The smallest between %f, %f and %f is %f\n", a, b, c, d);
	return 0;
}

float smallest(float a, float b, float c){
	
	float smallest;
	
	if((a < b)&&(a < c)){
		smallest = a;
	
	}
	else if((b < a)&&(b < c)){
		smallest = b;
	
	}
	else{
		smallest = c;
	
	}
	
	return smallest;
	



}
