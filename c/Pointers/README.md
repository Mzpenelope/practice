```c
# Pointers

## Print the memory address and value of a pointer

```c
#include <stdio.h>

int main(void)
{
    int j = 10;
    int* m = &j;
    printf("%p\n", m);
    printf("%d\n", *m);
    return 0;
}
```

## Using an unspecified pointer to print other values of elements in an array

```c
#include <stdio.h>

int main(void)
{
    int j[3] = {5, 10, 15};
    printf("%d\n", *(j + 1));
    printf("%d\n", *(j + 2));
    return 0;
}
```

## Using an unspecified pointer and for loop to print other values of elements in an array

```c
#include <stdio.h>

int main(void)
{
    int j[3] = {5, 10, 15};
    int *m = j;
    int v;
    for (v = 0; v < 3; v++)
    {
        printf("%d\n", *(m + v));
    }
    return 0;
}
```

## Using pointers to change or modify elements in an array

```c
#include <stdio.h>

int main(void)
{
    int j[3] = {5, 10, 15};
    *j = 2;
    *(j + 1) = 4;
    *(j + 2) = 6;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", *(j + i));
    }
    return 0;
}
```
