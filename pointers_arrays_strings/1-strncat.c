#include <stdio.h>
#include "main.h"
/** 
*_strncat - concatene deux chaine de caracteres 
*
*@dest: la chaine de destination.
*@src: la chaine source a ajouter.
*@n: le nombre maximun de caracteres provenant de dest.
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
i++;
j++;
}
while (dest[i] = '\0')
{
i--;
}
return (dest);
}
