[Home of Lab Report](../lab.html)

# Program Ex 08: Program to for loop, nested for loop



## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```


//a program which uses a nested for loop to find the prime numbers from 2 to 100  

#include <stdio.h>
 int main () {
 int i, j;
  printf("ME A1,Roll no= 2030022,Program to for loop, nested for loop\n"); 
  for(i = 2; i<100; i++) 
  {
  for(j = 2; j <= (i/j); j++) 
  if(!(i%j)) break; // if factor found, not prime
   if(j > (i/j)) printf("%d is prime\n", i);
   }
  return 0;
  }


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex08
[100%]: build ok!

```

## Execution
```
xmake run

ME A1,Roll no= 2030022,Program to for loop, nested for loop
2 is prime
3 is prime
5 is prime
7 is prime
11 is prime
13 is prime
17 is prime
19 is prime
23 is prime
29 is prime
31 is prime
37 is prime
41 is prime
43 is prime
47 is prime
53 is prime
59 is prime
61 is prime
67 is prime
71 is prime
73 is prime
79 is prime
83 is prime
89 is prime
97 is prime

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
