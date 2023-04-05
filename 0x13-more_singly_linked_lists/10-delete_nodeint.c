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
	listint_t *temp1 = *head, *curr;
	unsigned int i;

	if (temp1 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp1 == NULL || temp1->next == NULL)
			return (-1);

		temp1 = temp1->next;
	}
	curr = temp1->next;
	temp1->next = curr->next;
	free(curr);

	return (1);
}
