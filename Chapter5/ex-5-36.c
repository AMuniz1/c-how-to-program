//tower of hanoi

#include <stdio.h>

void towerHanoi(int n, char startPeg, char endPeg, char tempPeg);

int main(void){

	int n;
	
	puts("Enter the number of disks: ");
	scanf("%d", &n);
	
	printf("\n The tower of Hanoi with %d disks involves the following moves: \n", n);
	
	
	towerHanoi(n, 'A', 'B', 'C');
	
	puts("");

	return 0;
}

void towerHanoi(int n, char startPeg, char endPeg, char tempPeg){

	if (n==1){
		printf("\ndisk 1: %c -> %c", startPeg, endPeg);
		return;
	}
	towerHanoi(n-1, startPeg, tempPeg, endPeg);
	printf("\ndisk %d: %c -> %c", n, startPeg, endPeg);
	towerHanoi(n-1, tempPeg, endPeg, startPeg);
	
}
