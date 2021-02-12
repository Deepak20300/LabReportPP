[Home of Lab Report](../lab.html)

# Program Ex 06:Program to use Increment and Decrement  Operators

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

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



```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex06
[100%]: build ok!

```

## Execution
```
xmake run

ME A1,Roll no= 2030022,Program to use Increment and Decrement Operators
Initial value of x = 12
Initial value of y = 1

After incrementing by 1: x = 13
y = 13

After decrementing by 1: x = 12
y = 12


```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
