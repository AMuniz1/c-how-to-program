/*3.40 (Multiples of 2 with an Infinite Loop) Write a program that keeps
 *  printing the multiples of the integer 2, namely 2, 4, 8, 16, 32, 64,
 *  and so on. Your loop should not terminate (i.e., you should
create an infinite loop). What happens when you run this program? */

#include <stdio.h>
#include <stdbool.h>

int main(void){

	bool statement = true;
	int counter;
	counter = 2;
	
	while(statement){
		printf("%d\n", counter);
		counter *= 2;
	
	}
	
}
