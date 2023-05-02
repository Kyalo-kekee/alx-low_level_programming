#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: param pointer to the head node of the linked list
 * @index: param -index of the node to return (starting at 0)
 *
 * Return: pointer to the nth node of the linked list,
 * or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (i != index || current == NULL)
		return (NULL);

	return (current);
}


