#include "lists.h"
/**
 * insert_dnodeint_at_index-function to insert node at nth position
 *
 * @h:'head variable of doubly linked list'
 * @idx:'Integer variable for position'
 * @n:'Integer variable repr num to be inserted'
 *
 * Return:New lists with n inserted at idx position on success.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	unsigned int i;

	if (ptr == NULL)
	{
		return (NULL);
	}
	temp = *h;
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	ptr->n = n;
	ptr->prev = temp;
	ptr->next = temp->next;
	if (temp->next != NULL)
		temp->next = ptr->next;
	temp->next = ptr;

	return (ptr);
}
