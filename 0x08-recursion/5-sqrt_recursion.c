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
	return (square(n, 1));
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
		return (n);
	else if (x * x < n)
		return (square(x + 1, n));
	else
		return (-1);
}
