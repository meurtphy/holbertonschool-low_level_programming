#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, initialized to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Description - Allocates `nmemb * size` bytes of memory, returning NULL if
 *
 * Return: Pointer to allocated memory, or NULL if an error occurs.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

void *ptr;
unsigned int total_size;
unsigned char *byte_ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
if (total_size / nmemb != size)
return (NULL);

ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
byte_ptr = (unsigned char *)ptr;
for (i = 0; i < total_size; i++)
byte_ptr[i] = 0;

return (ptr);

}
