#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the list
 * @index: index of the node
 *
 * Return: nth node of the list
 *	if node doesnt exist - NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp1 = head;
	unsigned int i;

	for (i = 0; i < index && (temp1->next); i++)
	{
		temp1 = temp1->next;
	}

	return (temp1);
}
