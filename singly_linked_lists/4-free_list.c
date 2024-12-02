#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function frees all the memory allocated
 * for the list_t list, including the strings and nodes.
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}

