#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data(node_data)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tracker;
	int node_data;

	if (head == NULL)
		return (0);
	tracker = *head;
	*head = (*head)->next;
	node_data = tracker->n;
	free(tracker);
	return (node_data);
}
