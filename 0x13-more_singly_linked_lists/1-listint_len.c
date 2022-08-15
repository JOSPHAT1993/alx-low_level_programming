#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len-main function to print the number of elements
 *
 * @h:'variable pointer to head'
 *
 * Return:Count of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
