#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate to s1
 * Return: NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, result_len;
	unsigned int i, j;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* Calculate the length of the resulting string */
	result_len = s1_len + (n < s2_len ? n : s2_len);

	/* Allocate memory for the result string */
	result = malloc(result_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	/* Copy s1 to result */
	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	/* Concatenate the first n characters of s2 to result */
	for (j = 0; j < n && s2[j]; j++)
	{
		result[i + j] = s2[j];
	}

	/* Null-terminate the result string */
	result[i + j] = '\0';
	return (result);
}
