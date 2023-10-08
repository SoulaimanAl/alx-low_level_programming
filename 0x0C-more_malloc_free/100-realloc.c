#include "main.h"

/**
 * *_realloc - Entry point
 *
 * @ptr: input
 * @old_size: input
 * @new_size: input
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p2;
	int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	p2 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p1[i] = p2[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = p2[i];
	}

	free(ptr);
	return (p1);
}
