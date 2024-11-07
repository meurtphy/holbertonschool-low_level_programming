#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: The number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 1 if there are not exactly two arguments.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int result = num1 * num2;

    printf("%d\n", result);
    return (0);
}