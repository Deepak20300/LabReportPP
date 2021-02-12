[Home of Lab Report](../lab.html)

# Program Ex 01: Change it

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
printf("ME A1,Roll no= 2030022, My first Poem\n");
printf("Baa, baa, black sheep \nHave you any wool? \nYes sir, yes sir, three bags full.\nOne for the master, \nAnd one for the dame, \nAnd one for the little boy \nWho lives down the lane.\n");

return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex01
[100%]: build ok!

```

## Execution
```
xmake run

ME A1,Roll no= 2030022, My first Poem
Baa, baa, black sheep 
Have you any wool? 
Yes sir, yes sir, three bags full.
One for the master, 
And one for the dame, 
And one for the little boy 
Who lives down the lane.

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
