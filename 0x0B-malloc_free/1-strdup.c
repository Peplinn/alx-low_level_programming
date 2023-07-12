#include "main.h"

/**
* _strdup - duplicates given string, mallocs(str)
* @str: pointer to string
* Return: NULL if NULL
* else, pointer to new memory address (str2)
*/

char *_strdup(char *str)
{
char *copy;
int i, size = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
size++;

copy = malloc(sizeof(char) * size + 1);
if (copy == NULL)
return (NULL);

for (i = 0; i < size; i++)
copy[i] = str[i];
copy[i] = '\0';

return (copy);
}
