/*(Interest Calculator) The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and therefore includes the
division by 365 (days). Develop a program that will input principal, rate and days for several
loans, and will calculate and display the simple interest for each loan, using the preceding formula. */
#include <stdio.h>

int main(void){

	float interest, principal, rate;
	int days;
	principal = 0;
	while(principal != -1){
		puts("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		if (principal == -1){
			return 0;
		}
		else{
			puts("Enter interest rate (0  <= rate <= 1): ");
			scanf("%f", &rate);
			puts("Enter the term of the loan in days: ");
			scanf("%d", &days);
			interest = principal * rate * days;
			printf("The interest charge is %.2f\n", interest);
		}
	
	}
	

}
