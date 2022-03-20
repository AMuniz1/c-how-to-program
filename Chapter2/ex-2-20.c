//(Diameter, Circumference and Area of a Circle) Write a program that reads 
//in the radius of a circle and prints the circle’s diameter, circumference and 
//area. Use the constant value 3.14159
//for π. Perform each of these calculations inside the printf 
//statement(s) and use the conversion specifier %f.

#include <stdio.h>

int main(void){
	float pi = 3.14159;
	float Radius, Diameter, Circumference, Area;
	printf("Enter the radius of a circle: \n");
	scanf("%f", &Radius);
	Diameter = 2*Radius;
	Circumference = 2*pi*Radius;
	Area = pi*(Radius)*(Radius);
	printf("Diameter: %.2f\n", Diameter);
	printf("Circumference: %.2f\n", Circumference);
	printf("Area: %.2f\n", Area);
}
