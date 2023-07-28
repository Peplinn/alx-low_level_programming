#include "lists.h"

/**
* print_list - Prints linked list
* @h: Node in list_t
* Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
size_t node_count = 0;
const list_t *pos;

pos = h;

while (pos)
{
if (pos->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", pos->len, pos->str);
node_count++;
pos = pos->next;
}

return (node_count);
}
