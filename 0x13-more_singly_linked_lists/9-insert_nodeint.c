#include "lists.h"

/**
 * insert_nodeint_at_index -inserts a new node at index
 * @head:pointer to head
 * @idx: unsigned int
 * @n: int
 * Return:0 if successful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp = *head;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = tmp;
		*head = node;
		return (node);
	}
	while (count < (idx - 1))
	{
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
		count++;
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
