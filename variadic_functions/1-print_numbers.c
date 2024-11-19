#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a specified string.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Prints a newline at the end of the output. If separator is NULL,
 * it is not printed between numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pat;
unsigned int i;

va_start(pat, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(pat, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(pat);

printf("\n");
}




