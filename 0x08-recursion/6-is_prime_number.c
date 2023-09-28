#include "main.h"

/**
 * is_prime_number - Entry point
 *
 * @n: input
 * @x: the current divisor
 *
 * Return: always 0
 */

int _prime(int n, int x);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - Entry point
 *
 * @n: input
 * @x: the current divisor
 *
 * Return: always 0
 */
int _prime(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0 && x > 0)
		return (0);
	return (_prime(n, x - 1));
}
