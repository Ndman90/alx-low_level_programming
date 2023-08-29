#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *prevnode = 0, *newnode, *nextnode;
	unsigned int i, nodecount, count = 0;

	if (head == NULL)
		return (NULL);
	temp = nextnode = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	nodecount = count;

	if (node_data < idx)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		prevnode = nextnode;
		nextnode = nextnode->next;
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = nextnode;
	if (idx == 0)
		*head = newnode;
	prevnode->next = newnode;
	return (newnode);
}
