#include <stdio.h>

/**
* main - Entry point of the program
* Prints first even under 4mil Fibonacci numbers separated by comma & space.
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
fib = fib1 + fib2;
if (fib % 2 == 0)
printf(", %lu", fib);
fib1 = fib2;
fib2 = fib;
}

printf("\n");

return (0);
}
