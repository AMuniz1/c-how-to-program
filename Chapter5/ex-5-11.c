/*5.11 (Rounding Numbers) Function floor may be used to round a number 
 * to a specific decimal place. The statement
y = floor(x * 10 + .5) / 10;
rounds x to the tenths position (the first position to the right of the
*  decimal point). The statement
y = floor(x * 100 + .5) / 100;
rounds x to the hundredths position (the second position to the right 
* of the decimal point). Write a program that defines four functions 
* to round a number x in various ways
a) roundToInteger(number)
b) roundToTenths(number)
c) roundToHundreths(number)
d) roundToThousandths(number)
For each value read, your program should print the original value, 
* the number rounded to the nearest integer, the number rounded to the 
* nearest tenth, the number rounded to the nearest hundredth, and the 
* number rounded to the nearest thousandth.*/

#include <stdio.h>
#include <math.h>

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main(void){
	double number;
	for(int i =1; i <=3; i++){
		puts("Enter a number: ");
		scanf("%lf", &number);
		printf("Number: %lf\n", number);
		printf("roundToInteger: %lf\n", roundToInteger(number));
		printf("roundToTenths: %lf\n", roundToTenths(number));
		printf("roundToHundreths: %lf\n", roundToHundreths(number));
		printf("roundToThousandths: %lf\n", roundToThousandths(number));
		
	} 




	return 0;
}

double roundToInteger(double number){

	double a = floor(number + .5);
	
	return a;
	
}

double roundToTenths(double number){

	double b = floor(number * 10 + .5)/10;
	
	return b;


}

double roundToHundreths(double number){

	double c = floor(number*100 + .5)/100;
	
	return c;

}

double roundToThousandths(double number){
	
	double d = floor(number*1000 + .5)/1000;

	return d;

}
