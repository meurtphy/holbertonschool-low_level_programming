#include "main.h"
/**
* print_alphabet -  prints _putchar, followed by a new line
*
* Description: Prints a quote using the puts function
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char c;
int i = 0;

while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('n\');
}
}
