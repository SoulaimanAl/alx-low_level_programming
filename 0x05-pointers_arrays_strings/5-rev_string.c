#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: pointeur type char
 */

void rev_string(char *s)
{
	char a = s[0];
	int i, len = 0;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		len--;
		a = s[i];
		s[i] = s[len];
		s[len] = a;
	}
}
