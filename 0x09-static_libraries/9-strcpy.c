#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *
 * @dest: pointeur type char
 * @src: pointeur type char
 *
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
