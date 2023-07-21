#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* Libraries */
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/* Main Functions */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /* VARIADIC_FUNCTIONS_H */
