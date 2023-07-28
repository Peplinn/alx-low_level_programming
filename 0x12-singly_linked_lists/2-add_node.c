#include "lists.h"

/**
* add_node - Adds a node to the linked list
* @head: Pointer to pointer to head
* @str: Strinng to add to node
* Return: Address of new node, else, NULL
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
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
new_node->next = *head;
*head = new_node;

return (new_node);
}

/**
* _strlen - Calculate the lenght of a string.
* @str: String passed to the function.
* Return: The lenght of a string.
*/

int _strlen(char *str)
{
int len;

for (len = 0; str[len]; len++)
;

return (len);
}

