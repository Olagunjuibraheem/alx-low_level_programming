#include "lists.h"

/**
 * add_nodeint_end- function that adds a new node at the end of a list.
 * @head: pointer to pointer to node
 * @n: integers to print
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end, *link_node;

	add_end = malloc(sizeof(listint_t));
	if (add_end == NULL)
		return (NULL);

	add_end->n = n;

	if (*head == NULL)
		*head = add_end;
	else
	{
		link_node = *head;
		while (link_node->next != NULL)
			link_node = link_node->next;
		link_node->next = add_end;
	}
	return (add_end);
}
