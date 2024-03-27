#include "lists.h"
/**
 *dlistint_len - elements in a linked
 *@h: pointer cont
 *Return: the number of elements len
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
