/*3.34 (Palindrome Tester) A palindrome is a number or a text phrase 
 * that reads the same backward as forward. For example, each of the 
 * following five-digit integers is a palindrome: 12321, 55555, 45554 
 * and 11611. Write a program that reads in a five-digit integer and 
 * determines whetheror not it’s a palindrome. [Hint: Use the division 
 * and remainder operators to separate the number into its 
 * individual digits.] */

//

#include <stdio.h>

int main(void){
	
	int number, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &number);
    original = number;

    // reversed integer is stored in reversed variable
    while (number != 0) {
        remainder = number % 10;
        //printf("remainder : %d\n", remainder);
        reversed = reversed * 10 + remainder;
        //printf("reversed: %d\n", reversed);
        number /= 10;
        //printf("new number: %d\n", number);
        
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed){
        printf("%d is a palindrome.\n", original);
    }
    else{
        printf("%d is not a palindrome.\n", original);
	}

}
