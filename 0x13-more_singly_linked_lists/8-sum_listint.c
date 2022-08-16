#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint-main function to print sum of nodes
 *
 * @head:'Variable repre head pointer'
 *
 * Return:Sum of nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
}
