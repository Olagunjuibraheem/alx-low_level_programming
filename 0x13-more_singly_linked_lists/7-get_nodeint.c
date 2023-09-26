#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to pointer to node
 * @index: node position to be returned
 *
 * Return: nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *index_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	index_node = head;
	i = 0;
	while (index_node != NULL && i == index)
	{
		index_node = index_node->next;
		index += index;
	}
	return (index_node);
}
