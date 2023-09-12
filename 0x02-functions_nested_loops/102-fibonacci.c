#include "main.h"

/**
 * main -Retry point
 *
 *
 * Return: always 0
*/

int main(void)
{
	long int f = 1, s = 2, n;
	unsigned int count = 2;

	printf("1, 2,");
	while (count < 50)
{
		n = f + s;
		printf("%ld, ", n);
		f = s;
		s = n;
		count++;
	}
	printf("\n");
	return (0);
}
