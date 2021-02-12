[Home of Lab Report](../lab.html)

# Program Ex 04:Program to use logical Operators

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

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


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex04
[100%]: build ok!

```

## Execution
```
xmake run

ME A1,Roll no= 2030022, Program to use logical Operators
(a == b) && (c > b) is 1 
(a == b) && (c < b) is 0 
(a == b) || (c < b) is 1 
(a != b) || (c < b) is 0 
!(a != b) is 1 
!(a == b) is 0 

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
