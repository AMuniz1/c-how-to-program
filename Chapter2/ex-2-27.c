//(Checkerboard Pattern of Asterisks) Display the following checkerboard pattern with eight
//statements and then display the same pattern with as few printf statements as possible.

#include <stdio.h>

int main(void){
	//with 8 printfs
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	//with 2 printfs
	printf("\n\n\n\n\n");
	printf("* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n");
	printf("* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n");
}
