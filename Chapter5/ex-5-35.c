/*5.35 (Fibonacci) The Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, …
begins with the terms 0 and 1 and has the property that each succeeding 
* term is the sum of the two preceding terms. 
* a) Write a nonrecursive function fibonacci(n) that calculates the 
* nth Fibonacci number. Use unsigned int for the function’s parameter 
* and unsigned long long int for its return type. 
* b) Determine the largest Fibonacci number that can be printed on your system. */


#include <stdio.h>


int fibonacci(int n);
int main(void){
	unsigned int n;


    printf("Digite quantos termos da sequencia de Fibonacci voce deseja: \n");
    scanf("%u", &n);
    printf("%uº term = %llu\n" ,n, fibonacci(n));

    
}

int fibonacci (int n){
	
	unsigned long long first, second, result;
	int count;
	first = 0;
	second = 1;
	count = 2;
	
    if(n == 1){
		return first;
	}
    if(n == 2){
        return second;
    }
    while(count < n){
        result = first + second;
        first = second;
        second = result;
        count++;
    }
    if(n>2){
		return result;
	}
    
}
