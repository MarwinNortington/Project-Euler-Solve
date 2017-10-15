#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define NUMBER 600851475143

// This is a Function to check prime nums
int isPrime(int ztest)
{
    int ki = 0;
    int ss = ( (int) sqrt(ztest) ); // Square root of ztest

    for(ki = 3; ki <= ss; ki += 2) // ki must smaller than Square root of ztest
    {
        if(ztest % ki == 0) 
        {
            return 0;
        }
    }

    return 1;
}

// Main here:

int main()
{
    int jj=0;
    int ki=0;

    while(1) // Make an infinite loop
    {
        for(ki = 3; ; ki += 2)
        {
            if(isPrime(ki)) // While looping, check "ki" within func isPrime
            {
                if(NUMBER % ki == 0)
                    jj = ki;
                if(ki >= (sqrt(NUMBER)) ) // every number n can at most have one prime factor greater than n 
                    goto END;             // if we found that n (ki), get out the loop 
            }
        }
    }

    END:
    printf("%d", jj); // The result
    return 0;
}
