#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - prototype to create an array of characters
 * @size: size of array
 * @c: specific character to be initialized
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}
