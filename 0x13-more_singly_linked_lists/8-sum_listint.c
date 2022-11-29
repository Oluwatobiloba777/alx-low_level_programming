#include "lists.h"

/**
  * sum_listint -returns the sum of numbers in a list
  * @head:head of the list
  *
  * Return:sum of numbers
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
