#include "lists.h"
/**
 * reverse_listint-main function to reverse a list
 *
 * @head:'Variable repre head'
 *
 * Return:Reversed values of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *new = NULL;

	while (current != NULL)
	{
		new = current->next;
		current->next = prev;
		prev = current;
		current = new;
	}
	*head = prev;
	return (*head);
}
