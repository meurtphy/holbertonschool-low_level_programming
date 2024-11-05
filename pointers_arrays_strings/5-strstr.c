#include "main.h"
#include <stddef.h>
/**
 * _strstr - Finds the first occurrence of the substring needle in the string haystack.
 * @haystack: The main string to be examined.
 * @needle: The substring to be searched.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (*needle == '\0')  // Si needle est vide, retourne haystack
        return haystack;

    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[i + j] != needle[j])  // Vérifie la correspondance
                break;
        }
        if (needle[j] == '\0')  // Si on a atteint la fin de needle
            return &haystack[i];
    }
    return NULL;
}