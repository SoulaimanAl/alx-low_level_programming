#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * @n: input
 *
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - recurses to find the natural square root of a number
 *
 * @n: number to calculate the sqaure root of
 * @x: iterator
 *
 * Return: the resulting square root
 */

int _sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(n, x + 1));
}
