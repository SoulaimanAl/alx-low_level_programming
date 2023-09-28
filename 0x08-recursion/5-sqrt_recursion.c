#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * @n: input
 * @x: square root
 *
 * Return: always 0
 */

int square(int n, int x);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}

/**
 * square - Entry point
 *
 * @n: input
 * @x: square root
 *
 * Return: always 0
 */

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);

		return (square(x + 1, n));
}
