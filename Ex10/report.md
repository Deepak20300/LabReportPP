[Home of Lab Report](../lab.html)

# Program Ex 10: Program to use switch (Break & Continue)



## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

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


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex10
[100%]: build ok!

```

## Execution
```
xmake run

ME A1,Roll no= 2030022,Program to for loop, nested for loop
Enter a n1: Enter a n2: Enter a n3: Enter a n4: Enter a n5: Enter a n6: Enter a n7: Enter a n8: Enter a n9: Enter a n10: Sum = nan

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
