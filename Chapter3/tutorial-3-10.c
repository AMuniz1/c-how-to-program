//C tutorial section 10 of chapter 3 after reading the rules
#include <stdio.h>

int main(void){

	int counter, result; //counter = 1 - 10  / result = 1 or 2
	int student_passed, student_failed;
	counter = 1;
	student_passed = 0;
	student_failed = 0;
	while (counter <= 10){
		printf("Enter the result(1 or 2) that student %d got: \n", counter);
		scanf("%d", &result);
		while ((result != 1) && (result != 2)){
			printf("Please, enter 1 or 2!\n");
			scanf("%d", &result);
		}
		if (result == 1){
			student_passed = student_passed + 1;
		}
		else{
			student_failed = student_failed + 1;
		}
	counter = counter + 1;
	}
	printf("%d studentes passed the test and %d students failed the exams\n", student_passed, student_failed);
	if (student_passed >= 8){
		puts("Bonus to instructor!");
	
	}
	
	

}
