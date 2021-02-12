// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

#include <stdio.h>
int main() {
   int i;
  printf("ME A1,Roll no= 2030022,Program to for loop, nested for loop\n"); 
               double number, sum = 0.0;
    for (i = 1; i <= 10; ++i) {
    printf("Enter a n%d: ", i);
    scanf("%lf", &number);
    // if the user enters a negative number, break the loop
    if (number < 0.0) {
     break;
      }
     sum += number; // sum = sum + number;
     }
    printf("Sum = %.2lf\n", sum);
    return 0;
    }

