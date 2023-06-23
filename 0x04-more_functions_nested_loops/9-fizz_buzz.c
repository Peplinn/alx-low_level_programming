#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function is the entry point of the program.
* It prints numbers from 1 to 100, replacing multiples of 3 with "Fizz",
* multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz".
* The numbers or words are separated by a space and followed by a new line.
*
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("Buzz")
else if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}

printf("\n");

return (0);
}
