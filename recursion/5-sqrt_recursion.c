#include <stdio.h>
#include "main.h"
/**
 * helper - Finds the square root of two numbers
 *
 * @n: The number
 * @goal: The number to test for the square root of @a
 *
 * Return: square root
 */
int _keeper(int n, int goal)
{
if (goal * goal == n)
return (goal);
else if (goal * goal > n)
return (- 1);
return (keeper(n, goal + 1));
return(1);
}
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    return keeper(n, 1);
}