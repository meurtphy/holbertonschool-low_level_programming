#include "main.h"
#include <stdio.h>

/**
* leet - Encodes a string into 1337 (leet) format
* @str: The string to encode
*
* Description: This function replaces specific characters in the
* string with their corresponding leet (1337) representations.
* Letters 'a'/'A', 'e'/'E', 'o'/'O', 't'/'T', and 'l'/'L' are
* replaced with '4', '3', '0', '7', and '1' respectively.
*
* Return: A pointer to the resulting string
*/
char *leet(char *str)
{
int i, j;
char to_replace[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char replacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == to_replace[j])
{
str[i] = replacements[j];
break;
}
}
}
return (str);
}
