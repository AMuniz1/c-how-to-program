//3.25 (Tabular Output) Write a program that utilizes looping to produce 
//the following table of values:

#include <stdio.h>

int main(void){
	int n, two, four, six;
	n = 3;
	puts("A\t\tA+2\t\tA+4\t\tA+6");
	while(n <= 15){
		two = n + 2;
		four = n + 4;
		six = n + 6;
		printf("%d\t\t%d\t\t%d\t\t%d\n", n, two, four, six);
		
		n = n + 3;
	
	}


}
