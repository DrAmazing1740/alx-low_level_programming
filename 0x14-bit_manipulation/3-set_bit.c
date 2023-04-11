#include "main.h"

/**
 * set_bit - will set value of a bit to 1 at a given index
 * @n: decimal number
 * @index: index position to make change, from 0
 * Return: 1 if good, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 80)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
