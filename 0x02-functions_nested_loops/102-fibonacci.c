#include "main.h"

/**
 * main -Retry point
 *
 *
 * Return: always 0
*/

int main(void)
{
	int f = 1, s = 2, count = 2;
	int n;

	while (count < 50)
{
		n = f + s;
		printf("%d, ", n);
		f = s;
		s = n;
		count++;
	}
	printf("\n");
	return (0);
}
