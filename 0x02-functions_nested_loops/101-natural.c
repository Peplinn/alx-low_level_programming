#include <stdio.h>

/**
* main - Entry point of the program
* Computes, prints sum of all multiples of 3, 5 below 1024 (excl.).
* Return: Always 0 (Success)
*/

int main(void)
{
int limit = 1024;
int sum = 0;

for (int i = 1; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}

printf("%d\n", sum);

return (0);
}
