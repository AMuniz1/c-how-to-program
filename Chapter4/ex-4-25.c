/*4.25 (Table of Decimal, Binary, Octal and Hexadecimal Equivalents) 
 * Write a program that prints a table of the binary, octal and 
 * hexadecimal equivalents of the decimal numbers in the range
 * 1 through 256. If you’re not familiar with these number systems, 
 * read Appendix C before you attempt this exercise. [Note: You can 
 * display an integer as an octal or hexadecimal value with the con-
 * version specifiers %o and %X, respectively.] */

#include <stdio.h>
#include <math.h>

long long convert_binary(int decimal);
int convert_octal(int decimal);
long int convert_hexadecimal(long long binary);


int main() {
	int decimal, binary, octal, hexadecimal;
	  
	for(decimal = 1; decimal <=256; decimal++){
		binary = convert_binary(decimal);
		octal = convert_octal(decimal);
		hexadecimal = convert_hexadecimal(binary);
		printf("%d in decimal =  %lld in binary = %d in octal = %lX in hexadecimal\n", decimal, binary, octal, hexadecimal); 
	}
	
	  
	return 0;
}

long long convert_binary(int decimal) {
	long long binary = 0;
	int remainder, i = 1;

	while (decimal!=0) {
		remainder = decimal % 2;
		decimal /= 2;
		binary += remainder * i;
		i *= 10;
	}

	return binary;
}

int convert_octal(int decimal){
	
	int octal = 0, i = 1;
	// converting to decimal to octal
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

long int convert_hexadecimal(long long binary){
	
	long int hexadecimal = 0, i = 1, remainder;
	
	while(binary != 0){
		remainder = binary%10;
		hexadecimal = hexadecimal + (remainder*i);
		i = i*2;
		binary /= 10;
	
	}
	return hexadecimal;

}


