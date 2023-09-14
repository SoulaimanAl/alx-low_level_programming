#include "main.h"

/**
 * main - Retry point
 *
 *
 * Return: always 0
 */

int main(void)
{
	long int i, pf = -1, n = 612852475143;

	while (n % 2 == 0)
	{
		pf = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			pf = i;
			n = n / i;
		}
	}
	if (n > 2)
		pf = n;
	printf("%ld\n", pf);

	return (0);
}
