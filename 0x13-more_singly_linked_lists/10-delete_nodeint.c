#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index-main function to delete a node
 *
 * @head:'Variable to point to the head'
 * @index:'Integer variable to stand for nth node'
 *
 * Return:List with element removed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *rem = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		while (temp != NULL && count != index - 1)
		{
			count++;
			temp = temp->next;
		}
		if (count != index - 1)
			return (-1);
		rem = temp->next;
		temp->next = temp->next->next;
		free(rem);
		return (1);
	}
}

