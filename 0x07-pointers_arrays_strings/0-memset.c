#include "main.h"

/**
* _memset - replaces char at s with b, n times
* @s: pointer to address
* @b: replacement char
* @n: times to replace
*/

char *_memset(char *s, char b, unsigned int n)
{
char *t = s;
while (n > 0)
{
*t = b;
t++;
n--;
}
return *t;
}
