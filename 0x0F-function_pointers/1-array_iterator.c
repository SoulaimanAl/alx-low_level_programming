#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * @array: input
 * @size: input
 * @action: function to pointeur
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
