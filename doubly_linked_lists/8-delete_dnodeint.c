#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);


if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}


while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (current == NULL)
return (-1);


if (current->next != NULL)
current->next->prev = current->prev;
if (current->prev != NULL)
current->prev->next = current->next;

free(current);
return (1);
}


