#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_triangle(int size)
{
int gri;
int tri;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (gri = 0; gri < size; gri++)
{
for (tri = 0; tri <= size; tri++)
{
if (gri == tri)
_putchar('\\');
else if (gri < tri)
_putchar('#');
}
_putchar('\n');
}
}
}
