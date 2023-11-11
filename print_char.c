#include "main.h"
#include <unistd.h>

/**
 * printchar - print char
 * @c: pointer to char
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

int printchar(const void *c)
{
	return (write(1, c, 1));
}
