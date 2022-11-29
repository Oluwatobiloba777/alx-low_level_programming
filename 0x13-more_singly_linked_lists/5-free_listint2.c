#include "lists.h"

/**
  * free_listint2-frees a list
  * @head:pointer to head of a list
  *
  * Return:Void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
