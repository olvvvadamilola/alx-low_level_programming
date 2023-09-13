#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*/
int main(void)
{
	int a = 1, b = 2, temp;
	int even_sum = 0;

	for (; a <= 4000000;)
{
	if (a % 2 == 0)
{
	even_sum += a;
}
	temp = a;
	a = b;
	b += temp;
}
	printf("%d\n", even_sum);

	return (0);
}
