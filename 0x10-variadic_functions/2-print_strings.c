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
	char *str;
	va_list s;

	va_start(s, n);
	while (i < n)
	{
		str = va_arg(s, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(s);
}
