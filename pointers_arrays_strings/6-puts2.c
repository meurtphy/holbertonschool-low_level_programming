#include "main.h"
#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i+= 2)
{
for (str[i] == '\0')
_putchar(str[i]);
}
_putchar('\n');
}
