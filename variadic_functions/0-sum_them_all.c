#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Calculates the sum of all its parameters.
 * @n: Number of variadic arguments.
 *
 * Returns the sum of all passed parameters. If n is 0, returns 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list pat;
unsigned int i;
int sum;

sum = 0;

if (n == 0)
{
return (0);
}
va_start(pat, n);
for (i = 0 ; i < n; i++)
{
sum += va_arg(pat, int);
}
va_end(pat);
return (sum);
}


