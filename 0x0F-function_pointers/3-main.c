#include "3-calc.h"

/**
* main - perform simple operation between two numbers
* @ac: argument count
* @av: argument vector
*
* Return: 0 Success
*/

int main(int ac, char **av)
{
int (*operation)(int, int);
if (ac != 4)
{
printf("Error\n");
exit(98);
}

operation = get_op_func(av[2]);
if (operation == 0)
{
printf("Error\n");
exit(99);
}

printf("%d\n", operation(atoi(av[1]), atoi(av[3])));

return (0);
}
