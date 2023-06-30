#include "main.h"

/**
* _strcat - Appends string at src to that at dest
* @dest: Pointer to destination string
* @src: Pointer to source string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
dest++;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

dest = '\0';
return (dest);
}
