#include <stdio.h>

/**
* main - entry point of program
*
* Return: Always 0
*/
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	if ((i % 3 == 0) || (i % 5 == 0))
{
	j += i;
}
	printf("%d\n", j);
	return (0);
}
