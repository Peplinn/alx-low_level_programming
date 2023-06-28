#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main() {

srand(time(NULL));

char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

char password[PASSWORD_LENGTH + 1];
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int random_index = rand() % (sizeof(valid_chars) - 1);
password[i] = valid_chars[random_index];
}
password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);

return (0);
}
