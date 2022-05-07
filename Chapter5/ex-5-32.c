/*5.32 (Guess the Number) Write a C program that plays the game of 
 * “guess the number” as follows: Your program chooses the number to be 
 * guessed by selecting an integer at random in the range 1 to 1000. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int choice = 1;
	while(choice==1){ 
		srand(time(NULL));
		puts("You should guess the secret number. It's from 1 to 1000.");
		int secretNumber = 1 + rand()%1000;
		int guess;
		int count = 0;
		while(guess != secretNumber){
			puts("What is your guess?");
			scanf("%d", &guess);
			if(guess > secretNumber){
				puts("Too high!");
				++count;
				
			}
			else if(guess < secretNumber){
				puts("Too low!");
				++count;
			}
			else{
				printf("Excellent! You guessed the number! %d!\n", guess);
				++count;
			}
		}
		printf("You guessed in %d times!\n", count);
		if(count < 10){
			puts("Either you know the secret or you got lucky!");
		}
		else if (count == 10){
			puts("Ahah! You know the secret!");
		}
		else{
			puts("You should be able to do better!");
		}
		puts("Do you want to continue? (1 if yes)");
		scanf("%d", &choice);
	}


	return 0;
}
