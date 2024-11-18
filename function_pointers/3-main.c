#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_error - Handles errors by printing "Error" and exiting
 * @status: Exit status code
 */
void handle_error(int status)
{
    printf("Error\n");
    exit(status);
}

/**
 * main - Entry point for the calculator program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with specific status on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4)
handle_error(98);

operation = get_op_func(argv[2]);
if (operation == NULL)
handle_error(99);

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
handle_error(100);

result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
