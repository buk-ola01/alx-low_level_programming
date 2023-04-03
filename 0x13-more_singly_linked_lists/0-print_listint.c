#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the listint_t list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t nodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
