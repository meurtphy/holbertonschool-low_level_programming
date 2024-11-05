#include "main.h"

/**
 * _strpbrk - Cherche le premier caractère dans `s` qui correspond à un des caractères dans `accept`
 * @s: La chaîne à analyser
 * @accept: La chaîne contenant les caractères acceptés
 *
 * Return: Un pointeur vers le caractère correspondant dans `s`, ou NULL si aucun caractère n'est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)  // Parcourir chaque caractère de `s`
    {
        for (j = 0; accept[j] != '\0'; j++)  // Vérifier chaque caractère de `accept`
        {
            if (s[i] == accept[j])  // Correspondance trouvée
            {
                return &s[i];  // Retourne un pointeur vers le caractère correspondant dans `s`
            }
        }
    }

    return NULL;  // Aucun des caractères n'est trouvé
}
