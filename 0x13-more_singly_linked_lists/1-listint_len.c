#include "lists.h"

/**
  * listint_len-counts the elements in a list
  * @h:head of the list
  *
  * Return:number of elements in a list
  */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			node++;
		}
	}

	return (node);
}
