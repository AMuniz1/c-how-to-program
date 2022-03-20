//(Salary Calculator) Develop a program that will determine the gross pay for each of several
//employees. The company pays “straight time” for the first 40 hours worked by each employee and
//pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employ-
//ees of the company, the number of hours each employee worked last week and the hourly rate of
//each employee. Your program should input this information for each employee and should deter-
//mine and display the employee's gross pay.

#include <stdio.h>

int main(void){
	int hour;
	float rate, salary;
	
	hour = 0;
	while(hour != -1){
		puts("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hour);
		if (hour == -1){
			return 0;
		}
		else if (hour <= 40){
			puts("Enter hourly rate of the worker ($00.00): ");
			scanf("%f", &rate);
			salary = hour * rate;
			printf("Salary is %.2f\n", salary);
		}
		else if (hour > 40){
			puts("Enter hourly rate of the worker ($00.00): ");
			scanf("%f", &rate);
			salary = 40 * rate + (hour - 40) * rate;
			printf("Salary is %.2f\n", salary);
		
		}
	
	}

}
