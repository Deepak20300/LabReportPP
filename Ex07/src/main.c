//Write a program to find largest number given by user
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("ME A1,Roll no= 2030022,- Program to use If-else, If else ladder\n"); 
 printf("Enter three numbers: \n");
 scanf("%d%d%d", &a, &b, &c);
 if(a>b && a>c)
{
             printf("Largest = %d", a);
 }
 else if(b>a && b>c)
{
printf("Largest = %d", b);
 }
else
{
             printf("Largest = %d", c);
            }
 return (0);
}

