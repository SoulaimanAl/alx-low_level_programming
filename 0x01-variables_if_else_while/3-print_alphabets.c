#include <stdio.h>

/**
 * main - Retry point
 *
 * Return: always 0
*/

int main(void)
{
	char c, a;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
