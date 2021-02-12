
//a program which uses a nested for loop to find the prime numbers from 2 to 100  

#include <stdio.h>
 int main () {
 int i, j;
  printf("ME A1,Roll no= 2030022,Program to for loop, nested for loop\n"); 
  for(i = 2; i<100; i++) 
  {
  for(j = 2; j <= (i/j); j++) 
  if(!(i%j)) break; // if factor found, not prime
   if(j > (i/j)) printf("%d is prime\n", i);
   }
  return 0;
  }

