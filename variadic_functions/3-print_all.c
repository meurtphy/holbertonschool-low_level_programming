#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format specifiers.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
int k = 0;
char *sep = "", *str;

va_start(args, format);

while (format && format[k])
{
switch (format[k])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
k++;
continue;
}
sep = ", ";
k++;
}

va_end(args);
printf("\n");
}


