#include "lists.h"
/**
 * get_dnodeint_at_index-function to get nth node
 *
 * @head:'head node of doubly lists'
 * @index:'Integer variable for nth position'
 *
 * Return:Node at position index on success, null for failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;

	while (temp != NULL && count != index)
	{
		count++;
		temp = temp->next;
	}
	if (index == count)
	{
		return (temp);
	}
	else
		return (NULL);
}

