/**
  * add_nodeint-adds a new node at the beginning of a linked list
  * @head:pointer to head of list
  * @n:number to be added
  *
  * Return:address of the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head != NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		node->next = *head;
		*head = node;

		return (node);
	}

	return (NULL);
}
