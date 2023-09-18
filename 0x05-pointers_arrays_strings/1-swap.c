#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 *
 * @a: pointeur type int
 * @b: pointeur type int
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
