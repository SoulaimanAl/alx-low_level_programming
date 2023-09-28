#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * @s: input
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	else
	{
		count = count + 1;
		return (count + _strlen_recursion(s + 1));
	}
}
