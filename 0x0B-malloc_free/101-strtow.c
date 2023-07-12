#include "main.h"

/**
* strtow - splits a string into words array
* @str: tring to split
* Return: NULL
* else, words
*/

char **strtow(char *str)
{
char **words;
int i, j, wc, start, len, index = 0;
if (str == NULL || str[0] == '\0')
return (NULL);
wc = count_words(str);
if (wc == 0)
return (NULL);
words = malloc(sizeof(char *) * (wc + 1));
if (words == NULL)
return (NULL);
words[wc] = NULL;

for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
{
start = i;
len = 0;
while (str[i] != ' ' && str[i])
{
len++;
i++;
}
words[index] = malloc(sizeof(char) * (len + 1));
if (words[index] == NULL)
{
free_arr(words, index);
return (NULL);
}
for (j = 0; j < len; j++)
words[index][j] = str[start + j];
words[index][j] = '\0';
index++;
}
}
return (words);
}

/**
* count_words - Counts words
* @str: string
* Return: number of words
*/

int count_words(char *str)
{
int i, res = 0;

for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
res++;
}
return (res);
}

/**
* free_arr -  frees 2D array
* @arr: array to free
* @len: length of the array
*/

void free_arr(char **arr, int len)
{
int i;

for (i = 0; i < len; i++)
free(arr[i]);
free(arr);
}
