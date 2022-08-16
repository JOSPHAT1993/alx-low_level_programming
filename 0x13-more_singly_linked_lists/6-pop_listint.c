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
	listint_t *tmp = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		value = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (value);
}
