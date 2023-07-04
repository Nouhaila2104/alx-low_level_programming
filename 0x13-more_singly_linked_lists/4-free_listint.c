#include "lists.h"

/**
 * free_listint - frv2eees a linked list
 * @head: listint_t lisv2et to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
