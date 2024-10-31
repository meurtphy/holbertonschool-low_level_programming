#include "main.h"
#include <stdio.h>
/**
* _strcat - Concatène la chaîne src à la fin de la chaîne dest.
* @dest: La chaîne de destination où src sera ajoutée.
* @src: La chaîne source à ajouter à dest.
*
* Return: Un pointeur vers la chaîne résultante dest.
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
