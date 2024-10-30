#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints every other character of a string, starting with the first
* @str: The string to be printed
*/
void puts2(char *str)
{
int i;
int length = 0;
while (str[length] != '\0')
{
length++;
}
for (i = 0; i < length; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
