#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int start;
	int end = n - 1;
	int temp;

	for (start = 0; start < end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
