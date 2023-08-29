#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *currentnode, *nextnode;

	if (head == NULL || *head == NULL)
		return (NULL);
	currentnode = nextnode = *head;
	prevnode = NULL;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	*head = prevnode;
	return (prevnode);
}
