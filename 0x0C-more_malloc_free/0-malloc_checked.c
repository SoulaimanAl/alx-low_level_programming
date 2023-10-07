#include "main.h"

/**
 * *malloc_checked - Entry point
 *
 * @b: input
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == 0)
		exit(98);

	return (n);
}
