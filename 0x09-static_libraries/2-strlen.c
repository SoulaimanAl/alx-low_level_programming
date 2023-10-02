#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointeur type char
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		count = count + 1;
		 i++;
	}
	return (count);
}
