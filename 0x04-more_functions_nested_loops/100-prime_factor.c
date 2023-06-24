#include <stdio.h>

long long largest_prime_factor(long long number)
{
long long divisor = 2;

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

return divisor;
}

int main()
{
long long number = 612852475143;
long long largest_factor = largest_prime_factor(number);

printf("Largest prime factor of %lld is %lld\n", number, largest_factor);

return 0;
}
