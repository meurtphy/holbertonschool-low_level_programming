#include "main.h"

/**
* _strcpy - Copies the string pointed to by src, including the null byte (\0),
*           to the buffer pointed to by dest.
* @dest: The destination buffer where the string is copied.
* @src: The source string to copy.
*
* Return: The pointer to dest.
*/
char *_strcpy(char *dest, const char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return dest;
}
