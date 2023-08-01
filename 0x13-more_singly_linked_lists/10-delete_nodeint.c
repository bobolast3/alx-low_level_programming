#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev = NULL;
	unsigned int count = 0;
	
	if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    while (temp != NULL && count < index)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
        return (-1);

    prev->next = temp->next;
    free(temp);
    return (1);
}

