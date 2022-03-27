/*3.39 (Checkerboard Pattern of Asterisks) Write a program that 
 * displays the following checker-
board pattern:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

Your program must use only three output statements, one of 
* each of the following forms:
printf( "%s", "* " );
printf( "%s", " " );
puts( "" ); // outputs a newline */

#include <stdio.h>

int main(void){

	int size, line, number;
	
	number = 8;
	size = line = 1;
	
	while(size <= number){
		line = 1;
		while(line <= number){
			if(size%2 != 0){
				printf( "%s", "* " );
			}
			else{
				if (line == 1){
					printf( "%s", " " );
				}
				printf( "%s", "* " );
				
			}
			line++;
		}
		puts( "" );
		size++;
	
	}

}
