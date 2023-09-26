#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a linked list
 * @head: pointer to pointer to be deleted
 *
 * Return: (0), if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *del_node;
	int node_num;

	if (*head == NULL)
		return (0);

	node_num = (*head)->n;
	del_node = (*head)->next;

	free(*head);
	*head = del_node;

	return (node_num);
}
