#include "main.h"

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: input
 * @needle: input
 *
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *b = haystack;
		char *a = needle;

		while (*b == *a && *a != '\0')
		{
			b++;
			a++;
		}

		if (*a == '\0')
			return (haystack);
	}

	return (0);
}
