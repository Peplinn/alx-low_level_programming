#include "main.h"

/**
* _puts_recursion - puts recursively
* @s: pointer to string
*/

void _puts_recursion(char *s)
{
if(*s != '\0')
{
_putchar(*s);
_puts_recursion(s+1);
}
}
