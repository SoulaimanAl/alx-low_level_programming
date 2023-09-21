#include "main.h"

/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 *
 * @str: pointeur type char
 *
 * Return: pointer to the resulting string str
 */

char *string_toupper(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - ('a' - 'A');
		c++;
	}
	return (str);
}
