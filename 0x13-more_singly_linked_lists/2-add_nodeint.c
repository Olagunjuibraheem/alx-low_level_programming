#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: poinyer to poinyer to node
 * @n: integers to print
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_begin;

	add_begin = malloc(sizeof(listint_t));
	if (add_begin == NULL)
		return (NULL);

	add_begin->n = n;
	add_begin->next = *head;
	*head = add_begin;

	return (add_begin);

}
