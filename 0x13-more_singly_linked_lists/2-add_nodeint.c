#include "lists.h"

/**
 * add_nodeint - This will add a new node at the beginnin of the linked list
 * @head: point to the beginning node inside the list
 * @n: what to insert in the new node
 *
 * Return: point to that new node, or it will be NULL if it fails to
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new) 
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
