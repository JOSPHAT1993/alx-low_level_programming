#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * list_le-function to return length of a list
 *
 * @h:'Variable to repre  head'
 *
 * Return:Length of the list
 */
size_t list_le(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * get_nodeint_at_index-main function find nth node
 *
 * @head:'Variable repre head node'
 * @index:'Integer variable for nth value'
 *
 * Return:Value at index nth or none if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node = head;

	while(index > list_le(head))
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
		new_node = new_node->next;

	return (new_node);
}
