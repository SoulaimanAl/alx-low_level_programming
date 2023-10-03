#include "main.h"

/**
 * *create_array - Entry point
 *
 * @size: input
 * @c: input
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL || size < 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
