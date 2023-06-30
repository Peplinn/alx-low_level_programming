#include "main.h"

/**
* string_toupper - Converts string to uppercase
* @str: String to be converted
* Return: s
*/

char *string_toupper(char *s)
{
char *c = s;

while (*c)
{
if (*c >= 'a' && *c <= 'z')
{
*c -= 32;
}
c++;
}
return (s);
}
