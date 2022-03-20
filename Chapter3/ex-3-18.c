//(Sales-Commission Calculator) One large chemical company pays its salespeople on a com-
//mission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For
//example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of
//$5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last
//week and will calculate and display that salesperson’s earnings. Process one salesperson's figures at a
//time.

#include <stdio.h>

int main(void){
	float sales, nine_percent, salary_week;
	sales = 0.0;
	while(sales != -1){
		puts("Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
		if (sales == -1){
			return 0;
		}
		else{
			nine_percent = (9*sales)/100;
			salary_week = 200 + nine_percent;
			printf("Salary is: %.2f\n", salary_week);
		
		}
	}


}
