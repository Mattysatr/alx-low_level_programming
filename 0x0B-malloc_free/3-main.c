#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prototype that returns a pointer to two dimention
 * @grid: the address of each grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
int w;
int h;

h = 0;
while (h < height)
{
w = 0;
while (w < width)
{
printf("%d ", grid[h][w]);
w++;
}
printf("\n");
h++;
}   
}

/**
 * main - check code.
 *
 * Return: Always 0.
 */
int main(void)
{
int **grid;

grid = alloc_grid(6, 4);
if (grid == NULL)
{
return (1);
}
print_grid(grid, 6, 4);
printf("\n");
grid[0][3] = 98;
grid[3][4] = 402;
print_grid(grid, 6, 4);
return (0);
}
