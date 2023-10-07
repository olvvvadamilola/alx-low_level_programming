#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * malloc_checked - Allocates memory using malloc and checks for errors
 * @b: number of bytes to allocate
 * Return: Pointer to allocated memory, or exit with status 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
