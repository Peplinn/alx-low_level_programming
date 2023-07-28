#include "lists.h"

/**
* add_node_end - Adds node at the end of linked list
* @head: Pointer to pointer to the head
* @str: String to add to node
* Return: The address of the new element, else, NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *pos;
char *string;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

string = strdup(str);

if (string == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = string;
new_node->len = _strlen(string);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

pos = *head;
while (pos->next != NULL)
pos = pos->next;

pos->next = new_node;

return (new_node);
}
