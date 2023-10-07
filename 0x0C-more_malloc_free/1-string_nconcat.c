#include "main.h"

/**
 * *string_nconcat - Entry point
 *
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: a pointeur that concatenates two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		str = malloc(sizeof(char) * (l1 + n + 1));
	else
		str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (str == NULL)
		return (NULL);

	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		str[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		str[i++] = s2[j++];

	str[i] = '\0';
	return (str);
}
