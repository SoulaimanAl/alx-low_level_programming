#include <stdio.h>

/**
 * main - Retry point
 *
 * Return: always 0
*/

int main(void)
{
	char c, s;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
