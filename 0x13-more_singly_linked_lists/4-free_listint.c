#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to be freed
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}