#include "main.h"

/**
 * main - Retry point
 *
 *
 * Return: always 0
*/

int main(void)
{
	long int f = 1, s = 2, n;
	int count = 2;

	printf("1, 2, ");
	while (count < 98)
	{
		n = f + s;
		if (count == 97)
			printf("%ld", n);
		else
			printf("%ld, ", n);
		f = s;
		s = n;
		count++;
	}
	printf("\n");
	return (0);
}
