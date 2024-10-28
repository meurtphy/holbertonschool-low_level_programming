#include <stdio.h>
#include "main.h"

/**
* _isupper - cheks character
* @c: character to check
*
* return: return 1 or 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

