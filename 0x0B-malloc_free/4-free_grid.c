#include "main.h"

/**
 * free_grid - Entry point
 *
 * @grid: input
 * @height: input
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid);
}
