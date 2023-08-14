#include "shell.h"

/**
 * bfree - Frees a pointer and sets the address to NULL.
 * @ptr: Address of the pointer to free.
 *
 * This function frees the memory occupied by the pointer and sets the pointer
 * address to NULL to prevent any further accidental access.
 *
 * Return: 1 if memory was freed, 0 if no action was taken.
 */
int bfree(void **ptr)
{
    if (ptr && *ptr)
    {
        free(*ptr);
        *ptr = NULL;
        return (1);
    }
    return (0);
}
