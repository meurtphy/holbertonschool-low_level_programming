#include "main.h"
/**
* _strchr - Localise un caractère dans une chaîne
* @s: La chaîne à parcourir
* @c: Le caractère à rechercher
*
* Return: Un pointeur vers la première occurrence du caractère c
*         dans la chaîne s, ou NULL si le caractère n'est pas trouvé.
*/

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }
    if (c == '\0')  // Si on cherche le caractère nul, retourne le pointeur vers lui.
    {
        return (s);
    }
    return (NULL);  // Caractère non trouvé
}