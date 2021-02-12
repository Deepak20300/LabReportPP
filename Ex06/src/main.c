#include<stdio.h>
int main()
{
    int x = 12, y = 1;
    printf("ME A1,Roll no= 2030022,Program to use Increment and Decrement Operators\n"); 
    printf("Initial value of x = %d\n", x);  
    printf("Initial value of y = %d\n\n", y); 

    y = ++x;  

    printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);
    y = --x;  
    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);
    return 0;
    }


