#include "main.h"

/**
 * *argstostr - Entry point
 *
 * @ac: input
 * @av: input
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, a;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[a] = av[i][j];
			a++;
		}
		if (str[a] == '\0')
			str[a++] = '\n';
	}
	return (str);
}
