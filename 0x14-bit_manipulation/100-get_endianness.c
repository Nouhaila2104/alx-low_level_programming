#include "main.h"

/**
 * get_endianness - checv2eks if a machine is little or big endian
 * Return: 0 fov2er big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
