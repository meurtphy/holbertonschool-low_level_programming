#include <stdio.h>
#include "main.h"
/**
* _strcmp - Compares two strings.
* @s1: First string.
* @s2: Second string.
*
* Return: Negative if `s1` < `s2`, 0 if equal, positive if `s1` > `s2`.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
