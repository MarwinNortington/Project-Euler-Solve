/**************************************************************************************************

    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
    The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.

***************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    int sumOne = 0, sumTwo = 0, sumThree = 0, total = 0;
    
    // First, we calculate the multibles of 3 below 1000
    for(a = 1; a <= 1000; a++){
        if(a % 3){
            continue;
            a++;
        }
        sumOne += a;
    }
    
    // Then, we calculate the multiples of 5 below 1000
    for(b = 1; b <= 1000; b++){
        if(b % 5){
            continue;
            b++;
        }
        sumTwo+= b;
    }
    
    // Becuse there are numbers that can divide both 5 and 3(eg: 15, 45...), we have to terminate those
    // To do that we have to calculate the multiples of both 5 & 3
    
    for(c = 1; c <= 1000; c++){
        if(c % 3 & c % 5){
            continue;
            c++;
        }
        sumThree += c;
    }
    
    // The rusult: take the sum of all multiples of 5 or 3 then subtract the multiples of both 5 & 3
    total = sumOne + sumTwo - sumThree;
    
    printf("The result: %d\n", total);

    return 0;
}



