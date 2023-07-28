#include "lists.h"

/**
* list_len - Finds the length of a linked list
* @h: Node in linked list
* Return: List length
*/

size_t list_len(const list_t *h)
{
size_t node_count = 0;

const list_t *pos;

pos = h;
while (pos)
{
node_count++;
pos = pos->next;
}

return (node_count);
}
