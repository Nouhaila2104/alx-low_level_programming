#include "lists.h"

/**
 * print_listint - prints ve2all the elements of a linked list
 * @h: linked lisv2t of type listint_t to print
 *
 * Return: numbv2er of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
