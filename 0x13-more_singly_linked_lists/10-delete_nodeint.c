#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (indices starting at 0)
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prevnode, *deletenode;
	unsigned int i, nodecount, count = 0;

	if (head == NULL)
		return (-1);
	temp = deletenode = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	nodecount = count;
	if (index >= nodecount)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			prevnode = deletenode;
			deletenode = deletenode->next;
		}
		prevnode->next = deletenode->next;
		free(deletenode);
		return (1);
}
