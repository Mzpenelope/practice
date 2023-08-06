# Functions in C

### How to Create and Call a Function

```c
#include <stdio.h>

void Phill(void)
{
    printf("I am determined\n");
}

int main()
{
    Phill();
    Phill();
    Phill();
    Phill();
    Phill();
    return 0;
}
```

### How to Define and Call a Function with a String Parameter

```c
#include <stdio.h>

void Phill(char nickname[])
{
    printf("I am %s\n", nickname);
}

int main()
{
    Phill("Sugar");
    Phill("Baby");
    Phill("Darling");
    Phill("Honey");
    Phill("Sweetheart");
    return 0;
}
```

### How to Define and Call a Function with String and Integer Parameters

```c
#include <stdio.h>

void Phill(char qualities[], int amount)
{
    printf("Need %s in %d percent\n", qualities, amount);
}

int main()
{
    Phill("Love", 100);
    Phill("Money", 200);
    Phill("Sex", 100);
    Phill("Loyalty", 100);
    Phill("Honesty", 100);
    return 0;
}
```

### How to Define and Call a Function That Takes an Array as an Argument

```c
#include <stdio.h>

void Phill(int a[3])
{
    for (int h = 0; h < 3; h++)
    {
        printf("I need %d rounds of sex every day\n", a[h]);
    }
}

int main()
{
    int a[3] = {3, 5, 7};
    Phill(a);
    return 0;
}
```

### How to Define a Function That Adds a Number to an Integer Argument

```c
#include <stdio.h>

int Phill(int a)
{
    return (20 + a);
}

int main()
{
    printf("%d\n", Phill(9));
    return 0;
}
```

### How to Calculate the Sum of Two Numbers Using a Function

```c
#include <stdio.h>

int Phill(int a, int b)
{
    return (a + b);
}

int main()
{
    int m = Phill(10, 20);
    printf("%d\n", m);
    return 0;
}
```

### How to Define a Recursive Function to Calculate the Sum

```c
#include <stdio.h>

int sum(int a);

int main()
{
    int m = sum(5);
    printf("%d\n", m);
    return 0;
}

int sum(int a)
{
    if (a > 0)
    {
        return (a + sum(a - 1));
    }
    else
    {
        return 0;
    }
}
```

### How to Calculate the Square Root of a Number

```c
#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f\n", sqrt(25));
    return 0;
}
```

### How to Round a Decimal Number Up or Down and Calculate a Number Raised to the Power

```c
#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f\n", ceil(2.5));
    printf("%f\n", floor(2.5));
    printf("%f\n", pow(2, 5));
    return 0;
}
```
