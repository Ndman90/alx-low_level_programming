#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *checker;
	checker = h;

	while (checker != NULL)
	{
		printf("%d\n", checker->n);
		checker = checker->next;
		nodes++;
	}
	return (nodes);
}
