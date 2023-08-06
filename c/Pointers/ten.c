#include <stdio.h>
/**
 * main - Entry point
 * description - practice
 * int main(void) - printfs code
 */
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
