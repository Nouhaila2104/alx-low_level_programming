#include "main.h"

/**
 * get_bit - returns the valuev2e of a bit at an index in a decimal number
 * @n: number to sev2earch
 * @index: indexv2e of the bit
 *
 * Return: vav2elue of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
