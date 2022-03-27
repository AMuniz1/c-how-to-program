//3.26 (Find the Two Largest Numbers) Using an approach similar to 
//Exercise 3.23, find the two largest values of the 10 numbers. 
//[Note: You may input each number only once.]

#include <stdio.h>

int main(void){

	unsigned int number, largest, second, counter;
	
	number = largest = second = counter = 1;
	
	while(counter <= 10){
		printf("Enter the #%d number: \n", counter);
		scanf("%d", &number);
		if(counter == 1){
			if (number > largest){
				largest = number;
			}
			
		}
		if(counter == 2){
			if(number > largest){
				second = largest;
				largest = number;
			}
			else{
				second = number;
			}
		
		}
		if (counter > 2){
			if((number> largest)){
				second = largest;
				largest = number;
			}
			else if((number > second) && (number < largest)){
				second = number;
			
			}		
		}
	
	counter++;
	}
	printf("The largest number is %d and the second largest is %d\n", largest, second);


}
