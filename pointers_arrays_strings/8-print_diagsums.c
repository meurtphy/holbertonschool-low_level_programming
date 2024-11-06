#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix (1D array).
 * @size: The size of one side of the square matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0, sum2 = 0;
    int i;

    for (i = 0; i < size; i++) 
    {
        sum1 += a[i * size + i];

        sum2 += a[i * size + (size - i - 1)];
    }

    printf("%d, %d\n", sum1, sum2);
}