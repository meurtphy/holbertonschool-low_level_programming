#include <stdio.h>
#include "main.h"

/**
 * _keeper - Essaie de trouver la racine carrée de `n` en utilisant `goal`.
 * @n: Le nombre dont on veut trouver la racine carrée.
 * @goal: Le nombre à tester pour être la racine carrée de `n`.
 *
 * Return: La racine carrée de `n` ou -1 si `n` n'a pas de racine carrée naturelle.
 */
int _keeper(int n, int goal)
{
    if (goal * goal == n)
        return goal;
    else if (goal * goal > n)
        return -1;
    return _keeper(n, goal + 1);
}

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle de `n`.
 * @n: Le nombre dont on veut trouver la racine carrée.
 *
 * Return: La racine carrée de `n` ou -1 si `n` n'a pas de racine carrée naturelle.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    return _keeper(n, 1);
}
