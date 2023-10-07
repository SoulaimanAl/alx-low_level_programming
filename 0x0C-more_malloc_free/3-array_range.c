#include "main.h"

/**
 * *array_range - Entry point
 *
 * @min: input
 * @max: input
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *s;
	int i, size = max - min + 1;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return (NULL);

	for (i = min; min <= max; i++)
		s[i] = min++;
	return (s);
}
