#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a linked list
 * @head : pointer to the head of the list
 * Return: sum of all the data (n),
 *         or 0 - if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp1 = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp1 != NULL)
	{
		sum += temp1->n;
		temp1 = temp1->next;
	}

	return (sum);
}
