#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at a given position in list.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: The data (n) to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	while (count < idx - 1)
	{
	if (temp == NULL)
	{
	free(new_node);
	return (NULL);
	}
	temp = temp->next;
	count++;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

