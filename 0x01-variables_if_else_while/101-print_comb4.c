#include <stdio.h>

/**
 * main - Retry point
 *
 * Return: always 0
*/

int main(void)
{
	int a, b, c;

	c = 0;
	while (c <= 7)
	{
		a = 0;
		while (a <= 8)
		{
			b = 0;
			while (b <= 9)
			{
				if (c < a && c != a && a < b && a != b)
				{
					putchar((c % 10) + '0');
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			b++;
			}
		a++;
		}
	c++;
	}
	putchar('\n');
	return (0);
}
