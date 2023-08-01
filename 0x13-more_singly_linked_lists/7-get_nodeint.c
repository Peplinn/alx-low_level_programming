#include "lists.h"

/**
* get_nodeint_at_index - Gets the nth node of a linked list.
* @head: Pointer to pointer to head.
* @index: Index of the node to get.
* Return: The nth node of a listint_t linked list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int value = 0;
	listint_t *position;

	position = head;
	while (position != NULL && i < index)
	{
		position = position->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (position);
}
