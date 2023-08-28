#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *checker;

	checker = h;

	while (checker != NULL)
	{
		nodes++;
		checker = checker->next;
	}
	return (nodes);
}
