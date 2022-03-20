//(Credit-Limit Calculator) Develop a C program that will determine whether a department
//store customer has exceeded the credit limit on a charge account. For each customer, the following
//facts are available:
//a) Account number
//b) Balance at the beginning of the month
//c) Total of all items charged by this customer this month
//d) Total of all credits applied to this customer's account this month
//e) Allowed credit limit
//The program should input each fact, calculate the new balance (= beginning balance +
//charges – credits), and determine whether the new balance exceeds the customer's credit limit. For
//those customers whose credit limit is exceeded, the program should display the customer's account
//number, credit limit, new balance and the message “Credit limit exceeded.”
#include <stdio.h>

int main(void){

	int account;
	float ballance_month, total_charges, total_credits, credit_limits, total_balance;
	account = 0;
	while(account != -1){
		
		puts("Enter account number (-1 to end): ");
		scanf("%d", &account);
		if (account == -1){
			return 0;
		}
		else{
			puts("Enter beggining ballance: ");
			scanf("%f", &ballance_month);
			puts("Enter total charges: ");
			scanf("%f", &total_charges);
			puts("Enter total credits: ");
			scanf("%f", &total_credits);
			puts("Enter credit limit: ");
			scanf("%f", &credit_limits);
			
			total_balance = ballance_month + total_charges - total_credits;
			
			if(total_balance > credit_limits){
				 printf("Account: %d\n", account);
				 printf("Credit Limit: %.2f\n", credit_limits);
				 printf("Balance: %.2f\n", total_balance);
				 puts("Credit Limit Exceeded");
					
			}
			
		
		}
	
	}

}
