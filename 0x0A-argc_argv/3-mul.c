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
	if (argc < 2)
	{
		printf("%d\n", atoi(argv[0] + argv[1]));
	}
	else
	{
		printf("ERROR");
		return (1);
	}
	return (0);
}
