#include "main.h"

/**
 * _strspn - Calcule la longueur du préfixe de `s` contenant seulement des caractères dans `accept`.
 * @s: La chaîne source.
 * @accept: La chaîne des caractères acceptés.
 *
 * Return: Le nombre de caractères dans le préfixe de `s` présents dans `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i;

    while (*s)  // Parcourt chaque caractère de `s`
    {
        for (i = 0; accept[i]; i++)  // Parcourt chaque caractère de `accept`
        {
            if (*s == accept[i])  // Si on trouve une correspondance
            {
                count++;  // Incrémente le compteur
                break;
            }
        }
        if (!accept[i])  // Si aucun caractère dans `accept` ne correspond
            break;
        s++;  // Passe au caractère suivant de `s`
    }

    return count;
}