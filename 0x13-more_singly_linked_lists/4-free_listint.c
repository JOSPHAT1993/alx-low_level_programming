#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint-main function to free a list
 *
 * @head:'Variable for head pointer'
 *
 * Return:Freed memory
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
