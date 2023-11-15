#include "main.h"

/**
 * printchar - print char
 * @c: pointer to char
 * Return: number of element printed
 */

int printchar(char c)
{
	int c_ret = 0;

	c_ret = write(1, &c, 1);
	return (c_ret);
}
