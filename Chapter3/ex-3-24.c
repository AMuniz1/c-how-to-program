/*#3.24 (Tabular Output) Write a program that uses looping to print the 
 * following table of values. Use the tab escape sequence, \t, in the 
 * printf statement to separate the columns with tabs. */

#include <stdio.h>

int main(void){
	int counter;
	counter = 1;
	puts("N\t\t10*N\t\t100*N\t\t1000*N");
	while(counter <= 10){
		printf("%d\t\t%d\t\t%d\t\t%d\n", counter, 10*counter, 100*counter, 1000*counter);
		++counter;
	
	
	}
	
}
