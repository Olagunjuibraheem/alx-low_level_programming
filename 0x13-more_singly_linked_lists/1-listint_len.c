#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: pointer to node
 *
 * Return: number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt_elen;

	cnt_elen = 0;
	while (h != NULL)
	{
		h = h->next;
		cnt_elen++;
	}
	return (cnt_elen);
}
