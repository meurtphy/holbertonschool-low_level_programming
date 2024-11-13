#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory and exits on failure.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to allocated memory, or exits with status 98 on failure.
 */
void *malloc_checked(unsigned int **b)
{
void *ptr
ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}









}