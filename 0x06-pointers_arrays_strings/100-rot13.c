#include <stdio.h>
#include "main.h"
/**
 * rot13 - Rotate alphabet 13 places.
 * @a: integer
 * Return: 0
 */
char *rot13(char *a)
{
	int i;
	int j;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == normal[j])
			{
				a[i] = rot[j];
				break;
			}
		}
	}
	return (a);
}
