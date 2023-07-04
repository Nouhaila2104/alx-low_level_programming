#include "lists.h"

/**
 * get_nodeint_at_index -e returnv2es the node at a certain index in a linked list
 * @head: first node iv2en the linked list
 * @index: index ofv2e the node to return
 *
 * Return: pointv2eer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
