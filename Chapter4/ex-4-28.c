/*4.28 (Calculating Weekly Pay) A company pays its employees as managers
 *  (who receive a fixed weekly salary), hourly workers (who receive 
 * a fixed hourly wage for up to the first 40 hours they work and 
 * “time-and-a-half”—i.e., 1.5 times their hourly wage—for overtime 
 * hours worked), commission workers (who receive $250 plus 5.7% of 
 * their gross weekly sales), or pieceworkers (who receive a fixed 
 * amount of money for each of the items they produce—each pieceworker 
 * in this company works on only one type of item). Write a program 
 * to compute the weekly pay for each employee. You do not know the 
 * number of employees in advance. Each type of employee has its 
 * own pay code: Managers have paycode 1, hourly workers have code 2,
 * commission workers have code 3 and pieceworkers have code 4. 
 * Use a switch to compute each employee’s pay based on that employee’s 
 * paycode. Within the switch, prompt the user (i.e., the payroll clerk)
 * to enter the appropriate facts your program needs to calculate 
 * each employee’s pay based on that employee’s paycode. [Note: You 
 * can input values of type double using the conversion 
 * specifier %lf with scanf.] */

#include <stdio.h>


int main(){
	
	int type_worker, managerCount = 0, hworkerCount = 0, cworkerCount = 0, pworkerCount = 0;
	
	double total_salary = 0; 
	type_worker = 0;
	while(type_worker != -1){
		double salary_manager = 0, salary_hworker = 0, salary_cworker = 0, salary_pworker = 0;
		int hours;
		double wage_hour, sales, number_pieces, value_piece;
		printf("Enter the type of worker(-1 to end): \n");
		scanf("%d", &type_worker);
		switch(type_worker){
			case 1:
				++managerCount;
				printf("Enter the salary of manager %d\n", managerCount);
				scanf("%lf", &salary_manager);
				total_salary += salary_manager;
				break;
			case 2:
				++hworkerCount;
				printf("Enter the hours for %dº hourly worker\n", hworkerCount);
				scanf("%d", &hours);
				printf("Enter the wage(salary/hour) of this hourly worker\n");
				scanf("%lf", &wage_hour);
				break;
				if (hours <= 40){
					salary_hworker = hours*wage_hour;
				}
				else{
					salary_hworker = 40*wage_hour + 1.5*(hours-40)*wage_hour;
				}
				total_salary += salary_hworker;
				break;
			case 3:
				++cworkerCount;
				printf("Enter the sales for the %dº comission worker on the week\n", cworkerCount);
				scanf("%lf", &sales);
				salary_cworker = 250+0.057*sales;
				total_salary += salary_cworker;
				break;
			case 4:
				++pworkerCount;
				printf("Enter the number of pieces and the value of this piece\n", pworkerCount);
				scanf("%lf %lf", &number_pieces, &value_piece);
				salary_pworker = number_pieces*value_piece;
				total_salary += salary_pworker;
				break;
			default:
				printf("Calculating the total of dispense in salary of this company\n");
				break;
		}
		
	
	}
	printf("For this week, the company payed %.2lf in wages\n", total_salary);

	return 0;
}
