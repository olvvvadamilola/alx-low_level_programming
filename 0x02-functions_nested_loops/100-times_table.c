#include "main.h"

/**
* print_times_table - function to print n times table, starting with 0
*
* @n: - value of timestable to be printed
*/
void print_times_table(int n)
{
	int num, a, b;

	if (n >= 0 && n <= 15)
{
	for (num = 0; num <= n; num++)
{
	_putchar('0');
	for (a = 1; a <= n; a++)
{
	_putchar(',');
	_putchar(' ');
	b = num * a;
	if (b <= 99)
	_putchar(' ');
	if (b <= 9)
	_putchar(' ');
	if (b >= 100)
{
	_putchar((b / 100) + '0');
	_putchar(((b / 10)) % 10 + '0');
}
	else if (b <= 99 && b >= 10)
{
	_putchar((b / 10) + '0');
}
	_putchar((b % 10) + '0');
}
	_putchar('\n');
}
}
}
