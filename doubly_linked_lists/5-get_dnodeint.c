#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve, starting from 0
 *
 * Description: This function traverses the list until it reaches the
 *              node at the given index or until the end of the list.
 *              If the index is out of range, it returns NULL.
 *
 * Return: Address of the nth node, or NULL if it doesn't exist
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

