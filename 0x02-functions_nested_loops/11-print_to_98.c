#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/

void print_to_98(int n)
{
int i = n;
if (i <= 98) {
while (i < 98) {
printf("%d, ", i);
i++;
}
}
else if (i >= 98) {
while (i > 98) {
printf("%d, ", i);
i--;
}
}
printf("98\n");
}
