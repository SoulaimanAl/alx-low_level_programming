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
	int *n;

	n = malloc(sizeof(int) * b);
	if (n == 0)
		exit(98);

	return (n);
}
