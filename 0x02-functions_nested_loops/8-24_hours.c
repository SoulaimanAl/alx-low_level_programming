#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 *
 * Return: always 0
*/

void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	while (a <= 2)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 6)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					if (a + b + c + d == 19)
						break;
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
