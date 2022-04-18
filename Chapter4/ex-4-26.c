/*(Calculating the Value of π) Calculate the value of π from the 
 * infinite series. Print a table that shows the value of π approximated
 *  by one term of this series, by two terms, by three terms, and so on.
 *  How many terms of this series do you have to use before you first 
 * get 3.14? 3.141? 3.1415? 3.14159? */

#include <stdio.h>
#include <math.h>

int main(void){

	double pi;
	int max_number;
	puts("Enter the max number of terms of this series");
	scanf("%d", &max_number);
	pi = 0.0;
	printf("%4s\t\t%21s\n", "Number of terms", "Aproximation of π");
	for(int i = 1; i <= max_number; i++){
		pi += (4*pow(-1, i+1))/(2*i -1);
		
		printf("%4d\t\t%18.6lf\n", i, pi);
	}


	return 0;
}
