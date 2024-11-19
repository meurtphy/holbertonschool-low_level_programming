#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format specifiers.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list lastpato;
int k = 0;
char c;
int i;
float f;
char *s;

va_start(lastpato, format);
while (format && format[k] != '\0')
{
if (format[k] == 'c')
{
c = va_arg(lastpato, int);
printf("%c", c);
}
else if (format[k] == 'i')
{
i = va_arg(lastpato, int);
printf("%d", i);
}
else if (format[k] == 'f')
{
f = va_arg(lastpato, double);
printf("%f", f);
}
else if (format[k] == 's')
{
s = va_arg(lastpato, char*);
if (s == NULL)
s = "(nil)";
printf("%s", s);
}

k++;
}

va_end(lastpato);
printf("\n");
}

