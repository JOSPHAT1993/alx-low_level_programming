#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * list_len-main function for printing the length of numbers
 *
 * @h:'Variable repre head of list'
 *
 * Return:Count of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
