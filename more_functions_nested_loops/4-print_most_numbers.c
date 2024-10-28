#include <stdio.h>
#include "main.h"

/**
* print_most_number - Prints the number from 0 to 9, followed by a new line
*
* Description: Uses _putchar to print digit from 0 to 9, and skipping
* the digit 2 and 4
*
* Return: void
*/

void print_most_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
_putchar(i);
}
_putchar('\n');
}
