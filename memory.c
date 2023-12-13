#include "shell.h"

/**
 * bfree - Function that frees a pointer.
 * @ptr: Address of the pointer to free.
 *
 * Return: 1 on success.
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
