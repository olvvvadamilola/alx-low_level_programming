#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int k = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (k = 0; k < i; k++, i--)
	{
		temp = *(n + k);
		*(n + k) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text num one
 * @n2: text num two
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, i = 0, k = 0, digits = 0;
	int value1 = 0, val2 = 0, total_tmp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + k) != '\0')
		k++;
	i--;
	k--;
	if (k >= size_r || i >= size_r)
		return (0);
	while (k >= 0 || i >= 0 || flow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (k < 0)
			val2 = 0;
		else
			val2 = *(n2 + k) - '0';
		total_tmp = value1 + val2 + flow;
		if (total_tmp >= 10)
			flow = 1;
		else
			flow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (total_tmp % 10) + '0';
		digits++;
		k--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
