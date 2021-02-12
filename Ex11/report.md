[Home of Lab Report](../lab.html)

# Program Ex 01:Program to display student info. Using structure

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
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{   //Deepak
    struct student s;
    printf("Enter The Information of Students :\n\n");
     printf("Enter Name : ");
    scanf("%s",s.name);
     printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
    printf("Enter marks : ");
    scanf("%f",&s.marks);
    printf("\nDisplaying Information\n");
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release Ex11
[100%]: build ok!

```

## Execution
```
xmake run

Enter The Information of Students :

Enter Name : Enter Roll No. : Enter marks : 
Displaying Information
Name: nano
Roll: 22012
Marks: 0.00

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
