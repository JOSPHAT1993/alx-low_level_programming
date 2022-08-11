#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node-main function to print new node
 *
 * @head:'Pointer to a pointer variable head'
 * @str:'Variable for string'
 *
 * Return:New node and duplicate of text
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	first = malloc(sizeof(list_t));
	if(first == NULL)
	{
		return(NULL);
	}
	first->str = strdup(str);
	first->len = count;

	first->next = *head;
	*head = first;

	return (first);
}
