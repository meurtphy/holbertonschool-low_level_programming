#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - Imprime l'alphabet 10 fois
*
* Description: Utilise _putchar pour imprimer l'alphabet en
*              minuscule dix fois, suivi d'une nouvelle ligne.
* Return: void
*/

void print_alphabet_x10(void)
{
int num;
const char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";

for (num = 0; num < 10; num++)
{
const char *current = alphabet;
while (*current)
{
_putchar(*current++);
}
}
}
