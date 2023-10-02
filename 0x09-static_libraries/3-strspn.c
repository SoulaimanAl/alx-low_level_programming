#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointeur type char
 * @accept: pointeur type char
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, count = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
