#include "main.h"

/**
* print_square:Print a square of '#' character
*@size The size of the square
* Description: Prints a square of size x size using '#'
*
*
*/
void print_square(int size)
{
int row, col;
if (size <= 0)
{
_putchar ('\n');
}

for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
_putchar('#');
{
}
_putchar('\n');
}
}
