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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc >= 3)
	{
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
