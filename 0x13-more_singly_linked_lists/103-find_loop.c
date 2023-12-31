#include "lists.h"

/**
* find_listint_loop - Finds loop in a listint_t list.
* @head: List head
* Return: Address of the node where the loop starts,
* ELSE, NULL if no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			break;
		}
	}
	if (!slow || !fast || !fast->next)
		return (NULL);
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast);
}
