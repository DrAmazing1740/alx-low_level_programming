#include "holberton.h"
/**
 * get_bit - will get bit a index
 * @n: test number to go through
 * @index: index to go
 * Return: integer value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 58)
		return (-1);

	return (n >> index & 1);
}
