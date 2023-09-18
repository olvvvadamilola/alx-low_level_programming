#include <stdio.h>
#include "main.h"

/**
* swap_int - prototypr to swap values of two integers
* @a: integer one 98
* @b: integer two 42
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
