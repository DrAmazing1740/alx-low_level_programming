#include "lists.h"

/**
 * add_nodeint_end - will add a node to the end of the linked list
 * @head: this will point to the first element in the list
 * @n: the data to that will be inserted inside the new element
 *
 * Return: will point to the new node, or it will give NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
