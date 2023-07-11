#include "main.h"

/**
* create_array - creates fixed size memory
* @size: size of memory
* @c: content of array
* Return: NULL if NULL
* else, ch
*/

char *create_array(unsigned int size, char c)
{
char *ch = malloc(sizeof(char) * size + 1);
unsigned int i;

if (ch == NULL)
return (NULL);
while (i < size)
{
ch[i] = c;
i++;
}
ch[i] = '\0';
free(ch);
return (ch);
}
