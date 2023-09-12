#include <stdio.h>
#include "main.h"

/**
* times_table - function to print times table
* r for rows, c for columns
*
* Return: 0
*/
void times_table(void)
{
	int r, c, result;

	for (r = 0; r <= 9; r++)
{
	for (c = 0; c <= 9; c++)
{
	result = r * c;
	if (c == 0)
{
	putchar (result + '0');

}

	if (result < 10 && c != 0)
{
	putchar (',');
	putchar (' ');
	putchar (' ');
	putchar (result + '0');
}
	else if (result >= 10)
{
	putchar (',');
	putchar (' ');
	putchar ('0' + (result / 10));
	putchar ('0' + (result % 10));
}
}
	putchar('\n');
}
}
