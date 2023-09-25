#include "main.h"

/**
 * *_strpbrk - Entry point
 *
 * @s: pointeur type char
 * @accept: input
 *
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j])
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return ('\0');
}
