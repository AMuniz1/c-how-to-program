//Drivers are concerned with the mileage obtained by their automobiles. One
//driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for
//each tankful. Develop a program that will input the miles driven and gallons used for each tankful.
//The program should calculate and display the miles per gallon obtained for each tankful. After pro-
//cessing all input information, the program should calculate and print the combined miles per gallon
//obtained for all tankfuls.
#include <stdio.h>

int main(void){

	float gallons, miles, total_gallons, total_miles, miles_per_gallons;
	gallons = 0.0;
	total_gallons = 0.0;
	total_miles = 0;
	
	while(gallons != -1){
		puts("Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);
		if (gallons == -1){
			break;
		}
		else{
			puts("Enter the miles driven: ");
			scanf("%f", &miles);
			total_gallons = total_gallons + gallons;
			total_miles = total_miles + miles;
			miles_per_gallons = miles/gallons;
			printf("The miles/gallon for this tank was %f", miles_per_gallons);
		
		}
	}
	miles_per_gallons = total_miles/total_gallons;
	printf("The overall average miles/gallon was %f\n", miles_per_gallons);
	
}
