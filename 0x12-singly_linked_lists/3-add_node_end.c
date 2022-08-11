#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end-main function to add a node at the end
 *
 * @head:'head of the linked list'
 * @str:'String variable'
 *
 * Return:Strings
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *first, *f;

	while (str[i])
		i++;

	first = malloc(sizeof(list_t));

	if (first == NULL)
		return (NULL);
	
	first->str = strdup(str);
	first->len = i;
	first->next = NULL;

	if (strdup(str) == NULL)
	{
		free(first);
		return (NULL);
	}
	
	if (*head == NULL)
	{
		*head = first;
		return (first);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
		{
			f = f->next;
		}
		f->next = first;
		return (first);
	}
}
