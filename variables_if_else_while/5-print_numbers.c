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
int x;

for (x = 0 ; x <= 9 ; x++)
{
putchar(x + '0');
}

putchar('\n');

return (0);
}
