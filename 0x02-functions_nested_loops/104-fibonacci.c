#include "main.h"

/**
 * main - Retry point
 *
 *
 * Return: always 0
*/

int main(void)
{
	unsigned long int i, f1, f2, s1, s2, f = 1, s = 2, max = 1000000000;

	printf("%lu", f);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", s);
		s += f;
		f = s - f;
	}

	f1 = (f / max);
	f2 = (f % max);
	s1 = (s / max);
	s2 = (s % max);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", s1 + (s2 / max));
		printf("%lu", s2 % max);
		s1 = s1 + f1;
		f1 = s1 - f1;
		s2 = s2 + f2;
		f2 = s2 - f2;
	}
	printf("\n");
	return (0);
}
