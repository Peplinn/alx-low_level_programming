#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void free(void *ptr);
int _strlen(char *s);
int count_words(char *str);
void free_arr(char **arr, int len);

#endif /* MAIN_H */
