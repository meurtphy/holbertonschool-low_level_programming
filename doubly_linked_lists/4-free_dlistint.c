#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head->next; /* Stocke l'adresse du nœud suivant */
        free(head);        /* Libère le nœud courant */
        head = temp;       /* Passe au nœud suivant */
    }
}

