#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *link_node, *temp;

	link_node = head;

	while (link_node != NULL)
	{
		temp = link_node;
		link_node = link_node->next;
		free(temp->str);
		free(temp);
	}
}
