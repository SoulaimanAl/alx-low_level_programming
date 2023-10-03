#include "main.h"

/**
 * *_strdup - Entry point
 *
 * @str: input
 *
 * Return: a pointer to the duplicated string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);


}
