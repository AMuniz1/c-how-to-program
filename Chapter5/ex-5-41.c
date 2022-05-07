/*5.41 (Distance Between Points) Write a function distance that calculates
 * the distance between two points (x1, y1) and (x2, y2). All numbers 
 * and return values should be of type double. */
 
 #include <stdio.h>
 #include <math.h>
 
double distance(double x1, double y1, double x2, double y2);

int main(void){
	
	double x1, y1, x2, y2;
	puts("Program to calculate the distance between two points in the cartesian plane.");
	puts("Please, input the x-coordinate and y-coordinate of point 1: ");
	scanf("%lf %lf", &x1, &y1);
	puts("Please, input the x-coordinate and y-coordinate of point 2: ");
	scanf("%lf %lf", &x2, &y2);
	printf("The distance between (%lf, %lf) and (%lf, %lf) is %.3lf\n", x1, y1, x2, y2, distance(x1, y1,x2, y2));
	
	return 0;
}

double distance(double x1, double y1, double x2, double y2){

	double square1 = pow(x2 - x1, 2);
	double square2 = pow(y2 - y1, 2);
	double d = sqrt(square1 + square2);
	
	return d;


}
