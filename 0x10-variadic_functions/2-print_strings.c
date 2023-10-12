#include "variadic_functions.h"

/**
 * print_strings - Entry point
 *
 * @separator: input
 * @n: input
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list s;

	if (separator == NULL)
		printf("\n"), return;

	va_start(s, n);
	while (i < n)
	{
		if (s == NULL)
			printf("(nil)");
		if (i == n - 1)
			printf("%s", va_arg(s, char *));
		else
			printf("%s%s", va_arg(s, char), *separator);
		i++;
	}
	printf("\n");
	va_end(s);
}
