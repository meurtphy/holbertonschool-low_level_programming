#include "main.h"

/**
 * _strchr - Localise un caractère dans une chaîne.
 * @s: La chaîne de caractères.
 * @c: Le caractère à localiser.
 *
 * Return: Un pointeur vers la première occurrence de `c` dans `s`,
 * ou NULL si le caractère n'est pas trouvé.
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
    // Si `c` est '\0', on retourne un pointeur vers celui-ci dans `s`
    if (c == '\0')
        return s;
    
    return NULL;
}