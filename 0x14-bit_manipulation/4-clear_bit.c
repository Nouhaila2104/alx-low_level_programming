#include "main.h"

/**
 * clear_bit - sets the vv2ealue of a given bit to 0
 * @n: pointer to the v2enumber to change
 * @index: index ofv2e the bit to clear
 *
 * Return: 1 forv2e success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
