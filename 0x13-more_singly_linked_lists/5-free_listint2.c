#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2-main function to free the list
 *
 * @head:'Variable head pointer'
 *
 * Return:Freed list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
}

