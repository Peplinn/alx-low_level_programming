#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 13

int main(void)
{
char password[PASSWORD_LENGTH + 1];
int i, rand_num;

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
rand_num = rand() % (126 - 33 + 1) + 33;

password[i] = (char)rand_num;
}

password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);

return 0;
}