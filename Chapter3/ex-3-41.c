/*3.41 (Diameter, Circumference and Area of a Cirle) Write a program 
 * that reads the radius of a circle (as a float value) and computes 
 * and prints the diameter, the circumference and the area. Use
the value 3.14159 for π. */

#include <stdio.h>


int main(void){

	float radius, diameter, circumference, area;
	
	float pi = 3.14159;

	puts("Please, enter the radius of the circle: ");
	scanf("%f", &radius);
	
	diameter = 2 * radius;
	printf("The diameter for this circle is %f\n", diameter);
	circumference = 2 * pi * radius;
	printf("The circumference for this circle is %f\n", circumference);
	area = pi * radius * radius;
	printf("The area for this circle is %f\n", area);
	
	


}
	
