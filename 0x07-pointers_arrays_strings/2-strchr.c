#include "main.h"

/**
* _strchr - displays occurence of c
* @s: pointer to string
* @c: sought character
* Return: pointer to occurence
* else, NULL
*/

char *_strchr(char *s, char c)
{
char **l = &s;
while (**l != '\0')
{
if (**l == c)
return (*l);
else
(*l)++;
}
return (NULL);
}
