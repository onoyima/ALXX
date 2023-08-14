#include "shell.h"

/**
 * is_interactive - Returns true if the shell is in interactive mode,
 *                  otherwise returns false.
 * @info: Pointer to the info_t struct.
 * Return: 1 if in interactive mode, 0 otherwise.
 */
int is_interactive(info_t *info) {
    return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delimiter - Checks if a character is a delimiter.
 * @c: The character to check.
 * @delim: The delimiter string.
 * Return: 1 if the character is a delimiter, 0 otherwise.
 */
int is_delimiter(char c, char *delim) {
    while (*delim) {
        if (*delim == c) {
            return 1;
        }
        delim++;
    }
    return 0;
}

/**
 * is_alpha - Checks if a character is alphabetic.
 * @c: The character to check.
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int is_alpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * string_to_int - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The converted integer if successful, 0 if no numbers in the string.
 */
int string_to_int(char *s) {
    int sign = 1, output = 0;
    unsigned int result = 0;
    int i = 0;
/* Handle negative sign*/
    if (s[0] == '-') {
        sign = -1;
        i++;
    }

/* Convert digits to integer*/
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    output = (int)result * sign;
    return output;
}
