#include "lists.h"
void pre_main(void) __attribute__ ((constructor));
/**
 * pre_main - function to print before main
 * Return: 0
 */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
