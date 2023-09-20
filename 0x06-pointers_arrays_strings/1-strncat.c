#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: pointeur type char
 * @src: pointeur type char
 * @n: input numbers
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
		j++;
	j--;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
