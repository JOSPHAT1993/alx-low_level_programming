#include "lists.h"
/**
 * dlistint_len-function to print len of list
 *
 * @h:'Header for the linked list'
 *
 * Return:Count of nodes in dlink list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
