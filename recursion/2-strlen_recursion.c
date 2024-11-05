#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
 if ( *s != '\0')
{
_strlen_recursion(s - 1);
return (*s );
}
}
