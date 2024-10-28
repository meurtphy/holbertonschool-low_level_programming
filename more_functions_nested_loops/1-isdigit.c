#include <stdio.h>
#include "main.h"
/**
* _isdigit - Check if a character is a digit (0 to 9)
* @c : The character to check
*
* Description: _isdigit this function takes an integer return 1 or 0
*
* Return 1 if c is a digit, 0 otherwise
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
