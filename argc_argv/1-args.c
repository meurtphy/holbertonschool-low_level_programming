#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector (array of strings, unused here)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
    // Print the number of arguments, excluding the program name itself
    printf("%d\n", argc - 1);

    return 0;
}
