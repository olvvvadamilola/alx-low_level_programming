#include <stdio.h>
#include "main.h"

/**
 * string_toupper -  changes all lower case of a
 * string to upper case
 * @str: input string
 *
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
