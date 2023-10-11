#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * @name: input
 * @f: function to pointeur
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
