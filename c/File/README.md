```markdown
## File Manipulation Examples in C

### Creating a File

```c
#include <stdio.h>

int main(void)
{
    FILE *phill;
    phill = fopen("phill.txt", "w");
    fclose(phill);
    return 0;
}
```

### Writing Content to a File

```c
#include <stdio.h>

int main(void)
{
    FILE *phill;
    phill = fopen("phill.txt", "w");
    fprintf(phill, "i love you");
    fclose(phill);
    return 0;
}
```

### Replacing File Content

```c
#include <stdio.h>

int main(void)
{
    FILE *phill;
    phill = fopen("phill.txt", "w");
    fprintf(phill, "i love Jesus ");
    fclose(phill);
    return 0;
}
```

### Adding to File Content

```c
#include <stdio.h>

int main(void)
{
    FILE *phill;
    phill = fopen("phill.txt", "a");
    fprintf(phill, "\nHe is my strength\nMay his will be done");
    fclose(phill);
    return 0;
}
```

### Reading First File Content

```c
#include <stdio.h>

int main(void)
{
    FILE *phill;
    phill = fopen("phill.txt", "r");
    char aidoo[200];
    fgets(aidoo, 200, phill);
    printf("%s", aidoo);
    fclose(phill);
    return 0;
}
```

### Reading All File Content

```c
#include <stdio.h>

int main(void)
{
    FILE *phill;
    phill = fopen("phill.txt", "r");
    char aidoo[200];
    while (fgets(aidoo, 200, phill))
    {
        printf("%s", aidoo);
    }
    fclose(phill);
    return 0;
}
```

### Checking if the File Exists

```c
#include <stdio.h>

int main(void)
{
    FILE *phill;
    phill = fopen("phill.txt", "r");
    char aidoo[200];
    if (phill != NULL)
    {
        while (fgets(aidoo, 200, phill))
        {
            printf("%s", aidoo);
        }
    }
    else
    {
        printf("Segmentation fault");
    }
    fclose(phill);
    return 0;
}
```
