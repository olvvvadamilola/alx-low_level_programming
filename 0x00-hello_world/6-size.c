#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return:end and return 0
 */

int main(void)
{
	/*print the size of various datatypes on a computer*/
	printf("size of a char: %lu byte(s)\n",
	(long unsigned)sizeof(char));
	printf("size of an int: %lu byte(s)\n",
	(long unsigned)sizeof(int));
	printf("size of a long int: %lu byte(s)\n",
	(long unsigned)sizeof(long));
	printf("size of a long long int: %lu byte(s)\n",
	(long unsigned)sizeof(long long));
	printf("size of a float: %lu byte(s)\n",
	(long unsigned)sizeof(float));
	return (0);
}
