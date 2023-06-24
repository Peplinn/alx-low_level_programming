#include <stdio.h>

/**
* largest_prime_factor - Finds the largest prime factor of a number
* @number: The number to find the largest prime factor for
*
* Return: The largest prime factor of the number
*/

unsigned long largest_prime_factor(unsigned long number)
{
unsigned long divisor = 2;

while (number > 1)
{
if (number % divisor == 0)
{
number /= divisor;
}
else
{
divisor++;
}
}

return (divisor);
}

/**
* main - Entry point of the program
*
* Return: Always 0 (indicating successful execution)
*/

int main(void)
{
unsigned long number = 612852475143;
unsigned long largest_factor = largest_prime_factor(number);

printf("%lu\n", largest_factor);

return (0);
}
