#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint-main function to delete head node
 *
 * @head:'Variable head pointer'
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (value);
	}
	else
	{
		tmp = *head;
		value = tmp->n;
		free(*head);
		*head = tmp->next;
		return (value);
	}
}
