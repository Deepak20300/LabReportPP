[Home of Lab Report](../lab.html)

# Program Ex 03:Program to use different types of data types  (Floats and Integers)


## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

//Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.

#include <stdio.h>
int main()
{
int radius;
float area, perimeter;
radius = 6;
perimeter = 2*3.14*radius;
printf("Perimeter of the Circle = %f inches\n", perimeter);
area = 3.14*radius*radius;
printf("Area of the Circle = %f square inches\n", area);
return(0);
}



```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex03
[100%]: build ok!

```

## Execution
```
xmake run

Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
