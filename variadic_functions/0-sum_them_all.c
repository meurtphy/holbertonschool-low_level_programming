#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Description: This function calculates the sum of all its parameters.
 * If n == 0, the function returns 0.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list pat;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(pat, n);
for (i = 0; i < n; i++)
sum += va_arg(pat, int);
va_end(pat);

return (sum);
}

