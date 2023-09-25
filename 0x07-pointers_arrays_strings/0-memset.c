#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: pointeur type char
 * @b: input of ascii
 * @n: input of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(b);
		i++;
	}
	i = 0;
	while (s[i + n] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (s);
}
