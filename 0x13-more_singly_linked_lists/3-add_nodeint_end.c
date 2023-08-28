#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addednode, *tracker;

	addednode = (listint_t *)malloc(sizeof(listint_t));
	if (addednode == NULL)
		return (NULL);
	addednode->n = n;
	if (*head == NULL)
		*head = addednode;
	tracker = *head;
	while (tracker->next != NULL)
	{
		tracker = tracker->next;
	}
	tracker->next = addednode;
	addednode->next = NULL;
	return (addednode);
}
