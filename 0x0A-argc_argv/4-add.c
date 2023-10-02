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
	int mul = 1, n;

	if (argc == 1)
		return (0);

	for (n = 1; n < argc; n++)
	{
		char *arg = argv[n];
		int isValid  = 1;

		while (*arg != '\0')
		{
			if (*arg < '0' || *arg > '9')
			{
				isValid = 0;
				break;
			}
			arg++;
		}
		if (isValid)
			mul *= atoi(argv[n]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", mul);
	return (0);
}
