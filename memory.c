#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address boniface
 * @ptr: address of the pointer to frees
 *
 * Return: 1 if freed, otherwise 0.s
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
