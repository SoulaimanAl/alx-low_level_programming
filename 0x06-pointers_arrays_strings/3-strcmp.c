#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: pointeur type char
 * @s2: pointeur type char
 *
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s2[j] != '\0')
		j++;
	while (s1[i] != '\0')
		i++;
	if (i < j)
		return (15);
	else if (i > j)
		return (-15);
	else if (i == j)
		return (0);
}
