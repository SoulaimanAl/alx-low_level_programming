#include "main.h"

/**
 * rev_array - reverse array
 *
 * @n: integer params
 *
 * Return: 0
 */

void rev_array(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 *
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 *
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d = 0, i = 0, j = 0, q = 0;
	int v = 0, val = 0, t = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || d == 1)
	{
		if (i < 0)
			v = 0;
		else
			v = *(n1 + i) - '0';
		if (j < 0)
			val = 0;
		else
			val = *(n2 + j) - '0';
		t = v + val + d;
		if (t >= 10)
			d = 1;
		else
			d = 0;
		if (q >= (size_r - 1))
			return (0);
		*(r + q) = (t % 10) + '0';
		q++;
		j--;
		i--;
	}
	if (q == size_r)
		return (0);
	*(r + q) = '\0';
	rev_array(r);
	return (r);
}
