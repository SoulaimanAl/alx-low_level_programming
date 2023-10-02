#include <stdio.h>
#include <stdlib.h>

/**
 * main - Retry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int n, a, b;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	b = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && n >= 0; a++)
	{
		while (n >= coins[a])
		{
			b++;
			n -= coins[a];
		}
	}
	printf("%d\n", b);
	return (0);
}
