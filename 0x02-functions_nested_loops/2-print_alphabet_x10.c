#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints alphabets ten  times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	int l;
	char let;

	for (l = 0; l < 10; l++)
{
	for (let = 'a'; let <= 'z'; let++)
{
	_putchar(let);
}
	_putchar('\n');
}
}
