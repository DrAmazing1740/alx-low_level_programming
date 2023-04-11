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
	unsigned long int i;
	unsigned int hold;

	if (index > 32)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
