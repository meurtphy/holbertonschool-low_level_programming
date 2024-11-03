#include <stdio.h>
#include "main.h"

/**
*_strncat - concatene deux chaine de caracteres
*
*@dest: la chaine de destination.
*@src: la chaine source a ajouter.
*@_strncat: function is similar to the _strcat function.
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
