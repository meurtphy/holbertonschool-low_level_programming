#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
unsigned int count = 0;

while (head != NULL)
{
if (count == index)
return (head);

count++;
head = head->next;
}

return (NULL);
}

