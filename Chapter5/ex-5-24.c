/*5.24 (Temperature Conversions) Implement the following integer functions:
a) Function toCelsius returns the Celsius equivalent of a Fahrenheit 
* temperature.
b) Function toFahrenheit returns the Fahrenheit equivalent of a Celsius 
* temperature.
c) Use these functions to write a program that prints charts showing the
* Fahrenheit equivalents of all Celsius temperatures from 0 to 100 
* degrees, and the Celsius equivalents of all Fahrenheit temperatures 
* from 32 to 212 degrees. Print the outputs in a tabular format that 
* minimizes the number of lines of output while remaining readable.*/

#include <stdio.h>

double toCelsius(double Fahrenheit);
double toFahrenheit(double Celsius);

int main(void){

	for(int i = 0; i <= 100; i++){
		
		printf("%d°C is equal to %.3lf °F\n", i, toFahrenheit(i) );
	
	
	}
	puts("");
	for(int i = 32; i<= 212; i++){
		printf("%d°F is equal to %.3lf °C\n", i, toCelsius(i) );
	
	}
	puts("");



	return 0;
}

double toCelsius(double Fahrenheit){

	double Celsius = (double) (Fahrenheit - 32)*(0.555555555555);
	
	return Celsius;

}

double toFahrenheit(double Celsius){

	double F = (Celsius*(1.8) + 32);
	
	return F;

}
