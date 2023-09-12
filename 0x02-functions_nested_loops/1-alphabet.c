#include <stdio.h>
#include "main.h"

/**
* print_alphabet - single line listing of alphabets
*
* Return: 0
*/
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
{
	_putchar(let);
}
	_putchar('\n');
}
