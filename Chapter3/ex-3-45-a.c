/*3.45 (Factorial) The factorial of a nonnegative integer n is written 
 * n! (pronounced “n factorial”) and is defined as follows:
n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than 
* or equal to 1) and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
a) Write a program that reads a nonnegative integer and computes 
* and prints its factorial. */

#include <stdio.h>

int main(void)

{
    int aproximation = 0; int f; int fatorial = 1;
	
	while (aproximation <= 0){
		printf("Input a non negative integer.\n");
		scanf("%d", &aproximation);
	}
 
    for ( f = 1; f <= aproximation; f++ ){
		fatorial *= f;
    }
    printf("%d! = %d \n", aproximation, fatorial);
    
    
    return 0;


}
