#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: pointeur type char
 *
 * Return: always 0
 */

int _atoi(char *s)
{
	int len = 0, i = 0, j = 0, a = 0, n = 0, num = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && num == 0)
	{
		if (s[a] == '-')
			++j;
		if (s[a] >= '0' && s[a] <= '9')
		{
			n = s[a] - '0';
			if (j % 2 != 0)
				n = -n;
			i = i * 10 + n;
			num = 1;
			if (s[a + 1] <= '0' || s[a + 1] >= '9')
				break;
			num = 0;
		}
		a++;
	}
	if (num == 0)
		return (0);
	return (i);
}
