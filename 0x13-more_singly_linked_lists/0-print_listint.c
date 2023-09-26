#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list.
 * @h: pointer to node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt_elen;

	cnt_elen = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt_elen++;
		h = h->next;
	}
	return (cnt_elen);
}
