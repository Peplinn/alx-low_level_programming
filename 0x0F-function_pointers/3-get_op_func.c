#include "3-calc.h"

/**
* get_op_func - Select correct function to perform operation
*               asked by the user.
*
* @s: The operator passed as argument to the program.
* Return: NULL if s doesnt match any operator
* out of 5
*/

int (*get_op_func(char *s))(int, int)
{
op_t op_list[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 5)
{
if (strcmp(s, op_list[i].op) == 0)
return (op_list[i].f);
i++;
}
return (0);
}

