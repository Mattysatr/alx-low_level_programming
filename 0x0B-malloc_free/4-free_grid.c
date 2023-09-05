#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * void free_grid - frees two dimension grid
 * @grid: two dimensional grid allocation
 * @height: height dimension of grid
 * Description: frees grid memory
 * Return: nothing
 *
 *
 */

void free_grid(int **grid, int height);
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
