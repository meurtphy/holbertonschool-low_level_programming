#include <stdio.h>
#include "main.h"

/**
* _isupper - checks character if a character is uppercase
* @c: character to check
*
* Return: return 1 if uppercase, 0 otherwise
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

