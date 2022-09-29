#include "lists.h"
/**
 * add_dnodeint-function to add a node at start of dlink list
 *
 * @head:'head variable of a dlink list'
 * @n:'integer variable repre number to be inserted'
 *
 * Return:A new dlink lists with n inserted.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			ptr->next = NULL;
			ptr->prev = NULL;
			ptr->n = n;
			*head = ptr;
			return (ptr);
		}
		else
		{
			ptr->n = n;
			ptr->prev = NULL;
			ptr->next = *head;
			(*head)->prev = ptr;
			*head = ptr;
			return (ptr);
		}
	}
}
