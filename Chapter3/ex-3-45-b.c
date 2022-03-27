/*b) Write a program that estimates the value of the mathematical 
constant e by using the formula: */
//tshiono code from my question on StackOverflow
#include <stdio.h>
#include <stdlib.h>

int
main()
{  
        int i, n; 
        long double enx = 1.0; //Euler's number^(x)
        long double en = 1.0;   // Euler's number
        long double f = 1.0;    // factorial number

        puts("Enter the value of n to aproximate the Euler's Number: ");
        scanf("%d",&n);
        

        for (i = 1; i <= n; i++) {
                f *= i;
                en += 1/ f;
        }
        printf("en = %.9Lf\n", en);

        return 0;
}
