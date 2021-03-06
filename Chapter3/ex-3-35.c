/*3.35 (Printing the Decimal Equivalent of a Binary Number) 
 * Input an integer (5 digits or fewer)
containing only 0s and 1s (i.e., a “binary” integer) and print its 
* decimal equivalent. [Hint: Use the remainder and division operators 
* to pick off the “binary” number’s digits one at a time from right to 
* left. Just as in the decimal number system, in which the rightmost 
* digit has a positional value of 1, and the next digit left has a 
* positional value of 10, then 100, then 1000, and so on, in the binary 
* number system the rightmost digit has a positional value of 1, 
* the next digit left has a positional value of 2, then 4, then 8, and 
* so on. Thus the decimal number 234 can be interpreted as 
* 4 * 1 + 3 * 10 + 2 * 100. The decimal equivalent of binary 
* 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]*/

#include <stdio.h>

int main(void){
	//this code I find in @smbriones GitHub
	
	int a, b, c, d, e, number, decimal;
	
	printf( "Input a five-digit integer in 1's and 0's: \n" );
	scanf("%d", &number );
	//number is edcba
	a = number % 10; //this capture the value of the first digit 10^0
	b = (number/10) % 10; //this capture the second digit 
	c = (number/100)%10; // this capture the third digit
	d = (number/1000)%10; // this capture the fourth digit
	e = number/10000; // this capture the fifth digit
	
	if ( e == 1 ) {
		e = 16; //2^4
		printf( "%d ", e );
    } 
    else {
      printf("%d ", e );
	}

	if ( d == 1 ) {
		d = 8; // 2^3
		printf( "%d ", d );
    } 
    else {
      printf("%d ", d );
	}

	if ( c == 1 ) {
		c = 4; // 2^2
		printf( "%d ", c );
	} 
	else {
      printf("%d ", c );
	}

	if ( b == 1 ) {
		b = 2; //2^1
		printf( "%d ", b );
    } 
    else {
      printf("%d ", b );
	}

	if ( a == 1 ) {
		a = a * 1; //2^0
		printf( "%d ", a );
    } 
    else {
      printf("%d ", a );
	}

	decimal = a + b + c + d + e;
	printf("\nThe decimal equivalent of that binary number is: %d\n", decimal );


}
