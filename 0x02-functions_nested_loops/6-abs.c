#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: string type int
 *
 * Return: always 0
*/

int _abs(int n)
{
	if (n < 0)
		_putchar((n * (-1)) + '0');
	else
		_putchar(n + '0');
}
