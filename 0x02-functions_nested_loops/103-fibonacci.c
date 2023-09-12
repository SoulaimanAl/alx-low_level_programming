#include "main.h"

/**
 * main - Retry point
 *
 * Return: always 0
*/

int main(void)
{
	unsigned long int f = 1, s = 2, n;
	long int sum = 0;

	while (s < 4000000)
	{
		if (s % 2 == 0)
			sum = sum + s;
		n = f + s;
		f = s;
		s = n;
	}
	printf("%ld\n", sum);
	return (0);
}
