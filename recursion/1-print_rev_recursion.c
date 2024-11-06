#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractères à l'envers en utilisant la récursion.
 * @s: La chaîne de caractères à afficher en inverse.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0') 
{
_print_rev_recursion(s + 1);
 _putchar(*s);
}
}
