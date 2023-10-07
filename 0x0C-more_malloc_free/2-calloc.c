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
	int *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(sizeof(int) * nmemb);
	if (n == NULL)
		return (NULL);

	for (int i; i < nmemb; i++)
		n[i] = 0;

	return (n);
}
