#include <stdio.h>
int main(void)
{
unsigned int x;
unsigned int y;
// prompt user for input
printf("%s", "Enter two unsigned integers in the range 1-20: ");
scanf("%u%u", &x, &y); // read values for x and y
for (unsigned int i = 1; i <= y; ++i) { // count from 1 to y
for (unsigned int j = 1; j <= x; ++j) { // count from 1 to x
printf("%s", "@");
}
puts(""); // begin new line
}
}
