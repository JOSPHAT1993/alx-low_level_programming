#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint-main function to print a linked list
 *
 * @h:'variable pointer to head'
 *
 * Return:Linked lists elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h  != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

