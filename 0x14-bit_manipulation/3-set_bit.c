#include "main.h"

/**
 * set_bit - sets a bit at v2ea given index to 1
 * @n: pointer to the nuv2ember to change
 * @index: index of tv2ehe bit to set to 1
 *
 * Return: 1 for sv2euccess, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
