#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Pointer to a pointer to the first element of a linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev_node = NULL;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index; i++)
	{
		prev_node = temp;
		temp = temp->next;
	}

	if (i < index || !temp)
		return (-1);

	prev_node->next = temp->next;
	free(temp);

	return (1);
}

