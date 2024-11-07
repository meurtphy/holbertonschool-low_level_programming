#include <stdio.h>

/**
 * main - Prints the program's name, followed by a new line.
 * @argc: Argument count (unused in this program).
 * @argv: Argument vector (array of strings).
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
    printf("%s\n", argv[0]);  // Prints the program name followed by a newline
    return 0;
}

