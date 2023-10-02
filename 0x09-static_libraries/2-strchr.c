#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates first occurence of c
 * @s: string
 * @c: character to find
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
