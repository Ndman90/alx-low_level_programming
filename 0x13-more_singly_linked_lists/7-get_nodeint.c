#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the desired node,
 *         or NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *nodeptr;
	unsigned int i, nodecount, count = 0;

	if (head == NULL)
		return (NULL);
	temp = nodeptr = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	nodecount = count;

	for (i = 0; i < index; i++)
	{
		if (nodecount < index)
			return (NULL);
		nodeptr = nodeptr->next;
	}
	return (nodeptr);
}
