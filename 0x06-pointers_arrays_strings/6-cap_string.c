#include "main.h"

/**
* cap_string - Function that capitalizes strings
*
* @s: String to be capitalized
* Return: s
*/

char *cap_string(char *s)
{
char *c = s;
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] == ',' || c[i] == ';' ||
c[i] == '.' || c[i] == '!' ||
c[i] == '?' || c[i] == '"' ||
c[i] == '(' || c[i] == ')' ||
c[i] == '{' || c[i] == '}' ||
c[i] == ' ' || c[i] == '\n' ||
c[i] == '\t')
{
if (c[i + 1] <= 122 && c[i + 1] >= 97)
{
c[i + 1] -= 32;
}
} else if (i == 0)
c[i] -= 32;
}

return (s);
}
