/*5.9(Parking Charges) A parking garage charges a $2.00 minimum fee to 
 * park for up to three hours and an additional $0.50 per hour for each 
 * hour or part thereof over three hours. The maximum charge for any 
 * given 24-hour period is $10.00. Assume that no car parks for longer 
 * than 24 hours at a time. Write a program that will calculate and 
 * print the parking charges for each of three customers who parked 
 * their cars in this garage yesterday. You should enter the hours 
 * parked for each customer. Your program should print the results in 
 * a tabular format, and should calculate and print the total of 
 * yesterday's receipts. The program should use the function 
 * calculateCharges to determine the charge for each customer. Your 
 * outputs should appear in the following format: */

#include <stdio.h>

double parkingCharges(double hours);

int main(void){
	
	printf("Car\t\tHours\t\tCharge\n");
	double total_hours = 0.0;
	double total_charges = 0.0;
	double hours;
	for(int costumer = 1; costumer <=3; costumer++){
		
		puts("Enter the hours parked: ");
		scanf("%lf", &hours);
		total_hours += hours;
		total_charges += parkingCharges(hours);
		printf("%d\t\t%.2lf\t\t%.2lf\n", costumer, hours, parkingCharges(hours));
	}
	printf("TOTAL\t\t%.2lf\t\t%.2lf\n", total_hours, total_charges);

	return 0;
}

double parkingCharges(double hours){

	
	double charge;
	
	
	if(hours <= 3.0){
		charge = 2.00;
	}
	if((hours > 3.0)&&(hours < 19.0)){
		charge = 2.00 + (hours-3)*0.50;	
	
	}
	else{
		charge = 10.00;
	}
	
	return charge;

}
