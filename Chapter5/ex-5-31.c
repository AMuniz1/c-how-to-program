/*5.31 (Coin Tossing) Write a program that simulates coin tossing. For 
 * each toss of the coin the program should print Heads or Tails. 
 * Let the program toss the coin 100 times, and count the number of times
 * each side of the coin appears. Print the results. The program should 
 * call a separate function flip that takes no arguments and returns 0 
 * for tails and 1 for heads. [Note: If the program realistically 
 * simulates the coin tossing, then each side of the coin should appear 
 * approximately half the time for a total of approximately 
 * 50 heads and 50 tails.] */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
	
	srand(time(NULL));
	int frequencyHeads = 0;
	int frequencyTails = 0;
	int side;
	
	for(int i = 1; i <=100; i++){
	
		side = rand()%2;
		if(side == 0){
			++frequencyTails;
			printf("%dº toss: Tails\n", i);
		}
		else{
			++frequencyHeads;
			printf("%dº toss: Heads\n", i);
		}

	}
	printf("Number of tails: %d\nNumber of heads: %d\n", frequencyTails, frequencyHeads);

	return 0;
}
