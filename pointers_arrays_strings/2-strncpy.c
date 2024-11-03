#include "main.h"
#include <stdio.h>

/**
* _strncpy - Copies up to n characters from src to dest
* @dest: Destination buffer
* @src: Source string
* @n: Maximum number of characters to copy
* Return: Pointer to dest
*/

char *_strncpy(char *dest, const char *src, size_t n)
{
size_t i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
