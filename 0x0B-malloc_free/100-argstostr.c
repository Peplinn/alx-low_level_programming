#include "main.h"

/**
* argstostr - Concatenates program args
* @ac: Argument count
* @av: Argument vector
* Return: NULL
* else, args
*/
char *argstostr(int ac, char **av)
{
int i, j, size = ac, index = 0;
char *args;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
size += _strlen(av[i]);

args = malloc(sizeof(char) * size + 1);
if (args == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
args[index++] = av[i][j];
}
args[index++] = '\n';
}
args[index] = '\0';

return (args);
}

/**
* _strlen - Returns the length of a string
* @s: Pointer to the string
*
* Return: The length of the string
*/

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
