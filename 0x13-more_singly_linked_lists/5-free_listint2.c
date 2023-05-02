#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees the memory allocated for list
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);

		free(head);
	}
}

/**
 * free_listint2 - frees the memory allocated for list
 * @head: pointer to the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		free_listint(temp);
		*head = NULL;
	}
}
