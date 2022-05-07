/*5.8
Show the value of x after each of the following statements is performed:
a) x = fabs(7.5);
b) x = floor(7.5);
c) x = fabs(0.0);
d) x = ceil(0.0);
e) x = fabs(-6.4);
f) x = ceil(-6.4);
g) x = ceil(-fabs(-8 + floor(-5.5))); */

#include <stdio.h>
#include <math.h>

int main(void){

	double a = fabs(7.5); // fabs returns a double
	printf("a: %lf\n", a);
	double b = floor(7.5); 
	printf("b: %lf\n", b);
	double c = fabs(0.0);
	printf("c: %lf\n", c);
	double d = ceil(0.0);
	printf("d: %lf\n", d);
	double e = fabs(-6.4);
	printf("e: %lf\n", e);
	double f = ceil(-6.4);
	printf("f: %lf\n", f);
	double h = floor(-5.5);
	double i = fabs(-8 + h);
	double g = ceil(-i);
	printf("h: %lf\n", h);
	printf("i: %lf\n", i);
	printf("g: %lf\n", g);
	
	




	return 0;
}
