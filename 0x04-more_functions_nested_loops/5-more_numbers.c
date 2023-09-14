#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int a = 0, b;

	while (a <= 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b >= 10)
				_putchar('1');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
