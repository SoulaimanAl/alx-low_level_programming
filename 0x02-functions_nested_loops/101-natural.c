#include "main.h"

/**
 * main - Retry point
 *
 * Return: always 0
*/

int main(void)
{
	int a, m = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			m = m + a;
	}
	printf("%d\n", m);
	return (0);
}
