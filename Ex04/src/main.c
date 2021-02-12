#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;
    printf("ME A1,Roll no= 2030022, Program to use logical Operators\n"); 
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
     result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
      result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
      result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
      result = !(a != b);
    printf("!(a != b) is %d \n", result);
     result = !(a == b);
    printf("!(a == b) is %d \n", result);
     return 0;
}

