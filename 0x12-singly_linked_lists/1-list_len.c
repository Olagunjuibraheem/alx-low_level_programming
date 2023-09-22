#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: pointer to next node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t cnt_el;

	cnt_el = 0;
	while (h != NULL)
	{
		h = h->next;
		cnt_el++;
	}
	return (cnt_el);
}
