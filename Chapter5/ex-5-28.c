/*5.28 (Reversing Digits) Write a function that takes an integer value 
 * and returns the number with its digits reversed. For example, given 
 * the number 7631, the function should return 1367.*/

#include <stdio.h>


int reverseDigit(int n);

int main(void){
	
	int number;
	printf("Enter an integer: ");
    scanf("%d", &number);
    printf("O reverso de %d é %d.\n", number, reverseDigit(number));


	return 0;
}
int reverseDigit(int n){
	
	int remainder;
	int reversed = 0;
	while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
	}
	
	return reversed;


}

