#include "main.h"
/**
 * append_text_to_file - append text at the end of file
 * @filename: name of the file
 * @text_content: a NULL terminated string to add at the end of file
 * Return: 1 succes, -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t w, len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
w = write(fd, text_content, len);
if (w == -1 || w != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}