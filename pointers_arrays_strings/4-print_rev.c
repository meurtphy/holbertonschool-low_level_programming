#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
int legt;
 
for (i = 0; s[i] != '\0'; i++)
{
legt = i;
for (i = legt - 1; i >= 0; i--)
_putchar(s[i]);
}
_putchar('\n');
}
       
   
