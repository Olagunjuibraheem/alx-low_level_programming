#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pionter to pointer to  be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *free_node;

	while (*head != NULL)
	{
		free_node = (*head)->next;
		free(*head);
		*head = free_node;
	}
}
