#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatène deux chaînes de caractères.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 * @n: Nombre de caractères de s2 à ajouter.
 *
 * Return: Pointeur vers la nouvelle chaîne concaténée, ou NULL en cas d'échec.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1 = 0, len2 = 0;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n > len2)
n = len2;

result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j < n; j++)
result[i + j] = s2[j];

result[i + j] = '\0';

return (result);
}


