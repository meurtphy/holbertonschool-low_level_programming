#include "main.h"
/**
* _memcpy - _memcpy
* @dest: char
* @src: char
*@n: int
* Return: Nothing.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);

}

