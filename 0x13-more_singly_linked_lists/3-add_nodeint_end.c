#include "lists.h"

/**
  * add_nodeint_end-adds a new node to the end of a linked list
  * @head:pointer to the head of list
  * @n:value
  *
  * Return:address of the node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	if (head)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		node->next = NULL;

		if (*head == NULL)
		{
			*head = node;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = node;
			return (temp);
		}
	}

	return (NULL);
}
