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
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }

    // Vérifie également si le caractère recherché est le caractère nul
    if (*s == c)
    {
        return (s);
    }

    return (NULL);
}