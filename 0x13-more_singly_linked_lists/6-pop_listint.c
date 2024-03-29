#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and
 *	returns the head node's data.
 * @head: pointer to head of the list.
 *
 * Return:  if the linked list is empty - 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp1 = *head;
	int n;

	if (*head == NULL)
		return (0);

	*head = temp1->next;
	n = temp1->n;
	free(temp1);

	return (n);
}
