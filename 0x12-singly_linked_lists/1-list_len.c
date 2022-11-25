#include "lists.h"
/**
 * list_len - Entry point.
 * @h: list head
 * Return:0 if successfull
 */
size_t list_len(const list_t *h)
{
	size_t a;
	list_t *list;

	list = (list_t *)h;

	for (a = 0; list != NULL; a++)
	{
		list = list->next;
	}
	return (a);
}
