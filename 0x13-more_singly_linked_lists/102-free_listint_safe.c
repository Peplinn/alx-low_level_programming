#include "lists.h"

/**
* free_listint_safe - frees linked list
* @h: pointer to pointer to the head
* Return: number of freed nodes
*/

size_t free_listint_safe(listint_t **h)
{
size_t num = 0, i, j;
listint_t *seen[1024];
listint_t *position = *h;

while (position != NULL && num < 1024)
{

for (i = 0; i < num; i++)
{
if (position == seen[i])
{
for (j = i; j < num; j++)
seen[j]->next = NULL;

*h = NULL;
return (num);
}
}

seen[num++] = position;
position = position->next;
free(seen[num - 1]);
}

*h = NULL;

return (num);
}
