#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - prototype to reallocate memory block
 * @old_size: old memory block
 * @new_size: new memory block
 * @ptr: pointer to old memory block
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;

	if (new_size == 0 || old_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	a = malloc(new_size);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (ptr != NULL)
	{
		memcpy(a, ptr, (old_size < new_size) ? old_size : new_size);
		free(ptr);
	}
	return (a);

}
