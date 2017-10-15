#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
/*-----------------------------------------------------------------------------------------------------
--------------------------------------FIND REVERSAL OF A NUMBER----------------------------------------
------------------------------------------------------------------------------------------------------*/ 

 int main(void) {
   
   int number, reverse = 0, remain;
   printf("Enter your number\n");
   scanf("%d", &number);

   while (number != 0) {
     remain = number % 10;
     reverse = reverse * 10 + remain;
     number /= 10;
   }
   printf("Your reversed number: %d\n", reverse);
   
   return 0;
 }
