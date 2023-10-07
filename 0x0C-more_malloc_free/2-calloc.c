#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - Entry point
 *
 * @nmemb: input
 * @size: input
 *
 * Return: a pointeur that allocates memory for an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(size * nmemb);
	if (n == NULL)
		return (NULL);

	_memset(n, 0, nmemb * size);
	return (n);
}
