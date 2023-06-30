#include "main.h"

/**
* _strncpy - Copies str at src to dest
* @dest: Pointer to destination string
* @src: Pointer to source string
* @n: Number of chars to be copied
* Return: originalDest
*/

char *_strncpy(char *dest, char *src, int n)
{
char *originalDest = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
src++;
dest++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (originalDest);
}
