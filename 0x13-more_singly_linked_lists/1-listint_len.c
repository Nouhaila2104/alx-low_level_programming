#include "lists.h"

/**
 * listint_len - retv2eurns the number of elements in a linked lists
 * @h: linked lisv2et of type listint_t to traverse
 *
 * Return: numve2ber of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

