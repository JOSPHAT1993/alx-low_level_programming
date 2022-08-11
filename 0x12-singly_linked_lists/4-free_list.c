#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * free_list-main function to free a linked list
 *
 * @head:'Linked list head'
 *
 * Return:Empty the memorey occupied
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
