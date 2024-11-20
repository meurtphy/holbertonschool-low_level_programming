#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name using a function pointer
* @name: the name to print
* @f: pointer to a function that takes a char
*
*/

void print_name(char *name, void (*f)(char *))
{

if (f != NULL && name != NULL)
f(name);

}






