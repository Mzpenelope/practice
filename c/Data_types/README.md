```c ## Integer Division

In C, you can use the `%d` or `%i` format specifiers to print integers. Integer data types usually take 2 or 4 bytes.

```c
#include <stdio.h>

int main() {
    int result = 6 / 3;
    printf("%d", result);
    return 0;
}
```

## Floating-Point Division

To print the result of floating-point division, you can use either `float` or `double` data types. The `%f` format specifier is used for `float`, and `%lf` is used for `double`. You can also specify the number of decimal points to be displayed using `.nf` (where `n` is the number of decimal points).

```c
#include <stdio.h>

int main() {
    float sum = (float)6 / 3;
    printf("%.1f", sum); // Outputs: 2.0
    return 0;
}
```

```c
#include <stdio.h>

int main() {
    double sum = (double)6 / 3;
    printf("%.1lf", sum); // Outputs: 2.0
    return 0;
}
```

## Character Array Printing

In C, character arrays are used to represent strings. You can use the `%s` format specifier to print a character array.

```c
#include <stdio.h>

int main() {
    char p[] = "Amen";
    printf("%s", p); // Outputs: Amen
    return 0;
}
```
