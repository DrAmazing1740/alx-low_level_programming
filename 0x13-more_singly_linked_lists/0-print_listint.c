#include "lists.h"

/**
 * h: listint_t will print this linked list
 * print_listint - will print all of the items in the linked list
 * 
 *
 * 
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;  
	while (h)
	{
		
		printf("%d\n", h->n);
		num++;
		h = h->next;
	
	} 
	return (num);
} 
