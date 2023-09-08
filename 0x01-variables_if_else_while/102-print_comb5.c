#include <stdio.h>

/**
 * main - Retry point
 *
 * Return: always 0
*/

int main(void)
{
	int a, b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b && a != b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a + b != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
