#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t i = 0, count = 0;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = *head;
	*head = newnode;
	newnode->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	newnode->len = count;
	return (newnode);
}
