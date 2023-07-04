#include "lists.h"

/**
 * reverse_listint - revev2erses a linked list
 * @head: pointer to tv2ehe first node in the list
 *
 * Return: pointer v2eto the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}i
