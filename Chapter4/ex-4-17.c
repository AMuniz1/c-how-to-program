/*4.17 (Calculating Credit Limits) Collecting money becomes increasingly
 *  difficult during periods of recession, so companies may tighten 
 * their credit limits to prevent their accounts receivable (money 
 * owed to them) from becoming too large. In response to a prolonged 
 * recession, one company has cut its customers’ credit limits in half. 
 * Thus, if a particular customer had a credit limit of $2000, it’s 
 * now $1000. If a customer had a credit limit of $5000, it’s now $2500.
 *  Write a program that analyzes the credit status of 
 * three customers of this company. For each customer you’re given:
a) The customer’s account number.
b) The customer’s credit limit before the recession.
c) The customer’s current balance (i.e., the amount the customer 
* owes the company). Your program should calculate and print 
* the new credit limit for each customer and should determine 
* (and print) which customers have current balances that exceed 
* their new credit limits. */

#include <stdio.h>

int main(){

	int account, costumer; 
	double credit_before, credit_now, current_balance, exceed;
	
	for(costumer = 1; costumer <= 3; costumer++){
		puts("Enter the consumer's account number: ");
		scanf("%d", &account);
		puts("What is the customer's credit limit before the recession? ");
		scanf("%lf", &credit_before);
		puts("What is the amount the customer owes the company now?");
		scanf("%lf", &current_balance);
		credit_now = credit_before/2;
		printf("The costumer %d of account number %d has %.2lf of limit now\n", costumer, account, credit_now);
		if(current_balance > credit_now){
			exceed = current_balance - credit_now;
			printf("This costumer also have a current balance that exceed their new credit limit in %.2lf\n", exceed);
		}
	
	}
	
	
	return 0;

}
