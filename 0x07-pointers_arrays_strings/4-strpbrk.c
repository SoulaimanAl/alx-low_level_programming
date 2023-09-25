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
	int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
