#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointeur type int
 * @n: input numbers
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
		i++;
	}
}
