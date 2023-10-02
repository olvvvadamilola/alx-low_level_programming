#include <stdio.h>
#include "main.h"
/**
 * _strstr- locates the first occurrence of the null-terminated string
 * function that locates a substring.
 * @haystack: string
 * @needle: character to find
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)

	{

		char *h = haystack;

		char *n = needle;

		for (; *h == *n && *n != '\0'; h++, n++)
		{}

		if (*n == '\0')

			return (haystack);
	}


	return (NULL);
}
