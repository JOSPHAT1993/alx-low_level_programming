#include "lists.h"
#include <stdlib.h>
/**
 * getsize-function to print size of linked list
 *
 * @h:'Variable repre head pointer'
 *
 * Return:Size of the linkedlist
 */
size_t getsize(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
/**
 * insert_nodeint_at_index-main function to insert a node
 *
 * @head:'Variable repre head pointer'
 * @idx:'Integer variable repre nth node'
 * @n:'Interger variable repre value in node'
 *
 * Return:Success if Created and null if not created
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = getsize(*head);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx > len)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *temp = *head;

		while (--idx)
			temp = temp->next;
		new_node->next = temp->next;
		temp->next = new_node;
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	return (new_node);
}



