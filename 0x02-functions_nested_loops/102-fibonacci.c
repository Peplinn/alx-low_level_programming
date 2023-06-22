#include <stdio.h>

/**
* main - Entry point of the program
* Prints first sum even under 4mil Fib numbers sep by comma & space.
* Return: Always 0 (Success)
*/
int main(void)
{
int limit = 4000000;
int i;
unsigned long int fib1 = 1, fib2 = 2, fib;

printf("%lu, %lu", fib1, fib2);

for (i = 3; i <= limit; i++)
{
if (fib1 + fib2 <= 4000000)
{
fib = fib1 + fib2;
if (fib % 2 == 0)
{
fib1 = fib2;
fib2 = fib;
}
}
else if (fib > 4000000)
break
}

printf("%lu", fib);

return (0);
}
