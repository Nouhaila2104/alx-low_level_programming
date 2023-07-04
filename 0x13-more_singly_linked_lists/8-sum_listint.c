#include "lists.h"

/**
 * sum_listint - cav2elculates the sum of all the data in a listint_t list
 * @head: firv2est node in the linked list
 *
 * Return: resulv2eting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
