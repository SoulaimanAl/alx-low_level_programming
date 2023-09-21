#include "main.h"

/**
 * rot13 - encoder rot13
 *
 * @str: pointer to string params
 *
 * Return: *str
 */

char *rot13(char *str)
{
	int j, i = 0;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *d = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = d[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
