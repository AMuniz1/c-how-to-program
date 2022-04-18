/*4.23 (Calculating the Compound Interest with Integers) Modify the 
 * program of Fig. 4.6 so that it uses only integers to calculate the 
 * compound interest. [Hint: Treat all monetary amounts as integral 
 * numbers of pennies. Then “break” the result into its dollar 
 * portion and cents portion by using the division and remainder 
 * operations, respectively. Insert a period.] */
 
#include <stdio.h>
 
double myPow( int base, int exp );
 

int main(void){

	
	int amount;
	int principal = 1000; // starting principal
	int rate = 5; // annual interest rate
	int dollars;
	int cents;
	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit");
	for(unsigned int year = 1; year <= 10; year++){
		
		amount = myPow(10, 3-2*year)* principal * myPow(100+rate, year);
		
		if( 5 <= (amount % 10) ){
              amount += 10;
		}
		amount /= 10;
		dollars = amount / 100;
		cents = amount % 100;
		
		if (cents < 10){
			printf( "%4d%18d.0%d\n", year, dollars, cents);
		}
		else{
			printf( "%4d%18d.%d\n", year, dollars, cents);
		}
	
	}

	return 0;
}
double myPow( int base, int exp )
{
   double result = 1.0;
    
   while( 0 < exp )
   {
      result *= (double)base;
      exp--;
   }
    
   while( 0 > exp )
   {
      result /= (double)base;
      exp++;
   }
 
   return result;
}
