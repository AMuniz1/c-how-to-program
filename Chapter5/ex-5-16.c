/*5.16(Exponentiation) Write a function integerPower(base, exponent) 
 * that returns the value of base^exponent. For example, 
 * integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a 
 * positive, nonzero integer, and base is an integer. Function 
 * integerPower should use for to control the calculation. Do not use 
 * any math library functions.*/

#include <stdio.h>


int integerPower(int base, int exponent);

int main(void){
	int b, exp;
	puts("Enter the base: ");
	scanf("%d", &b);
	puts("Enter the exponent: ");
	scanf("%d", &exp);
	printf("%d\n", integerPower(b, exp));

	return 0;
}
int integerPower(int base, int exponent){
	
	int f= 1;
	if((base > 0)||(base < 0)){
		for(int i = 1; i <=exponent; i++){
			f = f * base;
		
		}
		return f;
	}
	else{
		printf("Base igual a zero\n");
	}
}
