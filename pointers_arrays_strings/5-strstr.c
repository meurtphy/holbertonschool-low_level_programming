#include "main.h"

/**
 * _strstr - Trouve la première occurrence de `needle` dans `haystack`
 * @haystack: La chaîne principale où chercher
 * @needle: La sous-chaîne à trouver
 *
 * Return: Un pointeur vers le début de la sous-chaîne trouvée,
 * ou NULL si la sous-chaîne n'est pas trouvée
 */
char *_strstr(char *haystack, char *needle)
{
    int i;

    if (*needle == '\0')
        return haystack;

    while (*haystack)
    {
        i = 0;
        while (needle[i] && haystack[i] == needle[i])
            i++;

        if (needle[i] == '\0')
            return haystack;

        haystack++;
    }

    return NULL;
}
