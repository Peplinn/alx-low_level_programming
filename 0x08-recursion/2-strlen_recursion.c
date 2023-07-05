#include "main.h"

/**
* _strlen_recursion - prints string length
* @s: pointer to string
*/

int c = 0;
void _strlen_recursion(char *s)
{
if(*s == '\0')
{
putchar('0' + c);
}else
{
c++;
_strlen_recursion(s+1);
}
}
