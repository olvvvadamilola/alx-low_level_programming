#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <stddef.h>
/**
 * main - Entry point
 * description: header files
 * Return: Always 0
*/
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
#endif
