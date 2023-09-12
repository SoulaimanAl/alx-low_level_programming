#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: string type int
 *
 * Return: the last digit
*/

int print_last_digit(int n)
{
	while (n > 10)
	{
		n = n % 2;
	}
	return (n);
}
