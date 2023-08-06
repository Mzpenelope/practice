```markdown
# Python and C Code Examples

## 1. Command to run a Python script

To run a Python script using `python3`:

```bash
python3 your_script.py
```

## 2. Command to run a Python script saved in an environment variable called `PHILL`

To run a Python script stored in an environment variable called `PHILL`:

```bash
python3 $PHILL
```

## 3. Command to run Python code saved in an environment variable called `PHILL`

To run Python code stored in an environment variable called `PHILL`:

```bash
python3 -c "$PHILL"
```

or

```bash
python3 <<< $PHILL
```

## 4. Print command in Python

In Python, the `print` function is used to display output, and it functions similarly to `printf` in C.

## 5. File extensions for C and Python

- C file extension: `.c`
- Python file extension: `.py`

## 6. Printing "I love you" in single or double quotes in Python

To print "I love you" using single quotes:

```python
print('\'I love you\'')
```

To print "I love you" using double quotes:

```python
print("\"I love you\"")
```

## 7. Integer variables in C and Python

C code example:

```c
#include <stdio.h>
int main(void) {
    int age = 10;
    printf("I am %d years old", age);
    return 0;
}
```

Python code equivalent:

```python
age = 10
print(f"I am {age:d} years old")
```

## 8. Float variables in C and Python

C code example:

```c
#include <stdio.h>
int main(void) {
    float weight = 5.9654;
    printf("I weigh %.2f", weight);
    return 0;
}
```

Python code equivalent:

```python
weight = 5.9654
print(f"I weigh {weight:.2f}")
```

## 9. String operations in C and Python

C code example:

```c
#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "phill";
    printf("%s%s\n", a, a);
    char b[6];
    strncpy(b, a, 4);
    b[4] = '\0';
    printf("%s\n", b);
    return 0;
}
```

Python code equivalent:

```python
a = "phill"
print(2 * a)
print(a[:4])
```

The above Python code will print "phillphill" and "phil", respectively.

(export VARIABLE_NAME=variable_value) this is the syntax to create an environment variable
```
