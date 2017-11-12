#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

  //---------------------This is a PROGRAM to find the largest 3-digit palidrome number---------------------
  // Author: Marwin Nortington
  // Date created: Nov 12th, 2017_11:24 AM
  // Location: Somewhere in Vietnam
  //
  

  int isPali(unsigned long original); // This is a function


  int main(void){

    int a, b, max = 0;

    for(a = 100; a <= 999; a++){   // Run a from 100 to 999
      for(b = 100; b <= 999; b++){ // Run b from 100 to 999
        unsigned int n = a * b;    // n = a multiply b
        if(isPali(n) && n > max){  // Check whether n is a Palidrome num
          max = n;                 // Finding the max Palidrome
        }
      }
    }
    printf("Largest palidrome is: %d\n", max);
  
  return 0;
}

int isPali(unsigned long original){
  unsigned long reversed = 0, a = original;
  
  while(a > 0){                        //
    reversed = reversed * 10 + a % 10; // Find the REVERSE of a num
    a /= 10;                           //

  }
  
  return original == reversed; // Return the value: original..
}
