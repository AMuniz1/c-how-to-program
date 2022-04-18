/*4.19 (Calculating Sales) An online retailer sells five different 
 * products whose retail prices are shown in the following table:
Product number       Retail price
1                     $ 2.98
2                     $ 4.50
3                     $ 9.98
4  					  $ 4.49
5 					  $ 6.87




Write a program that reads a series of pairs of numbers as follows:
a) Product number
b) Quantity sold for one day
Your program should use a switch statement to help determine the retail 
* price for each product.
Your program should calculate and display the total retail value of 
* all products sold last week. */

#include <stdio.h>

int main(){
	
	int product, quantity;
	double sale_total = 0;
	
	for(unsigned int day = 1; day <= 7; day++){
		product = 0;
		printf("Day %u\n", day);
		while(product != -1){
			puts("Enter the product and the quantity sold (-1 to skip the day)");
			scanf("%d %d", &product, &quantity);
			
			switch(product){
				case 1:
					sale_total +=  2.98 * quantity;
					break;
					
				case 2:
					sale_total += 4.50 * quantity;
					break;
				case 3:
					sale_total += 9.98 * quantity;
					break;
				case 4:
					sale_total += 4.49 * quantity;
					break;
				case 5:
					sale_total += 6.87 * quantity;
					break;
				default:
					printf("%d is not a valid product\n", product);
			
			}
			
			
		}
		
	
	}
	printf("The total retail value is %lf\n", sale_total);


	return 0;
}
