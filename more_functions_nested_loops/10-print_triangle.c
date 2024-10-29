#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_triangle(int size)
{
int gri;
int tri;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (gri = 0; gri < n; gri++)
{
for (tri = 0; tri < n; tri--)
{
if (gri == tri)
_putchar('#');
else if (gri < tri)
_putchar(' ');
}
_putchar('\n');
}
}
}
