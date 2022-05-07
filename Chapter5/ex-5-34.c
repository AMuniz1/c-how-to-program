/*5.34 (Recursive Exponentiation) Write a recursive function 
 * power(base, exponent) that when invoked returns base^exponent. 
 * For example, power(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an 
 * integer greater than or equal to 1. Hint: The recursion step would 
 * use the relationship base^exponent = base * base^exponent–1 
 * and the terminating condition occurs when exponent is equal to 1 
 * because base1 = base */

#include <stdio.h>

int power(int base, int exponent);

int main(void){
	
	int base, exponent;
	printf("Enter the base and exponent\n : ");
	scanf("%d %u", &base, &exponent);
	printf("%d^%d = %d\n", base, exponent, power(base, exponent));

	return 0;
}

int power(int base, int exponent){
	
	
	if(exponent == 1){
		return base;
	}
	else{
		return base*power(base, exponent-1);
	}


}
