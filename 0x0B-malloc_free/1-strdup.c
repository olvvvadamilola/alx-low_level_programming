#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of str
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}

	dup = malloc((size + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
	free(dup);
}
