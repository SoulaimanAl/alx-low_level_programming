#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 *
 * Return: always 0
*/

void jack_bauer(void)
{
	int a, b;

	a = 0;
	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
