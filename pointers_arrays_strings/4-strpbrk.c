char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++) // Parcourir chaque caractère de `s`
    {
        for (j = 0; accept[j] != '\0'; j++) // Parcourir chaque caractère de `accept`
        {
            if (s[i] == accept[j]) // Si une correspondance est trouvée
                return &s[i]; // Retourne un pointeur vers la première occurrence dans `s`
        }
    }
    return NULL; // Si aucun caractère de `accept` n'est trouvé dans `s`
}
    }