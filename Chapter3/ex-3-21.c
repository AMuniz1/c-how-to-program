/*(Predecrementing vs. Postdecrementing) Write a program that demonstrates 
the difference between predecrementing and postdecrementing 
using the decrement operator --. */
#include <stdio.h>

int main(void){

	int integer;
	
	integer = 5; // assign 5
	printf("%d\n", integer); // print 5
	printf("%d\n", integer--); // print 5 and postdecrementing
	printf("%d\n", integer); // print 4
	
	integer = 20;
	printf("%d\n", integer); // print 20
	printf("%d\n", --integer); // print 19 and predecrementing
	printf("%d\n", integer); //print 19
	


}
