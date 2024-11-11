#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères et l'initialise avec un char spécifique
 * @size: taille du tableau
 * @c: char utilisé pour initialiser le tableau
 *
 * Return: pointeur vers le tableau, ou NULL en cas d'échec
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}