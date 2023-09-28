#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * @n: input
 * @x: iterator
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
 * square - recurses to find the natural square root of a number
 *
 * @n: number to calculate the sqaure root of
 * @x: iterator
 *
 * Return: the resulting square root
 */

int square(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (square(n, x + 1));
}
