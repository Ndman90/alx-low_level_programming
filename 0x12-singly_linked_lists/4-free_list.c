#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *newnode;

	newnode = head;
	while (head != NULL)
	{
		head = head->next;
		free(newnode->str);
		free(newnode);
		newnode = head;
	}
}
