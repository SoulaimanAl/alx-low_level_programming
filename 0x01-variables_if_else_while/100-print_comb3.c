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
	while (a <= 8)
	{
		b = 0;
		while (b <= 9)
		{
			if (a < b && a != b)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				if (a + b != 17)
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
