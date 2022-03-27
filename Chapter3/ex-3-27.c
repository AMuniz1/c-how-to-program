//3.27 (Validating User Input) Modify the program in Figure 3.10 to 
//validate its inputs. On any input, if the value entered is other 
//than 1 or 2, keep looping until the user enters a correct value.

#include <stdio.h>

int main(void){
	//this is the tutorial-3-10.c program
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
