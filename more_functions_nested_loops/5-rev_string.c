#include "main.h"
#include <stdio.h>

/**
 * void rev_string - reverse a string
 *
 * 
 */
void rev_string(char *s);
int main(void)
{
char s[10] = "My School";
strrev(s);
printf("%s\n", s);
rev_string(s);
printf("%s\n", s);
return (0);
}
