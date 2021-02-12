#include <stdio.h>
int main()
{
int i, number;
int fact=1;
printf("Deepak Kumar Deep\n MEA1\n Roll no-2030022\n");
printf("Enter the value of integer: \n");
scanf("%d", &number);
for(i=1;i<=number; i++)
{
fact=fact*i;
}
printf("Factorial of %d is:%d", number , fact);
return 0;
}

