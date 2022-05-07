/*5.29 (Greatest Common Divisor) The greatest common divisor (GCD) of 
 * two integers is the largest integer that evenly divides each of the 
 * two numbers. Write a function gcd that returns the greatest common 
 * divisor of two integers. */

#include <stdio.h>

int GCD(int number1, int number2);
int LCM(int number1, int number2);

int main(void){
	int integer1, integer2;
	puts("Enter two integers: ");
	scanf("%d %d", &integer1, &integer2);
	printf("The greatest common divisor between %d and %d is %d\n", integer1, integer2, GCD(integer1, integer2));
	printf("The least common multiple between %d and %d is %d\n", integer1, integer2, LCM(integer1, integer2));
	int product = integer1 * integer2;
	int product2 = GCD(integer1, integer2)*LCM(integer1, integer2);
	if (product == product2){
		printf("The algorithm is valid \n");
	} 

	return 0;
}

int GCD(int number1, int number2){
	
	int count = 0;
	int divisor = 2;
	int GDC = 1;
	while(1){
		
		if((number1%divisor==0)&&(number2%divisor==0)){
			GDC = GDC * divisor;
			number1 /= divisor;
			number2 /= divisor;
		
		}
		else if((number1%divisor==0)&&(number2%divisor!=0)){
			number1 /= divisor;
		
		}
		else if ((number1%divisor!=0)&&(number2%divisor==0)){
			number2  /= divisor;
		
		}
		else if ((number1%divisor!=0)&&(number2%divisor!=0)){
			divisor++;
		}
		++count;
		
		if(count > 250){
			break;
		}
		
		
	
	}
	
	return GDC;



}
int LCM(int number1, int number2){
	
	int count = 0;
	int divisor = 2;
	int LCM = 1;
	while(1){
		
		if((number1%divisor==0)&&(number2%divisor==0)){
			LCM = LCM * divisor;
			number1 /= divisor;
			number2 /= divisor;
		
		}
		else if((number1%divisor==0)&&(number2%divisor!=0)){
			number1 /= divisor;
			LCM = LCM * divisor;
		
		}
		else if ((number1%divisor!=0)&&(number2%divisor==0)){
			number2  /= divisor;
			LCM = LCM * divisor;
		
		}
		else if ((number1%divisor!=0)&&(number2%divisor!=0)){
			divisor++;
		}
		if(count > 250){
			break;
		}
		++count;
	
	
	}
	
	return LCM;


}
