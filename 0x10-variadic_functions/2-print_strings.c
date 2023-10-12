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

	va_start(s, n);
	while (i < n)
	{
		if (s == NULL)
			printf("(nil)");
		printf("%s", va_arg(s, char));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(s);
}
