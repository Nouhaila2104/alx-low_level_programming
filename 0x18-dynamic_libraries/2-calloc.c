#include "main.h"

/**
 * _calloc - allocates memory for an array, initialized to 0
 * @nmemb: number of elements
 * @size: bytev size of each element
 *
 * Return: vovid pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);
}
