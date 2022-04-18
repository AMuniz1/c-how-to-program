/*4.14 (Factorials) The factorial function is used frequently in 
 * probability problems. The factorial of a positive integer n 
 * (written n! and pronounced “n factorial”) is equal to the product 
 * of the positive integers from 1 to n. Write a program that evaluates 
 * the factorials of the integers from 1 to 5. Print the results in 
 * tabular format. What difficulty might prevent you from calculating 
 * the factorial of 20? */

#include <stdio.h>

int main(){

	int f, factorial;
	printf("N\t\tN!\n");
	for(int n = 1; n <= 5; n++){
		factorial = 1;
		for(f = 1; f <= n; f++){
			factorial *= f;
		
		}
		printf("%d\t\t%d\n", n, factorial);
	} 
	/*in ex-3-45-a.c if you enter factorial of numbers above 19, 20
	 * for instance, factorial return negative values. The numbers
	 * extrapolate what the language C can calculate, if you have 
	 * long int, C can calculate until factorial of 32 or 33, dunno
	 * which.*/



	return 0;
}
