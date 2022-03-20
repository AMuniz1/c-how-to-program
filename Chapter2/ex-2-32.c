//BMI values
#include <stdio.h>

int main(void){

	double height_in_meters, weight_in_kilograms, BMI;
	printf("Enter the height in meters: \n");
	scanf("%lf", &height_in_meters);
	printf("Enter the weight in kilograms: \n");
	scanf("%lf", &weight_in_kilograms);
	
	BMI = (weight_in_kilograms)/(height_in_meters * height_in_meters);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and less than 25\n");
	printf("Overweight: 25 or less than 30\n");
	printf("Obese: 30 or greater\n");
	printf("Your BMI is: %.1lf\n", BMI);

}
