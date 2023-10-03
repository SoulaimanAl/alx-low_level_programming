#include "main.h"

/**
 * *str_concat - Entry point
 *
 * @s1: input
 * @s2: input
 *
 * Return: a pointer should point to a newly allocated
 * space in memory which contains the contents of s1, othrewise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == 0)
		return (NULL);
	for (i = 0; i <= len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j <= len2; j++, i++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);

}
