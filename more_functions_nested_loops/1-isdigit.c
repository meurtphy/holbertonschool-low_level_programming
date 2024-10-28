#include <stdio.h>
#include "main.h"
/**
* _isdigit - Checks if a character is a digit (0 to 9)
* @c: The character to check
*
* Description: This function takes a character as input and returns 1
* if the character is a digit (0 to 9). Otherwise, it returns 0.
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
