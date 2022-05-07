/*5.22(Separating Digits) Write program segments that accomplish each of 
 * the following:
a) Calculate the integer part of the quotient when integer a is divided 
* by integer b.
b) Calculate the integer remainder when integer a is divided by integer b.
c) Use the program pieces developed in a) and b) to write a function that
* inputs an integer between 1 and 32767 and prints it as a series of 
* digits,with two spaces between each digit.
For example, the integer 4562 should be printed  */

#include <stdio.h>
#include <math.h>

int howManyDigits(int n);
void integerPart(int a);
int main(void){
	int n;
	puts("Enter an integer from 1 to 32767: ");
	scanf("%d", &n);
	integerPart(n);


	return 0;
}

int howManyDigits(int n){
	
	int count = 0;
	while(n!=0){
		n = n/10;
		++count;
	
	}
	
	return count;

}
void integerPart(int a){
	
	int b;
	int number;
	int n = howManyDigits(a);
	for(int i = n - 1; i >= 0; i--){
		b = pow(10, i);
		number = a/b;
		a = a % b;
		printf("%d  ", number);
			
	
	}
	puts("");


}
