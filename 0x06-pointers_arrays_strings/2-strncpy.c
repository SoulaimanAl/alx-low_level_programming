#include "main.h"

/**
 * *_strncpy - function that copies a string
 *
 * @dest: pointeur type char
 * @src: pointeur type char
 * @n: input numbers
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
