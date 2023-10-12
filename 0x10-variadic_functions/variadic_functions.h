#ifndef _VAR_H_
#define _VAR_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * main - Entry point
 * description: headers
 * @n: number of arguments
 * Return: Always 0 (Success)
*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
