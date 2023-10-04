#include "main.h"

/**
 * count - helper function to count the number of words in a string
 *
 * @str: string to evaluate
 *
 * Return: number of words
 */

int count(char *str)
{
	int f, a, b;

	f = 0;
	b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **m, *t;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	m[k] = NULL;

	return (m);
}
