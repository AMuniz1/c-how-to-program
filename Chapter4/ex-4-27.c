/*4.27 (Pythagorean Triples) A right triangle can have sides that are 
 * all integers. The set of three integer values for the sides of a 
 * right triangle is called a Pythagorean triple. These three sides must
 * satisfy the relationship that the sum of the squares of two of the 
 * sides is equal to the square of the hypotenuse. Find all Pythagorean
 * triples for side1, side2, and the hypotenuse all no larger than 500.
 * Use a triple-nested for loop that simply tries all possibilities. 
 * This is an example of “brute-force” computing. It’s not aesthetically
 * pleasing to many people. But there are many reasons why these 
 * techniques are important. First, with computing power increasing at 
 * such a phenomenal pace, solutions that would have taken years or 
 * even centuries of computer time to produce with the technology of 
 * just a few years ago can now be produced in hours, minutes or 
 * even seconds. Recent microprocessor chips can process a billion 
 * instructions per second! Second, as you’ll learn in more advanced 
 * computer science courses, there are large numbers of interesting 
 * problems for which there’s no known algorithmic approach other 
 * than sheer brute force. We investigate many kinds of problem-solving 
 * methodologies in this book. We’ll consider many brute-force 
 * approaches to various interesting problems. */

#include <stdio.h>
#include <math.h>

int main(){
	
	long int hypotenuse, adjacent_side, opposed_side;
	int counter = 0;
	for(hypotenuse = 1; hypotenuse <= 500; hypotenuse++){
		for(adjacent_side = 1; adjacent_side <= 500; adjacent_side++){
			for(opposed_side = 1; opposed_side <= 500; opposed_side++){
				int h = hypotenuse*hypotenuse;
				int s1 = adjacent_side*adjacent_side;
				int s2 = opposed_side*opposed_side;
				int s = s1 + s2;
				if (h == s){
					printf("%ld, %ld and %ld form a Right Triangle!\n", hypotenuse, adjacent_side, opposed_side);
					++counter;
				} 
			
			}
		
		}
	
	}
	printf("I found %d right triangles\n", counter);
	return 0;
}
