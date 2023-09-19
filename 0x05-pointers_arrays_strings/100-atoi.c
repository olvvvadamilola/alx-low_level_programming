#include "main.h"
#include <stdio.h>
/**
* _atoi - coverts string to integer
* @s: input string
*
* Return: 0
*/
int _atoi(char *s)
{
	int a = 0;
	unsigned int b = 0;
	int min = 1;
	int i = 0;

	while (s[a])
{
	if (s[a] == 45)
{
	min *= -1;
}
	while (s[a] >= 48 && s[a] <= 57)
{
	i = 1;
	b = (b * 10) + (s[a] - '0');
	a++;
}
	if (i == 1)
{
	break;
}
	a++;
}
	b *= min;
	return (b);
}
