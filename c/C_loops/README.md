```markdown
# Control Structures in C

## IF, ELSE IF, ELSE

### Using if, else if, else statements

You can use `if`, `else if`, and `else` statements to control the flow of your code based on different conditions. Here are some examples:

```c
#include <stdio.h>

int main(void) {
    int j = 100 + 50;
    int m = j + 20;

    if (j > m) {
        printf("love");
    } else if (j == m) {
        printf("hate");
    } else {
        printf("i am the best");
    }

    return 0;
}
```

### Using ternary operator

Another way to achieve conditional branching is by using the ternary operator. Here's an example:

```c
#include <stdio.h>

int main(void) {
    int j = 100 + 50;
    int m = j + 20;

    (j > m) ? printf("love") : printf("i am the best");

    return 0;
}
```

### Using switch statement

You can also use the `switch` statement for multi-way branching based on a specific value:

```c
#include <stdio.h>

int main(void) {
    int j = 100 + 50;
    int m = j + 20;

    switch (m) {
        case 10:
            printf("you");
            break;
        case 150:
            printf("me");
            break;
        case 170:
            printf("you and me");
            break;
        default:
            printf("i love you");
    }

    return 0;
}
```

## WHILE LOOPS

### Using while loops

You can use `while` loops to execute a block of code repeatedly as long as a certain condition is true:

```c
#include <stdio.h>

int main(void) {
    int j = 20;

    while (j < 50) {
        printf("%d\n", j);
        j++;
    }

    return 0;
}
```

### Using break in while loops

You can use the `break` statement to exit the loop prematurely based on a certain condition:

```c
#include <stdio.h>

int main(void) {
    int j = 5;
    int k = 10;

    while (j < 20) {
        if (j == 15) {
            break;
        }
        printf("Age: %d\n", j);
        j++;
    }

    while (k <= 20) {
        if (k == 16) {
            break;
        }
        printf("Count: %d\n", k);
        k++;
    }

    return 0;
}
```

### Using continue in while loops

You can use the `continue` statement to skip an iteration of the loop based on a specific condition:

```c
#include <stdio.h>

int main(void) {
    int j = 1;

    while (j <= 10) {
        if (j == 5) {
            j++;
            continue;
        }
        printf("%d\n", j);
        j++;
    }

    return 0;
}
```

## FOR LOOPS

### Using for loops

You can use `for` loops to iterate a specific number of times:

```c
#include <stdio.h>

int main(void) {
    for (int j = 20; j < 50; j++) {
        printf("%d\n", j);
    }

    return 0;
}
```

### Using for loops with increments

You can specify custom increments in `for` loops:

```c
#include <stdio.h>

int main(void) {
    for (int j = 20; j <= 50; j += 3) {
        printf("%d\n", j);
    }

    return 0;
}
```

### Using break in for loops

You can use the `break` statement to exit the loop prematurely based on a specific condition:

```c
#include <stdio.h>

int main(void) {
    for (int j = 20; j < 50; j++) {
        if (j == 35) {
            break;
        }
        printf("Age: %d\n", j);
    }

    return 0;
}
```

### Using continue in for loops

You can use the `continue` statement to skip an iteration of the loop based on a specific condition:

```c
#include <stdio.h>

int main(void) {
    for (int j = 1; j <= 10; j++) {
        if (j == 5) {
            continue;
        }
        printf("%d\n", j);
    }

    return 0;
}

## Description

This is a simple C program that demonstrates the usage of the `if` and `else` statements to print a message based on a condition.

## Code

```c
#include <stdio.h>

int main(void) {
    int j = 100 + 50;
    int m = j + 20;

    if (j > m) {
        printf("I am ugly");
    } else {
        printf("I am the most beautiful");
    }

    return 0;
}
```
