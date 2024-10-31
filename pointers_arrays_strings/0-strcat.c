#include <stdio.h>
#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int bebe = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[bebe] == '\0')
{
dest[i] = src[bebe];
i++;
bebe++;
}
dest[i]='\0';
return (dest);
}
   
