#include "function_pointers.h"

/**
* print_name - prints name
* @name: name to print
* @f: printer function
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
