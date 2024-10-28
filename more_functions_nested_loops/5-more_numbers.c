#include "main.h"
/**
* print_number - Prints the number from 0 to 9, followed by a new line
*/
void print_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
putchar((j % 10) + '0');
}
_putchar ('\n');
}
}
