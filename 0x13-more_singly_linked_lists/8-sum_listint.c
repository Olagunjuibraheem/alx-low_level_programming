#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list.
 * @h: pointer to starting node
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *index_node;
	int i, data_sum;

	index_node = head;
	i = data_sum =0;
	while (index_node->next != NULL)
	{
		if (head == NULL)
			return (0);

		data_sum += index_node->n;
		index_node = index_node->next;
		i++;
	}
	data_sum += index_node->n;
	return (data_sum);
}
