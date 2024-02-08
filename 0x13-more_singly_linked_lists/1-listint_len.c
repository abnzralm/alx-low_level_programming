#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *t;
	unsigned int c = 0;

	t = h;
	while (t)
	{
		c++;
		t = t->next;
	}
	return (c);
}
