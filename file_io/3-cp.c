#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

void close_file(int fd);
void handle_error(int code, const char *message, const char *filename);

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or exits with specific codes on failure.
 */
int main(int argc, char *argv[])

{

int file_from, file_to, r, w;
char buffer[BUFFER_SIZE];

if (argc != 3)
handle_error(97, "Usage: cp file_from file_to\n", NULL);

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
handle_error(98, "Error: Can't read from file ", argv[1]);

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
handle_error(99, "Error: Can't write to ", argv[2]);

while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
w = write(file_to, buffer, r);
if (w != r)
handle_error(99, "Error: Can't write to ", argv[2]);
}
if (r == -1)
handle_error(98, "Error: Can't read from file ", argv[1]);

close_file(file_from);
close_file(file_to);

return (0);
}

