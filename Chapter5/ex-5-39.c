//gcd recursive

#include <stdio.h>

unsigned int recursiveGcd(unsigned int x, unsigned int y);

int main(void){

	unsigned int number1, number2;
	puts("Enter two integers non-negative: ");
	scanf("%u %u", &number1, &number2);
	
	printf("The gcd from %u and %u is %u\n", number1, number2, recursiveGcd(number1, number2));


	return 0;
}

unsigned int recursiveGcd(unsigned int x, unsigned int y){

	if (y == 0){
		return x;
	
	}
	else{
		return recursiveGcd(y, x%y);
		
	}

}
