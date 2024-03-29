#include "lists.h"

/**
 * free_list - a function that frees a list.
 * @head: a pointer to list
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
