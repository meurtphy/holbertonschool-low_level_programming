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
int j;
int legt;
 
for (i = 0; s[i] != '\0'; i++)
{
legt = i;
for (j = legt - 1; 0 <= j; j--)
_putchar(s[j]);
}
_putchar('\n');
}
       
   
