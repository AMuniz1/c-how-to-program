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
	//this code I adapt from n digits
	
	int remainder, digit, binary;
	
	printf( "Input a n-digit integer in 1's and 0's: \n" );
	scanf("%d", &binary );
	
	digit = 0;
	int counter = 1;
	int original = binary;
	//number is n digits
	while(binary != 0){
		remainder = binary%10;
		if (remainder == 1){
			digit = digit + remainder*counter;
			//printf("%d\n", digit);
		}
		binary = binary /10;
		counter *= 2;
	}
	printf("\n O número binário %d convertido em decimal é %d", original, digit);
	

}
