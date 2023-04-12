#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function
 * @grid: Pointer to the grid to be freed
 * @height: Height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
