#include <stdio.h>
/**
 * main - This is the entry
 * @void - opens the file
 * Return: zero
 */
int main(void)
{
FILE *phill;

phill = fopen("phill.txt", "r");

char aidoo[200];

if(phill != NULL)
{
while(fgets(aidoo, 200, phill))
{
printf("%s", aidoo);
}

}
else
{
printf("Not able to open the file.");
}

fclose(phill);

return (0);
}
