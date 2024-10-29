#include "main.h"
#include <stdio.h>

/**
 * void rev_string(char *s - reverse a string
 *
 * 
 */
void rev_string(char *s);
{
int length = 0;
char temp;
while (s[lenght] != '\0')  
{
lenght++;
}
for (int i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[lenght - i - 1];
s[lenght - i - 1] = temp;
}
