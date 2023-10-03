#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *output;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	output = malloc(sizeof(char) * (i + j + 1));

	if (output == NULL)
	{
		return (NULL);
	}

	i = j = 0;
	while (s1[i] != '\0')
	{
		output[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		output[i] = s2[j];
		i++, j++;
	}
	output[i] = '\0';
	return (output);
}
