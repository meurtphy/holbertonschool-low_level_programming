#include "main.h"
#include <stdio.h>

/**
 * helper_prime - Fonction récursive pour vérifier les diviseurs d'un nombre.
 * @n: Le nombre à tester.
 * @divisor: Le diviseur en cours de vérification.
 *
 * Return: 1 si le nombre est premier, 0 sinon.
 */
int helper_prime(int n, int divisor)
{
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);
return (helper_prime(n, divisor + 1));
}
/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (helper_prime(n, 2));

}
