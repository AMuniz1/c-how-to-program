/*4.15 (Modified Compound-Interest Program) Modify the compound-interest
 *  program of Section 4.6 to repeat its steps for interest 
 * rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop to vary 
 * the interest rate. */

#include <stdio.h>
#include <math.h>

int main(void){
	
	double principal = 1000.0;
	
	
	
	for(double rate = 5.0; rate <= 10.0; rate++){
		printf("%4s%21s\n", "Year", "Amount on deposit");
		for (unsigned int year = 1; year <= 10; year++){
			double amount = principal * pow(1 + rate/100, year);
			
			printf("%4u%21.2f\n", year, amount);
		}
	}
	

	return 0;
}
