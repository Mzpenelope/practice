```c
# ARRAYS

Arrays are used to assign a variable to multiple values using `[ ]`. Elements of arrays start with index 0.

## Example 1:

```c
#include <stdio.h>

int main(void) {
    int j[] = {2, 4, 6, 8, 10};
    printf("%d", j[0]);
    return 0;
}
```

Output:
```
2
```

## Example 2:

```c
#include <stdio.h>

int main(void) {
    int j[] = {2, 4, 6, 8, 10};
    j[1] = 8;
    printf("%d", j[1]);
    return 0;
}
```

Output:
```
8
```

## Example 3:

```c
#include <stdio.h>

int main(void) {
    int f[] = {2, 4, 6, 8, 10};
    int j;
    for (j = 0; j < 5; j++) {
        printf("%d\n", f[j]);
    }
    return 0;
}
```

Output:
```
2
4
6
8
10
```

## Printing a Sentence with Quotes

To print a sentence with quotes, you can use the escape character `\` before the quotes that should be printed.

```c
#include <stdio.h>

int main(void) {
    char m[] = "when I am \"45\" I would have accomplished a lot";
    printf("%s\n", m);
    return 0;
}
```

Output:
```
when I am "45" I would have accomplished a lot
```
