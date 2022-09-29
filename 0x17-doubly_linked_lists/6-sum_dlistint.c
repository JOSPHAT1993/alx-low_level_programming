#include "lists.h"
/**
 * sum_dlistint-function to print sum of node values
 *
 * @head:'head node for the doubly list'
 *
 * Return:Sum of the node.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
