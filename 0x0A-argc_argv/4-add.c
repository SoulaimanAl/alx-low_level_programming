#include <stdio.h>
#include <stdlib.h>

/**
 * main - Retry point
 *
 * @argc: input
 * @argv: input
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int mul = 0;
	char *c;

	if (argc == 1)
		return (0);

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		mul += atoi(argv[argc]);
	}
	printf("%d\n", mul);
	return (0);
}
