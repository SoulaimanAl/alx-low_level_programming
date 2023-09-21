#include "main.h"

/**
 * *leet -  function that encodes a string into 1337
 *
 * @s: pointeur type char
 *
 * Return: result of pointeur s
 */

char *leet(char *s)
{
	int a, b;
	char *z1 = "aAeEoOtTlL";
	char *z2 = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == z1[b])
				s[a] = z2[b];
		}
	}
	return (s);
}
