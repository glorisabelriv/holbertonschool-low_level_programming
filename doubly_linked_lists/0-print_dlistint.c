#include "lists.h"
/**
 *print_dlistint - all elements prints
 *@h: pointer const
 *Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
