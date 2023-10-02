#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argurment vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int n;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		n = atoi(argv[i]);

		if (n <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += n;
	}

	printf("%d\n", sum);
	return (0);
}
