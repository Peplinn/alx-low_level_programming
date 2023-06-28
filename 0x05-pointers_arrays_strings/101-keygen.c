#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>

/**
* main - Generate a random pword for the 101-crackme
*
* Return: 0 (Success)
*/

int main(void)
{
int pword[64], i, sum = 0, n;

srand(time(NULL));
for (i = 0; i < 64; i++)
{
pword[i] = rand() % 78;
sum+= pword[i] + '0';
putchar(pword[i] + '0');

if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
