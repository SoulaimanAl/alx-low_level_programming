#include "main.h"

/**
 * print - program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024
 *
 * return: always 0
*/

void print(void)
{
	int a, m = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			m = m + a;
	}
	printf("%d\n", m);
}
