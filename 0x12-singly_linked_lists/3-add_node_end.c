#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list.
 * @head: double pointer
 * @str: character string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len_str;
	list_t *new_node, *link_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	len_str = 0;
	while (str[len_str] != '\0')
		len_str++;

	new_node->str = malloc(sizeof(char) * (len_str + 1));
	if ((*new_node).str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len_str = 0;
	while (str[len_str] != '\0')
	{
		(*new_node).str[len_str] = str[len_str];
		len_str++;
	}
	(*new_node).len = len_str;

	if (*head == NULL)
		*head = new_node;
	else
	{
		link_node = *head;
		while ((*link_node).next != NULL)
			link_node = (*link_node).next;
		(*link_node).next = new_node;
	}
	return (new_node);

}
