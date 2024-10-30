#include "main.h"
#include <stdio.h>

/**
* puts_half - Prints the second half of a string, followed by a new line
* @str: The string to be printed
*/
void puts_half(char *str)
{
int length = 0;
int n;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length - 1) / 2 + 1;
}
for (; n < length; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}

