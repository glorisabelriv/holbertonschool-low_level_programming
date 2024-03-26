#include "lists.h"
/**
 * add_node_end - adds node st the end
 * @head: double pointer
 * @str: string
 * Return: addres new elemet or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tem, *second;

	tem = malloc(sizeof(list_t));

	if (tem == NULL)
	{
		return (NULL);
	}

	tem->str = strdup(str);
	tem->len = strlen(str);
	tem->next = NULL;

	if (*head == NULL)
	{
		*head = tem;
		return (tem);
	}
	second = *head;
	while (second->next != NULL)
	{
		second = second->next;
	}

	second->next = tem;
	return (tem);
}
