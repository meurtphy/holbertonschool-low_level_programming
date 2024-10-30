#include "main.h"
/**
 * print_triangle - draws a triangle line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_triangle(int size)
{
int gri, tri;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (gri = 0; gri < size; gri++)
{
for (tri = 0; tri < size -gri -1; tri ++)
{
_putchar(' ');
}
for (tri = 0; tri <= gri; tri++)
{
_putchar('#');
}
_putchar('\n');
}
}
}