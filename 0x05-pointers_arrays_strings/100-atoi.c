#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: Pointer to the string
*
* Return: The converted integer
*/

int _atoi(char *str) {
    int sign = 1;
    int result = 0;
    int i = 0;

    // Define isspace function
    int isspace(char c) {
        return c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r';
    }

    // Define isdigit function
    int isdigit(char c) {
        return c >= '0' && c <= '9';
    }

    // Skip leading whitespace
    while (isspace(str[i])) {
        i++;
    }

    // Handle sign
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // Convert digits to integer
    while (isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}
