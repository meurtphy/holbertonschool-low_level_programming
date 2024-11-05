#include "main.h"

/**
 * _strspn - Obtient la longueur du préfixe de `s` composé seulement de caractères dans `accept`
 * @s: La chaîne source
 * @accept: La chaîne contenant les caractères acceptés
 *
 * Return: Nombre de caractères dans le préfixe de `s` présents dans `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int count = 0;
    int found;

    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0;  // Réinitialise la variable pour chaque caractère de s

        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                count++;
                break;
            }
        }

        if (!found)
            break;
    }

    return count;
}