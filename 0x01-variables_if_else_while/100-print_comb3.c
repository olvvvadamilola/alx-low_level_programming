#include <stdio.h>

/**
 * main - this is the entry point of the program
 *
 * Return: always 0
*/
int main(void)
{
	int NumOne;

	while (NumOne < 9)
{
	int NumTwo = NumOne + 1;

	while (NumTwo <= 9)
{
	putchar(NumOne + '0');
	putchar(NumTwo + '0');

	if (NumOne != 8 || NumTwo != 9)
{
	putchar(',');
	putchar(' ');
}
	NumOne++;
}
	NumTwo++;
}
	putchar('\n');
	return (0);
}
