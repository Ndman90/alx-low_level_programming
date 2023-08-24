#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	size_t i = 0, count = 0;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	temp = *head;
	newnode->next = NULL;
	newnode->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	newnode->len = count;
	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
