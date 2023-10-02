#include <stdio.h>

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
	(void)argc;

	while (*argv != '\0')
	{
		printf("%d\n", atoi(*argv));
		argv++;
	}
	return (0);
}
