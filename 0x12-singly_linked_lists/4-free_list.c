#include "lists.h"

/**
 * free_list - frees a list
 * @head - a pointer to the list head
 *
 * Return: 0
 */

void free_list(list_t *head);
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
