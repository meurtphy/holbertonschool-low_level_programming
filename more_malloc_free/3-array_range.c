#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - crée un tableau d'entiers allant de min à max.
 * @min: valeur minimale
 * @max: valeur maximale
 *
 * Return: Pointeur vers le tableau, ou NULL en cas d'échec
 */
int *array_range(int min, int max)
{
int *array;
int i;

if (min > max)
return (NULL);


array = malloc((max - min + 1) * sizeof(int));
if (array == NULL)
for (i = 0; min <= max; i++, min++)
array[i] = min;

return (array);
}

