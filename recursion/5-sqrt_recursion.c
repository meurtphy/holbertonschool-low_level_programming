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
int _sqrt_recursion(int n)
{
int goal;
if (goal * goal == n)
return (goal);
else if (goal * goal > n)
return (goal);
else
return (_sqrt_recursion(goal, b + 1));
return(1);
}