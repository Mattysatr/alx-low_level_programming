#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - loop to create a grid
 * @width: width input
 * @height: height input
 * Return: pointer to two dimentional array
 */
int **alloc_grid(int width, int height)
{
int **gri;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

gri = malloc(sizeof(int *) * height);

if (gri == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
gri[x] = malloc(sizeof(int) * width);

if (gri[x] == NULL)
{
for (; x >= 0; x--)
free(gri[x]);

free(gri);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
gri[x][y] = 0;
}

return (gri);

}
