#include <stdio.h>
#include <math.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	long num = 612852475143;
	long div;
	long prime;
	double square = sqrt(num);

	for (div = 1; div <= square; div++)
{
	if (num % div == 0)
{
	prime = num / div;
}
}
	printf("%ld\n", prime);
	return (0);
}
