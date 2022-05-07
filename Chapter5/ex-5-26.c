/*5.26 (Perfect Numbers) An integer number is said to be a perfect number
 * if its factors, including 1 (but not the number itself), sum to the 
 * number. For example, 6 is a perfect number because 6 = 1 + 2 + 3. 
 * Write a function isPerfect that determines whether parameter number 
 * is a perfect number. Use this function in a program that determines 
 * and prints all the perfect numbers between 1 and 1000. Print the 
 * factors of each perfect number to confirm that the number is indeed 
 * perfect. Challenge the power of your computer by testing numbers 
 * much larger than 1000. */

#include <stdio.h>

void isPerfect(int number);

int main(void){
	int integer;
	puts("Enter a upper-limit: ");
	scanf("%d", &integer);
	for(int j = 1; j <=integer; j++){
	
		isPerfect(j);
	}

	return 0;
}

void isPerfect(int number){

	int factorSum = 0;
	
	for(int i = 1; i < number; i++){
		if(number%i == 0){
			factorSum += i;
		}
	}
	
	if (factorSum == number){
		
		printf("%d is a perfect number.\n", number);
	
	}


}
