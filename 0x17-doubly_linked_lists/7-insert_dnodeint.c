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
	dlistint_t *tmp, *new;
	unsigned int dex = 1;

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (tmp->next != NULL && dex != idx)
	{
		tmp = tmp->next;
		dex++;
	}
	if (dex == idx)
	{
		new->prev = tmp;
		new->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
