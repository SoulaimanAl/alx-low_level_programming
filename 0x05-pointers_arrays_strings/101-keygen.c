#include "main.h"
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int str[100];
	int a, b, sum;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		str[a] = rand() % 78;
		sum += (str[a] + '0');
		putchar(str[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}
