#include "main.h"

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
	int b = (size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(b);
	if (n == NULL)
		return (NULL);

	for (int i = 0; i < b; i++)
		n[i] = 0;

	return (n);
}
