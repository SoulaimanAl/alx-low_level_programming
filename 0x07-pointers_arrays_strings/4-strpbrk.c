#include "main.h"

/**
 * *_strpbrk - Retry point
 *
 * @s: pointeur type char
 * @accept: input
 *
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
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
