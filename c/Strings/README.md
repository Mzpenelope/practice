```markdown
# C Programming Practice Examples

## Concatenating Strings using `strcat()`

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char j[10] = "Hi ";
    char m[] = "Dear";
    strcat(j, m);
    printf("%s\n", j);
    return 0;
}
```

## Copying Strings using `strcpy()`

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char j[10] = "Hi ";
    char m[10];
    strcpy(m, j);
    printf("%s\n", m);
    return 0;
}
```

## Comparing Strings using `strcmp()`

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char j[] = "Hi ";
    char m[] = "H";
    printf("%d\n", strcmp(j, m));
    return 0;
}
```

## Reading and Writing Integers using `scanf()`

```c
#include <stdio.h>

int main(void)
{
    int j;
    printf("Type a number and press enter: \n");
    scanf("%d", &j);
    printf("Your number is: %d", j);
    return 0;
}
```

## Printing Memory Address of a Variable using `%p`

```c
#include <stdio.h>

int main(void)
{
    int j = 10;
    printf("%p", (void*)&j);
    return 0;
}
```

## Reading and Writing Characters using `fgets()`

```c
#include <stdio.h>

int main(void)
{
    char j[10];
    printf("Type your name and press enter: \n");
    fgets(j, sizeof(j), stdin);
    printf("I'm %s", j);
    return 0;
}
```

## Reading and Writing Characters using `scanf()`

```c
#include <stdio.h>

int main(void)
{
    char j[10];
    printf("Type your name and press enter: \n");
    scanf("%s", j);
    printf("I'm %s", j);
    return 0;
}
```

## Reading a Character and an Integer using `scanf()`

```c
#include <stdio.h>

int main(void)
{
    int m;
    char j;
    printf("Type a number and character and press enter: \n");
    scanf("%d %c", &m, &j);
    printf("It's either %d\n", m);
    printf("It's either %c\n", j);
    return 0;
}
```
