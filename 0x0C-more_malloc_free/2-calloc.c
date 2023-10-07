#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - Allocates memory for an array and initializes it to 0
 * @nmemb: number of elements in the array
 * @size: size(in bytes) of each element
 *
 * Return: pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
