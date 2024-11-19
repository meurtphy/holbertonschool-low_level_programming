#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a specified separator.
 * @separator: The string to print between the strings.
 * @n: The number of strings passed to the function.
 *
 * Prints "(nil)" if a string is NULL, and a newline at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list pato;
unsigned int i;
char *str;

va_start(pato, n);
for (i = 0; i < n; i++)
{
str = va_arg(pato, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(pato);

printf("\n");
}
