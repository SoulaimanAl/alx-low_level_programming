#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: pointeur type char
 */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
