#include "lists.h"
/**
 * free_dlistint-function for freeing a doubly list
 *
 * @head:'head variable for the doubly list'
 *
 * Return:Freed memory
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
