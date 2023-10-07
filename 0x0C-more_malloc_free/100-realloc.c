#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size (in bytes) of the allocated space for ptr.
 * @new_size: New size (in bytes) of the memory block.
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

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

	newptr = malloc(new_size);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (ptr != NULL)
	{
		memcpy(newptr, ptr, (old_size < new_size) ? old_size : new_size);
		free(ptr);
	}
	return (newptr);
}
