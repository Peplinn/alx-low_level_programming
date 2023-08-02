#include "lists.h"

/**
* sum_listint - Find sum of node values
* @head: Pointer to pointer to head
* Return: The sum of the values,
* ELSE, 0
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *position;

if (head == NULL)
return (0);

position = head;

while (position != NULL)
{
sum += position->n;
position = position->next;
}

return (sum);
}
