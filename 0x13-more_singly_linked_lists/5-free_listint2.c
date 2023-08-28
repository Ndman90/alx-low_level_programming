#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tracker;

	if (head == NULL)
		return;
	tracker = *head;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(tracker);
		tracker = *head;
	}
	head = NULL;
}
