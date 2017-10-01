/**************************************************************************************************
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
    The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
***************************************************************************************************/


// VERSION: BRUTE FORCE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int a;
  int total = 0;
  
  // First, make a loop, a in range of [1;999]
  for(a = 1; a < 1000; a++){
    if(a % 3 == 0 || a % 5 == 0){ // Inside the loop, an if statement test whether a is multiple of 3 or 5
      total += a; // total = total + a;
    }
  }
  printf("%d\n", total); // The result
  
  return 0;
}
