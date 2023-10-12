#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 *
 * @separator: input
 * @n: input
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num;

	va_start(num, n);
	while (i < n)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(num);
}
