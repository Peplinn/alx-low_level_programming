#include "main.h"

/**
 * _strpbrk - search a string for bytes
 * @s: string to search
 * @accept: bytes to search for
 * Return: pointer to byte in s that matches byte in accept
 * else, NULL
 */

char *_strpbrk(char *s, char *accept)
{
char *s_ptr = s;
char *accept_ptr;

while (*s_ptr != '\0')
{
accept_ptr = accept;
while (*accept_ptr != '\0')
{
if (*s_ptr == *accept_ptr)
return (s_ptr);
accept_ptr++;
}
s_ptr++;
}
return (NULL);
}
