#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n:  is the number of times the character \ should be printed
 *
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
