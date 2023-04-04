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
	unsigned int i;
	listint_t *new, *temp1 = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp1;
		temp1 = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		temp1 = temp1->next;
		if (temp1 == NULL)
			return (NULL);
	}
	new->next = temp1->next;
	temp1->next = new;

	return (new);
}
