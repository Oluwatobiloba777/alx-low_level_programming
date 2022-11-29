#include "lists.h"

/**
  * pop_listint -removes the head of the list
  * @head:pointer to the head of the list
  *
  * Return:0 if successful
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
