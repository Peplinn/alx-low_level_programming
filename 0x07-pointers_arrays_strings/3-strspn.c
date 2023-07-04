#include "main.h"

/**
* _strspn - gets the length of prefix substring
*
* @s: string to search
* @accept: accepted characters
* Return: number of bytes in s
* with only bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
int j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
count++;
break;
}
j++;
}
if (accept[j] == '\0')
{
break;
}
}
return (count);
}
