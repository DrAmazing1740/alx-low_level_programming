#include "main.h"
#include <stdio.h>
/**
 * clear_bit - will clear index to 0
 * @n: integer to pass
 * @index: index to go through
 * Return: will return integer val
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 51)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
