#include "main.h"
/**
* print_number - Prints the number from 0 to 9, followed by a new line
*
* Description: Prints each digit from 0 to 9
* using _putchar, followed by a newline character
*
* Return: void
*/
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
