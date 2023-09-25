#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * @a: input
 * @size: input
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int rt1, rt2, n;

	rt1 = 0;
	rt2 = 0;

	for (n = 0; n < size; n++)
	{
		rt1 = rt1 + a[n * size + n];
	}

	for (n = size - 1; n >= 0; n--)
	{
		rt2 += a[n * size + (size - n - 1)];
	}

	printf("%d, %d\n", rt1, rt2);
}
