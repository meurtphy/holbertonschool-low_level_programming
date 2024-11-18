#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array based on a comparison function
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to the function used to compare values
 *
 * Return: the index of the first matching element, or -1 if no match or invalid input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}



