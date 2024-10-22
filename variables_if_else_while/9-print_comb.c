#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in uppercase
 *
 * Description: This program prints the alphabet in uppercase,
 * followed by a new line. Only putchar can be used.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0 ; num <= 9 ; num++)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
}
Putchar('\n');

return (0);
}