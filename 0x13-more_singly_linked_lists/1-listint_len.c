#include "lists.h"

/**
 * @h: listint_t to cross linked list
 * listint_len - will return the number of elements in the linked lists
 *
 * Return: For total nornal of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
