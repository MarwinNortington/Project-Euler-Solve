#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(int argc, char const *argv[])
 {
 	int i, nextTerm;
 	int term1 = 1, term2 = 2;
 	int sum = 0;

    for (i = 3; ; i++) // Make an infinite LOOP
    {
    	nextTerm = term2 + term1; // First, plus 1 with 2 = 3
    	term1 = term2; // Then,set term1 = 2
    	term2 = nextTerm; // After that, set term2 = 3(which is nextTerm)
    	// By doing this progress over & over again, we can make a Fibonacci sequence
    	if(nextTerm % 2){ // Check nextTerm whether it mod 2, if it does, terminate it 
    		continue;     // Using continue, we can terminate calculation,... that we dont want
    		i++;          // And do again the loop from the beginning
    	}
    	if(nextTerm > 4000000){ // The condition
    		break;              // Stop loop if condition are't met
    	}
    	sum += nextTerm; // Sum all the Fibonacci nums that met the condition
    }
    printf("The result: %d\n", sum); // The result

 	return 0;
 }
