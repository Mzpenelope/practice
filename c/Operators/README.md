```markdown
# Binary to Decimal Conversion

## Binary Representation

In the binary number system, there are only two digits: 0 and 1. Each digit in a binary number represents a power of 2, where the rightmost digit represents 2^0, the next digit to the left represents 2^1, the next digit represents 2^2, and so on.

To convert a binary number to decimal, we simply add up the decimal values of each digit based on its corresponding power of 2. For example, the binary number "1010" has four digits, and we can calculate its decimal value as follows:

1 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0
= 8 + 0 + 2 + 0
= 10

## Binary to Decimal Conversion Exercise

Here's an exercise for you to practice converting a binary number to decimal:

**Binary Number: 1110010**

1 * 2^6 + 1 * 2^5 + 1 * 2^4 + 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0
= 64 + 32 + 16 + 0 + 0 + 2 + 0
= 114

## Comparison Operators

In comparison operators, a binary output is returned when the statement is false (0) or true (1). Examples of comparison operators are:

- `==` - Equal to
- `<` - Less than
- `>` - Greater than
- `<=` - Less than or equal to
- `>=` - Greater than or equal to
- `&&` - Logical AND
- `||` - Logical OR
- `!` - Logical NOT

## Compound Assignment Operators

Compound assignment operators combine a binary arithmetic or bitwise operation with assignment. Examples of compound assignment operators are:

- `+=` - Addition assignment
- `-=` - Subtraction assignment
- `*=` - Multiplication assignment
- `/=` - Division assignment
- `%=` - Modulus assignment
- `&=` - Bitwise AND assignment
- `|=` - Bitwise OR assignment
- `^=` - Bitwise XOR assignment
- `>>=` - Right shift assignment
- `<<=` - Left shift assignment

## `sizeof` Operator

The `sizeof` operator is used to check the size or byte of a variable. For example:

```c
#include <stdio.h>
int main(void) {
    int j = 100 + 50;
    int m = j + 20;
    printf("%lu", sizeof(m));
    return 0;
}
```

## `bool` Type

The `bool` type is used to represent true or false values. To use `bool`, include the header file `stdbool.h`. Example:

```c
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool j = 100 + 50;
    bool m = j + 20;
    printf("%d", m == j);
    return 0;
}
```

**Note:** The above code will print 1 for true and 0 for false.

## Binary Representation of Decimal Numbers

The binary representation of a decimal number is calculated by repeatedly dividing the number by 2 and keeping track of the remainder at each step. For example, to find the binary representation of the decimal number 19:

Divide 19 by 2. The result is 9 with a remainder of 1.
Divide 9 by 2. The result is 4 with a remainder of 1.
Divide 4 by 2. The result is 2 with a remainder of 0.
Divide 2 by 2. The result is 1 with a remainder of 0.
Divide 1 by 2. The result is 0 with a remainder of 1.
So the remainders, read in reverse order, are 10011. This is the binary representation of 19.

Note that the number of bits required to represent a decimal number in binary depends on the magnitude of the number. For example, the decimal number 19 requires 5 bits because the largest power of 2 that is less than or equal to 19 is 16, which is 2^4. Therefore, we need at least 4 bits to represent the number 19. The next power of 2 is 32, which is 2^5, so we need 5 bits in total.

## Arithmetic and Bitwise Operators

Arithmetic operators perform basic mathematical operations, while bitwise operators perform operations at the bit level. Some common arithmetic and bitwise operators are:

- `+` - Addition
- `-` - Subtraction
- `*` - Multiplication
- `/` - Division
- `%` - Modulus
- `++` - Increment
- `--` - Decrement
- `&` - Bitwise AND
- `|` - Bitwise OR
- `^` - Bitwise XOR
- `~` - Bitwise NOT
- `>>` - Right shift
- `<<` - Left shift

For example:

```c
int main(void) {
    int x = 5;
    int y = 3;
    int result = x + y; // Addition
    printf("Result: %d", result);
    return 0;
}
```

This will print "Result: 8" because 5 + 3 is 8.

## Conclusion

This `README.md` file provides an overview of binary to decimal conversion, comparison operators, compound assignment operators, the `sizeof` operator, `bool` type, and common arithmetic and bitwise operators in C programming.
```
