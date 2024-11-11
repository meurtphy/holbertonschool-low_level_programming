#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Allocates a 2D grid and initializes all elements to 0.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the 2D array, or NULL if failure.
 */
int **alloc_grid(int width, int height)
{
int **greedo;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
greedo = malloc(height * sizeof(int *));
if (greedo == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
greedo[i] = malloc(width * sizeof(int *));
if (greedo[i] == NULL)
return (NULL);
{
for (j = 0; j < i; j++)
grid[i][j] = 0;

}
return (greedo);

}
