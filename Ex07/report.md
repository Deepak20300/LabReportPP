[Home of Lab Report](../lab.html)

# Program Ex 07:Program to use If-else, If else ladder

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

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


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex07
[100%]: build ok!

```

## Execution
```
xmake run

ME A1,Roll no= 2030022,- Program to use If-else, If else ladder
Enter three numbers: 
Largest = 1346054944
```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
