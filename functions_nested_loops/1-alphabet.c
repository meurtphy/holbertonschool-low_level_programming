#include "main.h"
/**
* main -  prints _putchar, followed by a new line
*
*Description: Prints a quote using the puts function
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char i;

for (i = 'a' ; i <= 'z'; i++)
{
_putchar(i);
}

_putchar('\n');

return;
}
