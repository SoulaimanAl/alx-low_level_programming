#nclude "main.h"

/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 *
 * @n: input numbers
 *
 * Return: always 0
*/

void print_to_98(int n)
{
	int a;

	if (n == 98)
		printf("%d\n", n);
	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a < 98)
				printf("%d, ", a);
			else
				printf("%d", a);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a > 98)
				printf("%d, ", a);
			else
				printf("%d", a);
		}
		printf("\n");
	}
}
