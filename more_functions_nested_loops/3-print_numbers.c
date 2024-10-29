#include "main.h"
/**
* print_number: print the number from 0 to 9 followed by a new line
*
* Description: I only use _putchar for prints each digit from 0 to 9
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
