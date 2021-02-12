 #include <stdio.h>
 int main ()
 {
     int i,total,t1=0,t2=1,next;
     printf("ME A1,Roll no= 2030022,Program for Fibonacii series\n");  
     printf("enter the number of terms\n");
     scanf("%d", &total);
     printf("Fibonacii series");
     for (i=1; i<=total; i++)
     {printf("%d", t1);
     next=t1+t2;
     t1=t2;
     t2=next;
     }
     return 0;
 }
