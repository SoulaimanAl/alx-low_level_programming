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

	if (separator == NULL)
		printf("\n"), return;
	va_start(num, n);
	while (i < n)
	{
		if (i == n - 1)
			printf("%d", va_arg(num, int));
		else
			printf("%d%s", va_arg(num, int), separator);
		i++;
	}
	printf("\n");
	va_end(num);
}
