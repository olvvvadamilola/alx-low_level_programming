#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	char *str, *separator = "";
	int a = 0;
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					{
					str = va_arg(args, char *);
					if (str == NULL)
					{
					str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
					}
				default:
				a++;
				continue;
			}
			separator = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(args);
}
