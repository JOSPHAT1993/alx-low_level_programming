#include "lists.h"
/**
 * add_dnodeint_end-function to insert a node at end
 *
 * @head:'head node of the dblik list'
 * @n:'integer variable for number being inserted'
 *
 * Return:Return a new node at end of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->n = n;

		if (*head == NULL)
		{
			ptr->next = NULL;
			ptr->prev = NULL;
			*head = ptr;
			return (ptr);
		}
		else
		{
			temp = *head;

			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->prev = temp;
			ptr->next = NULL;
			return (ptr);
		}
	}
}

