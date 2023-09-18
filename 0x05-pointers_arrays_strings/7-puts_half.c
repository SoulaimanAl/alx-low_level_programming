#include "main.h"

/**
 * puts_half -  function that prints half of a string
 *
 * @str: pointeur type char
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	i = len / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
