/*4.33 (Roman-Numeral Equivalent of Decimal Values) Write a program 
 * that prints a table of all the Roman-numeral equivalents of the 
 * decimal numbers in the range 1 to 100. */

#include <stdio.h>


int main(){

	int roman, divide, module;
	
	printf("Roman\nNumeral Equivalent\t\tDecimal\n");
	
	for(roman = 1;roman <=100; roman++){
		//X XX XXX ... C
		divide = roman /10;
		//I II III ... IX
		module = roman%10;
		
		switch(divide){
			case 0:
				break;
			case 1:
				printf(" X");
				break;
			case 2:
				printf(" XX");
				break;
			case 3:
				printf(" XXX");
				break;
			case 4:
				printf(" XL");
				break;
			case 5:
				printf(" L");
				break;
			case 6:
				printf(" LX");
				break;
			case 7:
				printf(" LXX");
				break;
			case 8:
				printf(" LXXX");
				break;
			case 9:
				printf(" XC");
				break;
			case 10:
				printf(" C");
				break;
			default:
				break;
		}
		switch(module){
			case 0:
				printf("\t\t%16d\n ", roman);
				break;
			case 1:
				printf("I\t\t%16d\n ", roman);
				break;
			case 2:
				printf("II\t\t%16d\n ", roman);
				break;
			case 3:
				printf("III\t\t%16d\n ", roman);
				break;
			case 4:
				printf("IV\t\t%16d\n ", roman);
				break;
			case 5:
				printf("V\t\t%16d\n ", roman);
				break;
			case 6:
				printf("VI\t\t%16d\n ", roman);
				break;
			case 7:
				printf("VII\t\t%16d\n ", roman);
				break;
			case 8:
				printf("VIII\t\t%16d\n ", roman);
				break;
			case 9:
				printf("IX\t\t%16d\n ", roman);
				break;
			default:
				break;
		}
		
		

		
	}

	return 0;
}
