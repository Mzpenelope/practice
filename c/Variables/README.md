1. **Example 1: Basic Addition**
```c
int i = 20;
int j = 21;
int sum = i + j;
printf("%d", sum);
```

2. **Example 2: Combined Variable Declaration**
```c
int i = 20, j = 21;
printf("%d", i + j);
```

3. **Example 3: Multiple Variable Assignment**
```c
int i, j, f;
i = j = f = 22;
printf("i am %d", i + j + f);
// Output: i am 66
```

4. **Example 4: Multiple printf Statements**
```c
const int BY = 2002;

int j = 20;
printf("%d", j);
printf("I am %d", j);
// Output: 20I am 20
```

5. **Example 5: Printing a Floating-Point Number**
```c
float k = 7.8;
printf("%f", k);
// Output: 7.800000
```

6. **Example 6: Printing a Character**
```c
char f = 'm';
printf("%c\n", f);
// Output: m
```

7. **Example 7: Reassigning Variable**
```c
int i = 20;
i = 21;
// i now holds the value 21
```

8. **Example 8: Reassigning with Another Variable**
```c
int i = 20;
int j = 21;
i = j;
// i now holds the value 21
```

9. **Example 9: Copying a Variable**
```c
int i = 20;
int j;
j = i;
printf("%d", j);
// Output: 20
```

10. **Example 10: Mixed Data Types Printing**
```c
int myAge = 20;
char myAim = 'A';
float myScore = 161.1;
printf("%d\n%f\n%c", myAge, myScore, myAim);
// Output:
// 20
// 161.100006
// A
```

11. **Example 11: Printing Multiple Variables**
```c
int i = 20;
char s = 's';
float k = 7.8;
printf("i am %d, my name ends with %c and my account is %f", i, s, k);
// Output: i am 20, my name ends with s and my account is 7.800000
```
