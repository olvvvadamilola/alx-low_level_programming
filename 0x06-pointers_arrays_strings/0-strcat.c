#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: 
 * @char:
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
    int i;
    int length = 0;

    while (dest[length] != '\0')
    {
        length++;
    }
        for (i = 0; src[i] != '\0'; i++, length++)
    {
        dest[length] = src[i];
    }
        dest[length] = '\0';
        return (dest);
}